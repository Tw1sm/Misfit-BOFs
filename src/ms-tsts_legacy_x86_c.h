

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for legacy.idl:
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

#include "ms-tsts_legacy_x86.h"

#define TYPE_FORMAT_STRING_SIZE   857                               
#define PROC_FORMAT_STRING_SIZE   3385                              
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
                  ( unsigned char * )&hBinding);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationCloseServer( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[46],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcIcaServerPing( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[94],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[142],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[214],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[286],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[364],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[436],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[538],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[604],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[670],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum11NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[754],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum12NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[782],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[810],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[870],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[930],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[990],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1050],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum18NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1134],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1162],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1190],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1218],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1246],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum23NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1274],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum24NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1302],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum25NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1330],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum26NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1358],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum27NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1386],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum28NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1414],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1442],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationReadRegistry( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1502],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum31NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1550],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum32NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1578],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum33NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1606],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1634],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum35NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1694],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1722],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1782],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1842],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum39NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1870],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum40NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1898],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum41NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1926],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum42NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1954],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[1982],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2048],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2126],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationReInitializeSecurity( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2186],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum47NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2234],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum48NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2262],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2290],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2318],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum51NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2346],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2374],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2402],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2480],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2508],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2536],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2564],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2592],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2652],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


BOOLEAN RpcWinStationCloseServerEx( 
    /* [out][in] */ SERVER_HANDLE *phServer,
    /* [out] */ DWORD *pResult)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2712],
                  ( unsigned char * )&phServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2760],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2814],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2868],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2896],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2924],
                  ( unsigned char * )&hServer);
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[2996],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3068],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3096],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3124],
                  ( unsigned char * )&IDL_handle);
    
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
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3152],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3218],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3246],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum73NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3274],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3302],
                  ( unsigned char * )&IDL_handle);
    
}


BOOLEAN RpcWinStationOpenSessionDirectory( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [max_is][string][in] */ PWCHAR pszServerName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IcaApi_StubDesc,
                  (PFORMAT_STRING) &legacy__MIDL_ProcFormatString.Format[3330],
                  ( unsigned char * )&hServer);
    return ( BOOLEAN  )_RetVal.Simple;
    
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


const legacy_MIDL_PROC_FORMAT_STRING legacy__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcWinStationOpenServer */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x59 ),	/* 89 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pResult */

/* 28 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 34 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 40 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationCloseServer */

/* 46 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 48 */	NdrFcLong( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 56 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 58 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 60 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0x24 ),	/* 36 */
/* 64 */	NdrFcShort( 0x21 ),	/* 33 */
/* 66 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 68 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 76 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 78 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 80 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 82 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 84 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 88 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 90 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 92 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcIcaServerPing */

/* 94 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 96 */	NdrFcLong( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x2 ),	/* 2 */
/* 102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 104 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 106 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 108 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0x24 ),	/* 36 */
/* 112 */	NdrFcShort( 0x21 ),	/* 33 */
/* 114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 124 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 126 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 128 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 140 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationEnumerate */

/* 142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x3 ),	/* 3 */
/* 150 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 152 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 158 */	NdrFcShort( 0x78 ),	/* 120 */
/* 160 */	NdrFcShort( 0x75 ),	/* 117 */
/* 162 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 164 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 172 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 176 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEntries */

/* 184 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pLogonId */

/* 190 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 194 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pByteCount */

/* 196 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIndex */

/* 202 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 204 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 210 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 212 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationRename */

/* 214 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 224 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 226 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 228 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 230 */	NdrFcShort( 0x34 ),	/* 52 */
/* 232 */	NdrFcShort( 0x21 ),	/* 33 */
/* 234 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 236 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 244 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 246 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 248 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationNameOld */

/* 256 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 260 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter NameOldSize */

/* 262 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 266 */	NdrFcShort( 0x36 ),	/* 54 */

	/* Parameter pWinStationNameNew */

/* 268 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 272 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter NameNewSize */

/* 274 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 276 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 278 */	NdrFcShort( 0x50 ),	/* 80 */

	/* Return value */

/* 280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 282 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 284 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationQueryInformation */

/* 286 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x5 ),	/* 5 */
/* 294 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 296 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 298 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 300 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 302 */	NdrFcShort( 0x3c ),	/* 60 */
/* 304 */	NdrFcShort( 0x3d ),	/* 61 */
/* 306 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 308 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 316 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 318 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 320 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter WinStationInformationClass */

/* 334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationInformation */

/* 340 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 344 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter WinStationInformationLength */

/* 346 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 350 */	NdrFcShort( 0x6a ),	/* 106 */

	/* Parameter pReturnLength */

/* 352 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 354 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 360 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 362 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationSetInformation */

/* 364 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x6 ),	/* 6 */
/* 372 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 374 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 376 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 380 */	NdrFcShort( 0x3c ),	/* 60 */
/* 382 */	NdrFcShort( 0x21 ),	/* 33 */
/* 384 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 386 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 394 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 398 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter WinStationInformationClass */

/* 412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationInformation */

/* 418 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 420 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 422 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter WinStationInformationLength */

/* 424 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 426 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 428 */	NdrFcShort( 0x74 ),	/* 116 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 432 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 434 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationSendMessage */

/* 436 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x7 ),	/* 7 */
/* 444 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 446 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 448 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 450 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 452 */	NdrFcShort( 0x51 ),	/* 81 */
/* 454 */	NdrFcShort( 0x3d ),	/* 61 */
/* 456 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 458 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 466 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 470 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTitle */

/* 484 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 488 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter TitleLength */

/* 490 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 494 */	NdrFcShort( 0x8e ),	/* 142 */

	/* Parameter pMessage */

/* 496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 498 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 500 */	NdrFcShort( 0x9c ),	/* Type Offset=156 */

	/* Parameter MessageLength */

/* 502 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 504 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 506 */	NdrFcShort( 0xa8 ),	/* 168 */

	/* Parameter Style */

/* 508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 510 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Timeout */

/* 514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 516 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pResponse */

/* 520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 522 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DoNotWait */

/* 526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 528 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 530 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 536 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcLogonIdFromWinStationName */

/* 538 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 546 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 548 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 550 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 552 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0x2c ),	/* 44 */
/* 556 */	NdrFcShort( 0x3d ),	/* 61 */
/* 558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 560 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 568 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 570 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 572 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationName */

/* 580 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 584 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter NameSize */

/* 586 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 590 */	NdrFcShort( 0xb2 ),	/* 178 */

	/* Parameter pLogonId */

/* 592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 600 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 602 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationNameFromLogonId */

/* 604 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x9 ),	/* 9 */
/* 612 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 614 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 616 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 618 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 620 */	NdrFcShort( 0x34 ),	/* 52 */
/* 622 */	NdrFcShort( 0x21 ),	/* 33 */
/* 624 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 626 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 634 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 636 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 638 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LoginId */

/* 646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWinStationName */

/* 652 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 656 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter NameSize */

/* 658 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 660 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 662 */	NdrFcShort( 0xbc ),	/* 188 */

	/* Return value */

/* 664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 666 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 668 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationConnect */

/* 670 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0xa ),	/* 10 */
/* 678 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 680 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 682 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 684 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0x49 ),	/* 73 */
/* 688 */	NdrFcShort( 0x21 ),	/* 33 */
/* 690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 692 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 700 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 702 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 704 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 706 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientLogonId */

/* 712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ConnectLogonId */

/* 718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TargetLogonId */

/* 724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPassword */

/* 730 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 732 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 734 */	NdrFcShort( 0x9c ),	/* Type Offset=156 */

	/* Parameter PasswordSize */

/* 736 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 740 */	NdrFcShort( 0xc6 ),	/* 198 */

	/* Parameter Wait */

/* 742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 744 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 746 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 750 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 752 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum11NotUsedOnWire */

/* 754 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0xb ),	/* 11 */
/* 762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 764 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum12NotUsedOnWire */

/* 782 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0xc ),	/* 12 */
/* 790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 792 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationDisconnect */

/* 810 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0xd ),	/* 13 */
/* 818 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 820 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 822 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 824 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 826 */	NdrFcShort( 0x31 ),	/* 49 */
/* 828 */	NdrFcShort( 0x21 ),	/* 33 */
/* 830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 840 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 842 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 844 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWait */

/* 858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 868 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationReset */

/* 870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xe ),	/* 14 */
/* 878 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 880 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 882 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 884 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0x31 ),	/* 49 */
/* 888 */	NdrFcShort( 0x21 ),	/* 33 */
/* 890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 900 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 902 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 904 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWait */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 928 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationShutdownSystem */

/* 930 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0xf ),	/* 15 */
/* 938 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 940 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 942 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 944 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 946 */	NdrFcShort( 0x34 ),	/* 52 */
/* 948 */	NdrFcShort( 0x21 ),	/* 33 */
/* 950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 960 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 962 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 964 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientLogonId */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ShutdownFlags */

