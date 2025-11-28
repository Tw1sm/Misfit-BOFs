

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Dtsts_legacy_x86_h__
#define __ms2Dtsts_legacy_x86_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_legacy_0000_0000 */
/* [local] */ 

#define TS_PROCESS_INFO_MAGIC_NT4  0x23495452
typedef struct _TS_PROCESS_INFORMATION_NT4
    {
    ULONG MagicNumber;
    ULONG LogonId;
    PVOID ProcessSid;
    ULONG Pad;
    } 	TS_PROCESS_INFORMATION_NT4;

typedef struct _TS_PROCESS_INFORMATION_NT4 *PTS_PROCESS_INFORMATION_NT4;

#define SIZEOF_TS4_SYSTEM_THREAD_INFORMATION    64
#define SIZEOF_TS4_SYSTEM_PROCESS_INFORMATION   136
#define GAP_LEVEL_BASIC 0
typedef struct _TS_UNICODE_STRING
    {
    USHORT Length;
    USHORT MaximumLength;
    /* [length_is][size_is] */ PWSTR Buffer;
    } 	TS_UNICODE_STRING;

typedef struct _TS_SYS_PROCESS_INFORMATION
    {
    ULONG NextEntryOffset;
    ULONG NumberOfThreads;
    LARGE_INTEGER SpareLi1;
    LARGE_INTEGER SpareLi2;
    LARGE_INTEGER SpareLi3;
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER KernelTime;
    TS_UNICODE_STRING ImageName;
    LONG BasePriority;
    DWORD UniqueProcessId;
    DWORD InheritedFromUniqueProcessId;
    ULONG HandleCount;
    ULONG SessionId;
    ULONG SpareUl3;
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    ULONG PeakWorkingSetSize;
    ULONG WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivatePageCount;
    } 	TS_SYS_PROCESS_INFORMATION;

typedef struct _TS_SYS_PROCESS_INFORMATION *PTS_SYS_PROCESS_INFORMATION;

typedef struct _TS_ALL_PROCESSES_INFO
    {
    PTS_SYS_PROCESS_INFORMATION pTsProcessInfo;
    DWORD SizeOfSid;
    /* [size_is] */ PBYTE pSid;
    } 	TS_ALL_PROCESSES_INFO;

typedef struct _TS_ALL_PROCESSES_INFO *PTS_ALL_PROCESSES_INFO;

typedef struct _NT6_TS_UNICODE_STRING
    {
    USHORT Length;
    USHORT MaximumLength;
    /* [length_is][size_is] */ PWSTR Buffer;
    } 	NT6_TS_UNICODE_STRING;

typedef struct _TS_SYS_PROCESS_INFORMATION_NT6
    {
    ULONG NextEntryOffset;
    ULONG NumberOfThreads;
    LARGE_INTEGER SpareLi1;
    LARGE_INTEGER SpareLi2;
    LARGE_INTEGER SpareLi3;
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER KernelTime;
    NT6_TS_UNICODE_STRING ImageName;
    LONG BasePriority;
    DWORD UniqueProcessId;
    DWORD InheritedFromUniqueProcessId;
    ULONG HandleCount;
    ULONG SessionId;
    ULONG SpareUl3;
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    ULONG PeakWorkingSetSize;
    ULONG WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivatePageCount;
    } 	TS_SYS_PROCESS_INFORMATION_NT6;

typedef struct _TS_SYS_PROCESS_INFORMATION_NT6 *PTS_SYS_PROCESS_INFORMATION_NT6;

typedef struct _TS_ALL_PROCESSES_INFO_NT6
    {
    PTS_SYS_PROCESS_INFORMATION_NT6 pTsProcessInfo;
    DWORD SizeOfSid;
    /* [size_is] */ PBYTE pSid;
    } 	TS_ALL_PROCESSES_INFO_NT6;

typedef struct _TS_ALL_PROCESSES_INFO_NT6 *PTS_ALL_PROCESSES_INFO_NT6;

typedef struct _TS_COUNTER_HEADER
    {
    DWORD dwCounterID;
    boolean bResult;
    } 	TS_COUNTER_HEADER;

typedef struct _TS_COUNTER_HEADER *PTS_COUNTER_HEADER;

typedef struct _TS_COUNTER
    {
    TS_COUNTER_HEADER counterHead;
    DWORD dwValue;
    LARGE_INTEGER startTime;
    } 	TS_COUNTER;

typedef struct _TS_COUNTER *PTS_COUNTER;

