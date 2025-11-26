

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for legacy.idl:
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

#include "ms-tsts_legacy_x64.h"

#define TYPE_FORMAT_STRING_SIZE   801                               
#define PROC_FORMAT_STRING_SIZE   3537                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _legacy_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } legacy_MIDL_TYPE_FORMAT_STRING;

typedef struct _legacy_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } legacy_MIDL_PROC_FORMAT_STRING;

typedef struct _legacy_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } legacy_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const legacy_MIDL_TYPE_FORMAT_STRING legacy__MIDL_TypeFormatString;
extern const legacy_MIDL_PROC_FORMAT_STRING legacy__MIDL_ProcFormatString;
extern const legacy_MIDL_EXPR_FORMAT_STRING legacy__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: __MIDL_itf_legacy_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: IcaApi, ver. 1.0,
   GUID={0x5ca4a760,0xebb1,0x11cf,{0x86,0x11,0x00,0xa0,0x24,0x54,0x20,0xed}} */



static const RPC_CLIENT_INTERFACE IcaApi___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x5ca4a760,0xebb1,0x11cf,{0x86,0x11,0x00,0xa0,0x24,0x54,0x20,0xed}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE IcaApi_v1_0_c_ifspec = (RPC_IF_HANDLE)& IcaApi___RpcClientInterface;

extern const MIDL_STUB_DESC IcaApi_StubDesc;

static RPC_BINDING_HANDLE IcaApi__MIDL_AutoBindHandle;


BOOLEAN RpcWinStationOpenServer( 
    /* [in] */ handle_t hBinding,
    /* [out] */ DWORD *pResult,
    /* [out] */ SERVER_HANDLE *phServer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[0],
                  hBinding,
                  pResult,
                  phServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationCloseServer( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[48],
                  hServer,
                  pResult);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcIcaServerPing( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[98],
                  hServer,
                  pResult);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationEnumerate( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [out][in] */ PULONG pEntries,
    /* [size_is][unique][out][in] */ PCHAR pLogonId,
    /* [out][in] */ PULONG pByteCount,
    /* [out][in] */ PULONG pIndex)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[148],
                  hServer,
                  pResult,
                  pEntries,
                  pLogonId,
                  pByteCount,
                  pIndex);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationRename( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][in] */ PWCHAR pWinStationNameOld,
    /* [range][in] */ DWORD NameOldSize,
    /* [size_is][in] */ PWCHAR pWinStationNameNew,
    /* [range][in] */ DWORD NameNewSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[222],
                  hServer,
                  pResult,
                  pWinStationNameOld,
                  NameOldSize,
                  pWinStationNameNew,
                  NameNewSize);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationQueryInformation( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ DWORD WinStationInformationClass,
    /* [size_is][unique][out][in] */ PCHAR pWinStationInformation,
    /* [range][in] */ DWORD WinStationInformationLength,
    /* [out] */ DWORD *pReturnLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[296],
                  hServer,
                  pResult,
                  LogonId,
                  WinStationInformationClass,
                  pWinStationInformation,
                  WinStationInformationLength,
                  pReturnLength);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationSetInformation( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ DWORD WinStationInformationClass,
    /* [size_is][unique][out][in] */ PCHAR pWinStationInformation,
    /* [range][in] */ DWORD WinStationInformationLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[376],
                  hServer,
                  pResult,
                  LogonId,
                  WinStationInformationClass,
                  pWinStationInformation,
                  WinStationInformationLength);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationSendMessage( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [size_is][in] */ PWCHAR pTitle,
    /* [range][in] */ DWORD TitleLength,
    /* [size_is][in] */ PWCHAR pMessage,
    /* [range][in] */ DWORD MessageLength,
    /* [in] */ DWORD Style,
    /* [in] */ DWORD Timeout,
    /* [out] */ DWORD *pResponse,
    /* [in] */ BOOLEAN DoNotWait)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[450],
                  hServer,
                  pResult,
                  LogonId,
                  pTitle,
                  TitleLength,
                  pMessage,
                  MessageLength,
                  Style,
                  Timeout,
                  pResponse,
                  DoNotWait);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcLogonIdFromWinStationName( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][in] */ PWCHAR pWinStationName,
    /* [range][in] */ DWORD NameSize,
    /* [out] */ DWORD *pLogonId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[554],
                  hServer,
                  pResult,
                  pWinStationName,
                  NameSize,
                  pLogonId);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationNameFromLogonId( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LoginId,
    /* [size_is][out][in] */ PWCHAR pWinStationName,
    /* [range][in] */ DWORD NameSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[622],
                  hServer,
                  pResult,
                  LoginId,
                  pWinStationName,
                  NameSize);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationConnect( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ClientLogonId,
    /* [in] */ DWORD ConnectLogonId,
    /* [in] */ DWORD TargetLogonId,
    /* [size_is][in] */ PWCHAR pPassword,
    /* [range][in] */ DWORD PasswordSize,
    /* [in] */ BOOLEAN Wait)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[690],
                  hServer,
                  pResult,
                  ClientLogonId,
                  ConnectLogonId,
                  TargetLogonId,
                  pPassword,
                  PasswordSize,
                  Wait);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum11NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[776],
                  IDL_handle);
    
}


