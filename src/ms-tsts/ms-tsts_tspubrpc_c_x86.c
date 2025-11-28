

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for tspubrpc.idl:
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

#include "ms-tsts_tspubprc_x86.h"

#define TYPE_FORMAT_STRING_SIZE   913                               
#define PROC_FORMAT_STRING_SIZE   1765                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _tspubrpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } tspubrpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _tspubrpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } tspubrpc_MIDL_PROC_FORMAT_STRING;

typedef struct _tspubrpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } tspubrpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


static const tspubrpc_MIDL_TYPE_FORMAT_STRING tspubrpc__MIDL_TypeFormatString;
static const tspubrpc_MIDL_PROC_FORMAT_STRING tspubrpc__MIDL_ProcFormatString;
static const tspubrpc_MIDL_EXPR_FORMAT_STRING tspubrpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: __MIDL_itf_tspubrpc_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: TermSrvSession, ver. 1.0,
   GUID={0x484809d6,0x4239,0x471b,{0xb5,0xbc,0x61,0xdf,0x8c,0x23,0xac,0x48}} */



static const RPC_CLIENT_INTERFACE TermSrvSession___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x484809d6,0x4239,0x471b,{0xb5,0xbc,0x61,0xdf,0x8c,0x23,0xac,0x48}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE TermSrvSession_v1_0_c_ifspec = (RPC_IF_HANDLE)& TermSrvSession___RpcClientInterface;

static const MIDL_STUB_DESC TermSrvSession_StubDesc;

static RPC_BINDING_HANDLE TermSrvSession__MIDL_AutoBindHandle;


HRESULT RpcOpenSession( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [out] */ SESSION_HANDLE *phSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcCloseSession( 
    /* [out][in] */ SESSION_HANDLE *phSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[46],
                  ( unsigned char * )&phSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcConnect( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [in] */ LONG TargetSessionId,
    /* [string][in] */ WCHAR *szPassword)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[88],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcDisconnect( 
    /* [in] */ SESSION_HANDLE hSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[142],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcLogoff( 
    /* [in] */ SESSION_HANDLE hSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[184],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetUserName( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][out] */ WCHAR **pszUserName,
    /* [string][out] */ WCHAR **pszDomain)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[226],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetTerminalName( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][out] */ WCHAR **pszTerminalName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[280],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetState( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [out] */ LONG *plState)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[328],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcIsSessionDesktopLocked( 
    /* [in] */ SESSION_HANDLE hSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[376],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcShowMessageBox( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][in] */ WCHAR *szTitle,
    /* [string][in] */ WCHAR *szMessage,
    /* [in] */ ULONG ulStyle,
    /* [in] */ ULONG ulTimeout,
    /* [out] */ ULONG *pulResponse,
    /* [in] */ BOOL bDoNotWait)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[418],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetTimes( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [out] */ hyper *pConnectTime,
    /* [out] */ hyper *pDisconnectTime,
    /* [out] */ hyper *pLogonTime)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[496],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetSessionCounters( 
    /* [in] */ handle_t hBinding,
    /* [size_is][out][in] */ PTS_COUNTER pCounter,
    /* [in] */ ULONG uEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[556],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetSessionInformation( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [out][ref] */ PLSMSESSIONINFORMATION pSessionInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[602],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum13NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[648],
                  ( unsigned char * )&IDL_handle);
    
}


VOID Opnum14NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[676],
                  ( unsigned char * )&IDL_handle);
    
}


HRESULT RpcGetLoggedOnCount( 
    /* [in] */ handle_t hBinding,
    /* [out] */ ULONG *pUserSessions,
    /* [out] */ ULONG *pDeviceSessions)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[704],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetSessionType( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG *SessionId,
    /* [out] */ ULONG *pSessionType)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[750],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetSessionInformationEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [in] */ DWORD Level,
    /* [out][ref] */ PLSMSESSIONINFORMATION_EX LSMSessionInfoExPtr)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[796],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum18NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[848],
                  ( unsigned char * )&IDL_handle);
    
}


VOID Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[876],
                  ( unsigned char * )&IDL_handle);
    
}


VOID Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[904],
                  ( unsigned char * )&IDL_handle);
    
}