typedef struct _TSVIP_SOCKADDR
    {
    struct 
        {
        unsigned short sin_family;
        /* [switch_is] */ /* [switch_type] */ union __MIDL___MIDL_itf_legacy_0000_0000_0004
            {
            /* [case()] */ struct 
                {
                USHORT sin_port;
                ULONG in_addr;
                UCHAR sin_zero[ 8 ];
                } 	ipv4;
            /* [case()] */ struct 
                {
                USHORT sin6_port;
                ULONG sin6_flowinfo;
                USHORT sin6_addr[ 8 ];
                ULONG sin6_scope_id;
                } 	ipv6;
            } 	u;
        } 	;
    } 	TSVIP_SOCKADDR;

typedef struct _TSVIP_SOCKADDR *PTSVIP_SOCKADDR;

typedef struct _TSVIPAddress
    {
    DWORD dwVersion;
    TSVIP_SOCKADDR IPAddress;
    ULONG PrefixOrSubnetMask;
    /* [range] */ UINT PhysicalAddressLength;
    /* [length_is] */ BYTE PhysicalAddress[ 16 ];
    ULONG LeaseExpires;
    ULONG T1;
    ULONG T2;
    } 	TSVIPAddress;

typedef struct _TSVIPAddress *PTSVIPAddress;

typedef struct _TSVIPSession
    {
    DWORD dwVersion;
    DWORD SessionId;
    TSVIPAddress SessionIP;
    } 	TSVIPSession;

typedef struct _TSVIPSession *PTSVIPSession;

//typedef UINT *UINT_PTR;

static const WCHAR TSRPC_LEGACY_REMOTE_ENDPOINT[  ]	=	L"\\pipe\\Ctx_WinStation_API_service";

typedef /* [context_handle] */ void *SERVER_HANDLE;



extern RPC_IF_HANDLE __MIDL_itf_legacy_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_legacy_0000_0000_v0_0_s_ifspec;

#ifndef __IcaApi_INTERFACE_DEFINED__
#define __IcaApi_INTERFACE_DEFINED__

/* interface IcaApi */
/* [unique][version][uuid] */ 

typedef /* [range] */ ULONG BOUNDED_ULONG;

BOOLEAN RpcWinStationOpenServer( 
    /* [in] */ handle_t hBinding,
    /* [out] */ DWORD *pResult,
    /* [out] */ SERVER_HANDLE *phServer);

BOOLEAN RpcWinStationCloseServer( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult);

BOOLEAN RpcIcaServerPing( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult);

BOOLEAN RpcWinStationEnumerate( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [out][in] */ PULONG pEntries,
    /* [size_is][unique][out][in] */ PCHAR pLogonId,
    /* [out][in] */ PULONG pByteCount,
    /* [out][in] */ PULONG pIndex);

BOOLEAN RpcWinStationRename( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][in] */ PWCHAR pWinStationNameOld,
    /* [range][in] */ DWORD NameOldSize,
    /* [size_is][in] */ PWCHAR pWinStationNameNew,
    /* [range][in] */ DWORD NameNewSize);

BOOLEAN RpcWinStationQueryInformation( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ DWORD WinStationInformationClass,
    /* [size_is][unique][out][in] */ PCHAR pWinStationInformation,
    /* [range][in] */ DWORD WinStationInformationLength,
    /* [out] */ DWORD *pReturnLength);

BOOLEAN RpcWinStationSetInformation( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ DWORD WinStationInformationClass,
    /* [size_is][unique][out][in] */ PCHAR pWinStationInformation,
    /* [range][in] */ DWORD WinStationInformationLength);

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
    /* [in] */ BOOLEAN DoNotWait);

BOOLEAN RpcLogonIdFromWinStationName( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][in] */ PWCHAR pWinStationName,
    /* [range][in] */ DWORD NameSize,
    /* [out] */ DWORD *pLogonId);

BOOLEAN RpcWinStationNameFromLogonId( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LoginId,
    /* [size_is][out][in] */ PWCHAR pWinStationName,
    /* [range][in] */ DWORD NameSize);

BOOLEAN RpcWinStationConnect( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ClientLogonId,
    /* [in] */ DWORD ConnectLogonId,
    /* [in] */ DWORD TargetLogonId,
    /* [size_is][in] */ PWCHAR pPassword,
    /* [range][in] */ DWORD PasswordSize,
    /* [in] */ BOOLEAN Wait);

void Opnum11NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum12NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationDisconnect( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN bWait);

BOOLEAN RpcWinStationReset( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN bWait);