/* 978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 988 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationWaitSystemEvent */

/* 990 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x10 ),	/* 16 */
/* 998 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1000 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1002 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1004 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1006 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1008 */	NdrFcShort( 0x3d ),	/* 61 */
/* 1010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1012 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1020 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1022 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1024 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventMask */

/* 1032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEventFlags */

/* 1038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1040 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1048 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationShadow */

/* 1050 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1058 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1060 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1062 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1064 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1066 */	NdrFcShort( 0x47 ),	/* 71 */
/* 1068 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1070 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1072 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1080 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1082 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1084 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 1092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTargetServerName */

/* 1098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter NameSize */

/* 1104 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1106 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1108 */	NdrFcShort( 0xd4 ),	/* 212 */

	/* Parameter TargetLogonId */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter HotKeyVk */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1120 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter HotkeyModifiers */

/* 1122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1124 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1126 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1132 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum18NotUsedOnWire */

/* 1134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum19NotUsedOnWire */

/* 1162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum20NotUsedOnWire */

/* 1190 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1200 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1210 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1218 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 1246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1256 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum23NotUsedOnWire */

/* 1274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1284 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1294 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum24NotUsedOnWire */

/* 1302 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum25NotUsedOnWire */

/* 1330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum26NotUsedOnWire */

/* 1358 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1368 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1370 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum27NotUsedOnWire */

/* 1386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum28NotUsedOnWire */

/* 1414 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1424 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1426 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationBreakPoint */

/* 1442 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1452 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1454 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1456 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1458 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1460 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1472 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1474 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1476 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 1484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KernelFlag */

/* 1490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1494 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 1496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1498 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1500 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationReadRegistry */

/* 1502 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1512 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1516 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1518 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1520 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1524 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1532 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1534 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1536 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1548 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum31NotUsedOnWire */

/* 1550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1560 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum32NotUsedOnWire */

/* 1578 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1598 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum33NotUsedOnWire */

/* 1606 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1616 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1624 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1626 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure OldRpcWinStationEnumerateProcesses */

/* 1634 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1642 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1644 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1646 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1648 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1650 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1652 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1654 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1656 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1664 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1666 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1668 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessBuffer */

/* 1676 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1680 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter ByteCount */

/* 1682 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1686 */	NdrFcShort( 0xee ),	/* 238 */

	/* Return value */

/* 1688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1692 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum35NotUsedOnWire */

/* 1694 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1704 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationEnumerateProcesses */

/* 1722 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1730 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1732 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1734 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1736 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1738 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1740 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1742 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1744 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1752 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1754 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1756 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessBuffer */

/* 1764 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1768 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter ByteCount */

/* 1770 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1774 */	NdrFcShort( 0xf8 ),	/* 248 */

	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1780 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationTerminateProcess */

/* 1782 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1792 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1794 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1796 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1798 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1800 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 1812 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1814 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1816 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 1818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ProcessId */

/* 1824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ExitCode */

/* 1830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1840 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 1842 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1852 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1854 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum39NotUsedOnWire */

/* 1870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1880 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum40NotUsedOnWire */

/* 1898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1908 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum41NotUsedOnWire */

/* 1926 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1936 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum42NotUsedOnWire */

/* 1954 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1964 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1974 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationGetAllProcesses */

/* 1982 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1990 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1992 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1994 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1996 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1998 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2000 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2004 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2012 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2014 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2016 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 2024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNumberOfProcesses */

/* 2030 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2034 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter ppTsAllProcessesInfo */

/* 2036 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2040 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Return value */

/* 2042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2044 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2046 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationGetProcessSid */

/* 2048 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2056 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2058 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2060 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2062 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2064 */	NdrFcShort( 0x68 ),	/* 104 */
/* 2066 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2068 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2070 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2078 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2080 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2082 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter dwUniqueProcessId */

/* 2084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ProcessStartTime */

/* 2090 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2094 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Parameter pResult */

/* 2096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessUserSid */

/* 2102 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2106 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Parameter dwSidSize */

/* 2108 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2110 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2112 */	NdrFcShort( 0x1d8 ),	/* 472 */

	/* Parameter pdwSizeNeeded */

/* 2114 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2116 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2122 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2124 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationGetTermSrvCountersValue */

/* 2126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2134 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2136 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2138 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2140 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2142 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2144 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2146 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2148 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2156 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2158 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2160 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwEntries */

/* 2168 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2172 */	NdrFcShort( 0x1e2 ),	/* 482 */

	/* Parameter pCounter */

/* 2174 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2178 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Return value */

/* 2180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2184 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationReInitializeSecurity */

/* 2186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2196 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2200 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2202 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2204 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2216 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2218 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2220 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2232 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum47NotUsedOnWire */

/* 2234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2244 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2254 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum48NotUsedOnWire */

/* 2262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2272 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2274 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2282 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 2290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2300 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 2318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2328 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2330 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2338 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum51NotUsedOnWire */

/* 2346 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2356 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2358 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2366 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 2374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2384 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2386 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationGetLanAdapterName */

/* 2402 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2408 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2410 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2412 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2416 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2418 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2420 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2422 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2424 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2432 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2434 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2436 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PdNameSize */

/* 2444 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2448 */	NdrFcShort( 0x226 ),	/* 550 */

	/* Parameter pPdName */

/* 2450 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2454 */	NdrFcShort( 0x234 ),	/* Type Offset=564 */

	/* Parameter LanAdapter */

/* 2456 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2460 */	NdrFcShort( 0x240 ),	/* 576 */

	/* Parameter pLength */

/* 2462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppLanAdapter */

/* 2468 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2470 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2472 */	NdrFcShort( 0x24a ),	/* Type Offset=586 */

	/* Return value */

/* 2474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2476 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2478 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 2480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 2508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2518 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2520 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 2536 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2546 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 2564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2574 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationUpdateSettings */

/* 2592 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2600 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2602 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2604 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2608 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2610 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2614 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2622 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2624 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2626 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SettingsClass */

/* 2634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SettingsParameters */

/* 2640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2642 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2648 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2650 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationShadowStop */

/* 2652 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2660 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2662 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2664 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2666 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2668 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2670 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2672 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2674 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2682 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2684 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2686 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogonId */

/* 2694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWait */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2704 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 2706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2708 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2710 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationCloseServerEx */

/* 2712 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2722 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2726 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2728 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2730 */	NdrFcShort( 0x59 ),	/* 89 */
/* 2732 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2734 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phServer */

/* 2742 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2744 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2746 */	NdrFcShort( 0x262 ),	/* Type Offset=610 */

	/* Parameter pResult */

/* 2748 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2758 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationIsHelpAssistantSession */

/* 2760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2768 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2770 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2772 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2774 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2776 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2778 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2790 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2794 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2796 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SessionId */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2812 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcWinStationGetMachinePolicy */

/* 2814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2822 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2824 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2826 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2828 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2830 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2832 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2834 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2836 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2844 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2848 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pPolicy */

/* 2850 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2854 */	NdrFcShort( 0x26a ),	/* Type Offset=618 */

	/* Parameter bufferSize */

/* 2856 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2858 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2860 */	NdrFcShort( 0x276 ),	/* 630 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2866 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2868 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2878 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2880 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2888 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 2896 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2906 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2908 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationCheckLoopBack */

/* 2924 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2932 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2934 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2936 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2938 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2940 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2942 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2946 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 2954 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2956 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2958 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 2960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientLogonId */

/* 2966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TargetLogonId */

/* 2972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTargetServerName */

/* 2978 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2982 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter NameSize */

/* 2984 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2986 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2988 */	NdrFcShort( 0x280 ),	/* 640 */

	/* Return value */

/* 2990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2992 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2994 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure RpcConnectCallback */

/* 2996 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3004 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3006 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3008 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3010 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3012 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3014 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3016 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3018 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3026 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3028 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3030 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TimeOut */

/* 3038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AddressType */

/* 3044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddress */

/* 3050 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3052 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3054 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter AddressSize */

/* 3056 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3058 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3060 */	NdrFcShort( 0x28e ),	/* 654 */

	/* Return value */

/* 3062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3064 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3066 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 3068 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3078 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3080 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3086 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3088 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum68NotUsedOnWire */

/* 3096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3106 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 3124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3134 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3136 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationGetAllProcesses_NT6 */

/* 3152 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3160 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3162 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3164 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3166 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3168 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3170 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3172 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 3174 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3182 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3184 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3186 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 3194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNumberOfProcesses */

/* 3200 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 3202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3204 */	NdrFcShort( 0x29c ),	/* Type Offset=668 */

	/* Parameter ppTsAllProcessesInfo */

/* 3206 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3208 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3210 */	NdrFcShort( 0x2a6 ),	/* Type Offset=678 */

	/* Return value */