HRESULT RpcGetActivityId( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [ref][out] */ GUID **pActivityId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[932],
                  ( unsigned char * )&hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


/* Standard interface: TermSrvNotification, ver. 1.0,
   GUID={0x11899a43,0x2b68,0x4a76,{0x92,0xe3,0xa3,0xd6,0xad,0x8c,0x26,0xce}} */



static const RPC_CLIENT_INTERFACE TermSrvNotification___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x11899a43,0x2b68,0x4a76,{0x92,0xe3,0xa3,0xd6,0xad,0x8c,0x26,0xce}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE TermSrvNotification_v1_0_c_ifspec = (RPC_IF_HANDLE)& TermSrvNotification___RpcClientInterface;

static const MIDL_STUB_DESC TermSrvNotification_StubDesc;

static RPC_BINDING_HANDLE TermSrvNotification__MIDL_AutoBindHandle;


HRESULT RpcWaitForSessionState( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [in] */ LONG State,
    /* [in] */ ULONG Timeout)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvNotification_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[980],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcRegisterAsyncNotification( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [in] */ TNotificationId Mask,
    /* [out] */ NOTIFY_HANDLE *phNotify)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvNotification_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1032],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcWaitAsyncNotification( 
    /* [in] */ NOTIFY_HANDLE hNotify,
    /* [size_is][size_is][out] */ PSESSION_CHANGE *SessionChange,
    /* [out] */ ULONG *pEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvNotification_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1084],
                  ( unsigned char * )&hNotify);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcUnRegisterAsyncNotification( 
    /* [out][in] */ NOTIFY_HANDLE *phNotify)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvNotification_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1138],
                  ( unsigned char * )&phNotify);
    return ( HRESULT  )_RetVal.Simple;
    
}


/* Standard interface: TermSrvEnumeration, ver. 1.0,
   GUID={0x88143fd0,0xc28d,0x4b2b,{0x8f,0xef,0x8d,0x88,0x2f,0x6a,0x93,0x90}} */



static const RPC_CLIENT_INTERFACE TermSrvEnumeration___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x88143fd0,0xc28d,0x4b2b,{0x8f,0xef,0x8d,0x88,0x2f,0x6a,0x93,0x90}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE TermSrvEnumeration_v1_0_c_ifspec = (RPC_IF_HANDLE)& TermSrvEnumeration___RpcClientInterface;

static const MIDL_STUB_DESC TermSrvEnumeration_StubDesc;

static RPC_BINDING_HANDLE TermSrvEnumeration__MIDL_AutoBindHandle;


HRESULT RpcOpenEnum( 
    /* [in] */ handle_t hBinding,
    /* [out] */ ENUM_HANDLE *phEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1180],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcCloseEnum( 
    /* [out][in] */ ENUM_HANDLE *phEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1220],
                  ( unsigned char * )&phEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcFilterByState( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ LONG State,
    /* [in] */ BOOL bInvert)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1262],
                  ( unsigned char * )&hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcFilterByCallersName( 
    /* [in] */ ENUM_HANDLE hEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1316],
                  ( unsigned char * )&hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcEnumAddFilter( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ ENUM_HANDLE hSubEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1358],
                  ( unsigned char * )&hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetEnumResult( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [size_is][size_is][out] */ PSESSIONENUM *ppSessionEnumResult,
    /* [in] */ DWORD Level,
    /* [out] */ ULONG *pEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1406],
                  ( unsigned char * )&hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcFilterBySessionType( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ GUID *pSessionType)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1466],
                  ( unsigned char * )&hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1514],
                  ( unsigned char * )&IDL_handle);
    
}


HRESULT RpcGetSessionIds( 
    /* [in] */ handle_t hBinding,
    /* [in] */ SESSION_FILTER Filter,
    /* [range][in] */ ULONG MaxEntries,
    /* [size_is][size_is][out] */ LONG **pSessionIds,
    /* [out] */ ULONG *pcSessionIds)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1542],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetEnumResultEx( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [size_is][size_is][out] */ PSESSIONENUM_EX *ppSessionEnumResult,
    /* [in] */ DWORD Level,
    /* [out] */ ULONG *pEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1600],
                  ( unsigned char * )&hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetAllSessions( 
    /* [in] */ handle_t hBinding,
    /* [out][in] */ ULONG *pLevel,
    /* [size_is][size_is][out] */ PEXECENVDATA *ppSessionData,
    /* [out] */ ULONG *pcEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1660],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetAllSessionsEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG Level,
    /* [size_is][size_is][out] */ PEXECENVDATAEX *ppSessionData,
    /* [out] */ ULONG *pcEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1712],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const tspubrpc_MIDL_PROC_FORMAT_STRING tspubrpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcOpenSession */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 28 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phSession */

