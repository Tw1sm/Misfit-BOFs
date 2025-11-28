

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for tspubrpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-tsts_tspubprc_x64.h"

#define TYPE_FORMAT_STRING_SIZE   867                               
#define PROC_FORMAT_STRING_SIZE   1841                              
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
                  hBinding,
                  SessionId,
                  phSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcCloseSession( 
    /* [out][in] */ SESSION_HANDLE *phSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[48],
                  phSession);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[92],
                  hSession,
                  TargetSessionId,
                  szPassword);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcDisconnect( 
    /* [in] */ SESSION_HANDLE hSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[148],
                  hSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcLogoff( 
    /* [in] */ SESSION_HANDLE hSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[192],
                  hSession);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[236],
                  hSession,
                  pszUserName,
                  pszDomain);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetTerminalName( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][out] */ WCHAR **pszTerminalName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[292],
                  hSession,
                  pszTerminalName);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetState( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [out] */ LONG *plState)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[342],
                  hSession,
                  plState);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcIsSessionDesktopLocked( 
    /* [in] */ SESSION_HANDLE hSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[392],
                  hSession);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[436],
                  hSession,
                  szTitle,
                  szMessage,
                  ulStyle,
                  ulTimeout,
                  pulResponse,
                  bDoNotWait);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[516],
                  hSession,
                  pConnectTime,
                  pDisconnectTime,
                  pLogonTime);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[578],
                  hBinding,
                  pCounter,
                  uEntries);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[626],
                  hBinding,
                  SessionId,
                  pSessionInfo);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum13NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[674],
                  IDL_handle);
    
}


VOID Opnum14NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[704],
                  IDL_handle);
    
}


HRESULT RpcGetLoggedOnCount( 
    /* [in] */ handle_t hBinding,
    /* [out] */ ULONG *pUserSessions,
    /* [out] */ ULONG *pDeviceSessions)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[734],
                  hBinding,
                  pUserSessions,
                  pDeviceSessions);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[782],
                  hBinding,
                  SessionId,
                  pSessionType);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[830],
                  hBinding,
                  SessionId,
                  Level,
                  LSMSessionInfoExPtr);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum18NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[884],
                  IDL_handle);
    
}


VOID Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[914],
                  IDL_handle);
    
}


VOID Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[944],
                  IDL_handle);
    
}


HRESULT RpcGetActivityId( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [ref][out] */ GUID **pActivityId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvSession_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[974],
                  hSession,
                  pActivityId);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1024],
                  hBinding,
                  SessionId,
                  State,
                  Timeout);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1078],
                  hBinding,
                  SessionId,
                  Mask,
                  phNotify);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1132],
                  hNotify,
                  SessionChange,
                  pEntries);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcUnRegisterAsyncNotification( 
    /* [out][in] */ NOTIFY_HANDLE *phNotify)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvNotification_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1188],
                  phNotify);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1232],
                  hBinding,
                  phEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcCloseEnum( 
    /* [out][in] */ ENUM_HANDLE *phEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1274],
                  phEnum);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1318],
                  hEnum,
                  State,
                  bInvert);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcFilterByCallersName( 
    /* [in] */ ENUM_HANDLE hEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1374],
                  hEnum);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcEnumAddFilter( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ ENUM_HANDLE hSubEnum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1418],
                  hEnum,
                  hSubEnum);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1468],
                  hEnum,
                  ppSessionEnumResult,
                  Level,
                  pEntries);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcFilterBySessionType( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ GUID *pSessionType)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1530],
                  hEnum,
                  pSessionType);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TermSrvEnumeration_StubDesc,
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1580],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1610],
                  hBinding,
                  Filter,
                  MaxEntries,
                  pSessionIds,
                  pcSessionIds);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1670],
                  hEnum,
                  ppSessionEnumResult,
                  Level,
                  pEntries);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1732],
                  hBinding,
                  pLevel,
                  ppSessionData,
                  pcEntries);
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
                  (PFORMAT_STRING) &tspubrpc__MIDL_ProcFormatString.Format[1786],
                  hBinding,
                  Level,
                  ppSessionData,
                  pcEntries);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phSession */

