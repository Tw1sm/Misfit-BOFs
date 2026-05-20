

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for drsr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "ms-drsr_x86.h"

#define TYPE_FORMAT_STRING_SIZE   9021                              
#define PROC_FORMAT_STRING_SIZE   2047                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _drsr_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } drsr_MIDL_TYPE_FORMAT_STRING;

typedef struct _drsr_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } drsr_MIDL_PROC_FORMAT_STRING;

typedef struct _drsr_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } drsr_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


static const drsr_MIDL_TYPE_FORMAT_STRING drsr__MIDL_TypeFormatString;
static const drsr_MIDL_PROC_FORMAT_STRING drsr__MIDL_ProcFormatString;
static const drsr_MIDL_EXPR_FORMAT_STRING drsr__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: drsuapi, ver. 4.0,
   GUID={0xe3514235,0x4b06,0x11d1,{0xab,0x04,0x00,0xc0,0x4f,0xc2,0xdc,0xd2}} */



static const RPC_CLIENT_INTERFACE drsuapi___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xe3514235,0x4b06,0x11d1,{0xab,0x04,0x00,0xc0,0x4f,0xc2,0xdc,0xd2}},{4,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE drsuapi_v4_0_c_ifspec = (RPC_IF_HANDLE)& drsuapi___RpcClientInterface;

static const MIDL_STUB_DESC drsuapi_StubDesc;

static RPC_BINDING_HANDLE drsuapi__MIDL_AutoBindHandle;


ULONG IDL_DRSBind( 
    /* [in] */ handle_t rpc_handle,
    /* [unique][in] */ UUID *puuidClientDsa,
    /* [unique][in] */ DRS_EXTENSIONS *pextClient,
    /* [out] */ DRS_EXTENSIONS **ppextServer,
    /* [ref][out] */ DRS_HANDLE *phDrs)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&rpc_handle);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSUnbind( 
    /* [ref][out][in] */ DRS_HANDLE *phDrs)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[58],
                  ( unsigned char * )&phDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaSync( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPSYNC *pmsgSync)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[100],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetNCChanges( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_GETCHGREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_GETCHGREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[154],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSUpdateRefs( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_UPDREFS *pmsgUpdRefs)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[220],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaAdd( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPADD *pmsgAdd)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[274],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaDel( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPDEL *pmsgDel)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[328],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaModify( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPMOD *pmsgMod)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[382],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSVerifyNames( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_VERIFYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_VERIFYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[436],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetMemberships( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REVMEMB_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_REVMEMB_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[502],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSInterDomainMove( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_MOVEREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_MOVEREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[568],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetNT4ChangeLog( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_NT4_CHGLOG_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_NT4_CHGLOG_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[634],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSCrackNames( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_CRACKREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_CRACKREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[700],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSWriteSPN( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_SPNREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_SPNREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[766],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSRemoveDsServer( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_RMSVRREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_RMSVRREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[832],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSRemoveDsDomain( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_RMDMNREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_RMDMNREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[898],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSDomainControllerInfo( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_DCINFOREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_DCINFOREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[964],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSAddEntry( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_ADDENTRYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_ADDENTRYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1030],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSExecuteKCC( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_KCC_EXECUTE *pmsgIn)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1096],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetReplInfo( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_GETREPLINFO_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_GETREPLINFO_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1150],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSAddSidHistory( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_ADDSIDREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_ADDSIDREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1216],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetMemberships2( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_GETMEMBERSHIPS2_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_GETMEMBERSHIPS2_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1282],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaVerifyObjects( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPVERIFYOBJ *pmsgVerify)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1348],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetObjectExistence( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_EXISTREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_EXISTREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1402],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSQuerySitesByCost( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_QUERYSITESREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_QUERYSITESREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1468],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSInitDemotion( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_INIT_DEMOTIONREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_INIT_DEMOTIONREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1534],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaDemotion( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPLICA_DEMOTIONREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_REPLICA_DEMOTIONREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1600],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSFinishDemotion( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_FINISH_DEMOTIONREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_FINISH_DEMOTIONREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1666],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSAddCloneDC( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_ADDCLONEDCREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_ADDCLONEDCREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1732],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSWriteNgcKey( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_WRITENGCKEYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_WRITENGCKEYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1798],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReadNgcKey( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_READNGCKEYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_READNGCKEYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&drsuapi_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1864],
                  ( unsigned char * )&hDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


/* Standard interface: dsaop, ver. 1.0,
   GUID={0x7c44d7d4,0x31d5,0x424c,{0xbd,0x5e,0x2b,0x3e,0x1f,0x32,0x3d,0x22}} */



static const RPC_CLIENT_INTERFACE dsaop___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x7c44d7d4,0x31d5,0x424c,{0xbd,0x5e,0x2b,0x3e,0x1f,0x32,0x3d,0x22}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE dsaop_v1_0_c_ifspec = (RPC_IF_HANDLE)& dsaop___RpcClientInterface;

static const MIDL_STUB_DESC dsaop_StubDesc;

static RPC_BINDING_HANDLE dsaop__MIDL_AutoBindHandle;


ULONG IDL_DSAPrepareScript( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DSA_MSG_PREPARE_SCRIPT_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DSA_MSG_PREPARE_SCRIPT_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&dsaop_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1930],
                  ( unsigned char * )&hRpc);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DSAExecuteScript( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DSA_MSG_EXECUTE_SCRIPT_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DSA_MSG_EXECUTE_SCRIPT_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&dsaop_StubDesc,
                  (PFORMAT_STRING) &drsr__MIDL_ProcFormatString.Format[1988],
                  ( unsigned char * )&hRpc);
    return ( ULONG  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const drsr_MIDL_PROC_FORMAT_STRING drsr__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure IDL_DRSBind */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x44 ),	/* 68 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 20 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puuidClientDsa */

/* 28 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pextClient */

/* 34 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ppextServer */

/* 40 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter phDrs */

/* 46 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Return value */

/* 52 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 54 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSUnbind */

/* 58 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x1 ),	/* 1 */
/* 66 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 68 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 70 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 72 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0x38 ),	/* 56 */
/* 76 */	NdrFcShort( 0x40 ),	/* 64 */
/* 78 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 80 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phDrs */

/* 88 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 90 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 92 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaSync */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 112 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x2c ),	/* 44 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 122 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 130 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgSync */

/* 142 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 146 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetNCChanges */

/* 154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x3 ),	/* 3 */
/* 162 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 164 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 168 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0x2c ),	/* 44 */
/* 172 */	NdrFcShort( 0x24 ),	/* 36 */
/* 174 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 176 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 178 */	NdrFcShort( 0x1 ),	/* 1 */
/* 180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 184 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 186 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 188 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 196 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 200 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter pdwOutVersion */

/* 202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 208 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 212 */	NdrFcShort( 0x3a6 ),	/* Type Offset=934 */

	/* Return value */

/* 214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 216 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSUpdateRefs */

/* 220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x4 ),	/* 4 */
/* 228 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 230 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 232 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 234 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0x2c ),	/* 44 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 242 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 250 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 252 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 254 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgUpdRefs */

/* 262 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 266 */	NdrFcShort( 0x6c6 ),	/* Type Offset=1734 */

	/* Return value */

/* 268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaAdd */

/* 274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x5 ),	/* 5 */
/* 282 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 284 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 286 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 288 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 290 */	NdrFcShort( 0x2c ),	/* 44 */
/* 292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 296 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 304 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 306 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 308 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgAdd */

/* 316 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 320 */	NdrFcShort( 0x746 ),	/* Type Offset=1862 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaDel */

/* 328 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x6 ),	/* 6 */
/* 336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 338 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 340 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 342 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 344 */	NdrFcShort( 0x2c ),	/* 44 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 350 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 358 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 362 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgDel */

/* 370 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 374 */	NdrFcShort( 0x82c ),	/* Type Offset=2092 */

	/* Return value */

/* 376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaModify */

/* 382 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x7 ),	/* 7 */
/* 390 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 392 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 394 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 396 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 398 */	NdrFcShort( 0x2c ),	/* 44 */
/* 400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 404 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 412 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 416 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgMod */

/* 424 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 428 */	NdrFcShort( 0x870 ),	/* Type Offset=2160 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSVerifyNames */

/* 436 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 446 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 448 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 450 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 452 */	NdrFcShort( 0x2c ),	/* 44 */
/* 454 */	NdrFcShort( 0x24 ),	/* 36 */
/* 456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 458 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 466 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 470 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 478 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 482 */	NdrFcShort( 0x8be ),	/* Type Offset=2238 */

	/* Parameter pdwOutVersion */

/* 484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 490 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 494 */	NdrFcShort( 0x966 ),	/* Type Offset=2406 */

	/* Return value */

/* 496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 498 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetMemberships */

/* 502 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x9 ),	/* 9 */
/* 510 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 512 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 516 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0x2c ),	/* 44 */
/* 520 */	NdrFcShort( 0x24 ),	/* 36 */
/* 522 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 524 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 532 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 534 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 536 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 544 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 548 */	NdrFcShort( 0xa58 ),	/* Type Offset=2648 */

	/* Parameter pdwOutVersion */

/* 550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 556 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 560 */	NdrFcShort( 0xaca ),	/* Type Offset=2762 */

	/* Return value */

/* 562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 564 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSInterDomainMove */

/* 568 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0xa ),	/* 10 */
/* 576 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 578 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 580 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 582 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0x2c ),	/* 44 */
/* 586 */	NdrFcShort( 0x24 ),	/* 36 */
/* 588 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 590 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 598 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 600 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 602 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 610 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 614 */	NdrFcShort( 0xb84 ),	/* Type Offset=2948 */

	/* Parameter pdwOutVersion */

/* 616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 622 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 626 */	NdrFcShort( 0xc9e ),	/* Type Offset=3230 */

	/* Return value */

/* 628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 630 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetNT4ChangeLog */

/* 634 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0xb ),	/* 11 */
/* 642 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 644 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 646 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 648 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 650 */	NdrFcShort( 0x2c ),	/* 44 */
/* 652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 654 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 656 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 664 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 666 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 668 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 676 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 680 */	NdrFcShort( 0xd36 ),	/* Type Offset=3382 */

	/* Parameter pdwOutVersion */

/* 682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 688 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 692 */	NdrFcShort( 0xd86 ),	/* Type Offset=3462 */

	/* Return value */

/* 694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 696 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSCrackNames */

/* 700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0xc ),	/* 12 */
/* 708 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 710 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 712 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 716 */	NdrFcShort( 0x2c ),	/* 44 */
/* 718 */	NdrFcShort( 0x24 ),	/* 36 */
/* 720 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 722 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 730 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 732 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 734 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 746 */	NdrFcShort( 0xe10 ),	/* Type Offset=3600 */

	/* Parameter pdwOutVersion */

/* 748 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 754 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 758 */	NdrFcShort( 0xe78 ),	/* Type Offset=3704 */

	/* Return value */

/* 760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 762 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSWriteSPN */

/* 766 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0xd ),	/* 13 */
/* 774 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 776 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 778 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 780 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 782 */	NdrFcShort( 0x2c ),	/* 44 */
/* 784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 786 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 788 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 792 */	NdrFcShort( 0x1 ),	/* 1 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 796 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 798 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 800 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 808 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 812 */	NdrFcShort( 0xf18 ),	/* Type Offset=3864 */

	/* Parameter pdwOutVersion */

/* 814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 820 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 822 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 824 */	NdrFcShort( 0xf88 ),	/* Type Offset=3976 */

	/* Return value */

/* 826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 828 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSRemoveDsServer */

/* 832 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0xe ),	/* 14 */
/* 840 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 842 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 844 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 846 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 848 */	NdrFcShort( 0x2c ),	/* 44 */
/* 850 */	NdrFcShort( 0x24 ),	/* 36 */
/* 852 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 854 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 862 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 864 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 866 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 874 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 878 */	NdrFcShort( 0xfb2 ),	/* Type Offset=4018 */

	/* Parameter pdwOutVersion */

/* 880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 886 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 888 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 890 */	NdrFcShort( 0xff6 ),	/* Type Offset=4086 */

	/* Return value */

/* 892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 894 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSRemoveDsDomain */

/* 898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0xf ),	/* 15 */
/* 906 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 908 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 910 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 912 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0x2c ),	/* 44 */
/* 916 */	NdrFcShort( 0x24 ),	/* 36 */
/* 918 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 920 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 928 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 930 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 932 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 940 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 944 */	NdrFcShort( 0x101a ),	/* Type Offset=4122 */

	/* Parameter pdwOutVersion */

/* 946 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 952 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 956 */	NdrFcShort( 0x1052 ),	/* Type Offset=4178 */

	/* Return value */

/* 958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 960 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSDomainControllerInfo */

/* 964 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x10 ),	/* 16 */
/* 972 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 974 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 976 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 978 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 980 */	NdrFcShort( 0x2c ),	/* 44 */
/* 982 */	NdrFcShort( 0x24 ),	/* 36 */
/* 984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 986 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 994 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 996 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 998 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1006 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1010 */	NdrFcShort( 0x1076 ),	/* Type Offset=4214 */

	/* Parameter pdwOutVersion */

/* 1012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1018 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1022 */	NdrFcShort( 0x10ae ),	/* Type Offset=4270 */

	/* Return value */

/* 1024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1026 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSAddEntry */

/* 1030 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1038 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1040 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1042 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1044 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1048 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1050 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1052 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1060 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1062 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1064 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1068 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1072 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1074 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1076 */	NdrFcShort( 0x1392 ),	/* Type Offset=5010 */

	/* Parameter pdwOutVersion */

/* 1078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1080 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1084 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1086 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1088 */	NdrFcShort( 0x1470 ),	/* Type Offset=5232 */

	/* Return value */

/* 1090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1092 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSExecuteKCC */

/* 1096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1106 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1110 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1112 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1116 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1118 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1126 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1130 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1138 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1142 */	NdrFcShort( 0x16ac ),	/* Type Offset=5804 */

	/* Return value */

/* 1144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetReplInfo */

/* 1150 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1158 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1160 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1162 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1164 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1166 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1170 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1172 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1180 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1182 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1184 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1196 */	NdrFcShort( 0x16d8 ),	/* Type Offset=5848 */

	/* Parameter pdwOutVersion */

/* 1198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1204 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1208 */	NdrFcShort( 0x174a ),	/* Type Offset=5962 */

	/* Return value */

/* 1210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSAddSidHistory */

/* 1216 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1224 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1226 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1228 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1230 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1232 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1238 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1246 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1248 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1250 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1258 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1262 */	NdrFcShort( 0x1bfc ),	/* Type Offset=7164 */

	/* Parameter pdwOutVersion */

/* 1264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1270 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1274 */	NdrFcShort( 0x1cc6 ),	/* Type Offset=7366 */

	/* Return value */

/* 1276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1278 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetMemberships2 */

/* 1282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1290 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1292 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1296 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1298 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1302 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1304 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1312 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1316 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1324 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1328 */	NdrFcShort( 0x1cea ),	/* Type Offset=7402 */

	/* Parameter pdwOutVersion */

/* 1330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1336 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1340 */	NdrFcShort( 0x1d4c ),	/* Type Offset=7500 */

	/* Return value */

/* 1342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaVerifyObjects */

/* 1348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1358 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1364 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1370 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1378 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1380 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1382 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 1384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgVerify */

/* 1390 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1394 */	NdrFcShort( 0x1dc0 ),	/* Type Offset=7616 */

	/* Return value */

/* 1396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetObjectExistence */

/* 1402 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1410 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1412 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1416 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1418 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1422 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1424 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1432 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1434 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1436 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1448 */	NdrFcShort( 0x1dfc ),	/* Type Offset=7676 */

	/* Parameter pdwOutVersion */

/* 1450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1456 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1460 */	NdrFcShort( 0x1e4e ),	/* Type Offset=7758 */

	/* Return value */

/* 1462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSQuerySitesByCost */

/* 1468 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1476 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1478 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1480 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1482 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1484 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1488 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1490 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1498 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1500 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1502 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1514 */	NdrFcShort( 0x1ea2 ),	/* Type Offset=7842 */

	/* Parameter pdwOutVersion */

/* 1516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1522 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1526 */	NdrFcShort( 0x1f10 ),	/* Type Offset=7952 */

	/* Return value */

/* 1528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSInitDemotion */

/* 1534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1542 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1544 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1546 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1550 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1556 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1564 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1566 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1568 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1576 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1580 */	NdrFcShort( 0x1f64 ),	/* Type Offset=8036 */

	/* Parameter pdwOutVersion */

/* 1582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1588 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1592 */	NdrFcShort( 0x1f88 ),	/* Type Offset=8072 */

	/* Return value */

/* 1594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1596 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaDemotion */

/* 1600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1608 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1610 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1612 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1614 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1616 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1620 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1622 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1630 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1634 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1642 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1646 */	NdrFcShort( 0x1fac ),	/* Type Offset=8108 */

	/* Parameter pdwOutVersion */

/* 1648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1654 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1658 */	NdrFcShort( 0x1fe8 ),	/* Type Offset=8168 */

	/* Return value */

/* 1660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1662 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSFinishDemotion */

/* 1666 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1674 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1676 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1678 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1682 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1684 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1686 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1688 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1696 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1698 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1700 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1712 */	NdrFcShort( 0x200c ),	/* Type Offset=8204 */

	/* Parameter pdwOutVersion */

/* 1714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1720 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1722 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1724 */	NdrFcShort( 0x2048 ),	/* Type Offset=8264 */

	/* Return value */

/* 1726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1728 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSAddCloneDC */

/* 1732 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1740 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1742 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1744 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1746 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1748 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1754 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1762 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1764 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1766 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1774 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1778 */	NdrFcShort( 0x2074 ),	/* Type Offset=8308 */

	/* Parameter pdwOutVersion */

/* 1780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1786 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1790 */	NdrFcShort( 0x20b6 ),	/* Type Offset=8374 */

	/* Return value */

/* 1792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSWriteNgcKey */

/* 1798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1806 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1808 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1810 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1812 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1814 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1818 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1820 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1828 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1830 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1832 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1840 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1844 */	NdrFcShort( 0x211a ),	/* Type Offset=8474 */

	/* Parameter pdwOutVersion */

/* 1846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1852 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1856 */	NdrFcShort( 0x2174 ),	/* Type Offset=8564 */

	/* Return value */

/* 1858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReadNgcKey */

/* 1864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1872 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1874 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1876 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1878 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1880 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1882 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1886 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1894 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1896 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1898 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1906 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1910 */	NdrFcShort( 0x2198 ),	/* Type Offset=8600 */

	/* Parameter pdwOutVersion */

/* 1912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1918 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1922 */	NdrFcShort( 0x21bc ),	/* Type Offset=8636 */

	/* Return value */

/* 1924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1926 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DSAPrepareScript */

/* 1930 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1940 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1946 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1948 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1950 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwInVersion */

/* 1958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1964 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1968 */	NdrFcShort( 0x21f6 ),	/* Type Offset=8694 */

	/* Parameter pdwOutVersion */

/* 1970 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1976 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 1978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1980 */	NdrFcShort( 0x221a ),	/* Type Offset=8730 */

	/* Return value */

/* 1982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1984 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DSAExecuteScript */

/* 1988 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1996 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1998 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2006 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2008 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwInVersion */

/* 2016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 2022 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	NdrFcShort( 0x22b8 ),	/* Type Offset=8888 */

	/* Parameter pdwOutVersion */

/* 2028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 2034 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2038 */	NdrFcShort( 0x2308 ),	/* Type Offset=8968 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const drsr_MIDL_TYPE_FORMAT_STRING drsr__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x8 ),	/* Offset= 8 (12) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x12, 0x0,	/* FC_UP */
/* 26 */	NdrFcShort( 0x18 ),	/* Offset= 24 (50) */
/* 28 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 34 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 36 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 38 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 40 */	NdrFcLong( 0x1 ),	/* 1 */
/* 44 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 48 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 50 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (28) */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 60 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (24) */
/* 62 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 76 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 78 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 80 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 82 */	
			0x11, 0x0,	/* FC_RP */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 88 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 90 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 92 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 94 */	0x0 , 
			0x0,		/* 0 */
/* 96 */	NdrFcLong( 0x0 ),	/* 0 */
/* 100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	NdrFcShort( 0x30 ),	/* 48 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	NdrFcLong( 0x1 ),	/* 1 */
/* 114 */	NdrFcShort( 0x42 ),	/* Offset= 66 (180) */
/* 116 */	NdrFcLong( 0x2 ),	/* 2 */
/* 120 */	NdrFcShort( 0x80 ),	/* Offset= 128 (248) */
/* 122 */	NdrFcShort( 0xffff ),	/* Offset= -1 (121) */
/* 124 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x1c ),	/* 28 */
/* 128 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 130 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0x1c ),	/* 28 */
/* 134 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (124) */
/* 138 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 140 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 142 */	NdrFcShort( 0x2 ),	/* 2 */
/* 144 */	0x9,		/* Corr desc: FC_ULONG */
			0x57,		/* FC_ADD_1 */
/* 146 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 148 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 150 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcLong( 0xa00001 ),	/* 10485761 */
/* 160 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 162 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 164 */	NdrFcShort( 0x38 ),	/* 56 */
/* 166 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (140) */
/* 168 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 170 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (12) */
/* 174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (130) */
/* 178 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 180 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x1c ),	/* 28 */
/* 184 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 186 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	0x11, 0x0,	/* FC_RP */
/* 194 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (162) */
/* 196 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 198 */	NdrFcShort( 0x14 ),	/* 20 */
/* 200 */	NdrFcShort( 0x14 ),	/* 20 */
/* 202 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 204 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 206 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 208 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 210 */	NdrFcShort( 0xff3a ),	/* Offset= -198 (12) */
/* 212 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 214 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 216 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 220 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 222 */	NdrFcShort( 0xfff4 ),	/* -12 */
/* 224 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 226 */	0x0 , 
			0x0,		/* 0 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 236 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 238 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 240 */	NdrFcShort( 0x10 ),	/* 16 */
/* 242 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (216) */
/* 244 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 246 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 248 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x30 ),	/* 48 */
/* 252 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 254 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	0x11, 0x0,	/* FC_RP */
/* 262 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (162) */
/* 264 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 266 */	NdrFcShort( 0x14 ),	/* 20 */
/* 268 */	NdrFcShort( 0x14 ),	/* 20 */
/* 270 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 272 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 274 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 276 */	NdrFcShort( 0x2c ),	/* 44 */
/* 278 */	NdrFcShort( 0x2c ),	/* 44 */
/* 280 */	0x12, 0x0,	/* FC_UP */
/* 282 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (238) */
/* 284 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 288 */	NdrFcShort( 0xfeec ),	/* Offset= -276 (12) */
/* 290 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 292 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 294 */	NdrFcShort( 0xfee6 ),	/* Offset= -282 (12) */
/* 296 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 298 */	
			0x11, 0x0,	/* FC_RP */
/* 300 */	NdrFcShort( 0x2 ),	/* Offset= 2 (302) */
/* 302 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 304 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 308 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 310 */	0x0 , 
			0x0,		/* 0 */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (322) */
/* 322 */	NdrFcShort( 0x88 ),	/* 136 */
/* 324 */	NdrFcShort( 0x6 ),	/* 6 */
/* 326 */	NdrFcLong( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x132 ),	/* Offset= 306 (636) */
/* 332 */	NdrFcLong( 0x5 ),	/* 5 */
/* 336 */	NdrFcShort( 0x14a ),	/* Offset= 330 (666) */
/* 338 */	NdrFcLong( 0x7 ),	/* 7 */
/* 342 */	NdrFcShort( 0x16e ),	/* Offset= 366 (708) */
/* 344 */	NdrFcLong( 0x8 ),	/* 8 */
/* 348 */	NdrFcShort( 0x18e ),	/* Offset= 398 (746) */
/* 350 */	NdrFcLong( 0xa ),	/* 10 */
/* 354 */	NdrFcShort( 0x1c0 ),	/* Offset= 448 (802) */
/* 356 */	NdrFcLong( 0xb ),	/* 11 */
/* 360 */	NdrFcShort( 0x1f4 ),	/* Offset= 500 (860) */
/* 362 */	NdrFcShort( 0xffff ),	/* Offset= -1 (361) */
/* 364 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 366 */	NdrFcShort( 0x18 ),	/* 24 */
/* 368 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 370 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 372 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 376 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 378 */	NdrFcShort( 0x4 ),	/* 4 */
/* 380 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 382 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 388 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 392 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 394 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 396 */	NdrFcShort( 0xc ),	/* 12 */
/* 398 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 400 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 408 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (372) */
/* 410 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 416 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 418 */	NdrFcShort( 0xc ),	/* 12 */
/* 420 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 426 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 436 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 438 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 440 */	NdrFcShort( 0xc ),	/* 12 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 450 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 452 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (372) */
/* 454 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 456 */	0x0,		/* 0 */
			NdrFcShort( 0xffc1 ),	/* Offset= -63 (394) */
			0x5b,		/* FC_END */
/* 460 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 466 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 468 */	NdrFcShort( 0x4 ),	/* 4 */
/* 470 */	NdrFcShort( 0x4 ),	/* 4 */
/* 472 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 474 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (416) */
/* 476 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 478 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 480 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 482 */	NdrFcShort( 0x18 ),	/* 24 */
/* 484 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0xfe26 ),	/* Offset= -474 (12) */
/* 488 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 490 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 492 */	NdrFcShort( 0x18 ),	/* 24 */
/* 494 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 496 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 498 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 500 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 512 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (480) */
/* 514 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 516 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 520 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (490) */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 526 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 528 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 530 */	NdrFcShort( 0x4 ),	/* 4 */
/* 532 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 534 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 536 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 538 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 540 */	NdrFcLong( 0x1 ),	/* 1 */
/* 544 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 548 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 550 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0xc ),	/* 12 */
/* 554 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (528) */
/* 556 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 558 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 560 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 562 */	NdrFcShort( 0x60 ),	/* 96 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x1c ),	/* Offset= 28 (594) */
/* 568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0xfdd2 ),	/* Offset= -558 (12) */
/* 572 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 574 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (12) */
/* 576 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 578 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 580 */	NdrFcShort( 0xff28 ),	/* Offset= -216 (364) */
/* 582 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 584 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 586 */	NdrFcShort( 0xff82 ),	/* Offset= -126 (460) */
/* 588 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 590 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 592 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 594 */	
			0x11, 0x0,	/* FC_RP */
/* 596 */	NdrFcShort( 0xfe4e ),	/* Offset= -434 (162) */
/* 598 */	
			0x12, 0x0,	/* FC_UP */
/* 600 */	NdrFcShort( 0xffac ),	/* Offset= -84 (516) */
/* 602 */	
			0x12, 0x0,	/* FC_UP */
/* 604 */	NdrFcShort( 0xffca ),	/* Offset= -54 (550) */
/* 606 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 610 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 612 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 614 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 616 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 618 */	NdrFcLong( 0x1 ),	/* 1 */
/* 622 */	NdrFcLong( 0x100 ),	/* 256 */
/* 626 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 628 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (606) */
/* 634 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 636 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 638 */	NdrFcShort( 0x78 ),	/* 120 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xe ),	/* Offset= 14 (656) */
/* 644 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0xfd86 ),	/* Offset= -634 (12) */
/* 648 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 650 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 652 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (560) */
/* 654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 656 */	
			0x11, 0x0,	/* FC_RP */
/* 658 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (628) */
/* 660 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 664 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 666 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 668 */	NdrFcShort( 0x60 ),	/* 96 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1c ),	/* Offset= 28 (700) */
/* 674 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 676 */	NdrFcShort( 0xfd68 ),	/* Offset= -664 (12) */
/* 678 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0xfd64 ),	/* Offset= -668 (12) */
/* 682 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 684 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (364) */
/* 688 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 690 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 692 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (660) */
/* 698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 700 */	
			0x11, 0x0,	/* FC_RP */
/* 702 */	NdrFcShort( 0xfde4 ),	/* Offset= -540 (162) */
/* 704 */	
			0x12, 0x0,	/* FC_UP */
/* 706 */	NdrFcShort( 0xff42 ),	/* Offset= -190 (516) */
/* 708 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 710 */	NdrFcShort( 0x88 ),	/* 136 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x14 ),	/* Offset= 20 (734) */
/* 716 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 718 */	NdrFcShort( 0xfd3e ),	/* Offset= -706 (12) */
/* 720 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 722 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 724 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (560) */
/* 726 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 728 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0xfef2 ),	/* Offset= -270 (460) */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x11, 0x0,	/* FC_RP */
/* 736 */	NdrFcShort( 0xff94 ),	/* Offset= -108 (628) */
/* 738 */	
			0x12, 0x0,	/* FC_UP */
/* 740 */	NdrFcShort( 0xff42 ),	/* Offset= -190 (550) */
/* 742 */	
			0x12, 0x0,	/* FC_UP */
/* 744 */	NdrFcShort( 0xff3e ),	/* Offset= -194 (550) */
/* 746 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 748 */	NdrFcShort( 0x70 ),	/* 112 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x22 ),	/* Offset= 34 (786) */
/* 754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0xfd18 ),	/* Offset= -744 (12) */
/* 758 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 760 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (12) */
/* 762 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 764 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 766 */	NdrFcShort( 0xfe6e ),	/* Offset= -402 (364) */
/* 768 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 770 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 772 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 774 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 776 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (660) */
/* 778 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 780 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 782 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (460) */
/* 784 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 786 */	
			0x11, 0x0,	/* FC_RP */
/* 788 */	NdrFcShort( 0xfd8e ),	/* Offset= -626 (162) */
/* 790 */	
			0x12, 0x0,	/* FC_UP */
/* 792 */	NdrFcShort( 0xfeec ),	/* Offset= -276 (516) */
/* 794 */	
			0x12, 0x0,	/* FC_UP */
/* 796 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (550) */
/* 798 */	
			0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0xff06 ),	/* Offset= -250 (550) */
/* 802 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 804 */	NdrFcShort( 0x78 ),	/* 120 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x24 ),	/* Offset= 36 (844) */
/* 810 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 812 */	NdrFcShort( 0xfce0 ),	/* Offset= -800 (12) */
/* 814 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 816 */	NdrFcShort( 0xfcdc ),	/* Offset= -804 (12) */
/* 818 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 820 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 822 */	NdrFcShort( 0xfe36 ),	/* Offset= -458 (364) */
/* 824 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 826 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 828 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 830 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 832 */	NdrFcShort( 0xff54 ),	/* Offset= -172 (660) */
/* 834 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 836 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 838 */	NdrFcShort( 0xfe86 ),	/* Offset= -378 (460) */
/* 840 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x11, 0x0,	/* FC_RP */
/* 846 */	NdrFcShort( 0xfd54 ),	/* Offset= -684 (162) */
/* 848 */	
			0x12, 0x0,	/* FC_UP */
/* 850 */	NdrFcShort( 0xfeb2 ),	/* Offset= -334 (516) */
/* 852 */	
			0x12, 0x0,	/* FC_UP */
/* 854 */	NdrFcShort( 0xfed0 ),	/* Offset= -304 (550) */
/* 856 */	
			0x12, 0x0,	/* FC_UP */
/* 858 */	NdrFcShort( 0xfecc ),	/* Offset= -308 (550) */
/* 860 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 862 */	NdrFcShort( 0x88 ),	/* 136 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x28 ),	/* Offset= 40 (906) */
/* 868 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 870 */	NdrFcShort( 0xfca6 ),	/* Offset= -858 (12) */
/* 872 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 874 */	NdrFcShort( 0xfca2 ),	/* Offset= -862 (12) */
/* 876 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 878 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 880 */	NdrFcShort( 0xfdfc ),	/* Offset= -516 (364) */
/* 882 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 884 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 886 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 888 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 890 */	NdrFcShort( 0xff1a ),	/* Offset= -230 (660) */
/* 892 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 894 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 896 */	NdrFcShort( 0xfe4c ),	/* Offset= -436 (460) */
/* 898 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 900 */	0x0,		/* 0 */
			NdrFcShort( 0xfc87 ),	/* Offset= -889 (12) */
			0x36,		/* FC_POINTER */
/* 904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 906 */	
			0x11, 0x0,	/* FC_RP */
/* 908 */	NdrFcShort( 0xfd16 ),	/* Offset= -746 (162) */
/* 910 */	
			0x12, 0x0,	/* FC_UP */
/* 912 */	NdrFcShort( 0xfe74 ),	/* Offset= -396 (516) */
/* 914 */	
			0x12, 0x0,	/* FC_UP */
/* 916 */	NdrFcShort( 0xfe92 ),	/* Offset= -366 (550) */
/* 918 */	
			0x12, 0x0,	/* FC_UP */
/* 920 */	NdrFcShort( 0xfe8e ),	/* Offset= -370 (550) */
/* 922 */	
			0x12, 0x0,	/* FC_UP */
/* 924 */	NdrFcShort( 0xfd52 ),	/* Offset= -686 (238) */
/* 926 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 928 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x11, 0x0,	/* FC_RP */
/* 932 */	NdrFcShort( 0x2 ),	/* Offset= 2 (934) */
/* 934 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 936 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 942 */	0x0 , 
			0x0,		/* 0 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x2 ),	/* Offset= 2 (954) */
/* 954 */	NdrFcShort( 0x90 ),	/* 144 */
/* 956 */	NdrFcShort( 0x5 ),	/* 5 */
/* 958 */	NdrFcLong( 0x1 ),	/* 1 */
/* 962 */	NdrFcShort( 0x13e ),	/* Offset= 318 (1280) */
/* 964 */	NdrFcLong( 0x2 ),	/* 2 */
/* 968 */	NdrFcShort( 0x180 ),	/* Offset= 384 (1352) */
/* 970 */	NdrFcLong( 0x6 ),	/* 6 */
/* 974 */	NdrFcShort( 0x214 ),	/* Offset= 532 (1506) */
/* 976 */	NdrFcLong( 0x7 ),	/* 7 */
/* 980 */	NdrFcShort( 0x24a ),	/* Offset= 586 (1566) */
/* 982 */	NdrFcLong( 0x9 ),	/* 9 */
/* 986 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (1670) */
/* 988 */	NdrFcShort( 0xffff ),	/* Offset= -1 (987) */
/* 990 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 994 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1000 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1006 */	NdrFcLong( 0x1900000 ),	/* 26214400 */
/* 1010 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1012 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1018 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1026 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (990) */
/* 1028 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1030 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1032 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1038 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1040 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1042 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1048 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 1052 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1054 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1062 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1068 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (990) */
/* 1070 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1072 */	0x0,		/* 0 */
			NdrFcShort( 0xffc3 ),	/* Offset= -61 (1012) */
			0x5b,		/* FC_END */
/* 1076 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1078 */	NdrFcShort( 0xc ),	/* 12 */
/* 1080 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1082 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1090 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1032) */
/* 1092 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1094 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1096 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1098 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1100 */	NdrFcShort( 0xc ),	/* 12 */
/* 1102 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1104 */	NdrFcShort( 0xc ),	/* 12 */
/* 1106 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1108 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1114 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1118 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1120 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1122 */	NdrFcShort( 0xc ),	/* 12 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1134 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1032) */
/* 1136 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1138 */	0x0,		/* 0 */
			NdrFcShort( 0xffc1 ),	/* Offset= -63 (1076) */
			0x5b,		/* FC_END */
/* 1142 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1144 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1148) */
/* 1150 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1152 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1154 */	0x0,		/* 0 */
			NdrFcShort( 0xfb89 ),	/* Offset= -1143 (12) */
			0xb,		/* FC_HYPER */
/* 1158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1160 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1166 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1168 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1170 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1180 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1184 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1186 */	0x0 , 
			0x0,		/* 0 */
/* 1188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1196 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1198 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1142) */
/* 1200 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1202 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1206 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1160) */
/* 1208 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1208) */
/* 1210 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1212 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1214 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1216 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1218 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1220 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	0x12, 0x0,	/* FC_UP */
/* 1228 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (1214) */
/* 1230 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1232 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1236 */	0x12, 0x0,	/* FC_UP */
/* 1238 */	NdrFcShort( 0xfbcc ),	/* Offset= -1076 (162) */
/* 1240 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1246 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1248 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (1098) */
/* 1250 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1252 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1254 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1256 */	0x12, 0x0,	/* FC_UP */
/* 1258 */	NdrFcShort( 0xfb22 ),	/* Offset= -1246 (12) */
/* 1260 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1262 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1264 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1266 */	0x12, 0x0,	/* FC_UP */
/* 1268 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (1202) */
/* 1270 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1272 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1276 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1278 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1280 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1282 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1318) */
/* 1288 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1290 */	NdrFcShort( 0xfb02 ),	/* Offset= -1278 (12) */
/* 1292 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1294 */	NdrFcShort( 0xfafe ),	/* Offset= -1282 (12) */
/* 1296 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 1298 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1300 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (364) */
/* 1302 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1304 */	NdrFcShort( 0xfc54 ),	/* Offset= -940 (364) */
/* 1306 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1308 */	0x0,		/* 0 */
			NdrFcShort( 0xfcaf ),	/* Offset= -849 (460) */
			0x8,		/* FC_LONG */
/* 1312 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1314 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1316 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1318 */	
			0x12, 0x0,	/* FC_UP */
/* 1320 */	NdrFcShort( 0xfb7a ),	/* Offset= -1158 (162) */
/* 1322 */	
			0x12, 0x0,	/* FC_UP */
/* 1324 */	NdrFcShort( 0xfcd8 ),	/* Offset= -808 (516) */
/* 1326 */	
			0x12, 0x0,	/* FC_UP */
/* 1328 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (1214) */
/* 1330 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1334 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1338 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1340 */	0x0 , 
			0x0,		/* 0 */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1352 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0xc ),	/* 12 */
/* 1356 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1358 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1364 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1366 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1330) */
/* 1368 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1370 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1372 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1374 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1376 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1378 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1380 */	NdrFcShort( 0xfaa8 ),	/* Offset= -1368 (12) */
/* 1382 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1386 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1388 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1390 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1392 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1394 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1396 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1402 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1406 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1408 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1374) */
/* 1410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1412 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 1414 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1416 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1386) */
/* 1418 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1420 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1422 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1424 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1426 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1430) */
/* 1432 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1434 */	0x0,		/* 0 */
			NdrFcShort( 0xfedb ),	/* Offset= -293 (1142) */
			0x5b,		/* FC_END */
/* 1438 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1440 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1460) */
/* 1446 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1448 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1450 */	NdrFcShort( 0xfe4a ),	/* Offset= -438 (1012) */
/* 1452 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1454 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1456 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1424) */
/* 1458 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1460 */	
			0x12, 0x0,	/* FC_UP */
/* 1462 */	NdrFcShort( 0xfaec ),	/* Offset= -1300 (162) */
/* 1464 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1470 */	NdrFcShort( 0x80 ),	/* 128 */
/* 1472 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1474 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1480 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1484 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1488 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1490 */	0x0 , 
			0x0,		/* 0 */
/* 1492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1500 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1502 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1438) */
/* 1504 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1506 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1508 */	NdrFcShort( 0x90 ),	/* 144 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1550) */
/* 1514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1516 */	NdrFcShort( 0xfa20 ),	/* Offset= -1504 (12) */
/* 1518 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1520 */	NdrFcShort( 0xfa1c ),	/* Offset= -1508 (12) */
/* 1522 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 1524 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1526 */	NdrFcShort( 0xfb76 ),	/* Offset= -1162 (364) */
/* 1528 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1530 */	NdrFcShort( 0xfb72 ),	/* Offset= -1166 (364) */
/* 1532 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1534 */	0x0,		/* 0 */
			NdrFcShort( 0xfbcd ),	/* Offset= -1075 (460) */
			0x8,		/* FC_LONG */
/* 1538 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1540 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1542 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1544 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1546 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1548 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1550 */	
			0x12, 0x0,	/* FC_UP */
/* 1552 */	NdrFcShort( 0xfa92 ),	/* Offset= -1390 (162) */
/* 1554 */	
			0x12, 0x0,	/* FC_UP */
/* 1556 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (1412) */
/* 1558 */	
			0x12, 0x0,	/* FC_UP */
/* 1560 */	NdrFcShort( 0xfea6 ),	/* Offset= -346 (1214) */
/* 1562 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1564 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (1464) */
/* 1566 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1568 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1572) */
/* 1574 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 1576 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1578 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (1352) */
/* 1580 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1582 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1584 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1588) */
/* 1590 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1592 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3d ),	/* Offset= -451 (1142) */
			0x8,		/* FC_LONG */
/* 1596 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1598 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 1600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1602 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1604 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1624) */
/* 1610 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1612 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1614 */	NdrFcShort( 0xfda6 ),	/* Offset= -602 (1012) */
/* 1616 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1618 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1620 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1582) */
/* 1622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1624 */	
			0x12, 0x0,	/* FC_UP */
/* 1626 */	NdrFcShort( 0xfa48 ),	/* Offset= -1464 (162) */
/* 1628 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1634 */	NdrFcShort( 0x80 ),	/* 128 */
/* 1636 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1638 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1648 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1652 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1654 */	0x0 , 
			0x0,		/* 0 */
/* 1656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1664 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1666 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1602) */
/* 1668 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1670 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1672 */	NdrFcShort( 0x90 ),	/* 144 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1714) */
/* 1678 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1680 */	NdrFcShort( 0xf97c ),	/* Offset= -1668 (12) */
/* 1682 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1684 */	NdrFcShort( 0xf978 ),	/* Offset= -1672 (12) */
/* 1686 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 1688 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1690 */	NdrFcShort( 0xfad2 ),	/* Offset= -1326 (364) */
/* 1692 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1694 */	NdrFcShort( 0xface ),	/* Offset= -1330 (364) */
/* 1696 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1698 */	0x0,		/* 0 */
			NdrFcShort( 0xfb29 ),	/* Offset= -1239 (460) */
			0x8,		/* FC_LONG */
/* 1702 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1704 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1706 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1708 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1710 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1714 */	
			0x12, 0x0,	/* FC_UP */
/* 1716 */	NdrFcShort( 0xf9ee ),	/* Offset= -1554 (162) */
/* 1718 */	
			0x12, 0x0,	/* FC_UP */
/* 1720 */	NdrFcShort( 0xfecc ),	/* Offset= -308 (1412) */
/* 1722 */	
			0x12, 0x0,	/* FC_UP */
/* 1724 */	NdrFcShort( 0xfe02 ),	/* Offset= -510 (1214) */
/* 1726 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1728 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (1628) */
/* 1730 */	
			0x11, 0x0,	/* FC_RP */
/* 1732 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1734) */
/* 1734 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1736 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1740 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1742 */	0x0 , 
			0x0,		/* 0 */
/* 1744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1754) */
/* 1754 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1756 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1758 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1762 */	NdrFcShort( 0xa ),	/* Offset= 10 (1772) */
/* 1764 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1768 */	NdrFcShort( 0x28 ),	/* Offset= 40 (1808) */
/* 1770 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1769) */
/* 1772 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1774 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1776 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1778 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	0x11, 0x0,	/* FC_RP */
/* 1786 */	NdrFcShort( 0xf9a8 ),	/* Offset= -1624 (162) */
/* 1788 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1794 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1796 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1798 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1800 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1802 */	0x0,		/* 0 */
			NdrFcShort( 0xf901 ),	/* Offset= -1791 (12) */
			0x8,		/* FC_LONG */
/* 1806 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1808 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1810 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1812 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1814 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	0x11, 0x0,	/* FC_RP */
/* 1822 */	NdrFcShort( 0xf984 ),	/* Offset= -1660 (162) */
/* 1824 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1830 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1832 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1834 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1836 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1838 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1840 */	0x12, 0x0,	/* FC_UP */
/* 1842 */	NdrFcShort( 0xf9bc ),	/* Offset= -1604 (238) */
/* 1844 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1846 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1848 */	0x0,		/* 0 */
			NdrFcShort( 0xf8d3 ),	/* Offset= -1837 (12) */
			0x8,		/* FC_LONG */
/* 1852 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1854 */	NdrFcShort( 0xf8ce ),	/* Offset= -1842 (12) */
/* 1856 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1858 */	
			0x11, 0x0,	/* FC_RP */
/* 1860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1862) */
/* 1862 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1864 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1868 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1870 */	0x0 , 
			0x0,		/* 0 */
/* 1872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1882) */
/* 1882 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1884 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1886 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1890 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1922) */
/* 1892 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1896 */	NdrFcShort( 0x3e ),	/* Offset= 62 (1958) */
/* 1898 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1902 */	NdrFcShort( 0x72 ),	/* Offset= 114 (2016) */
/* 1904 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1903) */
/* 1906 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1908 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1910 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1912 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1914 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1916 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1918 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1906) */
/* 1920 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1922 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1924 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1928 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	0x11, 0x0,	/* FC_RP */
/* 1936 */	NdrFcShort( 0xf912 ),	/* Offset= -1774 (162) */
/* 1938 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1940 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1944 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1946 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1948 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1950 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1952 */	0x0,		/* 0 */
			NdrFcShort( 0xffd7 ),	/* Offset= -41 (1912) */
			0x8,		/* FC_LONG */
/* 1956 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1958 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1960 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1962 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1964 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	0x11, 0x0,	/* FC_RP */
/* 1972 */	NdrFcShort( 0xf8ee ),	/* Offset= -1810 (162) */
/* 1974 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1976 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1980 */	0x12, 0x0,	/* FC_UP */
/* 1982 */	NdrFcShort( 0xf8e4 ),	/* Offset= -1820 (162) */
/* 1984 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1990 */	0x12, 0x0,	/* FC_UP */
/* 1992 */	NdrFcShort( 0xf8da ),	/* Offset= -1830 (162) */
/* 1994 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1996 */	NdrFcShort( 0xc ),	/* 12 */
/* 1998 */	NdrFcShort( 0xc ),	/* 12 */
/* 2000 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 2002 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2004 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2006 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2008 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2010 */	0x0,		/* 0 */
			NdrFcShort( 0xff9d ),	/* Offset= -99 (1912) */
			0x8,		/* FC_LONG */
/* 2014 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2016 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2018 */	NdrFcShort( 0x7c ),	/* 124 */
/* 2020 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2022 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	0x11, 0x0,	/* FC_RP */
/* 2030 */	NdrFcShort( 0xf8b4 ),	/* Offset= -1868 (162) */
/* 2032 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2034 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2036 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2038 */	0x12, 0x0,	/* FC_UP */
/* 2040 */	NdrFcShort( 0xf8aa ),	/* Offset= -1878 (162) */
/* 2042 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	0x12, 0x0,	/* FC_UP */
/* 2050 */	NdrFcShort( 0xf8a0 ),	/* Offset= -1888 (162) */
/* 2052 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2054 */	NdrFcShort( 0xc ),	/* 12 */
/* 2056 */	NdrFcShort( 0xc ),	/* 12 */
/* 2058 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 2060 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2062 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2064 */	NdrFcShort( 0x78 ),	/* 120 */
/* 2066 */	NdrFcShort( 0x78 ),	/* 120 */
/* 2068 */	0x12, 0x0,	/* FC_UP */
/* 2070 */	NdrFcShort( 0xf8d8 ),	/* Offset= -1832 (238) */
/* 2072 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2074 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2076 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2078 */	0x0,		/* 0 */
			NdrFcShort( 0xff59 ),	/* Offset= -167 (1912) */
			0x8,		/* FC_LONG */
/* 2082 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2084 */	NdrFcShort( 0xf7e8 ),	/* Offset= -2072 (12) */
/* 2086 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2088 */	
			0x11, 0x0,	/* FC_RP */
/* 2090 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2092) */
/* 2092 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2094 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2098 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2100 */	0x0 , 
			0x0,		/* 0 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2112) */
/* 2112 */	NdrFcShort( 0xc ),	/* 12 */
/* 2114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2116 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2120 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2124) */
/* 2122 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2121) */
/* 2124 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2126 */	NdrFcShort( 0xc ),	/* 12 */
/* 2128 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2130 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	0x11, 0x0,	/* FC_RP */
/* 2138 */	NdrFcShort( 0xf848 ),	/* Offset= -1976 (162) */
/* 2140 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2146 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2148 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2150 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2152 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2156 */	
			0x11, 0x0,	/* FC_RP */
/* 2158 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2160) */
/* 2160 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2162 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2166 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2168 */	0x0 , 
			0x0,		/* 0 */
/* 2170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2180) */
/* 2180 */	NdrFcShort( 0x78 ),	/* 120 */
/* 2182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2184 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2188 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2192) */
/* 2190 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2189) */
/* 2192 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2194 */	NdrFcShort( 0x78 ),	/* 120 */
/* 2196 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	0x11, 0x0,	/* FC_RP */
/* 2206 */	NdrFcShort( 0xf804 ),	/* Offset= -2044 (162) */
/* 2208 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2210 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2212 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2214 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2216 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2218 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2220 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2222 */	NdrFcShort( 0xf75e ),	/* Offset= -2210 (12) */
/* 2224 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2226 */	0x0,		/* 0 */
			NdrFcShort( 0xfec5 ),	/* Offset= -315 (1912) */
			0x8,		/* FC_LONG */
/* 2230 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2232 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2234 */	
			0x11, 0x0,	/* FC_RP */
/* 2236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2238) */
/* 2238 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2240 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2244 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2246 */	0x0 , 
			0x0,		/* 0 */
/* 2248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2258) */
/* 2258 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2262 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2266 */	NdrFcShort( 0x5a ),	/* Offset= 90 (2356) */
/* 2268 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2267) */
/* 2270 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2272 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2274 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2276 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2278 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2280 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2282 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2286 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2290 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2292 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2294 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	0x12, 0x0,	/* FC_UP */
/* 2306 */	NdrFcShort( 0xf7a0 ),	/* Offset= -2144 (162) */
/* 2308 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2310 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2312 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2314 */	NdrFcShort( 0xc ),	/* 12 */
/* 2316 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2318 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2320 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2322 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 2332 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2334 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2336 */	NdrFcShort( 0xc ),	/* 12 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2346 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2348 */	NdrFcShort( 0xf848 ),	/* Offset= -1976 (372) */
/* 2350 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2352 */	0x0,		/* 0 */
			NdrFcShort( 0xf859 ),	/* Offset= -1959 (394) */
			0x5b,		/* FC_END */
/* 2356 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2358 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2360 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2362 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2368 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2370 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (2270) */
/* 2372 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2376 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2378 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2380 */	NdrFcShort( 0xfafe ),	/* Offset= -1282 (1098) */
/* 2382 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2384 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2386 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2388 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2390 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (2312) */
/* 2392 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2398 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2400 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2402 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2404 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2406) */
/* 2406 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2408 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2412 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2414 */	0x0 , 
			0x0,		/* 0 */
/* 2416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2426) */
/* 2426 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2430 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2434 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (2610) */
/* 2436 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2435) */
/* 2438 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2440 */	NdrFcShort( 0xc ),	/* 12 */
/* 2442 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2446 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2448 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 2458 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2460 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2462 */	NdrFcShort( 0xc ),	/* 12 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2472 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2474 */	NdrFcShort( 0xfa5e ),	/* Offset= -1442 (1032) */
/* 2476 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2478 */	0x0,		/* 0 */
			NdrFcShort( 0xfa85 ),	/* Offset= -1403 (1076) */
			0x5b,		/* FC_END */
/* 2482 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2484 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2486 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2494 */	0x12, 0x0,	/* FC_UP */
/* 2496 */	NdrFcShort( 0xf6e2 ),	/* Offset= -2334 (162) */
/* 2498 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2500 */	NdrFcShort( 0xc ),	/* 12 */
/* 2502 */	NdrFcShort( 0xc ),	/* 12 */
/* 2504 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2506 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (2438) */
/* 2508 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2510 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2512 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2514 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2516 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2518 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2520 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2522 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2524 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2530 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2534 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2536 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2538 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	0x12, 0x0,	/* FC_UP */
/* 2550 */	NdrFcShort( 0xf6ac ),	/* Offset= -2388 (162) */
/* 2552 */	NdrFcShort( 0xc ),	/* 12 */
/* 2554 */	NdrFcShort( 0xc ),	/* 12 */
/* 2556 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2558 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (2438) */
/* 2560 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2562 */	0x0,		/* 0 */
			NdrFcShort( 0xffaf ),	/* Offset= -81 (2482) */
			0x5b,		/* FC_END */
/* 2566 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2568 */	NdrFcShort( 0xc ),	/* 12 */
/* 2570 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2572 */	NdrFcShort( 0xc ),	/* 12 */
/* 2574 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2576 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2582 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 2586 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2588 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2590 */	NdrFcShort( 0xc ),	/* 12 */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2600 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2602 */	NdrFcShort( 0xf74a ),	/* Offset= -2230 (372) */
/* 2604 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2606 */	0x0,		/* 0 */
			NdrFcShort( 0xf75b ),	/* Offset= -2213 (394) */
			0x5b,		/* FC_END */
/* 2610 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2612 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2614 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2616 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2622 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2624 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (2514) */
/* 2626 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2628 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2630 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2632 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2634 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (2566) */
/* 2636 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2638 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2640 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2642 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2644 */	
			0x11, 0x0,	/* FC_RP */
/* 2646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2648) */
/* 2648 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2650 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2654 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2656 */	0x0 , 
			0x0,		/* 0 */
/* 2658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2668) */
/* 2668 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2672 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2676 */	NdrFcShort( 0x38 ),	/* Offset= 56 (2732) */
/* 2678 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2677) */
/* 2680 */	0xb7,		/* FC_RANGE */
			0xd,		/* 13 */
/* 2682 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2686 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2690 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2694 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2700 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2702 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2706 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2710 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2712 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	0x12, 0x0,	/* FC_UP */
/* 2726 */	NdrFcShort( 0xf5fc ),	/* Offset= -2564 (162) */
/* 2728 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2730 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2732 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2734 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0xc ),	/* Offset= 12 (2750) */
/* 2740 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2742 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2744 */	0x0,		/* 0 */
			NdrFcShort( 0xffbf ),	/* Offset= -65 (2680) */
			0x36,		/* FC_POINTER */
/* 2748 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2750 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2752 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (2690) */
/* 2754 */	
			0x12, 0x0,	/* FC_UP */
/* 2756 */	NdrFcShort( 0xf5de ),	/* Offset= -2594 (162) */
/* 2758 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2762) */
/* 2762 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2764 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2768 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2770 */	0x0 , 
			0x0,		/* 0 */
/* 2772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2780 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2782) */
/* 2782 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2786 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2790 */	NdrFcShort( 0x6e ),	/* Offset= 110 (2900) */
/* 2792 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2791) */
/* 2794 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2798 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2802 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2804 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2810 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2814 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2816 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	0x12, 0x0,	/* FC_UP */
/* 2830 */	NdrFcShort( 0xf594 ),	/* Offset= -2668 (162) */
/* 2832 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2834 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2836 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2840 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2844 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2846 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2852 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2856 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2858 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2862 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2866 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2868 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2878 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2880 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2882 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	0x12, 0x0,	/* FC_UP */
/* 2894 */	NdrFcShort( 0xf534 ),	/* Offset= -2764 (130) */
/* 2896 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2898 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2900 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2902 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2904 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2906 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2908 */	NdrFcShort( 0xc ),	/* 12 */
/* 2910 */	NdrFcShort( 0xc ),	/* 12 */
/* 2912 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2914 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (2794) */
/* 2916 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2918 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2920 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2922 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2924 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (2836) */
/* 2926 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2928 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2930 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2932 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2934 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (2858) */
/* 2936 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2938 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2940 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2942 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2944 */	
			0x11, 0x0,	/* FC_RP */
/* 2946 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2948) */
/* 2948 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2950 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2954 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2956 */	0x0 , 
			0x0,		/* 0 */
/* 2958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2968) */
/* 2968 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2970 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2972 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2976 */	NdrFcShort( 0xa ),	/* Offset= 10 (2986) */
/* 2978 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2982 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (3150) */
/* 2984 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2983) */
/* 2986 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2988 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2990 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2992 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3000 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 3002 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3004 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3006 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3008 */	0x12, 0x0,	/* FC_UP */
/* 3010 */	NdrFcShort( 0xfdf0 ),	/* Offset= -528 (2482) */
/* 3012 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3018 */	0x12, 0x0,	/* FC_UP */
/* 3020 */	NdrFcShort( 0xf440 ),	/* Offset= -3008 (12) */
/* 3022 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3024 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3026 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3028 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3030 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (2566) */
/* 3032 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3034 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3036 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3038 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3040 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3044 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3050 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3056 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3060 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3062 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3064 */	NdrFcShort( 0xc ),	/* 12 */
/* 3066 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3068 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3074 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3076 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3040) */
/* 3078 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3080 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3082 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3084 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3086 */	NdrFcShort( 0xc ),	/* 12 */
/* 3088 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3090 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3092 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3094 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3100 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3106 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3108 */	NdrFcShort( 0xc ),	/* 12 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3118 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3120 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (3040) */
/* 3122 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3124 */	0x0,		/* 0 */
			NdrFcShort( 0xffc1 ),	/* Offset= -63 (3062) */
			0x5b,		/* FC_END */
/* 3128 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3130 */	NdrFcShort( 0xc ),	/* 12 */
/* 3132 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3134 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3140 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3142 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (3084) */
/* 3144 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3146 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3150 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3152 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3154 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3156 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	0x12, 0x0,	/* FC_UP */
/* 3164 */	NdrFcShort( 0xf446 ),	/* Offset= -3002 (162) */
/* 3166 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3170 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3172 */	0x12, 0x0,	/* FC_UP */
/* 3174 */	NdrFcShort( 0xfd4c ),	/* Offset= -692 (2482) */
/* 3176 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3182 */	0x12, 0x0,	/* FC_UP */
/* 3184 */	NdrFcShort( 0xf432 ),	/* Offset= -3022 (162) */
/* 3186 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3188 */	NdrFcShort( 0xc ),	/* 12 */
/* 3190 */	NdrFcShort( 0xc ),	/* 12 */
/* 3192 */	0x12, 0x0,	/* FC_UP */
/* 3194 */	NdrFcShort( 0xf428 ),	/* Offset= -3032 (162) */
/* 3196 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3200 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3202 */	0x12, 0x0,	/* FC_UP */
/* 3204 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (3128) */
/* 3206 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3208 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3210 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3212 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3214 */	NdrFcShort( 0xfc7a ),	/* Offset= -902 (2312) */
/* 3216 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3218 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3220 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3222 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3224 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3226 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3230) */
/* 3230 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3232 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3236 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3238 */	0x0 , 
			0x0,		/* 0 */
/* 3240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3250) */
/* 3250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3252 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3254 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3258 */	NdrFcShort( 0x3a ),	/* Offset= 58 (3316) */
/* 3260 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3264 */	NdrFcShort( 0x5e ),	/* Offset= 94 (3358) */
/* 3266 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3265) */
/* 3268 */	
			0x12, 0x0,	/* FC_UP */
/* 3270 */	NdrFcShort( 0xfcec ),	/* Offset= -788 (2482) */
/* 3272 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3274 */	NdrFcShort( 0xc ),	/* 12 */
/* 3276 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3278 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3280 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3282 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 3292 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3294 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3296 */	NdrFcShort( 0xc ),	/* 12 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3306 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3308 */	NdrFcShort( 0xf488 ),	/* Offset= -2936 (372) */
/* 3310 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3312 */	0x0,		/* 0 */
			NdrFcShort( 0xf499 ),	/* Offset= -2919 (394) */
			0x5b,		/* FC_END */
/* 3316 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3320 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3328 */	0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 3330 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (3268) */
/* 3332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3338 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3340 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (3272) */
/* 3342 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3344 */	NdrFcShort( 0xc ),	/* 12 */
/* 3346 */	NdrFcShort( 0xc ),	/* 12 */
/* 3348 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3350 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 3352 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3354 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3356 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3358 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3362 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3364 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3366 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3370 */	0x12, 0x0,	/* FC_UP */
/* 3372 */	NdrFcShort( 0xf376 ),	/* Offset= -3210 (162) */
/* 3374 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3376 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3378 */	
			0x11, 0x0,	/* FC_RP */
/* 3380 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3382) */
/* 3382 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3384 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3390 */	0x0 , 
			0x0,		/* 0 */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3402) */
/* 3402 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3406 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3410 */	NdrFcShort( 0x1a ),	/* Offset= 26 (3436) */
/* 3412 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3411) */
/* 3414 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3418 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3422 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3424 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3430 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 3434 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3436 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3438 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3440 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3442 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3444 */	NdrFcShort( 0xc ),	/* 12 */
/* 3446 */	NdrFcShort( 0xc ),	/* 12 */
/* 3448 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3450 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3414) */
/* 3452 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3454 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3456 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3458 */	
			0x11, 0x0,	/* FC_RP */
/* 3460 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3462) */
/* 3462 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3464 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3468 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3470 */	0x0 , 
			0x0,		/* 0 */
/* 3472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3482) */
/* 3482 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3486 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3490 */	NdrFcShort( 0x4e ),	/* Offset= 78 (3568) */
/* 3492 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3491) */
/* 3494 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 3496 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3498 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3500 */	NdrFcShort( 0xf4e8 ),	/* Offset= -2840 (660) */
/* 3502 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3504 */	NdrFcShort( 0xf4e4 ),	/* Offset= -2844 (660) */
/* 3506 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3508 */	NdrFcShort( 0xf4e0 ),	/* Offset= -2848 (660) */
/* 3510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3512 */	NdrFcShort( 0xf4dc ),	/* Offset= -2852 (660) */
/* 3514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3516 */	NdrFcShort( 0xf4d8 ),	/* Offset= -2856 (660) */
/* 3518 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3520 */	NdrFcShort( 0xf4d4 ),	/* Offset= -2860 (660) */
/* 3522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3524 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3528 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3534 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 3544 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3546 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3550 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3554 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3556 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3562 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 3566 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3568 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3570 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0xe ),	/* Offset= 14 (3588) */
/* 3576 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3578 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3580 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (3494) */
/* 3582 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3584 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 3586 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3588 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3590 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (3524) */
/* 3592 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3594 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (3546) */
/* 3596 */	
			0x11, 0x0,	/* FC_RP */
/* 3598 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3600) */
/* 3600 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3602 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3606 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3608 */	0x0 , 
			0x0,		/* 0 */
/* 3610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3620) */
/* 3620 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3624 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3628 */	NdrFcShort( 0x2e ),	/* Offset= 46 (3674) */
/* 3630 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3629) */
/* 3632 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3636 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3638 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3640 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3642 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3644 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3648 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3652 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3654 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3668 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3670 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3672 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3674 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3676 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3678 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3680 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3682 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3684 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3686 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3688 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3632) */
/* 3690 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3692 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3694 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3696 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3700 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3702 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3704) */
/* 3704 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3706 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3710 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3712 */	0x0 , 
			0x0,		/* 0 */
/* 3714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3724) */
/* 3724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3728 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3732 */	NdrFcShort( 0x6c ),	/* Offset= 108 (3840) */
/* 3734 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3733) */
/* 3736 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3738 */	NdrFcShort( 0xc ),	/* 12 */
/* 3740 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3742 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3746 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3748 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3750 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3752 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3760 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3762 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3764 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3766 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3768 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3770 */	NdrFcShort( 0xc ),	/* 12 */
/* 3772 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3778 */	0x0 , 
			0x0,		/* 0 */
/* 3780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3788 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3790 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3792 */	NdrFcShort( 0xc ),	/* 12 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3802 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3804 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3810 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3812 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3814 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3816 */	0x0,		/* 0 */
			NdrFcShort( 0xffaf ),	/* Offset= -81 (3736) */
			0x5b,		/* FC_END */
/* 3820 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3824 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3826 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3832 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3834 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (3768) */
/* 3836 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3838 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3840 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3844 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3846 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	0x12, 0x0,	/* FC_UP */
/* 3854 */	NdrFcShort( 0xffde ),	/* Offset= -34 (3820) */
/* 3856 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3858 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3860 */	
			0x11, 0x0,	/* FC_RP */
/* 3862 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3864) */
/* 3864 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3866 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3870 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3872 */	0x0 , 
			0x0,		/* 0 */
/* 3874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3884) */
/* 3884 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3888 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3892 */	NdrFcShort( 0x2e ),	/* Offset= 46 (3938) */
/* 3894 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3893) */
/* 3896 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3900 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3902 */	NdrFcShort( 0xc ),	/* 12 */
/* 3904 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3906 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3912 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3916 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3918 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3932 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3934 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3936 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3938 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3940 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3942 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3944 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3950 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3952 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3954 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3956 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3958 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3960 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3962 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (3896) */
/* 3964 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3966 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3968 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3970 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3972 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3976) */
/* 3976 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3978 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3984 */	0x0 , 
			0x0,		/* 0 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3996) */
/* 3996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4000 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4004 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4008) */
/* 4006 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4005) */
/* 4008 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 4010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4012 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 4014 */	
			0x11, 0x0,	/* FC_RP */
/* 4016 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4018) */
/* 4018 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4020 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 4022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4024 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4026 */	0x0 , 
			0x0,		/* 0 */
/* 4028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4036 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4038) */
/* 4038 */	NdrFcShort( 0xc ),	/* 12 */
/* 4040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4042 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4046 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4050) */
/* 4048 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4047) */
/* 4050 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4052 */	NdrFcShort( 0xc ),	/* 12 */
/* 4054 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4056 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4062 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4064 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4066 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4068 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4070 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4072 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4074 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4076 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4078 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4080 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4082 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4086) */
/* 4086 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4088 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 4090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4092 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4094 */	0x0 , 
			0x0,		/* 0 */
/* 4096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4106) */
/* 4106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4110 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4114 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (4008) */
/* 4116 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4115) */
/* 4118 */	
			0x11, 0x0,	/* FC_RP */
/* 4120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4122) */
/* 4122 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4124 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 4126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4128 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4130 */	0x0 , 
			0x0,		/* 0 */
/* 4132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4142) */
/* 4142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4146 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4150 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4154) */
/* 4152 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4151) */
/* 4154 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4158 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4160 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4168 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4170 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4174 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4178) */
/* 4178 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 4182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4184 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4186 */	0x0 , 
			0x0,		/* 0 */
/* 4188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4198) */
/* 4198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4202 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4206 */	NdrFcShort( 0xff3a ),	/* Offset= -198 (4008) */
/* 4208 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4207) */
/* 4210 */	
			0x11, 0x0,	/* FC_RP */
/* 4212 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4214) */
/* 4214 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4216 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 4218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4220 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4222 */	0x0 , 
			0x0,		/* 0 */
/* 4224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4234) */
/* 4234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4238 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4242 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4246) */
/* 4244 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4243) */
/* 4246 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4250 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4252 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4258 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4260 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4262 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4264 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 4266 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4268 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4270) */
/* 4270 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4272 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 4274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4276 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4278 */	0x0 , 
			0x0,		/* 0 */
/* 4280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4290) */
/* 4290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4292 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4294 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4298 */	NdrFcShort( 0xa4 ),	/* Offset= 164 (4462) */
/* 4300 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4304 */	NdrFcShort( 0x176 ),	/* Offset= 374 (4678) */
/* 4306 */	NdrFcLong( 0x3 ),	/* 3 */
/* 4310 */	NdrFcShort( 0x24a ),	/* Offset= 586 (4896) */
/* 4312 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 4316 */	NdrFcShort( 0x29e ),	/* Offset= 670 (4986) */
/* 4318 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4317) */
/* 4320 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4322 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4324 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4326 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4332 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4334 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4336 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4338 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4342 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4344 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4346 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4352 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4354 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4356 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4358 */	NdrFcShort( 0xc ),	/* 12 */
/* 4360 */	NdrFcShort( 0xc ),	/* 12 */
/* 4362 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4364 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4366 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4368 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4370 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4372 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4374 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4376 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4380 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4382 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4386 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 4388 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4390 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 4396 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 4398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4402 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 4406 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4408 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 4410 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4420 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4422 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4424 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4426 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4428 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4430 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4436 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4438 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4440 */	NdrFcShort( 0xc ),	/* 12 */
/* 4442 */	NdrFcShort( 0xc ),	/* 12 */
/* 4444 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4446 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4448 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4450 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4452 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4454 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4456 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4458 */	0x0,		/* 0 */
			NdrFcShort( 0xff75 ),	/* Offset= -139 (4320) */
			0x5b,		/* FC_END */
/* 4462 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4466 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4468 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4470 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4472 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4474 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4476 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (4386) */
/* 4478 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4480 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 4482 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4484 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4486 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4494 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4496 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4498 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4500 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4502 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4504 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4508 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4514 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4516 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4518 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4520 */	NdrFcShort( 0xc ),	/* 12 */
/* 4522 */	NdrFcShort( 0xc ),	/* 12 */
/* 4524 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4528 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4534 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4536 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4538 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4540 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4542 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4544 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4546 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4548 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4550 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4552 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4554 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4556 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4558 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4560 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4562 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4564 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4566 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4568 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4570 */	0x0,		/* 0 */
			NdrFcShort( 0xee31 ),	/* Offset= -4559 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4574 */	0x0,		/* 0 */
			NdrFcShort( 0xee2d ),	/* Offset= -4563 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4578 */	0x0,		/* 0 */
			NdrFcShort( 0xee29 ),	/* Offset= -4567 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4582 */	0x0,		/* 0 */
			NdrFcShort( 0xee25 ),	/* Offset= -4571 (12) */
			0x5b,		/* FC_END */
/* 4586 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 4588 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4590 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4594 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 4596 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 4606 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4608 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 4610 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4620 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4622 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4624 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4626 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4628 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4630 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4636 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4638 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4640 */	NdrFcShort( 0xc ),	/* 12 */
/* 4642 */	NdrFcShort( 0xc ),	/* 12 */
/* 4644 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4646 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4648 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4650 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4652 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4654 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4656 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4658 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4660 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4662 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4664 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4666 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4668 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4670 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4672 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4674 */	0x0,		/* 0 */
			NdrFcShort( 0xff3f ),	/* Offset= -193 (4482) */
			0x5b,		/* FC_END */
/* 4678 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4682 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4684 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4686 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4690 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4692 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (4586) */
/* 4694 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4696 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 4698 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4700 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4702 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4704 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4710 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4712 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4714 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4718 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4720 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4722 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4724 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4730 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4732 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4734 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4736 */	NdrFcShort( 0xc ),	/* 12 */
/* 4738 */	NdrFcShort( 0xc ),	/* 12 */
/* 4740 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4742 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4744 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4746 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4750 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4752 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4754 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4756 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4758 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4760 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4762 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4764 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4766 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4768 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4770 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4772 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4774 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4776 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4778 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4780 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4782 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4784 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4786 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4788 */	NdrFcShort( 0xed58 ),	/* Offset= -4776 (12) */
/* 4790 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4792 */	NdrFcShort( 0xed54 ),	/* Offset= -4780 (12) */
/* 4794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4796 */	NdrFcShort( 0xed50 ),	/* Offset= -4784 (12) */
/* 4798 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4800 */	NdrFcShort( 0xed4c ),	/* Offset= -4788 (12) */
/* 4802 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4804 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 4806 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4808 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 4814 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 4816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4820 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 4824 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4826 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 4828 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4840 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4846 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4848 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4854 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4856 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4858 */	NdrFcShort( 0xc ),	/* 12 */
/* 4860 */	NdrFcShort( 0xc ),	/* 12 */
/* 4862 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4864 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4866 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4870 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4872 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4874 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4876 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4878 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4880 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4882 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4884 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4886 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4888 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4890 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4892 */	0x0,		/* 0 */
			NdrFcShort( 0xff3d ),	/* Offset= -195 (4698) */
			0x5b,		/* FC_END */
/* 4896 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4900 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4908 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4910 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (4804) */
/* 4912 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4914 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 4916 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4918 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4920 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4922 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4924 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4926 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4928 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4930 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4932 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4934 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4936 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4938 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4940 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4942 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 4944 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4946 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 4952 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 4954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4958 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 4962 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4964 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 4966 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4970 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4972 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4974 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4976 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4978 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4980 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4982 */	0x0,		/* 0 */
			NdrFcShort( 0xffbd ),	/* Offset= -67 (4916) */
			0x5b,		/* FC_END */
/* 4986 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4990 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4992 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4998 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5000 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (4942) */
/* 5002 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5004 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 5006 */	
			0x11, 0x0,	/* FC_RP */
/* 5008 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5010) */
/* 5010 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5012 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 5014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5016 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5018 */	0x0 , 
			0x0,		/* 0 */
/* 5020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5030) */
/* 5030 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5032 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5034 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5038 */	NdrFcShort( 0x3c ),	/* Offset= 60 (5098) */
/* 5040 */	NdrFcLong( 0x2 ),	/* 2 */
/* 5044 */	NdrFcShort( 0x56 ),	/* Offset= 86 (5130) */
/* 5046 */	NdrFcLong( 0x3 ),	/* 3 */
/* 5050 */	NdrFcShort( 0x7c ),	/* Offset= 124 (5174) */
/* 5052 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5051) */
/* 5054 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 5056 */	NdrFcShort( 0xc ),	/* 12 */
/* 5058 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5060 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5062 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5064 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5070 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 5074 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5076 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 5078 */	NdrFcShort( 0xc ),	/* 12 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5088 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5090 */	NdrFcShort( 0xf026 ),	/* Offset= -4058 (1032) */
/* 5092 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5094 */	0x0,		/* 0 */
			NdrFcShort( 0xf04d ),	/* Offset= -4019 (1076) */
			0x5b,		/* FC_END */
/* 5098 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5100 */	NdrFcShort( 0xc ),	/* 12 */
/* 5102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5110 */	0x11, 0x0,	/* FC_RP */
/* 5112 */	NdrFcShort( 0xecaa ),	/* Offset= -4950 (162) */
/* 5114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5120 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5122 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (5054) */
/* 5124 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5130 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5132 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5134 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5136 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	0x12, 0x0,	/* FC_UP */
/* 5144 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (5130) */
/* 5146 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5152 */	0x12, 0x0,	/* FC_UP */
/* 5154 */	NdrFcShort( 0xec80 ),	/* Offset= -4992 (162) */
/* 5156 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5158 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5162 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5164 */	NdrFcShort( 0xf01e ),	/* Offset= -4066 (1098) */
/* 5166 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5168 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5170 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5174 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5176 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5178 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5180 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	0x12, 0x0,	/* FC_UP */
/* 5188 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (5130) */
/* 5190 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5196 */	0x12, 0x0,	/* FC_UP */
/* 5198 */	NdrFcShort( 0xec54 ),	/* Offset= -5036 (162) */
/* 5200 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5206 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5208 */	NdrFcShort( 0xeff2 ),	/* Offset= -4110 (1098) */
/* 5210 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5212 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5214 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5216 */	0x12, 0x0,	/* FC_UP */
/* 5218 */	NdrFcShort( 0xf7d6 ),	/* Offset= -2090 (3128) */
/* 5220 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5222 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5224 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5226 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 5228 */	
			0x11, 0x0,	/* FC_RP */
/* 5230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5232) */
/* 5232 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5234 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 5236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5238 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5240 */	0x0 , 
			0x0,		/* 0 */
/* 5242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5252) */
/* 5252 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5254 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5256 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5260 */	NdrFcShort( 0x10 ),	/* Offset= 16 (5276) */
/* 5262 */	NdrFcLong( 0x2 ),	/* 2 */
/* 5266 */	NdrFcShort( 0x4a ),	/* Offset= 74 (5340) */
/* 5268 */	NdrFcLong( 0x3 ),	/* 3 */
/* 5272 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (5756) */
/* 5274 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5273) */
/* 5276 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5278 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5282 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5282) */
/* 5284 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5286 */	NdrFcShort( 0xeb66 ),	/* Offset= -5274 (12) */
/* 5288 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5290 */	NdrFcShort( 0xebd8 ),	/* Offset= -5160 (130) */
/* 5292 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5294 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5296 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 5298 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5300 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 5302 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5304 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5306 */	NdrFcShort( 0xeb52 ),	/* Offset= -5294 (12) */
/* 5308 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5310 */	NdrFcShort( 0xebc4 ),	/* Offset= -5180 (130) */
/* 5312 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5314 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 5316 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5318 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5320 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5322 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5324 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5330 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 5334 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5336 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (5300) */
/* 5338 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5340 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5342 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0xc ),	/* Offset= 12 (5358) */
/* 5348 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 5350 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5352 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 5354 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 5356 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 5358 */	
			0x12, 0x0,	/* FC_UP */
/* 5360 */	NdrFcShort( 0xebb2 ),	/* Offset= -5198 (162) */
/* 5362 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5364 */	NdrFcShort( 0xffce ),	/* Offset= -50 (5314) */
/* 5366 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5368 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5372 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5374 */	0x0 , 
			0x0,		/* 0 */
/* 5376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5386) */
/* 5386 */	NdrFcShort( 0xc ),	/* 12 */
/* 5388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5390 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5394 */	NdrFcShort( 0x13a ),	/* Offset= 314 (5708) */
/* 5396 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5395) */
/* 5398 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5400 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5402 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5404 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5406 */	0x0 , 
			0x0,		/* 0 */
/* 5408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5418) */
/* 5418 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5420 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5422 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5426 */	NdrFcShort( 0x4e ),	/* Offset= 78 (5504) */
/* 5428 */	NdrFcLong( 0x2 ),	/* 2 */
/* 5432 */	NdrFcShort( 0x5c ),	/* Offset= 92 (5524) */
/* 5434 */	NdrFcLong( 0x3 ),	/* 3 */
/* 5438 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (5678) */
/* 5440 */	NdrFcLong( 0x4 ),	/* 4 */
/* 5444 */	NdrFcShort( 0xfa ),	/* Offset= 250 (5694) */
/* 5446 */	NdrFcLong( 0x5 ),	/* 5 */
/* 5450 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (5694) */
/* 5452 */	NdrFcLong( 0x6 ),	/* 6 */
/* 5456 */	NdrFcShort( 0xee ),	/* Offset= 238 (5694) */
/* 5458 */	NdrFcLong( 0x7 ),	/* 7 */
/* 5462 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (5694) */
/* 5464 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5463) */
/* 5466 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5468 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5472 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5472) */
/* 5474 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5476 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 5478 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 5480 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5482 */	0x0,		/* 0 */
			NdrFcShort( 0xee89 ),	/* Offset= -4471 (1012) */
			0x5b,		/* FC_END */
/* 5486 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5492 */	NdrFcShort( 0x8 ),	/* Offset= 8 (5500) */
/* 5494 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5496 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (5466) */
			0x5b,		/* FC_END */
/* 5500 */	
			0x12, 0x0,	/* FC_UP */
/* 5502 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (5486) */
/* 5504 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5506 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0xa ),	/* Offset= 10 (5520) */
/* 5512 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 5514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5516 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (5486) */
/* 5518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5520 */	
			0x12, 0x0,	/* FC_UP */
/* 5522 */	NdrFcShort( 0xeb10 ),	/* Offset= -5360 (162) */
/* 5524 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5526 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5530 */	NdrFcShort( 0xa ),	/* Offset= 10 (5540) */
/* 5532 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5534 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 5536 */	0x3e,		/* FC_STRUCTPAD2 */
			0x36,		/* FC_POINTER */
/* 5538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5540 */	
			0x12, 0x0,	/* FC_UP */
/* 5542 */	NdrFcShort( 0xeafc ),	/* Offset= -5380 (162) */
/* 5544 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 5546 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5548 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 5550 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 5552 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 5554 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5556 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 5558 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5560 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5562 */	0x0 , 
			0x0,		/* 0 */
/* 5564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5572 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 5574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5578 */	0x0 , 
			0x0,		/* 0 */
/* 5580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5588 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 5590 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5594 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5596 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5598 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5602 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5604 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (5552) */
/* 5606 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 5608 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 5610 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5612 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5616 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5618 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5624 */	0x12, 0x0,	/* FC_UP */
/* 5626 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (5612) */
/* 5628 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5634 */	0x12, 0x0,	/* FC_UP */
/* 5636 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5590) */
/* 5638 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5640 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 5642 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5644 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5648 */	NdrFcShort( 0x12 ),	/* Offset= 18 (5666) */
/* 5650 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5652 */	0x0,		/* 0 */
			NdrFcShort( 0xff93 ),	/* Offset= -109 (5544) */
			0x6,		/* FC_SHORT */
/* 5656 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 5658 */	0x6,		/* FC_SHORT */
			0x36,		/* FC_POINTER */
/* 5660 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 5662 */	0x2,		/* FC_CHAR */
			0x3f,		/* FC_STRUCTPAD3 */
/* 5664 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5666 */	
			0x12, 0x0,	/* FC_UP */
/* 5668 */	NdrFcShort( 0xea7e ),	/* Offset= -5506 (162) */
/* 5670 */	
			0x12, 0x0,	/* FC_UP */
/* 5672 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (5612) */
/* 5674 */	
			0x12, 0x0,	/* FC_UP */
/* 5676 */	NdrFcShort( 0xffde ),	/* Offset= -34 (5642) */
/* 5678 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5680 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5684 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5684) */
/* 5686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5688 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5690 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (5642) */
			0x5b,		/* FC_END */
/* 5694 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5696 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5700) */
/* 5702 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5704 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 5706 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 5708 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5710 */	NdrFcShort( 0xc ),	/* 12 */
/* 5712 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5714 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5720 */	0x12, 0x0,	/* FC_UP */
/* 5722 */	NdrFcShort( 0xfebc ),	/* Offset= -324 (5398) */
/* 5724 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5726 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5728 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5730 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 5732 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5734 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5736 */	NdrFcShort( 0xc ),	/* 12 */
/* 5738 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5740 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5746 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 5750 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5752 */	NdrFcShort( 0xfe3c ),	/* Offset= -452 (5300) */
/* 5754 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5756 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5758 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5760 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5762 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5768 */	0x12, 0x0,	/* FC_UP */
/* 5770 */	NdrFcShort( 0xea18 ),	/* Offset= -5608 (162) */
/* 5772 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5778 */	0x12, 0x0,	/* FC_UP */
/* 5780 */	NdrFcShort( 0xfe62 ),	/* Offset= -414 (5366) */
/* 5782 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5784 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5786 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5788 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 5790 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (5730) */
/* 5792 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5794 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5796 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5800 */	
			0x11, 0x0,	/* FC_RP */
/* 5802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5804) */
/* 5804 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5806 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 5808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5810 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5812 */	0x0 , 
			0x0,		/* 0 */
/* 5814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5824) */
/* 5824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5828 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5832 */	NdrFcShort( 0x4 ),	/* Offset= 4 (5836) */
/* 5834 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5833) */
/* 5836 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 5838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5840 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5844 */	
			0x11, 0x0,	/* FC_RP */
/* 5846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5848) */
/* 5848 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5850 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 5852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5854 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5856 */	0x0 , 
			0x0,		/* 0 */
/* 5858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5866 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5868) */
/* 5868 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5870 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5872 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5876 */	NdrFcShort( 0xa ),	/* Offset= 10 (5886) */
/* 5878 */	NdrFcLong( 0x2 ),	/* 2 */
/* 5882 */	NdrFcShort( 0x1c ),	/* Offset= 28 (5910) */
/* 5884 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5883) */
/* 5886 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5888 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5890 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5898 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5900 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5902 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5904 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5906 */	0x0,		/* 0 */
			NdrFcShort( 0xe8f9 ),	/* Offset= -5895 (12) */
			0x5b,		/* FC_END */
/* 5910 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 5912 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5914 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 5916 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5922 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5924 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5926 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5928 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5930 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5932 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5934 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5936 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 5938 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5940 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5942 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5944 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5946 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 5948 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5950 */	0x0,		/* 0 */
			NdrFcShort( 0xe8cd ),	/* Offset= -5939 (12) */
			0x8,		/* FC_LONG */
/* 5954 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5956 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 5958 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 5960 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5962) */
/* 5962 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5964 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 5966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5968 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5970 */	0x0 , 
			0x0,		/* 0 */
/* 5972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5980 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5982) */
/* 5982 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5984 */	NdrFcShort( 0xf ),	/* 15 */
/* 5986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5990 */	NdrFcShort( 0x58 ),	/* Offset= 88 (6078) */
/* 5992 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5996 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (6242) */
/* 5998 */	NdrFcLong( 0x2 ),	/* 2 */
/* 6002 */	NdrFcShort( 0x118 ),	/* Offset= 280 (6282) */
/* 6004 */	NdrFcLong( 0x3 ),	/* 3 */
/* 6008 */	NdrFcShort( 0x16a ),	/* Offset= 362 (6370) */
/* 6010 */	NdrFcLong( 0x4 ),	/* 4 */
/* 6014 */	NdrFcShort( 0x164 ),	/* Offset= 356 (6370) */
/* 6016 */	NdrFcLong( 0x5 ),	/* 5 */
/* 6020 */	NdrFcShort( 0x1b6 ),	/* Offset= 438 (6458) */
/* 6022 */	NdrFcLong( 0x6 ),	/* 6 */
/* 6026 */	NdrFcShort( 0x214 ),	/* Offset= 532 (6558) */
/* 6028 */	NdrFcLong( 0x7 ),	/* 7 */
/* 6032 */	NdrFcShort( 0x28c ),	/* Offset= 652 (6684) */
/* 6034 */	NdrFcLong( 0x8 ),	/* 8 */
/* 6038 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (6738) */
/* 6040 */	NdrFcLong( 0x9 ),	/* 9 */
/* 6044 */	NdrFcShort( 0x308 ),	/* Offset= 776 (6820) */
/* 6046 */	NdrFcLong( 0xa ),	/* 10 */
/* 6050 */	NdrFcShort( 0x35c ),	/* Offset= 860 (6910) */
/* 6052 */	NdrFcLong( 0xfffffffa ),	/* -6 */
/* 6056 */	NdrFcShort( 0x3c4 ),	/* Offset= 964 (7020) */
/* 6058 */	NdrFcLong( 0xfffffffb ),	/* -5 */
/* 6062 */	NdrFcShort( 0x40e ),	/* Offset= 1038 (7100) */
/* 6064 */	NdrFcLong( 0xfffffffc ),	/* -4 */
/* 6068 */	NdrFcShort( 0x40c ),	/* Offset= 1036 (7104) */
/* 6070 */	NdrFcLong( 0xfffffffe ),	/* -2 */
/* 6074 */	NdrFcShort( 0x4 ),	/* Offset= 4 (6078) */
/* 6076 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6075) */
/* 6078 */	
			0x12, 0x0,	/* FC_UP */
/* 6080 */	NdrFcShort( 0x6e ),	/* Offset= 110 (6190) */
/* 6082 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 6084 */	NdrFcShort( 0x80 ),	/* 128 */
/* 6086 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 6088 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 6090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6094 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6096 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6098 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 6100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6102 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6104 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6108 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 6110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6114 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6116 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6118 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 6120 */	NdrFcShort( 0xc ),	/* 12 */
/* 6122 */	NdrFcShort( 0xc ),	/* 12 */
/* 6124 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6126 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6128 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 6130 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6132 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6134 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6136 */	0x0,		/* 0 */
			NdrFcShort( 0xe813 ),	/* Offset= -6125 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6140 */	0x0,		/* 0 */
			NdrFcShort( 0xe80f ),	/* Offset= -6129 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6144 */	0x0,		/* 0 */
			NdrFcShort( 0xe80b ),	/* Offset= -6133 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6148 */	0x0,		/* 0 */
			NdrFcShort( 0xe807 ),	/* Offset= -6137 (12) */
			0xb,		/* FC_HYPER */
/* 6152 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6154 */	0x0,		/* 0 */
			NdrFcShort( 0xfec1 ),	/* Offset= -319 (5836) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6158 */	0x0,		/* 0 */
			NdrFcShort( 0xfebd ),	/* Offset= -323 (5836) */
			0x8,		/* FC_LONG */
/* 6162 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 6164 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 6166 */	NdrFcShort( 0x80 ),	/* 128 */
/* 6168 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6170 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6172 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6174 */	0x0 , 
			0x0,		/* 0 */
/* 6176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6184 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6186 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (6082) */
/* 6188 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6190 */	
			0x18,		/* FC_CPSTRUCT */
			0x7,		/* 7 */
/* 6192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6194 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (6164) */
/* 6196 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 6198 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 6200 */	NdrFcShort( 0x80 ),	/* 128 */
/* 6202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6210 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6214 */	NdrFcShort( 0xc ),	/* 12 */
/* 6216 */	NdrFcShort( 0xc ),	/* 12 */
/* 6218 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6222 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6224 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6226 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6228 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6230 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6232 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6234 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6238 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 6240 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 6242 */	
			0x12, 0x0,	/* FC_UP */
/* 6244 */	NdrFcShort( 0x1c ),	/* Offset= 28 (6272) */
/* 6246 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 6248 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6250 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6252 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6254 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6256 */	0x0 , 
			0x0,		/* 0 */
/* 6258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6266 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6268 */	NdrFcShort( 0xe964 ),	/* Offset= -5788 (480) */
/* 6270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6272 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 6274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6276 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (6246) */
/* 6278 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6280 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6282 */	
			0x12, 0x0,	/* FC_UP */
/* 6284 */	NdrFcShort( 0x3a ),	/* Offset= 58 (6342) */
/* 6286 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 6288 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6290 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 6292 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6302 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 6304 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6306 */	0x0,		/* 0 */
			NdrFcShort( 0xfe29 ),	/* Offset= -471 (5836) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6310 */	0x0,		/* 0 */
			NdrFcShort( 0xe765 ),	/* Offset= -6299 (12) */
			0xb,		/* FC_HYPER */
/* 6314 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 6316 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 6318 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6320 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6322 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6324 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6326 */	0x0 , 
			0x0,		/* 0 */
/* 6328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6338 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (6286) */
/* 6340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6342 */	
			0x18,		/* FC_CPSTRUCT */
			0x7,		/* 7 */
/* 6344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6346 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (6316) */
/* 6348 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 6350 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 6352 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6362 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6364 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6366 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 6368 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 6370 */	
			0x12, 0x0,	/* FC_UP */
/* 6372 */	NdrFcShort( 0x3a ),	/* Offset= 58 (6430) */
/* 6374 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 6376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6378 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 6380 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 6382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6386 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6388 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6390 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 6392 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6394 */	NdrFcShort( 0xe712 ),	/* Offset= -6382 (12) */
/* 6396 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6398 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (5836) */
/* 6400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6402 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6404 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 6406 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6408 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6410 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6412 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6414 */	0x0 , 
			0x0,		/* 0 */
/* 6416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6424 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6426 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (6374) */
/* 6428 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6430 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 6432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6434 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (6404) */
/* 6436 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 6438 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 6440 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6450 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6452 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6454 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 6456 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 6458 */	
			0x12, 0x0,	/* FC_UP */
/* 6460 */	NdrFcShort( 0x54 ),	/* Offset= 84 (6544) */
/* 6462 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6464 */	NdrFcShort( 0x44 ),	/* 68 */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6468 */	NdrFcShort( 0x16 ),	/* Offset= 22 (6490) */
/* 6470 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6472 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (5836) */
/* 6474 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6476 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 6478 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 6480 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6482 */	0x0,		/* 0 */
			NdrFcShort( 0xe6b9 ),	/* Offset= -6471 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6486 */	0x0,		/* 0 */
			NdrFcShort( 0xe6b5 ),	/* Offset= -6475 (12) */
			0x5b,		/* FC_END */
/* 6490 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6492 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6494 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6496 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6498 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6500 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6502 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 6504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6506 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6508 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 6510 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6512 */	0x0 , 
			0x0,		/* 0 */
/* 6514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6522 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6526 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6528 */	0x0 , 
			0x0,		/* 0 */
/* 6530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6538 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6540 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (6462) */
/* 6542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6544 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6546 */	NdrFcShort( 0xc ),	/* 12 */
/* 6548 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (6502) */
/* 6550 */	NdrFcShort( 0x0 ),	/* Offset= 0 (6550) */
/* 6552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6554 */	NdrFcShort( 0xfd32 ),	/* Offset= -718 (5836) */
/* 6556 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 6558 */	
			0x12, 0x0,	/* FC_UP */
/* 6560 */	NdrFcShort( 0x70 ),	/* Offset= 112 (6672) */
/* 6562 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 6564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6566 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 6568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6570 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6572 */	0x0 , 
			0x0,		/* 0 */
/* 6574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6582 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 6584 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6586 */	NdrFcShort( 0x50 ),	/* 80 */
/* 6588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6590 */	NdrFcShort( 0x1c ),	/* Offset= 28 (6618) */
/* 6592 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 6594 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 6596 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6598 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (5836) */
/* 6600 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6602 */	NdrFcShort( 0xfd02 ),	/* Offset= -766 (5836) */
/* 6604 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6606 */	0x0,		/* 0 */
			NdrFcShort( 0xfcfd ),	/* Offset= -771 (5836) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6610 */	0x0,		/* 0 */
			NdrFcShort( 0xe639 ),	/* Offset= -6599 (12) */
			0x40,		/* FC_STRUCTPAD4 */
/* 6614 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 6616 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6618 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6620 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6622 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6624 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6626 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 6628 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (6562) */
/* 6630 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 6632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6634 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6636 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6638 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6640 */	0x0 , 
			0x0,		/* 0 */
/* 6642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6650 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6654 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6656 */	0x0 , 
			0x0,		/* 0 */
/* 6658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6668 */	NdrFcShort( 0xffac ),	/* Offset= -84 (6584) */
/* 6670 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6672 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6676 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (6630) */
/* 6678 */	NdrFcShort( 0x0 ),	/* Offset= 0 (6678) */
/* 6680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6684 */	
			0x12, 0x0,	/* FC_UP */
/* 6686 */	NdrFcShort( 0x2a ),	/* Offset= 42 (6728) */
/* 6688 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 6690 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6692 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6694 */	NdrFcShort( 0xe5e6 ),	/* Offset= -6682 (12) */
/* 6696 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6698 */	0x0,		/* 0 */
			NdrFcShort( 0xfca1 ),	/* Offset= -863 (5836) */
			0x5b,		/* FC_END */
/* 6702 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 6704 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6706 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6708 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6710 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6712 */	0x0 , 
			0x0,		/* 0 */
/* 6714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6722 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6724 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (6688) */
/* 6726 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6728 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 6730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6732 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (6702) */
/* 6734 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6738 */	
			0x12, 0x0,	/* FC_UP */
/* 6740 */	NdrFcShort( 0x44 ),	/* Offset= 68 (6808) */
/* 6742 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6744 */	NdrFcShort( 0x28 ),	/* 40 */
/* 6746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6748 */	NdrFcShort( 0xe ),	/* Offset= 14 (6762) */
/* 6750 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6752 */	NdrFcShort( 0xe5ac ),	/* Offset= -6740 (12) */
/* 6754 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6756 */	0x0,		/* 0 */
			NdrFcShort( 0xfc67 ),	/* Offset= -921 (5836) */
			0x36,		/* FC_POINTER */
/* 6760 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 6762 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6764 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6766 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 6768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6770 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6772 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6776 */	0x0 , 
			0x0,		/* 0 */
/* 6778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6786 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6790 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6792 */	0x0 , 
			0x0,		/* 0 */
/* 6794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6802 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6804 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (6742) */
/* 6806 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6808 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6812 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (6766) */
/* 6814 */	NdrFcShort( 0x0 ),	/* Offset= 0 (6814) */
/* 6816 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6818 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6820 */	
			0x12, 0x0,	/* FC_UP */
/* 6822 */	NdrFcShort( 0x4c ),	/* Offset= 76 (6898) */
/* 6824 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6826 */	NdrFcShort( 0x38 ),	/* 56 */
/* 6828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6830 */	NdrFcShort( 0x12 ),	/* Offset= 18 (6848) */
/* 6832 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 6834 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6836 */	NdrFcShort( 0xfc18 ),	/* Offset= -1000 (5836) */
/* 6838 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6840 */	NdrFcShort( 0xe554 ),	/* Offset= -6828 (12) */
/* 6842 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 6844 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 6846 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6848 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6850 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6852 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6854 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6856 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 6858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6860 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6862 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6866 */	0x0 , 
			0x0,		/* 0 */
/* 6868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6876 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6880 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6882 */	0x0 , 
			0x0,		/* 0 */
/* 6884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6892 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6894 */	NdrFcShort( 0xffba ),	/* Offset= -70 (6824) */
/* 6896 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6898 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6902 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (6856) */
/* 6904 */	NdrFcShort( 0x0 ),	/* Offset= 0 (6904) */
/* 6906 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6908 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6910 */	
			0x12, 0x0,	/* FC_UP */
/* 6912 */	NdrFcShort( 0x60 ),	/* Offset= 96 (7008) */
/* 6914 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 6916 */	NdrFcShort( 0x58 ),	/* 88 */
/* 6918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6920 */	NdrFcShort( 0x1e ),	/* Offset= 30 (6950) */
/* 6922 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 6924 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 6926 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6928 */	NdrFcShort( 0xfbbc ),	/* Offset= -1092 (5836) */
/* 6930 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6932 */	NdrFcShort( 0xfbb8 ),	/* Offset= -1096 (5836) */
/* 6934 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6936 */	0x0,		/* 0 */
			NdrFcShort( 0xfbb3 ),	/* Offset= -1101 (5836) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6940 */	0x0,		/* 0 */
			NdrFcShort( 0xe4ef ),	/* Offset= -6929 (12) */
			0x40,		/* FC_STRUCTPAD4 */
/* 6944 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 6946 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 6948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6950 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6952 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6954 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6956 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6958 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 6960 */	NdrFcShort( 0xfe72 ),	/* Offset= -398 (6562) */
/* 6962 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6964 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6966 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 6968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6970 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 6972 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 6974 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6976 */	0x0 , 
			0x0,		/* 0 */
/* 6978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6986 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6990 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6992 */	0x0 , 
			0x0,		/* 0 */
/* 6994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7002 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7004 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (6914) */
/* 7006 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7008 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 7010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7012 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (6966) */
/* 7014 */	NdrFcShort( 0x0 ),	/* Offset= 0 (7014) */
/* 7016 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7018 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7020 */	
			0x12, 0x0,	/* FC_UP */
/* 7022 */	NdrFcShort( 0x42 ),	/* Offset= 66 (7088) */
/* 7024 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 7026 */	NdrFcShort( 0x28 ),	/* 40 */
/* 7028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7030 */	NdrFcShort( 0xc ),	/* Offset= 12 (7042) */
/* 7032 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 7034 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7036 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7038 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 7040 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 7042 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7044 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7046 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 7048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7050 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 7052 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 7054 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7056 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7062 */	NdrFcLong( 0x100 ),	/* 256 */
/* 7066 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 7070 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 7072 */	0x0 , 
			0x0,		/* 0 */
/* 7074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7082 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7084 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (7024) */
/* 7086 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7088 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 7090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7092 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (7046) */
/* 7094 */	NdrFcShort( 0x0 ),	/* Offset= 0 (7094) */
/* 7096 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7098 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7100 */	
			0x12, 0x0,	/* FC_UP */
/* 7102 */	NdrFcShort( 0xe646 ),	/* Offset= -6586 (516) */
/* 7104 */	
			0x12, 0x0,	/* FC_UP */
/* 7106 */	NdrFcShort( 0x2c ),	/* Offset= 44 (7150) */
/* 7108 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 7110 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7112 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 7114 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 7116 */	0x0,		/* 0 */
			NdrFcShort( 0xe43f ),	/* Offset= -7105 (12) */
			0xb,		/* FC_HYPER */
/* 7120 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7124 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 7126 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7128 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 7130 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 7132 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7134 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7140 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 7144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7146 */	NdrFcShort( 0xffda ),	/* Offset= -38 (7108) */
/* 7148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7150 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 7152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7154 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (7124) */
/* 7156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7160 */	
			0x11, 0x0,	/* FC_RP */
/* 7162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7164) */
/* 7164 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7166 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7170 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7172 */	0x0 , 
			0x0,		/* 0 */
/* 7174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7182 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7184) */
/* 7184 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7188 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7192 */	NdrFcShort( 0x46 ),	/* Offset= 70 (7262) */
/* 7194 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7193) */
/* 7196 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 7198 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7200 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7204 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7206 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7212 */	NdrFcLong( 0x100 ),	/* 256 */
/* 7216 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 7218 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 7220 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7222 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7224 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7226 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7228 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7234 */	NdrFcLong( 0x100 ),	/* 256 */
/* 7238 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 7240 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 7242 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7244 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7246 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7248 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7250 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7256 */	NdrFcLong( 0x100 ),	/* 256 */
/* 7260 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 7262 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7264 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7266 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7268 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7270 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7272 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7274 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7276 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7278 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7284 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7286 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7288 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7290 */	NdrFcShort( 0xc ),	/* 12 */
/* 7292 */	NdrFcShort( 0xc ),	/* 12 */
/* 7294 */	0x14, 0x8,	/* FC_FP [simple_pointer] */
/* 7296 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7298 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7300 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7302 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7304 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7306 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (7196) */
/* 7308 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7310 */	NdrFcShort( 0x1c ),	/* 28 */
/* 7312 */	NdrFcShort( 0x1c ),	/* 28 */
/* 7314 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7316 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (7218) */
/* 7318 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7320 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7322 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7324 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7326 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (7240) */
/* 7328 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7330 */	NdrFcShort( 0x28 ),	/* 40 */
/* 7332 */	NdrFcShort( 0x28 ),	/* 40 */
/* 7334 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7336 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7338 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7340 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7342 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7344 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7348 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7350 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7354 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7358 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7360 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 7362 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7364 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7366) */
/* 7366 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7368 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7372 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7374 */	0x0 , 
			0x0,		/* 0 */
/* 7376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7386) */
/* 7386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7390 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7394 */	NdrFcShort( 0xf2c6 ),	/* Offset= -3386 (4008) */
/* 7396 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7395) */
/* 7398 */	
			0x11, 0x0,	/* FC_RP */
/* 7400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7402) */
/* 7402 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7404 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7408 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7410 */	0x0 , 
			0x0,		/* 0 */
/* 7412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7422) */
/* 7422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7426 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7430 */	NdrFcShort( 0x2e ),	/* Offset= 46 (7476) */
/* 7432 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7431) */
/* 7434 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 7436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7438 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7442 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7444 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7446 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7450 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 7454 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 7458 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 7460 */	0x0 , 
			0x0,		/* 0 */
/* 7462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7470 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7472 */	NdrFcShort( 0xed7c ),	/* Offset= -4740 (2732) */
/* 7474 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7476 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7480 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7482 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7484 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7486 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7488 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7490 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (7434) */
/* 7492 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7494 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 7496 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7498 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7500) */
/* 7500 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7502 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7506 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7508 */	0x0 , 
			0x0,		/* 0 */
/* 7510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7518 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7520) */
/* 7520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7524 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7528 */	NdrFcShort( 0x40 ),	/* Offset= 64 (7592) */
/* 7530 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7529) */
/* 7532 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 7534 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7536 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7540 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7542 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7548 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 7552 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7554 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 7556 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7562 */	NdrFcShort( 0xc ),	/* 12 */
/* 7564 */	NdrFcShort( 0xc ),	/* 12 */
/* 7566 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7568 */	NdrFcShort( 0xed5a ),	/* Offset= -4774 (2794) */
/* 7570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7572 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7574 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7576 */	NdrFcShort( 0xed7c ),	/* Offset= -4740 (2836) */
/* 7578 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7580 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7582 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7584 */	NdrFcShort( 0xed8a ),	/* Offset= -4726 (2858) */
/* 7586 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 7588 */	0x0,		/* 0 */
			NdrFcShort( 0xedaf ),	/* Offset= -4689 (2900) */
			0x5b,		/* FC_END */
/* 7592 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7596 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7598 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7602 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7604 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7606 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (7532) */
/* 7608 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7610 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 7612 */	
			0x11, 0x0,	/* FC_RP */
/* 7614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7616) */
/* 7616 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7618 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7622 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7624 */	0x0 , 
			0x0,		/* 0 */
/* 7626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7634 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7636) */
/* 7636 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7640 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7644 */	NdrFcShort( 0x4 ),	/* Offset= 4 (7648) */
/* 7646 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7645) */
/* 7648 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7650 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7652 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7654 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7660 */	0x11, 0x0,	/* FC_RP */
/* 7662 */	NdrFcShort( 0xe2b4 ),	/* Offset= -7500 (162) */
/* 7664 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7668 */	NdrFcShort( 0xe218 ),	/* Offset= -7656 (12) */
/* 7670 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 7672 */	
			0x11, 0x0,	/* FC_RP */
/* 7674 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7676) */
/* 7676 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7678 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7682 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7684 */	0x0 , 
			0x0,		/* 0 */
/* 7686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7694 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7696) */
/* 7696 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7700 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7704 */	NdrFcShort( 0xa ),	/* Offset= 10 (7714) */
/* 7706 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7705) */
/* 7708 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 7710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7712 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 7714 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7716 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7718 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7720 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7722 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7724 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7726 */	0x12, 0x0,	/* FC_UP */
/* 7728 */	NdrFcShort( 0xe272 ),	/* Offset= -7566 (162) */
/* 7730 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7732 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7734 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7736 */	0x12, 0x0,	/* FC_UP */
/* 7738 */	NdrFcShort( 0xe3ca ),	/* Offset= -7222 (516) */
/* 7740 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 7742 */	0x0,		/* 0 */
			NdrFcShort( 0xe1cd ),	/* Offset= -7731 (12) */
			0x8,		/* FC_LONG */
/* 7746 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7748 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7750 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (7708) */
/* 7752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7754 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7756 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7758) */
/* 7758 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7760 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7764 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7766 */	0x0 , 
			0x0,		/* 0 */
/* 7768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7776 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7778) */
/* 7778 */	NdrFcShort( 0xc ),	/* 12 */
/* 7780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7782 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7786 */	NdrFcShort( 0x1e ),	/* Offset= 30 (7816) */
/* 7788 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7787) */
/* 7790 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 7792 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7794 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7798 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7800 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7806 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 7810 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 7812 */	NdrFcShort( 0xe188 ),	/* Offset= -7800 (12) */
/* 7814 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7816 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7818 */	NdrFcShort( 0xc ),	/* 12 */
/* 7820 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7822 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7828 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7830 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (7790) */
/* 7832 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7834 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7836 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7838 */	
			0x11, 0x0,	/* FC_RP */
/* 7840 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7842) */
/* 7842 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7844 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7848 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7850 */	0x0 , 
			0x0,		/* 0 */
/* 7852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7862) */
/* 7862 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7866 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7870 */	NdrFcShort( 0x2e ),	/* Offset= 46 (7916) */
/* 7872 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7871) */
/* 7874 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 7876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7878 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7880 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7882 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7884 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7886 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7890 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 7894 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7896 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 7898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7908 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7910 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7912 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7914 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7916 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 7918 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7920 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 7922 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7928 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7930 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7932 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 7934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7938 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7940 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (7874) */
/* 7942 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 7944 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7946 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 7948 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7950 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7952) */
/* 7952 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7954 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7958 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7960 */	0x0 , 
			0x0,		/* 0 */
/* 7962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7970 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7972) */
/* 7972 */	NdrFcShort( 0xc ),	/* 12 */
/* 7974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7976 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7980 */	NdrFcShort( 0x1e ),	/* Offset= 30 (8010) */
/* 7982 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7981) */
/* 7984 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 7986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7988 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7992 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7994 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8000 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 8004 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 8006 */	NdrFcShort( 0xf786 ),	/* Offset= -2170 (5836) */
/* 8008 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 8010 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8012 */	NdrFcShort( 0xc ),	/* 12 */
/* 8014 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8016 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8018 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8022 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8024 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (7984) */
/* 8026 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8028 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8030 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 8032 */	
			0x11, 0x0,	/* FC_RP */
/* 8034 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8036) */
/* 8036 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8038 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8042 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8044 */	0x0 , 
			0x0,		/* 0 */
/* 8046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8054 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8056) */
/* 8056 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8060 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8064 */	NdrFcShort( 0xf028 ),	/* Offset= -4056 (4008) */
/* 8066 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8065) */
/* 8068 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8070 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8072) */
/* 8072 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8074 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8078 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8080 */	0x0 , 
			0x0,		/* 0 */
/* 8082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8090 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8092) */
/* 8092 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8096 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8100 */	NdrFcShort( 0xf004 ),	/* Offset= -4092 (4008) */
/* 8102 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8101) */
/* 8104 */	
			0x11, 0x0,	/* FC_RP */
/* 8106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8108) */
/* 8108 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8110 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8116 */	0x0 , 
			0x0,		/* 0 */
/* 8118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8128) */
/* 8128 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8132 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8136 */	NdrFcShort( 0x4 ),	/* Offset= 4 (8140) */
/* 8138 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8137) */
/* 8140 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8142 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8144 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8146 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8148 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8150 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8152 */	0x11, 0x0,	/* FC_RP */
/* 8154 */	NdrFcShort( 0xe0c8 ),	/* Offset= -7992 (162) */
/* 8156 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8158 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 8160 */	NdrFcShort( 0xe02c ),	/* Offset= -8148 (12) */
/* 8162 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 8164 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8168) */
/* 8168 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8170 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8174 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8176 */	0x0 , 
			0x0,		/* 0 */
/* 8178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8188) */
/* 8188 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8192 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8196 */	NdrFcShort( 0xefa4 ),	/* Offset= -4188 (4008) */
/* 8198 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8197) */
/* 8200 */	
			0x11, 0x0,	/* FC_RP */
/* 8202 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8204) */
/* 8204 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8206 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8212 */	0x0 , 
			0x0,		/* 0 */
/* 8214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8224) */
/* 8224 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8228 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8232 */	NdrFcShort( 0x4 ),	/* Offset= 4 (8236) */
/* 8234 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8233) */
/* 8236 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8238 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8240 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8242 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8244 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8246 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8248 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8250 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8252 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8254 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 8256 */	NdrFcShort( 0xdfcc ),	/* Offset= -8244 (12) */
/* 8258 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 8260 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8262 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8264) */
/* 8264 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8266 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8270 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8272 */	0x0 , 
			0x0,		/* 0 */
/* 8274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8284) */
/* 8284 */	NdrFcShort( 0xc ),	/* 12 */
/* 8286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8288 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8292 */	NdrFcShort( 0x4 ),	/* Offset= 4 (8296) */
/* 8294 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8293) */
/* 8296 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 8298 */	NdrFcShort( 0xc ),	/* 12 */
/* 8300 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8302 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 8304 */	
			0x11, 0x0,	/* FC_RP */
/* 8306 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8308) */
/* 8308 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8310 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8314 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8316 */	0x0 , 
			0x0,		/* 0 */
/* 8318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8326 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8328) */
/* 8328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8332 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8336 */	NdrFcShort( 0x4 ),	/* Offset= 4 (8340) */
/* 8338 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8337) */
/* 8340 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8344 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8346 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8352 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8354 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8356 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8358 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8360 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8362 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8364 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8366 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8368 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 8370 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8374) */
/* 8374 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8376 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8380 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8382 */	0x0 , 
			0x0,		/* 0 */
/* 8384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8392 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8394) */
/* 8394 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8398 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8402 */	NdrFcShort( 0x1a ),	/* Offset= 26 (8428) */
/* 8404 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8403) */
/* 8406 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 8408 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8410 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 8412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8414 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 8416 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 8418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8422 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 8426 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 8428 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8430 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8432 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8434 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8440 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8442 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8444 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8448 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8450 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8452 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8454 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8456 */	NdrFcShort( 0xc ),	/* 12 */
/* 8458 */	NdrFcShort( 0xc ),	/* 12 */
/* 8460 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8462 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (8406) */
/* 8464 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8466 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8468 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 8470 */	
			0x11, 0x0,	/* FC_RP */
/* 8472 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8474) */
/* 8474 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8476 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8480 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8482 */	0x0 , 
			0x0,		/* 0 */
/* 8484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8492 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8494) */
/* 8494 */	NdrFcShort( 0xc ),	/* 12 */
/* 8496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8498 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8502 */	NdrFcShort( 0x1a ),	/* Offset= 26 (8528) */
/* 8504 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8503) */
/* 8506 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 8508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8510 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 8512 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8514 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 8516 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 8518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8522 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 8526 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 8528 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8530 */	NdrFcShort( 0xc ),	/* 12 */
/* 8532 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8534 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8540 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8542 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8544 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8550 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8552 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (8506) */
/* 8554 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8556 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8558 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 8560 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8562 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8564) */
/* 8564 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8566 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8570 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8572 */	0x0 , 
			0x0,		/* 0 */
/* 8574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8582 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8584) */
/* 8584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8588 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8592 */	NdrFcShort( 0xee18 ),	/* Offset= -4584 (4008) */
/* 8594 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8593) */
/* 8596 */	
			0x11, 0x0,	/* FC_RP */
/* 8598 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8600) */
/* 8600 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8602 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8606 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8608 */	0x0 , 
			0x0,		/* 0 */
/* 8610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8618 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8620) */
/* 8620 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8624 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8628 */	NdrFcShort( 0xee86 ),	/* Offset= -4474 (4154) */
/* 8630 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8629) */
/* 8632 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8634 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8636) */
/* 8636 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8638 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8642 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8644 */	0x0 , 
			0x0,		/* 0 */
/* 8646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8656) */
/* 8656 */	NdrFcShort( 0xc ),	/* 12 */
/* 8658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8660 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8664 */	NdrFcShort( 0x4 ),	/* Offset= 4 (8668) */
/* 8666 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8665) */
/* 8668 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8670 */	NdrFcShort( 0xc ),	/* 12 */
/* 8672 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8674 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8680 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8682 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (8506) */
/* 8684 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8688 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 8690 */	
			0x11, 0x0,	/* FC_RP */
/* 8692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8694) */
/* 8694 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8696 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8700 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8702 */	0x0 , 
			0x0,		/* 0 */
/* 8704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8712 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8714) */
/* 8714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8718 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8722 */	NdrFcShort( 0xed96 ),	/* Offset= -4714 (4008) */
/* 8724 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8723) */
/* 8726 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8730) */
/* 8730 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8732 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8736 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8738 */	0x0 , 
			0x0,		/* 0 */
/* 8740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8750) */
/* 8750 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8754 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8758 */	NdrFcShort( 0x46 ),	/* Offset= 70 (8828) */
/* 8760 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8759) */
/* 8762 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 8764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8766 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 8768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8770 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 8772 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 8774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8778 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 8782 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 8784 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 8786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8788 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 8790 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8792 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 8794 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 8796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8800 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 8804 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 8806 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 8808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8810 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 8812 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8814 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 8816 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 8818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8822 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 8826 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 8828 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8830 */	NdrFcShort( 0x20 ),	/* 32 */
/* 8832 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8834 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8840 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 8842 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 8844 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8846 */	NdrFcShort( 0xc ),	/* 12 */
/* 8848 */	NdrFcShort( 0xc ),	/* 12 */
/* 8850 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8852 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (8762) */
/* 8854 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8856 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8858 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8860 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8862 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (8784) */
/* 8864 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8866 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8868 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8870 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8872 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (8806) */
/* 8874 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8876 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8878 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8880 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8882 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 8884 */	
			0x11, 0x0,	/* FC_RP */
/* 8886 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8888) */
/* 8888 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8890 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 8892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8896 */	0x0 , 
			0x0,		/* 0 */
/* 8898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8908) */
/* 8908 */	NdrFcShort( 0xc ),	/* 12 */
/* 8910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8912 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8916 */	NdrFcShort( 0x1a ),	/* Offset= 26 (8942) */
/* 8918 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8917) */
/* 8920 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 8922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8924 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 8926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8928 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 8930 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 8932 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8936 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 8940 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 8942 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 8944 */	NdrFcShort( 0xc ),	/* 12 */
/* 8946 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 8948 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 8950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8954 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 8956 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (8920) */
/* 8958 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 8960 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 8962 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 8964 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 8966 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8968) */
/* 8968 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 8970 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 8972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8974 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 8976 */	0x0 , 
			0x0,		/* 0 */
/* 8978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8986 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8988) */
/* 8988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8992 */	NdrFcLong( 0x1 ),	/* 1 */
/* 8996 */	NdrFcShort( 0x4 ),	/* Offset= 4 (9000) */
/* 8998 */	NdrFcShort( 0xffff ),	/* Offset= -1 (8997) */
/* 9000 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 9002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9004 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 9006 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 9008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9012 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 9014 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 9016 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 9018 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short drsuapi_FormatStringOffsetTable[] =
    {
    0,
    58,
    100,
    154,
    220,
    274,
    328,
    382,
    436,
    502,
    568,
    634,
    700,
    766,
    832,
    898,
    964,
    1030,
    1096,
    1150,
    1216,
    1282,
    1348,
    1402,
    1468,
    1534,
    1600,
    1666,
    1732,
    1798,
    1864
    };


static const MIDL_STUB_DESC drsuapi_StubDesc = 
    {
    (void *)& drsuapi___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &drsuapi__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    drsr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const unsigned short dsaop_FormatStringOffsetTable[] =
    {
    1930,
    1988
    };


static const MIDL_STUB_DESC dsaop_StubDesc = 
    {
    (void *)& dsaop___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &dsaop__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    drsr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