void Opnum12NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[806],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationDisconnect( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN bWait)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[836],
                  hServer,
                  pResult,
                  LogonId,
                  bWait);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationReset( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN bWait)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[898],
                  hServer,
                  pResult,
                  LogonId,
                  bWait);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationShutdownSystem( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ClientLogonId,
    /* [in] */ DWORD ShutdownFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[960],
                  hServer,
                  pResult,
                  ClientLogonId,
                  ShutdownFlags);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationWaitSystemEvent( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD EventMask,
    /* [out] */ DWORD *pEventFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1022],
                  hServer,
                  pResult,
                  EventMask,
                  pEventFlags);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationShadow( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [size_is][unique][in] */ PWCHAR pTargetServerName,
    /* [range][in] */ DWORD NameSize,
    /* [in] */ DWORD TargetLogonId,
    /* [in] */ BYTE HotKeyVk,
    /* [in] */ USHORT HotkeyModifiers)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1084],
                  hServer,
                  pResult,
                  LogonId,
                  pTargetServerName,
                  NameSize,
                  TargetLogonId,
                  HotKeyVk,
                  HotkeyModifiers);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum18NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1170],
                  IDL_handle);
    
}


void Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1200],
                  IDL_handle);
    
}


void Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1230],
                  IDL_handle);
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1260],
                  IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1290],
                  IDL_handle);
    
}


void Opnum23NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1320],
                  IDL_handle);
    
}


void Opnum24NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1350],
                  IDL_handle);
    
}


void Opnum25NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1380],
                  IDL_handle);
    
}


void Opnum26NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1410],
                  IDL_handle);
    
}


void Opnum27NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1440],
                  IDL_handle);
    
}


void Opnum28NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1470],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationBreakPoint( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN KernelFlag)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1500],
                  hServer,
                  pResult,
                  LogonId,
                  KernelFlag);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationReadRegistry( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1562],
                  hServer,
                  pResult);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum31NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1612],
                  IDL_handle);
    
}


void Opnum32NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1642],
                  IDL_handle);
    
}


void Opnum33NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1672],
                  IDL_handle);
    
}


BOOLEAN OldRpcWinStationEnumerateProcesses( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][out] */ PBYTE pProcessBuffer,
    /* [range][in] */ DWORD ByteCount)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1702],
                  hServer,
                  pResult,
                  pProcessBuffer,
                  ByteCount);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum35NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1764],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationEnumerateProcesses( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][out] */ PBYTE pProcessBuffer,
    /* [range][in] */ DWORD ByteCount)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1794],
                  hServer,
                  pResult,
                  pProcessBuffer,
                  ByteCount);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationTerminateProcess( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ProcessId,
    /* [in] */ DWORD ExitCode)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1856],
                  hServer,
                  pResult,
                  ProcessId,
                  ExitCode);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1918],
                  IDL_handle);
    
}


void Opnum39NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1948],
                  IDL_handle);
    
}


void Opnum40NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1978],
                  IDL_handle);
    
}


void Opnum41NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2008],
                  IDL_handle);
    
}


void Opnum42NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2038],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationGetAllProcesses( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ ULONG Level,
    /* [out][in] */ BOUNDED_ULONG *pNumberOfProcesses,
    /* [size_is][size_is][out] */ PTS_ALL_PROCESSES_INFO *ppTsAllProcessesInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2068],
                  hServer,
                  pResult,
                  Level,
                  pNumberOfProcesses,
                  ppTsAllProcessesInfo);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationGetProcessSid( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [in] */ DWORD dwUniqueProcessId,
    /* [in] */ LARGE_INTEGER ProcessStartTime,
    /* [out] */ LONG *pResult,
    /* [size_is][unique][out][in] */ PBYTE pProcessUserSid,
    /* [range][in] */ DWORD dwSidSize,
    /* [out][in] */ DWORD *pdwSizeNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2136],
                  hServer,
                  dwUniqueProcessId,
                  ProcessStartTime,
                  pResult,
                  pProcessUserSid,
                  dwSidSize,
                  pdwSizeNeeded);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationGetTermSrvCountersValue( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [range][in] */ DWORD dwEntries,
    /* [size_is][out][in] */ PTS_COUNTER pCounter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2216],
                  hServer,
                  pResult,
                  dwEntries,
                  pCounter);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationReInitializeSecurity( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2278],
                  hServer,
                  pResult);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum47NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2328],
                  IDL_handle);
    
}


void Opnum48NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2358],
                  IDL_handle);
    
}


void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2388],
                  IDL_handle);
    
}


void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2418],
                  IDL_handle);
    
}