/* 34 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 40 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCloseSession */

/* 46 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 48 */	NdrFcLong( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 56 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 58 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 60 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0x38 ),	/* 56 */
/* 64 */	NdrFcShort( 0x40 ),	/* 64 */
/* 66 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 68 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phSession */

/* 76 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 78 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 80 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 82 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 84 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcConnect */

/* 88 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x2 ),	/* 2 */
/* 96 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 98 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 100 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 102 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 104 */	NdrFcShort( 0x2c ),	/* 44 */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 110 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 118 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 120 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 122 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter TargetSessionId */

/* 124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szPassword */

/* 130 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 134 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDisconnect */

/* 142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x3 ),	/* 3 */
/* 150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 152 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 172 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 176 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcLogoff */

/* 184 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 194 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 196 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 198 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 200 */	NdrFcShort( 0x24 ),	/* 36 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 214 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 216 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 218 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetUserName */

/* 226 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x5 ),	/* 5 */
/* 234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 236 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 238 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 240 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 242 */	NdrFcShort( 0x24 ),	/* 36 */
/* 244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 246 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 256 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 260 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pszUserName */

/* 262 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 266 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pszDomain */

/* 268 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 270 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 272 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetTerminalName */

/* 280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x6 ),	/* 6 */
/* 288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 290 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 292 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 294 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 300 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 310 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 312 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 314 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pszTerminalName */

/* 316 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 320 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetState */

/* 328 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x7 ),	/* 7 */
/* 336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 338 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 340 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 342 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 358 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 362 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter plState */

/* 364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcIsSessionDesktopLocked */

/* 376 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 386 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 388 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 406 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 408 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 410 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcShowMessageBox */

/* 418 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x9 ),	/* 9 */
/* 426 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 428 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 430 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 432 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 434 */	NdrFcShort( 0x3c ),	/* 60 */
/* 436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 438 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 440 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 448 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 450 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 452 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter szTitle */

/* 454 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 458 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter szMessage */

/* 460 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 464 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ulStyle */

/* 466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulTimeout */

/* 472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 474 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pulResponse */

/* 478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 480 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bDoNotWait */

/* 484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 486 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 492 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetTimes */

/* 496 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0xa ),	/* 10 */
/* 504 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 506 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 508 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 510 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 514 */	NdrFcShort( 0x74 ),	/* 116 */
/* 516 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 518 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 526 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 530 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pConnectTime */

/* 532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 536 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pDisconnectTime */

/* 538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 542 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLogonTime */

/* 544 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 548 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionCounters */

/* 556 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0xb ),	/* 11 */
/* 564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 566 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 574 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 576 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCounter */

/* 584 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 588 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter uEntries */

/* 590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionInformation */

/* 602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0xc ),	/* 12 */
/* 610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 612 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSessionInfo */

/* 636 */	NdrFcShort( 0xc113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=48 */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum13NotUsedOnWire */

/* 648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xd ),	/* 13 */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 668 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum14NotUsedOnWire */

/* 676 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0xe ),	/* 14 */
/* 684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 686 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetLoggedOnCount */

/* 704 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0xf ),	/* 15 */
/* 712 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 714 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x40 ),	/* 64 */
/* 722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pUserSessions */

/* 732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDeviceSessions */

/* 738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionType */

/* 750 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x10 ),	/* 16 */
/* 758 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 760 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 764 */	NdrFcShort( 0x1c ),	/* 28 */
/* 766 */	NdrFcShort( 0x24 ),	/* 36 */
/* 768 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 770 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 778 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSessionType */

/* 784 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionInformationEx */

/* 796 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x11 ),	/* 17 */
/* 804 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 806 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 810 */	NdrFcShort( 0x10 ),	/* 16 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 816 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 818 */	NdrFcShort( 0x1 ),	/* 1 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LSMSessionInfoExPtr */

/* 836 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 840 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Return value */

/* 842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 844 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum18NotUsedOnWire */

/* 848 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x12 ),	/* 18 */
/* 856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 858 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum19NotUsedOnWire */

/* 876 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x13 ),	/* 19 */
/* 884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 886 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 888 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 896 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum20NotUsedOnWire */

/* 904 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x14 ),	/* 20 */
/* 912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 914 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 924 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetActivityId */

/* 932 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x15 ),	/* 21 */
/* 940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 942 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 944 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 946 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 950 */	NdrFcShort( 0x60 ),	/* 96 */
/* 952 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 954 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 962 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 966 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pActivityId */

/* 968 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 972 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Return value */

/* 974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForSessionState */

/* 980 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 990 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0x18 ),	/* 24 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter State */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Timeout */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRegisterAsyncNotification */

/* 1032 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1042 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1046 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1048 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1050 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 1060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Mask */

/* 1066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phNotify */

/* 1072 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1074 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1076 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Return value */

/* 1078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1080 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitAsyncNotification */

/* 1084 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1094 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1096 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1098 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1100 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1102 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1106 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 1114 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1118 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter SessionChange */

/* 1120 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1124 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter pEntries */

/* 1126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcUnRegisterAsyncNotification */

/* 1138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1148 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1152 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1154 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1156 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phNotify */

/* 1168 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1170 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1172 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Return value */

/* 1174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenEnum */

/* 1180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phEnum */

/* 1208 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1212 */	NdrFcShort( 0x162 ),	/* Type Offset=354 */

	/* Return value */

/* 1214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCloseEnum */

/* 1220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1230 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1232 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1234 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1236 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1238 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phEnum */

/* 1250 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1252 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1254 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Return value */

/* 1256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFilterByState */

/* 1262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1272 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1274 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1276 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1292 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1296 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Parameter State */

/* 1298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bInvert */

/* 1304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFilterByCallersName */

/* 1316 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1326 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1330 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1332 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1338 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1346 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1348 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1350 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Return value */

/* 1352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumAddFilter */

/* 1358 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1368 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1370 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1372 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1374 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1378 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1380 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1388 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1390 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1392 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Parameter hSubEnum */

/* 1394 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1398 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 1400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetEnumResult */

/* 1406 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1414 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1416 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1418 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1420 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1422 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1426 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1428 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1436 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1438 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1440 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Parameter ppSessionEnumResult */

/* 1442 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1446 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Parameter Level */

/* 1448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEntries */

/* 1454 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1462 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFilterBySessionType */

/* 1466 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1476 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1478 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1480 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1482 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1488 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1496 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1498 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1500 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Parameter pSessionType */

/* 1502 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1506 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 1508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum7NotUsedOnWire */

/* 1514 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1524 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1534 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetSessionIds */

/* 1542 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1552 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1556 */	NdrFcShort( 0xe ),	/* 14 */
/* 1558 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1560 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1562 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Filter */

/* 1570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1574 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MaxEntries */

/* 1576 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1580 */	NdrFcShort( 0x1e4 ),	/* 484 */

	/* Parameter pSessionIds */

/* 1582 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1586 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter pcSessionIds */

/* 1588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1596 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetEnumResultEx */

/* 1600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1610 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1612 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1614 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1616 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1622 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1630 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1634 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Parameter ppSessionEnumResult */

/* 1636 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1640 */	NdrFcShort( 0x202 ),	/* Type Offset=514 */

	/* Parameter Level */

/* 1642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEntries */

/* 1648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetAllSessions */

/* 1660 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0xa ),	/* 10 */
/* 1668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1670 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1674 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1676 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1678 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1680 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1682 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pLevel */

/* 1688 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSessionData */

/* 1694 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1698 */	NdrFcShort( 0x27e ),	/* Type Offset=638 */

	/* Parameter pcEntries */

/* 1700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1708 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetAllSessionsEx */

/* 1712 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0xb ),	/* 11 */
/* 1720 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1722 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1728 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1732 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Level */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSessionData */

/* 1746 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1750 */	NdrFcShort( 0x2e4 ),	/* Type Offset=740 */

	/* Parameter pcEntries */

/* 1752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const tspubrpc_MIDL_TYPE_FORMAT_STRING tspubrpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 20 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 22 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 24 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 32 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 36 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 40 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x11, 0x0,	/* FC_RP */
/* 44 */	NdrFcShort( 0x28 ),	/* Offset= 40 (84) */
/* 46 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* Offset= 0 (52) */
/* 54 */	0x8,		/* FC_LONG */
			0x3,		/* FC_SMALL */
/* 56 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 58 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 64 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 66 */	NdrFcShort( 0x18 ),	/* 24 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* Offset= 0 (70) */
/* 72 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (46) */
/* 76 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 78 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0xffea ),	/* Offset= -22 (58) */
/* 82 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 84 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 90 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 92 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 94 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 98 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 100 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 102 */	NdrFcShort( 0xffda ),	/* Offset= -38 (64) */
/* 104 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 106 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 112 */	NdrFcShort( 0x30 ),	/* 48 */
/* 114 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 116 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 124 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 126 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 132 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 144 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 146 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 148 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 150 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 152 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 154 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 156 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 158 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 160 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x5c ),	/* Offset= 92 (256) */
/* 166 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 168 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 170 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 172 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 178 */	NdrFcShort( 0x1 ),	/* 1 */
/* 180 */	NdrFcLong( 0x1 ),	/* 1 */
/* 184 */	NdrFcShort( 0x22 ),	/* Offset= 34 (218) */
/* 186 */	NdrFcShort( 0xffff ),	/* Offset= -1 (185) */
/* 188 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 190 */	NdrFcShort( 0x42 ),	/* 66 */
/* 192 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 194 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 198 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 200 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 202 */	NdrFcShort( 0x2a ),	/* 42 */
/* 204 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 206 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 208 */	NdrFcShort( 0x1 ),	/* 1 */
/* 210 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 212 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 214 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 216 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 218 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 220 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 222 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 224 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 226 */	NdrFcShort( 0xbc ),	/* 188 */
/* 228 */	NdrFcShort( 0xbc ),	/* 188 */
/* 230 */	0x12, 0x0,	/* FC_UP */
/* 232 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (206) */
/* 234 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 236 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 238 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (188) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 242 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (194) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 246 */	0x0,		/* 0 */
			NdrFcShort( 0xffd1 ),	/* Offset= -47 (200) */
			0xb,		/* FC_HYPER */
/* 250 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 252 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 254 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 256 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 258 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* Offset= 0 (262) */
/* 264 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 266 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (166) */
/* 270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 272 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (276) */
/* 276 */	
			0x12, 0x0,	/* FC_UP */
/* 278 */	NdrFcShort( 0x8 ),	/* Offset= 8 (286) */
/* 280 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 286 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 290 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 292 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 294 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (280) */
			0x5b,		/* FC_END */
/* 298 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 300 */	NdrFcShort( 0x2 ),	/* Offset= 2 (302) */
/* 302 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 304 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 306 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 308 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 310 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 312 */	NdrFcShort( 0x2 ),	/* Offset= 2 (314) */
/* 314 */	
			0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0xa ),	/* Offset= 10 (326) */