/* 3212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3214 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3216 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 3218 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3228 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 3246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3256 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3264 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum73NotUsedOnWire */

/* 3274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3284 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3294 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum74NotUsedOnWire */

/* 3302 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3308 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3312 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcWinStationOpenSessionDirectory */

/* 3330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3340 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3344 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3348 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3352 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServer */

/* 3360 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3364 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pResult */

/* 3366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszServerName */

/* 3372 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3376 */	NdrFcShort( 0x350 ),	/* Type Offset=848 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3382 */	0x2,		/* FC_CHAR */
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
/* 32 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
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
/* 48 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
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
/* 74 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
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
/* 100 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
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
/* 136 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
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
/* 162 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
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
/* 232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
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
/* 292 */	NdrFcShort( 0x3a ),	/* 58 */
/* 294 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 296 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 298 */	NdrFcShort( 0x38 ),	/* 56 */
/* 300 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 302 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 304 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 306 */	NdrFcShort( 0x88 ),	/* 136 */
/* 308 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 310 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 312 */	NdrFcShort( 0x3c ),	/* 60 */
/* 314 */	NdrFcShort( 0x3c ),	/* 60 */
/* 316 */	0x12, 0x0,	/* FC_UP */
/* 318 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (286) */
/* 320 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 322 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 324 */	0x0,		/* 0 */
			NdrFcShort( 0xffd3 ),	/* Offset= -45 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 328 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 332 */	0x0,		/* 0 */
			NdrFcShort( 0xffcb ),	/* Offset= -53 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 336 */	0x0,		/* 0 */
			NdrFcShort( 0xffc7 ),	/* Offset= -57 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 340 */	0x0,		/* 0 */
			NdrFcShort( 0xffc3 ),	/* Offset= -61 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 344 */	0x0,		/* 0 */
			NdrFcShort( 0xffbf ),	/* Offset= -65 (280) */
			0x6,		/* FC_SHORT */
/* 348 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 350 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 354 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 358 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 360 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 362 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 364 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 366 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 370 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 374 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 376 */	NdrFcShort( 0x4 ),	/* 4 */
/* 378 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 380 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 382 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 384 */	NdrFcShort( 0xc ),	/* 12 */
/* 386 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	0x12, 0x0,	/* FC_UP */
/* 396 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (304) */
/* 398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x12, 0x0,	/* FC_UP */
/* 406 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (370) */
/* 408 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 414 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 416 */	NdrFcShort( 0xc ),	/* 12 */
/* 418 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 422 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 424 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 426 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 428 */	NdrFcShort( 0xc ),	/* 12 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x2 ),	/* 2 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	0x12, 0x0,	/* FC_UP */
/* 440 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (304) */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	0x12, 0x0,	/* FC_UP */
/* 448 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (370) */
/* 450 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 452 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (382) */
			0x5b,		/* FC_END */
/* 456 */	
			0x12, 0x0,	/* FC_UP */
/* 458 */	NdrFcShort( 0x2 ),	/* Offset= 2 (460) */
/* 460 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 464 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 466 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 468 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 470 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 472 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 478 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 482 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 492 */	
			0x11, 0x0,	/* FC_RP */
/* 494 */	NdrFcShort( 0x22 ),	/* Offset= 34 (528) */
/* 496 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* Offset= 0 (502) */
/* 504 */	0x8,		/* FC_LONG */
			0x3,		/* FC_SMALL */
/* 506 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 508 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 510 */	NdrFcShort( 0x18 ),	/* 24 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* Offset= 0 (514) */
/* 516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0xffea ),	/* Offset= -22 (496) */
/* 520 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 522 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 524 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (280) */
/* 526 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 528 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 538 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 542 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 544 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 546 */	NdrFcShort( 0xffda ),	/* Offset= -38 (508) */
/* 548 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 550 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 556 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 560 */	
			0x11, 0x0,	/* FC_RP */
/* 562 */	NdrFcShort( 0x2 ),	/* Offset= 2 (564) */
/* 564 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 566 */	NdrFcShort( 0x2 ),	/* 2 */
/* 568 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 572 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 574 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 576 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 586 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 588 */	NdrFcShort( 0x2 ),	/* Offset= 2 (590) */
/* 590 */	
			0x12, 0x0,	/* FC_UP */