/* 36 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCloseSession */

/* 48 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 60 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x38 ),	/* 56 */
/* 66 */	NdrFcShort( 0x40 ),	/* 64 */
/* 68 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 70 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phSession */

/* 80 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 82 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 84 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 86 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 88 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 90 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcConnect */

/* 92 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 94 */	NdrFcLong( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x2 ),	/* 2 */
/* 100 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 102 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 104 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 106 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 108 */	NdrFcShort( 0x2c ),	/* 44 */
/* 110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 112 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 114 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 124 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 126 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 128 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter TargetSessionId */

/* 130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szPassword */

/* 136 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 140 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDisconnect */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 156 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 158 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 160 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x24 ),	/* 36 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 170 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 180 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcLogoff */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 208 */	NdrFcShort( 0x24 ),	/* 36 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 214 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 224 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 226 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 228 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetUserName */

/* 236 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x5 ),	/* 5 */
/* 244 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 246 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 248 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 250 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0x24 ),	/* 36 */
/* 254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 256 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 258 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 268 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 270 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 272 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pszUserName */

/* 274 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 276 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 278 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pszDomain */

/* 280 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 282 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 284 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 288 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetTerminalName */

/* 292 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x6 ),	/* 6 */
/* 300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 302 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 304 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 306 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 308 */	NdrFcShort( 0x24 ),	/* 36 */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 314 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 324 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 328 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pszTerminalName */

/* 330 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetState */

/* 342 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x7 ),	/* 7 */
/* 350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 352 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 354 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 358 */	NdrFcShort( 0x24 ),	/* 36 */
/* 360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 364 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 374 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 376 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 378 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter plState */

/* 380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcIsSessionDesktopLocked */

/* 392 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 402 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 404 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 406 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 408 */	NdrFcShort( 0x24 ),	/* 36 */
/* 410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 412 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 414 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 424 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 426 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 428 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcShowMessageBox */

/* 436 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x9 ),	/* 9 */
/* 444 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 446 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 448 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 450 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 452 */	NdrFcShort( 0x3c ),	/* 60 */
/* 454 */	NdrFcShort( 0x24 ),	/* 36 */
/* 456 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 458 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 468 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 470 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 472 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter szTitle */

/* 474 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 478 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter szMessage */

/* 480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 484 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ulStyle */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulTimeout */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pulResponse */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bDoNotWait */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetTimes */

/* 516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xa ),	/* 10 */
/* 524 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 528 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 534 */	NdrFcShort( 0x74 ),	/* 116 */
/* 536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 538 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 548 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 550 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 552 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pConnectTime */

/* 554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 558 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pDisconnectTime */

/* 560 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 564 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLogonTime */

/* 566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 568 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 570 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 574 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionCounters */

/* 578 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0xb ),	/* 11 */
/* 586 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 588 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 598 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 602 */	NdrFcShort( 0x1 ),	/* 1 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCounter */

/* 608 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 610 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 612 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter uEntries */

/* 614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 616 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 622 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionInformation */

/* 626 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0xc ),	/* 12 */
/* 634 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 636 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 646 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSessionInfo */

/* 662 */	NdrFcShort( 0xe113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=56 */
/* 664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 666 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 670 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum13NotUsedOnWire */

/* 674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0xd ),	/* 13 */
/* 682 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 694 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum14NotUsedOnWire */

/* 704 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0xe ),	/* 14 */
/* 712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 714 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 724 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetLoggedOnCount */

/* 734 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0xf ),	/* 15 */
/* 742 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 744 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x40 ),	/* 64 */
/* 752 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 754 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pUserSessions */

/* 764 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 766 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDeviceSessions */

/* 770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 772 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 778 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionType */

/* 782 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x10 ),	/* 16 */
/* 790 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 792 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 796 */	NdrFcShort( 0x1c ),	/* 28 */
/* 798 */	NdrFcShort( 0x24 ),	/* 36 */
/* 800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 802 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 812 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSessionType */

/* 818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 820 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 826 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionInformationEx */

/* 830 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x11 ),	/* 17 */
/* 838 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 840 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 850 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LSMSessionInfoExPtr */

/* 872 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 874 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 876 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 880 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum18NotUsedOnWire */

/* 884 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x12 ),	/* 18 */
/* 892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 894 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 904 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum19NotUsedOnWire */

/* 914 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x13 ),	/* 19 */
/* 922 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 924 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 934 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum20NotUsedOnWire */

/* 944 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x14 ),	/* 20 */
/* 952 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 954 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetActivityId */

/* 974 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x15 ),	/* 21 */
/* 982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 984 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 986 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 988 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 990 */	NdrFcShort( 0x24 ),	/* 36 */
/* 992 */	NdrFcShort( 0x60 ),	/* 96 */
/* 994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 996 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSession */

/* 1006 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1008 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1010 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pActivityId */

/* 1012 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1016 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Return value */

/* 1018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForSessionState */

/* 1024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1038 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1044 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 1054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1056 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter State */

/* 1060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1062 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Timeout */

/* 1066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1074 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRegisterAsyncNotification */

/* 1078 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1086 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1088 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1092 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1094 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1096 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1098 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 1108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Mask */

/* 1114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phNotify */

/* 1120 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1124 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 1126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1128 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitAsyncNotification */

/* 1132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1140 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1144 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1146 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1152 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1154 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 1164 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1168 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter SessionChange */

/* 1170 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1174 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Parameter pEntries */

/* 1176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcUnRegisterAsyncNotification */

/* 1188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1198 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1202 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1204 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1206 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1210 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phNotify */

/* 1220 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1224 */	NdrFcShort( 0x14a ),	/* Type Offset=330 */

	/* Return value */

/* 1226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenEnum */

/* 1232 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1242 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1252 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phEnum */

/* 1262 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1266 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Return value */

/* 1268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCloseEnum */

/* 1274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1282 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1284 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1286 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1288 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1290 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1292 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1296 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phEnum */

/* 1306 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1308 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1310 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Return value */

/* 1312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFilterByState */

/* 1318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1326 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1328 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1330 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1332 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1334 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1340 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1350 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1354 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter State */

/* 1356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bInvert */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFilterByCallersName */

/* 1374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1386 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1388 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1406 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1408 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1410 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Return value */

/* 1412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumAddFilter */

/* 1418 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1426 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1428 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1432 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1434 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1450 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1452 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1454 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter hSubEnum */

/* 1456 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1460 */	NdrFcShort( 0x162 ),	/* Type Offset=354 */

	/* Return value */

/* 1462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetEnumResult */

/* 1468 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1476 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1478 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1480 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1482 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1484 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1488 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1490 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1500 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1502 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1504 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter ppSessionEnumResult */

/* 1506 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1510 */	NdrFcShort( 0x166 ),	/* Type Offset=358 */

	/* Parameter Level */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEntries */

/* 1518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1520 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1526 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFilterBySessionType */

/* 1530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1540 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1544 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1546 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1552 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1562 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1564 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1566 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter pSessionType */

/* 1568 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1570 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1572 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Return value */

/* 1574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1576 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum7NotUsedOnWire */

/* 1580 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1590 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1600 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetSessionIds */

/* 1610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1618 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1620 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1624 */	NdrFcShort( 0xe ),	/* 14 */
/* 1626 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1628 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1630 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Filter */

/* 1640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1642 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1644 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MaxEntries */

/* 1646 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1648 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1650 */	NdrFcShort( 0x1d4 ),	/* 468 */

	/* Parameter pSessionIds */

/* 1652 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1654 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1656 */	NdrFcShort( 0x1de ),	/* Type Offset=478 */

	/* Parameter pcSessionIds */

/* 1658 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1660 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1666 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetEnumResultEx */

/* 1670 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1678 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1680 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1682 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1684 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 1686 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1688 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1690 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1692 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hEnum */

/* 1702 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1704 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1706 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter ppSessionEnumResult */

/* 1708 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1710 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1712 */	NdrFcShort( 0x1f2 ),	/* Type Offset=498 */

	/* Parameter Level */

/* 1714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEntries */

/* 1720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1722 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1728 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetAllSessions */

/* 1732 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0xa ),	/* 10 */
/* 1740 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1742 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1746 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1748 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1750 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1752 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1754 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pLevel */

/* 1762 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1764 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSessionData */

/* 1768 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1772 */	NdrFcShort( 0x26a ),	/* Type Offset=618 */

	/* Parameter pcEntries */

/* 1774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1776 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1782 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetAllSessionsEx */

/* 1786 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0xb ),	/* 11 */
/* 1794 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1796 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1806 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Level */

/* 1816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSessionData */

/* 1822 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1826 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */

	/* Parameter pcEntries */

/* 1828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1830 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1836 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1838 */	0x8,		/* FC_LONG */
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
/* 90 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
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
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 112 */	NdrFcShort( 0x38 ),	/* 56 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0xc ),	/* Offset= 12 (128) */
/* 118 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 120 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 122 */	0x8,		/* FC_LONG */
			0xb,		/* FC_HYPER */
/* 124 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 128 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 130 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 142 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x11, 0x0,	/* FC_RP */
/* 146 */	NdrFcShort( 0x58 ),	/* Offset= 88 (234) */
/* 148 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 150 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 152 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (158) */
/* 158 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 162 */	NdrFcLong( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x22 ),	/* Offset= 34 (200) */
/* 168 */	NdrFcShort( 0xffff ),	/* Offset= -1 (167) */
/* 170 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 172 */	NdrFcShort( 0x42 ),	/* 66 */
/* 174 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 176 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 180 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 182 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 184 */	NdrFcShort( 0x2a ),	/* 42 */
/* 186 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 188 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 192 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 194 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 196 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 198 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 200 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 202 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x18 ),	/* Offset= 24 (230) */
/* 208 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 210 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 212 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (170) */
/* 214 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 216 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (176) */
/* 218 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0xffda ),	/* Offset= -38 (182) */
/* 222 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 224 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 226 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 228 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 230 */	
			0x12, 0x0,	/* FC_UP */
/* 232 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (188) */
/* 234 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 236 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x0 ),	/* Offset= 0 (240) */
/* 242 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 244 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 246 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (148) */
/* 248 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 250 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 252 */	NdrFcShort( 0x2 ),	/* Offset= 2 (254) */
/* 254 */	
			0x12, 0x0,	/* FC_UP */
/* 256 */	NdrFcShort( 0x8 ),	/* Offset= 8 (264) */
/* 258 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 264 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 268 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 270 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 272 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (258) */
			0x5b,		/* FC_END */
/* 276 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 278 */	NdrFcShort( 0x2 ),	/* Offset= 2 (280) */
/* 280 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 282 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 284 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 286 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 288 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 290 */	NdrFcShort( 0x2 ),	/* Offset= 2 (292) */
/* 292 */	
			0x12, 0x0,	/* FC_UP */
/* 294 */	NdrFcShort( 0xa ),	/* Offset= 10 (304) */
/* 296 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 300 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 302 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 304 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 310 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 312 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 314 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 318 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 320 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (296) */
/* 324 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 326 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (330) */
/* 330 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 332 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 334 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 336 */	NdrFcShort( 0x2 ),	/* Offset= 2 (338) */
/* 338 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 340 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 342 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (346) */
/* 346 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 348 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 350 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 352 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 354 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 356 */	0x2,		/* 2 */
			0x1,		/* 1 */
/* 358 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (362) */
/* 362 */	
			0x12, 0x0,	/* FC_UP */
/* 364 */	NdrFcShort( 0x4e ),	/* Offset= 78 (442) */
/* 366 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 368 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 370 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 372 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 374 */	NdrFcShort( 0x2 ),	/* Offset= 2 (376) */
/* 376 */	NdrFcShort( 0x64 ),	/* 100 */
/* 378 */	NdrFcShort( 0x2 ),	/* 2 */
/* 380 */	NdrFcLong( 0x1 ),	/* 1 */
/* 384 */	NdrFcShort( 0xa ),	/* Offset= 10 (394) */
/* 386 */	NdrFcLong( 0x2 ),	/* 2 */
/* 390 */	NdrFcShort( 0x14 ),	/* Offset= 20 (410) */
/* 392 */	NdrFcShort( 0xffff ),	/* Offset= -1 (391) */
/* 394 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 396 */	NdrFcShort( 0x4c ),	/* 76 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* Offset= 0 (400) */
/* 402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 404 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 406 */	NdrFcShort( 0xff14 ),	/* Offset= -236 (170) */
/* 408 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 410 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 412 */	NdrFcShort( 0x64 ),	/* 100 */
/* 414 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 416 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 418 */	NdrFcShort( 0xff08 ),	/* Offset= -248 (170) */
/* 420 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 422 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 424 */	0x0,		/* 0 */
			NdrFcShort( 0xff5f ),	/* Offset= -161 (264) */
			0x5b,		/* FC_END */
/* 428 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 430 */	NdrFcShort( 0x68 ),	/* 104 */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* Offset= 0 (434) */
/* 436 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 438 */	0x0,		/* 0 */
			NdrFcShort( 0xffb7 ),	/* Offset= -73 (366) */
			0x5b,		/* FC_END */
/* 442 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 450 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 452 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 456 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 458 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 460 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (428) */
/* 462 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 464 */	
			0x11, 0x0,	/* FC_RP */
/* 466 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (264) */
/* 468 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 478 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (482) */
/* 482 */	
			0x12, 0x0,	/* FC_UP */
/* 484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (486) */
/* 486 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 490 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 492 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 494 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 496 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 498 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (502) */
/* 502 */	
			0x12, 0x0,	/* FC_UP */
/* 504 */	NdrFcShort( 0x5c ),	/* Offset= 92 (596) */
/* 506 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 508 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 510 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 512 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 514 */	NdrFcShort( 0x2 ),	/* Offset= 2 (516) */
/* 516 */	NdrFcShort( 0x70 ),	/* 112 */
/* 518 */	NdrFcShort( 0x3 ),	/* 3 */
/* 520 */	NdrFcLong( 0x1 ),	/* 1 */
/* 524 */	NdrFcShort( 0xff7e ),	/* Offset= -130 (394) */
/* 526 */	NdrFcLong( 0x2 ),	/* 2 */
/* 530 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (410) */
/* 532 */	NdrFcLong( 0x3 ),	/* 3 */
/* 536 */	NdrFcShort( 0x10 ),	/* Offset= 16 (552) */
/* 538 */	NdrFcShort( 0xffff ),	/* Offset= -1 (537) */
/* 540 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 544 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 546 */	NdrFcShort( 0x64 ),	/* 100 */
/* 548 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 550 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 552 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0x70 ),	/* 112 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x12 ),	/* Offset= 18 (576) */
/* 560 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 562 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 564 */	NdrFcShort( 0xfe76 ),	/* Offset= -394 (170) */
/* 566 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 568 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 570 */	0x0,		/* 0 */
			NdrFcShort( 0xfecd ),	/* Offset= -307 (264) */
			0x8,		/* FC_LONG */
/* 574 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 576 */	
			0x12, 0x0,	/* FC_UP */
/* 578 */	NdrFcShort( 0xffda ),	/* Offset= -38 (540) */
/* 580 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 582 */	NdrFcShort( 0x78 ),	/* 120 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* Offset= 0 (586) */
/* 588 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 590 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 592 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (506) */
/* 594 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 596 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 604 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 606 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 610 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 612 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 614 */	NdrFcShort( 0xffde ),	/* Offset= -34 (580) */
/* 616 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 618 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 620 */	NdrFcShort( 0x2 ),	/* Offset= 2 (622) */
/* 622 */	
			0x12, 0x0,	/* FC_UP */
/* 624 */	NdrFcShort( 0x4a ),	/* Offset= 74 (698) */
/* 626 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 628 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 630 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 632 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 634 */	NdrFcShort( 0x2 ),	/* Offset= 2 (636) */
/* 636 */	NdrFcShort( 0x158 ),	/* 344 */
/* 638 */	NdrFcShort( 0x2 ),	/* 2 */
/* 640 */	NdrFcLong( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0xff06 ),	/* Offset= -250 (394) */
/* 646 */	NdrFcLong( 0x2 ),	/* 2 */
/* 650 */	NdrFcShort( 0x4 ),	/* Offset= 4 (654) */
/* 652 */	NdrFcShort( 0xffff ),	/* Offset= -1 (651) */
/* 654 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 656 */	NdrFcShort( 0x158 ),	/* 344 */
/* 658 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 660 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (170) */
/* 664 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 668 */	NdrFcShort( 0xfe0e ),	/* Offset= -498 (170) */
/* 670 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 672 */	NdrFcShort( 0xfe0a ),	/* Offset= -502 (170) */
/* 674 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 676 */	NdrFcShort( 0xfe06 ),	/* Offset= -506 (170) */
/* 678 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0xfe02 ),	/* Offset= -510 (170) */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 686 */	NdrFcShort( 0x15c ),	/* 348 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* Offset= 0 (690) */
/* 692 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 694 */	0x0,		/* 0 */
			NdrFcShort( 0xffbb ),	/* Offset= -69 (626) */
			0x5b,		/* FC_END */
/* 698 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 706 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 708 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 712 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 714 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 716 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (684) */
/* 718 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 720 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (724) */
/* 724 */	
			0x12, 0x0,	/* FC_UP */
/* 726 */	NdrFcShort( 0x76 ),	/* Offset= 118 (844) */
/* 728 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 730 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 732 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 736 */	NdrFcShort( 0x2 ),	/* Offset= 2 (738) */
/* 738 */	NdrFcShort( 0x38 ),	/* 56 */
/* 740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 742 */	NdrFcLong( 0x1 ),	/* 1 */
/* 746 */	NdrFcShort( 0x2c ),	/* Offset= 44 (790) */
/* 748 */	NdrFcShort( 0xffff ),	/* Offset= -1 (747) */
/* 750 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 752 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 754 */	NdrFcShort( 0x101 ),	/* 257 */
/* 756 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 758 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 760 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 762 */	NdrFcShort( 0x101 ),	/* 257 */
/* 764 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 766 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 768 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 770 */	NdrFcShort( 0x101 ),	/* 257 */
/* 772 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 774 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 776 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 778 */	NdrFcShort( 0x101 ),	/* 257 */
/* 780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 782 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 784 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 786 */	NdrFcShort( 0x101 ),	/* 257 */
/* 788 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 790 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 792 */	NdrFcShort( 0x38 ),	/* 56 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0xc ),	/* Offset= 12 (808) */
/* 798 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 800 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 802 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 804 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 806 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 808 */	
			0x12, 0x0,	/* FC_UP */
/* 810 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (750) */
/* 812 */	
			0x12, 0x0,	/* FC_UP */
/* 814 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (758) */
/* 816 */	
			0x12, 0x0,	/* FC_UP */
/* 818 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (766) */
/* 820 */	
			0x12, 0x0,	/* FC_UP */
/* 822 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (774) */
/* 824 */	
			0x12, 0x0,	/* FC_UP */
/* 826 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (782) */
/* 828 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 830 */	NdrFcShort( 0x40 ),	/* 64 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* Offset= 0 (834) */
/* 836 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 838 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 840 */	NdrFcShort( 0xff90 ),	/* Offset= -112 (728) */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 850 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 852 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 854 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 858 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 860 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0xffde ),	/* Offset= -34 (828) */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short TermSrvSession_FormatStringOffsetTable[] =
    {
    0,
    48,
    92,
    148,
    192,
    236,
    292,
    342,
    392,
    436,
    516,
    578,
    626,
    674,
    704,
    734,
    782,
    830,
    884,
    914,
    944,
    974
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
    1024,
    1078,
    1132,
    1188
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
    1232,
    1274,
    1318,
    1374,
    1418,
    1468,
    1530,
    1580,
    1610,
    1670,
    1732,
    1786
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


#endif /* defined(_M_AMD64)*/