/* 318 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 324 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 326 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 338 */	NdrFcShort( 0xffec ),	/* Offset= -20 (318) */
/* 340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 342 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (346) */
/* 346 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 348 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 350 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (354) */
/* 354 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 356 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 358 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (362) */
/* 362 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 364 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 366 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 368 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 370 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 372 */	0x2,		/* 2 */
			0x1,		/* 1 */
/* 374 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 376 */	NdrFcShort( 0x2 ),	/* Offset= 2 (378) */
/* 378 */	
			0x12, 0x0,	/* FC_UP */
/* 380 */	NdrFcShort( 0x4e ),	/* Offset= 78 (458) */
/* 382 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 384 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 386 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	NdrFcShort( 0x64 ),	/* 100 */
/* 394 */	NdrFcShort( 0x2 ),	/* 2 */
/* 396 */	NdrFcLong( 0x1 ),	/* 1 */
/* 400 */	NdrFcShort( 0xa ),	/* Offset= 10 (410) */
/* 402 */	NdrFcLong( 0x2 ),	/* 2 */
/* 406 */	NdrFcShort( 0x14 ),	/* Offset= 20 (426) */
/* 408 */	NdrFcShort( 0xffff ),	/* Offset= -1 (407) */
/* 410 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 412 */	NdrFcShort( 0x4c ),	/* 76 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* Offset= 0 (416) */
/* 418 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 420 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 422 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (188) */
/* 424 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 426 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 428 */	NdrFcShort( 0x64 ),	/* 100 */
/* 430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 432 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 434 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (188) */
/* 436 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 438 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 440 */	0x0,		/* 0 */
			NdrFcShort( 0xff65 ),	/* Offset= -155 (286) */
			0x5b,		/* FC_END */