/* 592 */	NdrFcShort( 0x2 ),	/* Offset= 2 (594) */
/* 594 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 596 */	NdrFcShort( 0x2 ),	/* 2 */
/* 598 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 600 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 602 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 604 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 606 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 608 */	NdrFcShort( 0x2 ),	/* Offset= 2 (610) */
/* 610 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 612 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 614 */	
			0x11, 0x0,	/* FC_RP */
/* 616 */	NdrFcShort( 0x2 ),	/* Offset= 2 (618) */
/* 618 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 622 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 626 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 628 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 630 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 640 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 650 */	
			0x11, 0x0,	/* FC_RP */
/* 652 */	NdrFcShort( 0xfdd2 ),	/* Offset= -558 (94) */
/* 654 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 664 */	
			0x11, 0x0,	/* FC_RP */
/* 666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (668) */
/* 668 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 674 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 678 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 680 */	NdrFcShort( 0x2 ),	/* Offset= 2 (682) */
/* 682 */	
			0x12, 0x0,	/* FC_UP */
/* 684 */	NdrFcShort( 0x76 ),	/* Offset= 118 (802) */
/* 686 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 688 */	NdrFcShort( 0x2 ),	/* 2 */
/* 690 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 692 */	NdrFcShort( 0x3a ),	/* 58 */
/* 694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 696 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 698 */	NdrFcShort( 0x38 ),	/* 56 */
/* 700 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 702 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 704 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 706 */	NdrFcShort( 0x88 ),	/* 136 */
/* 708 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 710 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 712 */	NdrFcShort( 0x3c ),	/* 60 */
/* 714 */	NdrFcShort( 0x3c ),	/* 60 */
/* 716 */	0x12, 0x0,	/* FC_UP */
/* 718 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (686) */
/* 720 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 722 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 724 */	0x0,		/* 0 */
			NdrFcShort( 0xfe43 ),	/* Offset= -445 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 728 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3f ),	/* Offset= -449 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 732 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3b ),	/* Offset= -453 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 736 */	0x0,		/* 0 */
			NdrFcShort( 0xfe37 ),	/* Offset= -457 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 740 */	0x0,		/* 0 */
			NdrFcShort( 0xfe33 ),	/* Offset= -461 (280) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 744 */	0x0,		/* 0 */
			NdrFcShort( 0xfe2f ),	/* Offset= -465 (280) */
			0x6,		/* FC_SHORT */
/* 748 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 750 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 754 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 756 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 758 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 760 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 762 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 764 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 766 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 770 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 772 */	NdrFcShort( 0xc ),	/* 12 */
/* 774 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 776 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	0x12, 0x0,	/* FC_UP */
/* 784 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (704) */
/* 786 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x12, 0x0,	/* FC_UP */
/* 794 */	NdrFcShort( 0xfe58 ),	/* Offset= -424 (370) */
/* 796 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 798 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 800 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 802 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 804 */	NdrFcShort( 0xc ),	/* 12 */
/* 806 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 810 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 812 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 814 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 816 */	NdrFcShort( 0xc ),	/* 12 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x2 ),	/* 2 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	0x12, 0x0,	/* FC_UP */
/* 828 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (704) */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 834 */	0x12, 0x0,	/* FC_UP */
/* 836 */	NdrFcShort( 0xfe2e ),	/* Offset= -466 (370) */
/* 838 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 840 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (770) */
			0x5b,		/* FC_END */
/* 844 */	
			0x11, 0x0,	/* FC_RP */
/* 846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (848) */
/* 848 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 850 */	0x40,		/* Corr desc:  constant, val=65 */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0x41 ),	/* 65 */
/* 854 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */

			0x0
        }
    };

static const unsigned short IcaApi_FormatStringOffsetTable[] =
    {
    0,
    46,
    94,
    142,
    214,
    286,
    364,
    436,
    538,
    604,
    670,
    754,
    782,
    810,
    870,
    930,
    990,
    1050,
    1134,
    1162,
    1190,
    1218,
    1246,
    1274,
    1302,
    1330,
    1358,
    1386,
    1414,
    1442,
    1502,
    1550,
    1578,
    1606,
    1634,
    1694,
    1722,
    1782,
    1842,
    1870,
    1898,
    1926,
    1954,
    1982,
    2048,
    2126,
    2186,
    2234,
    2262,
    2290,
    2318,
    2346,
    2374,
    2402,
    2480,
    2508,
    2536,
    2564,
    2592,
    2652,
    2712,
    2760,
    2814,
    2868,
    2896,
    2924,
    2996,
    3068,
    3096,
    3124,
    3152,
    3218,
    3246,
    3274,
    3302,
    3330
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


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