BOOLEAN RpcWinStationShutdownSystem( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ClientLogonId,
    /* [in] */ DWORD ShutdownFlags);

BOOLEAN RpcWinStationWaitSystemEvent( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD EventMask,
    /* [out] */ DWORD *pEventFlags);

BOOLEAN RpcWinStationShadow( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [size_is][unique][in] */ PWCHAR pTargetServerName,
    /* [range][in] */ DWORD NameSize,
    /* [in] */ DWORD TargetLogonId,
    /* [in] */ BYTE HotKeyVk,
    /* [in] */ USHORT HotkeyModifiers);

void Opnum18NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum23NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum24NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum25NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum26NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum27NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum28NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationBreakPoint( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN KernelFlag);

BOOLEAN RpcWinStationReadRegistry( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult);

void Opnum31NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum32NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum33NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN OldRpcWinStationEnumerateProcesses( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][out] */ PBYTE pProcessBuffer,
    /* [range][in] */ DWORD ByteCount);

void Opnum35NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationEnumerateProcesses( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [size_is][out] */ PBYTE pProcessBuffer,
    /* [range][in] */ DWORD ByteCount);

BOOLEAN RpcWinStationTerminateProcess( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ProcessId,
    /* [in] */ DWORD ExitCode);

void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum39NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum40NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum41NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum42NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationGetAllProcesses( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ ULONG Level,
    /* [out][in] */ BOUNDED_ULONG *pNumberOfProcesses,
    /* [size_is][size_is][out] */ PTS_ALL_PROCESSES_INFO *ppTsAllProcessesInfo);

BOOLEAN RpcWinStationGetProcessSid( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [in] */ DWORD dwUniqueProcessId,
    /* [in] */ LARGE_INTEGER ProcessStartTime,
    /* [out] */ LONG *pResult,
    /* [size_is][unique][out][in] */ PBYTE pProcessUserSid,
    /* [range][in] */ DWORD dwSidSize,
    /* [out][in] */ DWORD *pdwSizeNeeded);

BOOLEAN RpcWinStationGetTermSrvCountersValue( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [range][in] */ DWORD dwEntries,
    /* [size_is][out][in] */ PTS_COUNTER pCounter);

BOOLEAN RpcWinStationReInitializeSecurity( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult);

void Opnum47NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum48NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum51NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationGetLanAdapterName( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [range][in] */ DWORD PdNameSize,
    /* [size_is][in] */ PWCHAR pPdName,
    /* [range][in] */ ULONG LanAdapter,
    /* [out] */ ULONG *pLength,
    /* [size_is][size_is][out] */ PWCHAR *ppLanAdapter);

void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationUpdateSettings( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD SettingsClass,
    /* [in] */ DWORD SettingsParameters);

BOOLEAN RpcWinStationShadowStop( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD LogonId,
    /* [in] */ BOOLEAN bWait);

BOOLEAN RpcWinStationCloseServerEx( 
    /* [out][in] */ SERVER_HANDLE *phServer,
    /* [out] */ DWORD *pResult);

BOOLEAN RpcWinStationIsHelpAssistantSession( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ ULONG SessionId);

BOOLEAN RpcWinStationGetMachinePolicy( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [size_is][out][in] */ PBYTE pPolicy,
    /* [range][in] */ ULONG bufferSize);

void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationCheckLoopBack( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD ClientLogonId,
    /* [in] */ DWORD TargetLogonId,
    /* [size_is][in] */ PWCHAR pTargetServerName,
    /* [range][in] */ DWORD NameSize);

BOOLEAN RpcConnectCallback( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ DWORD TimeOut,
    /* [in] */ ULONG AddressType,
    /* [size_is][in] */ PBYTE pAddress,
    /* [range][in] */ ULONG AddressSize);

void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationGetAllProcesses_NT6( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [in] */ ULONG Level,
    /* [out][in] */ BOUNDED_ULONG *pNumberOfProcesses,
    /* [size_is][size_is][out] */ PTS_ALL_PROCESSES_INFO_NT6 *ppTsAllProcessesInfo);

void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum73NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

BOOLEAN RpcWinStationOpenSessionDirectory( 
    /* [in] */ SERVER_HANDLE hServer,
    /* [out] */ DWORD *pResult,
    /* [max_is][string][in] */ PWCHAR pszServerName);



extern RPC_IF_HANDLE IcaApi_v1_0_c_ifspec;
extern RPC_IF_HANDLE IcaApi_v1_0_s_ifspec;
#endif /* __IcaApi_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER SERVER_HANDLE_rundown( SERVER_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