/* 444 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 446 */	NdrFcShort( 0x68 ),	/* 104 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* Offset= 0 (450) */
/* 452 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 454 */	0x0,		/* 0 */
			NdrFcShort( 0xffb7 ),	/* Offset= -73 (382) */
			0x5b,		/* FC_END */
/* 458 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 468 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 472 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 474 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 476 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (444) */
/* 478 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 480 */	
			0x11, 0x0,	/* FC_RP */
/* 482 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (286) */
/* 484 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 490 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 494 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 496 */	NdrFcShort( 0x2 ),	/* Offset= 2 (498) */
/* 498 */	
			0x12, 0x0,	/* FC_UP */
/* 500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (502) */
/* 502 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 506 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 510 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 512 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 514 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 516 */	NdrFcShort( 0x2 ),	/* Offset= 2 (518) */
/* 518 */	
			0x12, 0x0,	/* FC_UP */
/* 520 */	NdrFcShort( 0x60 ),	/* Offset= 96 (616) */
/* 522 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 524 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 526 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 528 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 530 */	NdrFcShort( 0x2 ),	/* Offset= 2 (532) */
/* 532 */	NdrFcShort( 0x6c ),	/* 108 */
/* 534 */	NdrFcShort( 0x3 ),	/* 3 */
/* 536 */	NdrFcLong( 0x1 ),	/* 1 */
/* 540 */	NdrFcShort( 0xff7e ),	/* Offset= -130 (410) */
/* 542 */	NdrFcLong( 0x2 ),	/* 2 */
/* 546 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (426) */
/* 548 */	NdrFcLong( 0x3 ),	/* 3 */
/* 552 */	NdrFcShort( 0x10 ),	/* Offset= 16 (568) */
/* 554 */	NdrFcShort( 0xffff ),	/* Offset= -1 (553) */
/* 556 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 560 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 562 */	NdrFcShort( 0x64 ),	/* 100 */
/* 564 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 566 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 568 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 570 */	NdrFcShort( 0x6c ),	/* 108 */
/* 572 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 574 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 576 */	NdrFcShort( 0x68 ),	/* 104 */
/* 578 */	NdrFcShort( 0x68 ),	/* 104 */
/* 580 */	0x12, 0x0,	/* FC_UP */
/* 582 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (556) */
/* 584 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 586 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 588 */	0x0,		/* 0 */
			NdrFcShort( 0xfe6f ),	/* Offset= -401 (188) */
			0x3e,		/* FC_STRUCTPAD2 */
/* 592 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 594 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 596 */	NdrFcShort( 0xfeca ),	/* Offset= -310 (286) */
/* 598 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 602 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x70 ),	/* 112 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* Offset= 0 (608) */
/* 610 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 612 */	0x0,		/* 0 */
			NdrFcShort( 0xffa5 ),	/* Offset= -91 (522) */
			0x5b,		/* FC_END */
/* 616 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 624 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 626 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 630 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 632 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (602) */
/* 636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 638 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (642) */
/* 642 */	
			0x12, 0x0,	/* FC_UP */
/* 644 */	NdrFcShort( 0x4a ),	/* Offset= 74 (718) */
/* 646 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 648 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 650 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 652 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (656) */
/* 656 */	NdrFcShort( 0x158 ),	/* 344 */
/* 658 */	NdrFcShort( 0x2 ),	/* 2 */
/* 660 */	NdrFcLong( 0x1 ),	/* 1 */
/* 664 */	NdrFcShort( 0xff02 ),	/* Offset= -254 (410) */
/* 666 */	NdrFcLong( 0x2 ),	/* 2 */
/* 670 */	NdrFcShort( 0x4 ),	/* Offset= 4 (674) */
/* 672 */	NdrFcShort( 0xffff ),	/* Offset= -1 (671) */
/* 674 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 676 */	NdrFcShort( 0x158 ),	/* 344 */
/* 678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 680 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 682 */	NdrFcShort( 0xfe12 ),	/* Offset= -494 (188) */
/* 684 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 686 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0xfe0c ),	/* Offset= -500 (188) */
/* 690 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 692 */	NdrFcShort( 0xfe08 ),	/* Offset= -504 (188) */
/* 694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0xfe04 ),	/* Offset= -508 (188) */
/* 698 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 700 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (188) */
/* 702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 704 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0x15c ),	/* 348 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* Offset= 0 (710) */
/* 712 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 714 */	0x0,		/* 0 */
			NdrFcShort( 0xffbb ),	/* Offset= -69 (646) */
			0x5b,		/* FC_END */