void Opnum51NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2448],
                  IDL_handle);
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2478],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationGetLanAdapterName( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [range][in] */ DWORD PdNameSize,
    /* [size_is][in] */ PWCHAR pPdName,
    /* [range][in] */ ULONG LanAdapter,
    /* [out] */ ULONG *pLength,
    /* [size_is][size_is][out] */ PWCHAR *ppLanAdapter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2508],
                  hServer,
                  pResult,
                  PdNameSize,
                  pPdName,
                  LanAdapter,
                  pLength,
                  ppLanAdapter);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2588],
                  IDL_handle);
    
}


void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2618],
                  IDL_handle);
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2648],
                  IDL_handle);
    
}


void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2678],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationUpdateSettings( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD SettingsClass,
    /* [in] */ DWORD SettingsParameters)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2708],
                  hServer,
                  pResult,
                  SettingsClass,
                  SettingsParameters);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationShadowStop( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN bWait)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2770],
                  hServer,
                  pResult,
                  LogonId,
                  bWait);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationCloseServerEx( 
    /* [out][in] */ SERVER_HANDLE *phServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2832],
                  phServer,
                  pResult);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationIsHelpAssistantSession( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ ULONG SessionId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2882],
                  hServer,
                  pResult,
                  SessionId);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationGetMachinePolicy( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [size_is][out][in] */ PBYTE pPolicy,
    /* [range][in] */ ULONG bufferSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2938],
                  hServer,
                  pPolicy,
                  bufferSize);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2994],
                  IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3024],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationCheckLoopBack( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ClientLogonId,
    /* [in] */ DWORD TargetLogonId,
    /* [size_is][in] */ PWCHAR pTargetServerName,
    /* [range][in] */ DWORD NameSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3054],
                  hServer,
                  pResult,
                  ClientLogonId,
                  TargetLogonId,
                  pTargetServerName,
                  NameSize);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcConnectCallback( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD TimeOut,
    /* [in] */ ULONG AddressType,
    /* [size_is][in] */ PBYTE pAddress,
    /* [range][in] */ ULONG AddressSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3128],
                  hServer,
                  pResult,
                  TimeOut,
                  AddressType,
                  pAddress,
                  AddressSize);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3202],
                  IDL_handle);
    
}


void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3232],
                  IDL_handle);
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3262],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationGetAllProcesses_NT6( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ ULONG Level,
    /* [out][in] */ BOUNDED_ULONG *pNumberOfProcesses,
    /* [size_is][size_is][out] */ PTS_ALL_PROCESSES_INFO_NT6 *ppTsAllProcessesInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3292],
                  hServer,
                  pResult,
                  Level,
                  pNumberOfProcesses,
                  ppTsAllProcessesInfo);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3360],
                  IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3390],
                  IDL_handle);
    
}


void Opnum73NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3420],
                  IDL_handle);
    
}


void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3450],
                  IDL_handle);
    
}


BOOLEAN RpcWinStationOpenSessionDirectory( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [max_is][string][in] */ PWCHAR pszServerName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3480],
                  hServer,
                  pResult,
                  pszServerName);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

const legacy_MIDL_PROC_FORMAT_STRING legacy__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcWinStationOpenServer */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x59 ),	/* 89 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pResult */

/* 30 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 36 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationCloseServer */

/* 48 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 60 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x24 ),	/* 36 */
/* 66 */	NdrFcShort( 0x21 ),	/* 33 */
/* 68 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 70 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 80 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 82 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 84 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 86 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 88 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 90 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 92 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 94 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 96 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcIcaServerPing */

/* 98 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x2 ),	/* 2 */
/* 106 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 108 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 112 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 116 */	NdrFcShort( 0x21 ),	/* 33 */
/* 118 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 120 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 130 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 146 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationEnumerate */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 156 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 158 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 160 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x78 ),	/* 120 */
/* 166 */	NdrFcShort( 0x75 ),	/* 117 */
/* 168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 170 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 180 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEntries */

/* 192 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pLogonId */

/* 198 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 202 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pByteCount */

/* 204 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 206 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIndex */

/* 210 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 212 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 220 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationRename */

/* 222 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x4 ),	/* 4 */
/* 230 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 232 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 236 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 238 */	NdrFcShort( 0x34 ),	/* 52 */
/* 240 */	NdrFcShort( 0x21 ),	/* 33 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 244 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 254 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 256 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 258 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationNameOld */

/* 266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 268 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 270 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter NameOldSize */

/* 272 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 276 */	NdrFcShort( 0x36 ),	/* 54 */

	/* Parameter pWinStationNameNew */

/* 278 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 280 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 282 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter NameNewSize */

/* 284 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 286 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 288 */	NdrFcShort( 0x50 ),	/* 80 */

	/* Return value */

/* 290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 292 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 294 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationQueryInformation */

/* 296 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x5 ),	/* 5 */
/* 304 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 306 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 308 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 310 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 312 */	NdrFcShort( 0x3c ),	/* 60 */
/* 314 */	NdrFcShort( 0x3d ),	/* 61 */
/* 316 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 318 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 328 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 330 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 332 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 334 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 342 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter WinStationInformationClass */

/* 346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 348 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationInformation */

/* 352 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 354 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 356 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter WinStationInformationLength */

/* 358 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 360 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 362 */	NdrFcShort( 0x6a ),	/* 106 */

	/* Parameter pReturnLength */

/* 364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 366 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 372 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 374 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationSetInformation */

/* 376 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x6 ),	/* 6 */
/* 384 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 386 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 388 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	NdrFcShort( 0x3c ),	/* 60 */
/* 394 */	NdrFcShort( 0x21 ),	/* 33 */
/* 396 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 398 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 408 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 412 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter WinStationInformationClass */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationInformation */

/* 432 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 436 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter WinStationInformationLength */

/* 438 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 440 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 442 */	NdrFcShort( 0x74 ),	/* 116 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 448 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationSendMessage */

/* 450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x7 ),	/* 7 */
/* 458 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 460 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 464 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x51 ),	/* 81 */
/* 468 */	NdrFcShort( 0x3d ),	/* 61 */
/* 470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 472 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 482 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 484 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 486 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTitle */

/* 500 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 502 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 504 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter TitleLength */

/* 506 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 508 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 510 */	NdrFcShort( 0x8e ),	/* 142 */

	/* Parameter pMessage */

/* 512 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 514 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 516 */	NdrFcShort( 0x9c ),	/* Type Offset=156 */

	/* Parameter MessageLength */

/* 518 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 520 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 522 */	NdrFcShort( 0xa8 ),	/* 168 */

	/* Parameter Style */

/* 524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 526 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Timeout */

/* 530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 532 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pResponse */

/* 536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 538 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DoNotWait */

/* 542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 544 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 546 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 550 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 552 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcLogonIdFromWinStationName */

/* 554 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 562 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 564 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 566 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 568 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0x2c ),	/* 44 */
/* 572 */	NdrFcShort( 0x3d ),	/* 61 */
/* 574 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 576 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 586 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 588 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 590 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationName */

/* 598 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 600 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 602 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter NameSize */

/* 604 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 606 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 608 */	NdrFcShort( 0xb2 ),	/* 178 */

	/* Parameter pLogonId */

/* 610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 612 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 618 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 620 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationNameFromLogonId */

/* 622 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x9 ),	/* 9 */
/* 630 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 632 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 634 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 638 */	NdrFcShort( 0x34 ),	/* 52 */
/* 640 */	NdrFcShort( 0x21 ),	/* 33 */
/* 642 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 644 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 654 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 656 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 658 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LoginId */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationName */

/* 672 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 676 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter NameSize */

/* 678 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 680 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 682 */	NdrFcShort( 0xbc ),	/* 188 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 688 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationConnect */

/* 690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0xa ),	/* 10 */
/* 698 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 700 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0x49 ),	/* 73 */
/* 708 */	NdrFcShort( 0x21 ),	/* 33 */
/* 710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 712 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 724 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 726 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientLogonId */

/* 734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ConnectLogonId */

/* 740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TargetLogonId */

/* 746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 748 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPassword */

/* 752 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 754 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 756 */	NdrFcShort( 0x9c ),	/* Type Offset=156 */

	/* Parameter PasswordSize */

/* 758 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 760 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 762 */	NdrFcShort( 0xc6 ),	/* 198 */

	/* Parameter Wait */

/* 764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 766 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 768 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 772 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 774 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum11NotUsedOnWire */

/* 776 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0xb ),	/* 11 */
/* 784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 786 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 796 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum12NotUsedOnWire */

/* 806 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0xc ),	/* 12 */
/* 814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 816 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 826 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationDisconnect */

/* 836 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0xd ),	/* 13 */
/* 844 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 846 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 848 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 850 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0x31 ),	/* 49 */
/* 854 */	NdrFcShort( 0x21 ),	/* 33 */
/* 856 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 858 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 868 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 870 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 872 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 876 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWait */

/* 886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 888 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 890 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 894 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 896 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationReset */

/* 898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0xe ),	/* 14 */
/* 906 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 908 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 910 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 912 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0x31 ),	/* 49 */
/* 916 */	NdrFcShort( 0x21 ),	/* 33 */
/* 918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 920 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 930 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 932 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 934 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWait */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 952 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 956 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 958 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationShutdownSystem */

/* 960 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0xf ),	/* 15 */
/* 968 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 970 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 972 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 974 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 976 */	NdrFcShort( 0x34 ),	/* 52 */
/* 978 */	NdrFcShort( 0x21 ),	/* 33 */
/* 980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 982 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 992 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 994 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 996 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientLogonId */

/* 1004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ShutdownFlags */

/* 1010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1018 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1020 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationWaitSystemEvent */

/* 1022 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1030 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1032 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1034 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1036 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1038 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1040 */	NdrFcShort( 0x3d ),	/* 61 */
/* 1042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1044 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1054 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1056 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1058 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventMask */

/* 1066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1068 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEventFlags */

/* 1072 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1074 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1080 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1082 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationShadow */

/* 1084 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1092 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1094 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1096 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1098 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1100 */	NdrFcShort( 0x47 ),	/* 71 */
/* 1102 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1104 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1106 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1116 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1118 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1120 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1122 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1124 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 1128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1130 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTargetServerName */

/* 1134 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1136 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1138 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter NameSize */

/* 1140 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1142 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1144 */	NdrFcShort( 0xd4 ),	/* 212 */

	/* Parameter TargetLogonId */

/* 1146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1148 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter HotKeyVk */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1156 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter HotkeyModifiers */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1162 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1168 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum18NotUsedOnWire */

/* 1170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum19NotUsedOnWire */

/* 1200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1220 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum20NotUsedOnWire */

/* 1230 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1238 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1240 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1250 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1260 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1270 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1272 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1278 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1280 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 1290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1300 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1302 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1310 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum23NotUsedOnWire */

/* 1320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1328 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1330 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1340 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum24NotUsedOnWire */

/* 1350 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1358 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1360 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum25NotUsedOnWire */

/* 1380 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1390 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1392 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1400 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum26NotUsedOnWire */

/* 1410 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1420 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1430 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum27NotUsedOnWire */

/* 1440 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1448 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1450 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1460 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum28NotUsedOnWire */

/* 1470 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1480 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1490 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationBreakPoint */

/* 1500 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1508 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1510 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1512 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1514 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1516 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1518 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1520 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1522 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1532 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1534 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1536 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 1544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1546 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KernelFlag */

/* 1550 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1552 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1554 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 1556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1558 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1560 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationReadRegistry */

/* 1562 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1570 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1572 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1574 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1576 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1578 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1580 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1584 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1594 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1596 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1598 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1602 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1608 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1610 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum31NotUsedOnWire */

/* 1612 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1622 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1624 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1632 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum32NotUsedOnWire */

/* 1642 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1650 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1652 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1662 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum33NotUsedOnWire */

/* 1672 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1680 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1682 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1692 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure OldRpcWinStationEnumerateProcesses */

/* 1702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1710 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1712 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1714 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1718 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1720 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1724 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1734 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1736 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1738 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1740 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1742 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessBuffer */

/* 1746 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1748 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1750 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter ByteCount */

/* 1752 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1754 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1756 */	NdrFcShort( 0xee ),	/* 238 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1762 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum35NotUsedOnWire */

/* 1764 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1774 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1776 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1784 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationEnumerateProcesses */

/* 1794 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1802 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1804 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1806 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1808 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1810 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1812 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1814 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1816 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1818 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1826 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1828 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1830 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1832 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1834 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessBuffer */

/* 1838 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1840 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1842 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter ByteCount */

/* 1844 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1846 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1848 */	NdrFcShort( 0xf8 ),	/* 248 */

	/* Return value */

/* 1850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1852 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1854 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationTerminateProcess */

/* 1856 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1864 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1866 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1868 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1870 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1872 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1874 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1876 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1878 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1888 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1890 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1892 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ProcessId */

/* 1900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1902 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ExitCode */

/* 1906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1908 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1914 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1916 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 1918 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1926 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1928 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1938 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum39NotUsedOnWire */

/* 1948 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1956 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1958 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1960 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1968 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum40NotUsedOnWire */

/* 1978 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1988 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1990 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1998 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum41NotUsedOnWire */

/* 2008 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2018 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2020 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2028 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum42NotUsedOnWire */

/* 2038 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2044 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2046 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2048 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2058 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationGetAllProcesses */

/* 2068 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2076 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2078 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2080 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2082 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2084 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2086 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2088 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2090 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2100 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2104 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 2112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNumberOfProcesses */

/* 2118 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2122 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter ppTsAllProcessesInfo */

/* 2124 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2128 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2132 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2134 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationGetProcessSid */

/* 2136 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2144 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2146 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2148 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2150 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2152 */	NdrFcShort( 0x68 ),	/* 104 */
/* 2154 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2156 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2158 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2168 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2170 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2172 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter dwUniqueProcessId */

/* 2174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ProcessStartTime */

/* 2180 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2184 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Parameter pResult */

/* 2186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2188 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessUserSid */

/* 2192 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2194 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2196 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter dwSidSize */

/* 2198 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2200 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2202 */	NdrFcShort( 0x1b4 ),	/* 436 */

	/* Parameter pdwSizeNeeded */

/* 2204 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2206 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2212 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2214 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationGetTermSrvCountersValue */

/* 2216 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2224 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2226 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2230 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2232 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2234 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2238 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2248 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2250 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2252 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwEntries */

/* 2260 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2264 */	NdrFcShort( 0x1be ),	/* 446 */

	/* Parameter pCounter */

/* 2266 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2270 */	NdrFcShort( 0x1ec ),	/* Type Offset=492 */

	/* Return value */