/* 718 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 726 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 728 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 732 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 734 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (704) */
/* 738 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 740 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 742 */	NdrFcShort( 0x2 ),	/* Offset= 2 (744) */
/* 744 */	
			0x12, 0x0,	/* FC_UP */
/* 746 */	NdrFcShort( 0x90 ),	/* Offset= 144 (890) */
/* 748 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 750 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 752 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 754 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 756 */	NdrFcShort( 0x2 ),	/* Offset= 2 (758) */
/* 758 */	NdrFcShort( 0x20 ),	/* 32 */
/* 760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 762 */	NdrFcLong( 0x1 ),	/* 1 */
/* 766 */	NdrFcShort( 0x2c ),	/* Offset= 44 (810) */
/* 768 */	NdrFcShort( 0xffff ),	/* Offset= -1 (767) */
/* 770 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 772 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 774 */	NdrFcShort( 0x101 ),	/* 257 */
/* 776 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 778 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 780 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 782 */	NdrFcShort( 0x101 ),	/* 257 */
/* 784 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 786 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 788 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 790 */	NdrFcShort( 0x101 ),	/* 257 */
/* 792 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 794 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 796 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 798 */	NdrFcShort( 0x101 ),	/* 257 */
/* 800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 802 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 804 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 806 */	NdrFcShort( 0x101 ),	/* 257 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 812 */	NdrFcShort( 0x20 ),	/* 32 */
/* 814 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 816 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 818 */	NdrFcShort( 0xc ),	/* 12 */
/* 820 */	NdrFcShort( 0xc ),	/* 12 */
/* 822 */	0x12, 0x0,	/* FC_UP */
/* 824 */	NdrFcShort( 0xffca ),	/* Offset= -54 (770) */
/* 826 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 830 */	NdrFcShort( 0x10 ),	/* 16 */
/* 832 */	0x12, 0x0,	/* FC_UP */
/* 834 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (778) */
/* 836 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 838 */	NdrFcShort( 0x14 ),	/* 20 */
/* 840 */	NdrFcShort( 0x14 ),	/* 20 */
/* 842 */	0x12, 0x0,	/* FC_UP */
/* 844 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (786) */
/* 846 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 848 */	NdrFcShort( 0x18 ),	/* 24 */
/* 850 */	NdrFcShort( 0x18 ),	/* 24 */
/* 852 */	0x12, 0x0,	/* FC_UP */
/* 854 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (794) */
/* 856 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 858 */	NdrFcShort( 0x1c ),	/* 28 */
/* 860 */	NdrFcShort( 0x1c ),	/* 28 */
/* 862 */	0x12, 0x0,	/* FC_UP */
/* 864 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (802) */
/* 866 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 868 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 870 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 872 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 874 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 876 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* Offset= 0 (882) */
/* 884 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 886 */	0x0,		/* 0 */
			NdrFcShort( 0xff75 ),	/* Offset= -139 (748) */
			0x5b,		/* FC_END */
/* 890 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 898 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 900 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 904 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 906 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 908 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (876) */
/* 910 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short TermSrvSession_FormatStringOffsetTable[] =
    {
    0,
    46,
    88,
    142,
    184,
    226,
    280,
    328,
    376,
    418,
    496,
    556,
    602,
    648,
    676,
    704,
    750,
    796,
    848,
    876,
    904,
    932
    };


static const MIDL_STUB_DESC TermSrvSession_StubDesc = 
    {
    (void *)& TermSrvSession___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &TermSrvSession__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    tspubrpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
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

static const unsigned short TermSrvNotification_FormatStringOffsetTable[] =
    {
    980,
    1032,
    1084,
    1138
    };


static const MIDL_STUB_DESC TermSrvNotification_StubDesc = 
    {
    (void *)& TermSrvNotification___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &TermSrvNotification__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    tspubrpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
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

static const unsigned short TermSrvEnumeration_FormatStringOffsetTable[] =
    {
    1180,
    1220,
    1262,
    1316,
    1358,
    1406,
    1466,
    1514,
    1542,
    1600,
    1660,
    1712
    };


static const MIDL_STUB_DESC TermSrvEnumeration_StubDesc = 
    {
    (void *)& TermSrvEnumeration___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &TermSrvEnumeration__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    tspubrpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
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