/* 2272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2274 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2276 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationReInitializeSecurity */

/* 2278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2288 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2292 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2294 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2296 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2300 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2310 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2312 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2314 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2326 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum47NotUsedOnWire */

/* 2328 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2338 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2348 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum48NotUsedOnWire */

/* 2358 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2368 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2370 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2378 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 2388 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2396 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2398 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2400 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2408 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 2418 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2426 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2428 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2438 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum51NotUsedOnWire */

/* 2448 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2458 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2460 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2468 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 2478 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2486 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2488 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2490 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2498 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationGetLanAdapterName */

/* 2508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2516 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2518 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2520 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2522 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2524 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2526 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2528 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2530 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2540 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2544 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PdNameSize */

/* 2552 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2556 */	NdrFcShort( 0x202 ),	/* 514 */

	/* Parameter pPdName */

/* 2558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2560 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2562 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter LanAdapter */

/* 2564 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2566 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2568 */	NdrFcShort( 0x21c ),	/* 540 */

	/* Parameter pLength */

/* 2570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2572 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppLanAdapter */

/* 2576 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2578 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2580 */	NdrFcShort( 0x226 ),	/* Type Offset=550 */

	/* Return value */

/* 2582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2584 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2586 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 2588 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2598 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2600 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2606 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2608 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 2618 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2628 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2638 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 2648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2656 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2668 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 2678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2688 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2698 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationUpdateSettings */

/* 2708 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2716 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2718 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2720 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2722 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2724 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2726 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2728 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2730 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2740 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2742 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2744 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SettingsClass */

/* 2752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SettingsParameters */

/* 2758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2760 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2766 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2768 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationShadowStop */

/* 2770 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2778 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2780 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2782 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2784 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2786 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2788 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2792 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2802 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2806 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWait */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2824 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2830 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationCloseServerEx */

/* 2832 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2840 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2842 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2844 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2846 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2848 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2850 */	NdrFcShort( 0x59 ),	/* 89 */
/* 2852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phServer */

/* 2864 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2866 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2868 */	NdrFcShort( 0x23e ),	/* Type Offset=574 */

	/* Parameter pResult */

/* 2870 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2880 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationIsHelpAssistantSession */

/* 2882 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2890 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2892 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2894 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2896 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2898 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2900 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2902 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2904 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2914 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2916 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2918 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2922 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SessionId */

/* 2926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2928 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2934 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2936 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationGetMachinePolicy */

/* 2938 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2944 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2946 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2948 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2950 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2952 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2954 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2956 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2960 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2970 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2972 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2974 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pPolicy */

/* 2976 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2980 */	NdrFcShort( 0x246 ),	/* Type Offset=582 */

	/* Parameter bufferSize */

/* 2982 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2984 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2986 */	NdrFcShort( 0x252 ),	/* 594 */

	/* Return value */

/* 2988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2990 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2992 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2994 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3002 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3004 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3006 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3014 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3044 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationCheckLoopBack */

/* 3054 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3062 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3064 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3066 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3068 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3070 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3072 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3074 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3076 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3086 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3088 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3090 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3092 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3094 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientLogonId */

/* 3098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3100 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TargetLogonId */

/* 3104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3106 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTargetServerName */

/* 3110 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3112 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3114 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter NameSize */

/* 3116 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3118 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3120 */	NdrFcShort( 0x25c ),	/* 604 */

	/* Return value */

/* 3122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3124 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3126 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcConnectCallback */

/* 3128 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3136 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3138 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3140 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3142 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3144 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3146 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3150 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3160 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3162 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3164 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TimeOut */

/* 3172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AddressType */

/* 3178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3180 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddress */

/* 3184 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3186 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3188 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter AddressSize */

/* 3190 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3192 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3194 */	NdrFcShort( 0x26a ),	/* 618 */

	/* Return value */

/* 3196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3198 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3200 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 3202 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3212 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3220 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3222 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum68NotUsedOnWire */

/* 3232 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3242 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3244 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3252 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 3262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3270 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3272 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3282 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationGetAllProcesses_NT6 */

/* 3292 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3300 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3302 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3304 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3306 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3308 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3310 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3312 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 3314 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3324 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3328 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 3336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNumberOfProcesses */

/* 3342 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 3344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3346 */	NdrFcShort( 0x278 ),	/* Type Offset=632 */

	/* Parameter ppTsAllProcessesInfo */

/* 3348 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3350 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3352 */	NdrFcShort( 0x282 ),	/* Type Offset=642 */

	/* Return value */

/* 3354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3356 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3358 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 3360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3370 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3372 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 3390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3410 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum73NotUsedOnWire */

/* 3420 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3430 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3432 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum74NotUsedOnWire */

/* 3450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3460 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3470 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationOpenSessionDirectory */

/* 3480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3488 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3490 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3492 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3494 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3498 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3502 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3512 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3514 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3516 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszServerName */

/* 3524 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3526 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3528 */	NdrFcShort( 0x318 ),	/* Type Offset=792 */

	/* Return value */

/* 3530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3532 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3534 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

			0x0
        }
    };

const legacy_MIDL_TYPE_FORMAT_STRING legacy__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x12, 0x0,	/* FC_UP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 32 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 34 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 36 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 38 */	
			0x11, 0x0,	/* FC_RP */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 44 */	NdrFcShort( 0x2 ),	/* 2 */
/* 46 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 48 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 50 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 52 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 54 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcLong( 0x100 ),	/* 256 */
/* 64 */	
			0x11, 0x0,	/* FC_RP */
/* 66 */	NdrFcShort( 0x2 ),	/* Offset= 2 (68) */
/* 68 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 70 */	NdrFcShort( 0x2 ),	/* 2 */
/* 72 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 76 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 78 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 80 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 82 */	NdrFcLong( 0x0 ),	/* 0 */
/* 86 */	NdrFcLong( 0x100 ),	/* 256 */
/* 90 */	
			0x12, 0x0,	/* FC_UP */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 100 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 102 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 104 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 106 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 116 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 122 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 126 */	
			0x11, 0x0,	/* FC_RP */
/* 128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (130) */
/* 130 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 132 */	NdrFcShort( 0x2 ),	/* 2 */
/* 134 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 136 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 138 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 140 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 142 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 152 */	
			0x11, 0x0,	/* FC_RP */
/* 154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (156) */
/* 156 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 158 */	NdrFcShort( 0x2 ),	/* 2 */
/* 160 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 162 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 164 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 166 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 168 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 178 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 184 */	NdrFcLong( 0x100 ),	/* 256 */
/* 188 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 194 */	NdrFcLong( 0x100 ),	/* 256 */
/* 198 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 208 */	
			0x12, 0x0,	/* FC_UP */
/* 210 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (130) */
/* 212 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 222 */	
			0x11, 0x0,	/* FC_RP */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 228 */	NdrFcShort( 0x1 ),	/* 1 */
/* 230 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 234 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 236 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 238 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 248 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 254 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 258 */	
			0x11, 0x0,	/* FC_RP */
/* 260 */	NdrFcShort( 0x2 ),	/* Offset= 2 (262) */
/* 262 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 268 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 272 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (276) */
/* 276 */	
			0x12, 0x0,	/* FC_UP */
/* 278 */	NdrFcShort( 0x88 ),	/* Offset= 136 (414) */
/* 280 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 286 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 288 */	NdrFcShort( 0x2 ),	/* 2 */
/* 290 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 292 */	NdrFcShort( 0x2 ),	/* 2 */
/* 294 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 296 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 302 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 304 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 306 */	NdrFcShort( 0x10 ),	/* 16 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x8 ),	/* Offset= 8 (318) */
/* 312 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 314 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 316 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 318 */	
			0x12, 0x0,	/* FC_UP */
/* 320 */	NdrFcShort( 0xffde ),	/* Offset= -34 (286) */
/* 322 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 324 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* Offset= 0 (328) */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 334 */	NdrFcShort( 0xffca ),	/* Offset= -54 (280) */
/* 336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 338 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (280) */
/* 340 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 342 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (280) */
/* 344 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 346 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (280) */
/* 348 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 350 */	NdrFcShort( 0xffba ),	/* Offset= -70 (280) */
/* 352 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 354 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (280) */
/* 356 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 358 */	NdrFcShort( 0xffca ),	/* Offset= -54 (304) */
/* 360 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 362 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 364 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 366 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 368 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 370 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 372 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 374 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 376 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 378 */	0xb9,		/* FC_UINT3264 */
			0x5b,		/* FC_END */
/* 380 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 384 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 390 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 394 */	NdrFcShort( 0x18 ),	/* 24 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x8 ),	/* Offset= 8 (406) */
/* 400 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 402 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 404 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 406 */	
			0x12, 0x0,	/* FC_UP */
/* 408 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (322) */
/* 410 */	
			0x12, 0x0,	/* FC_UP */
/* 412 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (380) */
/* 414 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 422 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 424 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 428 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 430 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 432 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (392) */
/* 434 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 436 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 446 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 452 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 456 */	
			0x11, 0x0,	/* FC_RP */
/* 458 */	NdrFcShort( 0x22 ),	/* Offset= 34 (492) */
/* 460 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* Offset= 0 (466) */
/* 468 */	0x8,		/* FC_LONG */
			0x3,		/* FC_SMALL */
/* 470 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 472 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 474 */	NdrFcShort( 0x18 ),	/* 24 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* Offset= 0 (478) */
/* 480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 482 */	NdrFcShort( 0xffea ),	/* Offset= -22 (460) */
/* 484 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 486 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 488 */	NdrFcShort( 0xff30 ),	/* Offset= -208 (280) */
/* 490 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 492 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 498 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 500 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 502 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 506 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 508 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 510 */	NdrFcShort( 0xffda ),	/* Offset= -38 (472) */
/* 512 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 514 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 520 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 524 */	
			0x11, 0x0,	/* FC_RP */
/* 526 */	NdrFcShort( 0x2 ),	/* Offset= 2 (528) */
/* 528 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 530 */	NdrFcShort( 0x2 ),	/* 2 */
/* 532 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 538 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 540 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 550 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 552 */	NdrFcShort( 0x2 ),	/* Offset= 2 (554) */
/* 554 */	
			0x12, 0x0,	/* FC_UP */
/* 556 */	NdrFcShort( 0x2 ),	/* Offset= 2 (558) */
/* 558 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 560 */	NdrFcShort( 0x2 ),	/* 2 */
/* 562 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 564 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 566 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 568 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 570 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 572 */	NdrFcShort( 0x2 ),	/* Offset= 2 (574) */
/* 574 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 576 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 578 */	
			0x11, 0x0,	/* FC_RP */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 586 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 590 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 592 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 594 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 604 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 614 */	
			0x11, 0x0,	/* FC_RP */
/* 616 */	NdrFcShort( 0xfdf6 ),	/* Offset= -522 (94) */
/* 618 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 628 */	
			0x11, 0x0,	/* FC_RP */
/* 630 */	NdrFcShort( 0x2 ),	/* Offset= 2 (632) */
/* 632 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 638 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 642 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 644 */	NdrFcShort( 0x2 ),	/* Offset= 2 (646) */
/* 646 */	
			0x12, 0x0,	/* FC_UP */
/* 648 */	NdrFcShort( 0x76 ),	/* Offset= 118 (766) */
/* 650 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 652 */	NdrFcShort( 0x2 ),	/* 2 */
/* 654 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 656 */	NdrFcShort( 0x2 ),	/* 2 */
/* 658 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 660 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 666 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x10 ),	/* 16 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x8 ),	/* Offset= 8 (682) */
/* 676 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 678 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 682 */	
			0x12, 0x0,	/* FC_UP */
/* 684 */	NdrFcShort( 0xffde ),	/* Offset= -34 (650) */
/* 686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 688 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* Offset= 0 (692) */
/* 694 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0xfe5e ),	/* Offset= -418 (280) */
/* 700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0xfe5a ),	/* Offset= -422 (280) */
/* 704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0xfe56 ),	/* Offset= -426 (280) */
/* 708 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 710 */	NdrFcShort( 0xfe52 ),	/* Offset= -430 (280) */
/* 712 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0xfe4e ),	/* Offset= -434 (280) */
/* 716 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 718 */	NdrFcShort( 0xfe4a ),	/* Offset= -438 (280) */
/* 720 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 722 */	NdrFcShort( 0xffca ),	/* Offset= -54 (668) */
/* 724 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 726 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 728 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 730 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 732 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 734 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 736 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 738 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 740 */	0xb9,		/* FC_UINT3264 */
			0xb9,		/* FC_UINT3264 */
/* 742 */	0xb9,		/* FC_UINT3264 */
			0x5b,		/* FC_END */
/* 744 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x18 ),	/* 24 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x8 ),	/* Offset= 8 (758) */
/* 752 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 754 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x12, 0x0,	/* FC_UP */
/* 760 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (686) */
/* 762 */	
			0x12, 0x0,	/* FC_UP */
/* 764 */	NdrFcShort( 0xfe80 ),	/* Offset= -384 (380) */
/* 766 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 776 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 780 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 782 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 784 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (744) */
/* 786 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 788 */	
			0x11, 0x0,	/* FC_RP */
/* 790 */	NdrFcShort( 0x2 ),	/* Offset= 2 (792) */
/* 792 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 794 */	0x40,		/* Corr desc:  constant, val=65 */
			0x0,		/* 0 */
/* 796 */	NdrFcShort( 0x41 ),	/* 65 */
/* 798 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */

			0x0
        }
    };

static const unsigned short IcaApi_FormatStringOffsetTable[] =
    {
    0,
    48,
    98,
    148,
    222,
    296,
    376,
    450,
    554,
    622,
    690,
    776,
    806,
    836,
    898,
    960,
    1022,
    1084,
    1170,
    1200,
    1230,
    1260,
    1290,
    1320,
    1350,
    1380,
    1410,
    1440,
    1470,
    1500,
    1562,
    1612,
    1642,
    1672,
    1702,
    1764,
    1794,
    1856,
    1918,
    1948,
    1978,
    2008,
    2038,
    2068,
    2136,
    2216,
    2278,
    2328,
    2358,
    2388,
    2418,
    2448,
    2478,
    2508,
    2588,
    2618,
    2648,
    2678,
    2708,
    2770,
    2832,
    2882,
    2938,
    2994,
    3024,
    3054,
    3128,
    3202,
    3232,
    3262,
    3292,
    3360,
    3390,
    3420,
    3450,
    3480
    };


const MIDL_STUB_DESC IcaApi_StubDesc = 
    {
    (void *)& IcaApi___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &IcaApi__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    legacy__MIDL_TypeFormatString.Format,
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

