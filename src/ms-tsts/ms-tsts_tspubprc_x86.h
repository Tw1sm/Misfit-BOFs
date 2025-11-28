

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


#ifndef __ms2Dtsts_rspubprc_x86_h__
#define __ms2Dtsts_rspubprc_x86_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_tspubrpc_0000_0000 */
/* [local] */ 

typedef ULONG TNotificationId;

typedef 
enum _WINSTATIONUPDATECFGCLASS
    {
        WINSTACFG_LEGACY	= 0,
        WINSTACFG_SESSDIR	= ( WINSTACFG_LEGACY + 1 ) 
    } 	WINSTATIONUPDATECFGCLASS;

typedef struct _SESSION_CHANGE
    {
    LONG SessionId;
    TNotificationId NotificationId;
    } 	SESSION_CHANGE;

typedef struct _SESSION_CHANGE *PSESSION_CHANGE;

typedef struct _TS_SYSTEMTIME
    {
    USHORT wYear;
    USHORT wMonth;
    USHORT wDayOfWeek;
    USHORT wDay;
    USHORT wHour;
    USHORT wMinute;
    USHORT wSecond;
    USHORT wMilliseconds;
    } 	TS_SYSTEMTIME;

typedef struct _TS_TIME_ZONE_INFORMATION
    {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    TS_SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    TS_SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    } 	TS_TIME_ZONE_INFORMATION;

typedef 
enum _SESSION_FILTER
    {
        SF_SERVICES_SESSION_POPUP	= 0
    } 	SESSION_FILTER;

typedef struct _CLIENT_ID
    {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
    } 	CLIENT_ID;

typedef struct _SYSTEM_THREAD_INFORMATION
    {
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER CreateTime;
    ULONG WaitTime;
    PVOID StartAddress;
    CLIENT_ID ClientId;
    LONG Priority;
    LONG BasePriority;
    ULONG ContextSwitches;
    ULONG ThreadState;
    ULONG WaitReason;
    } 	SYSTEM_THREAD_INFORMATION;

typedef struct _SYSTEM_THREAD_INFORMATION *PSYSTEM_THREAD_INFORMATION;

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
        /* [switch_is] */ /* [switch_type] */ union __MIDL___MIDL_itf_tspubrpc_0000_0000_0004
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



extern RPC_IF_HANDLE __MIDL_itf_tspubrpc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tspubrpc_0000_0000_v0_0_s_ifspec;

#ifndef __TermSrvSession_INTERFACE_DEFINED__
#define __TermSrvSession_INTERFACE_DEFINED__

/* interface TermSrvSession */
/* [unique][version][uuid] */ 

#define  WTS_SESSIONSTATE_UNKNOWN    0xFFFFFFFF
#define  WTS_SESSIONSTATE_LOCK       0x00000000
#define  WTS_SESSIONSTATE_UNLOCK     0x00000001
typedef /* [context_handle] */ void *SESSION_HANDLE;

typedef struct _LSMSessionInformation
    {
    /* [string] */ WCHAR *pszUserName;
    /* [string] */ WCHAR *pszDomain;
    /* [string] */ WCHAR *pszTerminalName;
    LONG SessionState;
    BOOL DesktopLocked;
    hyper ConnectTime;
    hyper DisconnectTime;
    hyper LogonTime;
    } 	LSMSESSIONINFORMATION;

typedef struct _LSMSessionInformation *PLSMSESSIONINFORMATION;

typedef struct _LSM_SESSIONINFO_EX_LEVEL1
    {
    LONG SessionState;
    LONG SessionFlags;
    WCHAR SessionName[ 33 ];
    WCHAR DomainName[ 18 ];
    WCHAR UserName[ 21 ];
    hyper ConnectTime;
    hyper DisconnectTime;
    hyper LogonTime;
    hyper LastInputTime;
    ULONG ProtocolDataSize;
    /* [size_is] */ PBYTE ProtocolData;
    } 	LSM_SESSIONINFO_EX_LEVEL1;

typedef struct _LSM_SESSIONINFO_EX_LEVEL1 *PLSM_SESSIONINFO_EX_LEVEL1;

typedef /* [switch_type] */ union _LSM_SESSIONINFO_EX
    {
    /* [case()] */ LSM_SESSIONINFO_EX_LEVEL1 LSM_SessionInfo_Level1;
    } 	LSM_SESSIONINFO_EX;

typedef /* [switch_type] */ union _LSM_SESSIONINFO_EX *PLSM_SESSIONINFO_EX;

typedef struct _LSMSESSIONINFORMATION_EX
    {
    DWORD Level;
    /* [switch_is] */ LSM_SESSIONINFO_EX Data;
    } 	LSMSESSIONINFORMATION_EX;

typedef struct _LSMSESSIONINFORMATION_EX *PLSMSESSIONINFORMATION_EX;

HRESULT RpcOpenSession( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [out] */ SESSION_HANDLE *phSession);

HRESULT RpcCloseSession( 
    /* [out][in] */ SESSION_HANDLE *phSession);

HRESULT RpcConnect( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [in] */ LONG TargetSessionId,
    /* [string][in] */ WCHAR *szPassword);

HRESULT RpcDisconnect( 
    /* [in] */ SESSION_HANDLE hSession);

HRESULT RpcLogoff( 
    /* [in] */ SESSION_HANDLE hSession);

HRESULT RpcGetUserName( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][out] */ WCHAR **pszUserName,
    /* [string][out] */ WCHAR **pszDomain);

HRESULT RpcGetTerminalName( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][out] */ WCHAR **pszTerminalName);

HRESULT RpcGetState( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [out] */ LONG *plState);

HRESULT RpcIsSessionDesktopLocked( 
    /* [in] */ SESSION_HANDLE hSession);

HRESULT RpcShowMessageBox( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [string][in] */ WCHAR *szTitle,
    /* [string][in] */ WCHAR *szMessage,
    /* [in] */ ULONG ulStyle,
    /* [in] */ ULONG ulTimeout,
    /* [out] */ ULONG *pulResponse,
    /* [in] */ BOOL bDoNotWait);

HRESULT RpcGetTimes( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [out] */ hyper *pConnectTime,
    /* [out] */ hyper *pDisconnectTime,
    /* [out] */ hyper *pLogonTime);

HRESULT RpcGetSessionCounters( 
    /* [in] */ handle_t hBinding,
    /* [size_is][out][in] */ PTS_COUNTER pCounter,
    /* [in] */ ULONG uEntries);

HRESULT RpcGetSessionInformation( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [out][ref] */ PLSMSESSIONINFORMATION pSessionInfo);

VOID Opnum13NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

VOID Opnum14NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetLoggedOnCount( 
    /* [in] */ handle_t hBinding,
    /* [out] */ ULONG *pUserSessions,
    /* [out] */ ULONG *pDeviceSessions);

HRESULT RpcGetSessionType( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG *SessionId,
    /* [out] */ ULONG *pSessionType);

HRESULT RpcGetSessionInformationEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [in] */ DWORD Level,
    /* [out][ref] */ PLSMSESSIONINFORMATION_EX LSMSessionInfoExPtr);

VOID Opnum18NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

VOID Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

VOID Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetActivityId( 
    /* [in] */ SESSION_HANDLE hSession,
    /* [ref][out] */ GUID **pActivityId);



extern RPC_IF_HANDLE TermSrvSession_v1_0_c_ifspec;
extern RPC_IF_HANDLE TermSrvSession_v1_0_s_ifspec;
#endif /* __TermSrvSession_INTERFACE_DEFINED__ */

#ifndef __TermSrvNotification_INTERFACE_DEFINED__
#define __TermSrvNotification_INTERFACE_DEFINED__

/* interface TermSrvNotification */
/* [unique][version][uuid] */ 

HRESULT RpcWaitForSessionState( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [in] */ LONG State,
    /* [in] */ ULONG Timeout);

typedef /* [context_handle] */ void *NOTIFY_HANDLE;

HRESULT RpcRegisterAsyncNotification( 
    /* [in] */ handle_t hBinding,
    /* [in] */ LONG SessionId,
    /* [in] */ TNotificationId Mask,
    /* [out] */ NOTIFY_HANDLE *phNotify);

HRESULT RpcWaitAsyncNotification( 
    /* [in] */ NOTIFY_HANDLE hNotify,
    /* [size_is][size_is][out] */ PSESSION_CHANGE *SessionChange,
    /* [out] */ ULONG *pEntries);

HRESULT RpcUnRegisterAsyncNotification( 
    /* [out][in] */ NOTIFY_HANDLE *phNotify);



extern RPC_IF_HANDLE TermSrvNotification_v1_0_c_ifspec;
extern RPC_IF_HANDLE TermSrvNotification_v1_0_s_ifspec;
#endif /* __TermSrvNotification_INTERFACE_DEFINED__ */

#ifndef __TermSrvEnumeration_INTERFACE_DEFINED__
#define __TermSrvEnumeration_INTERFACE_DEFINED__

/* interface TermSrvEnumeration */
/* [unique][version][uuid] */ 

typedef /* [context_handle] */ void *ENUM_HANDLE;

typedef struct _SESSIONENUM_LEVEL1
    {
    LONG SessionId;
    LONG State;
    WCHAR Name[ 33 ];
    } 	SESSIONENUM_LEVEL1;

typedef struct _SESSIONENUM_LEVEL1 *PSESSIONENUM_LEVEL1;

typedef struct _SESSIONENUM_LEVEL2
    {
    LONG SessionId;
    LONG State;
    WCHAR Name[ 33 ];
    ULONG Source;
    BOOL bFullDesktop;
    GUID SessionType;
    } 	SESSIONENUM_LEVEL2;

typedef struct _SESSIONENUM_LEVEL2 *PSESSIONENUM_LEVEL2;

typedef struct _SESSIONENUM_LEVEL3
    {
    LONG SessionId;
    LONG State;
    WCHAR Name[ 33 ];
    ULONG Source;
    BOOL bFullDesktop;
    GUID SessionType;
    ULONG ProtoDataSize;
    /* [size_is] */ UCHAR *pProtocolData;
    } 	SESSIONENUM_LEVEL3;

typedef struct _SESSIONENUM_LEVEL3 *PSESSIONENUM_LEVEL3;

typedef /* [switch_type] */ union _SessionInfo
    {
    /* [case()] */ SESSIONENUM_LEVEL1 SessionEnum_Level1;
    /* [case()] */ SESSIONENUM_LEVEL2 SessionEnum_Level2;
    } 	SessionInfo;

typedef /* [switch_type] */ union _SessionInfo *PSessionInfo;

typedef struct _SESSIONENUM
    {
    DWORD Level;
    /* [switch_is] */ SessionInfo Data;
    } 	SESSIONENUM;

typedef struct _SESSIONENUM *PSESSIONENUM;

typedef /* [switch_type] */ union _SessionInfo_Ex
    {
    /* [case()] */ SESSIONENUM_LEVEL1 SessionEnum_Level1;
    /* [case()] */ SESSIONENUM_LEVEL2 SessionEnum_Level2;
    /* [case()] */ SESSIONENUM_LEVEL3 SessionEnum_Level3;
    } 	SessionInfo_Ex;

typedef /* [switch_type] */ union _SessionInfo_Ex *PSessionInfo_Ex;

typedef struct _SESSIONENUM_EX
    {
    DWORD Level;
    /* [switch_is] */ SessionInfo_Ex Data;
    } 	SESSIONENUM_EX;

typedef struct _SESSIONENUM_EX *PSESSIONENUM_EX;

typedef struct _EXECENVDATA_LEVEL1
    {
    LONG ExecEnvId;
    LONG State;
    WCHAR SessionName[ 33 ];
    } 	EXECENVDATA_LEVEL1;

typedef struct _EXECENVDATA_LEVEL1 *PEXECENVDATA_LEVEL1;

typedef struct _EXECENVDATA_LEVEL2
    {
    LONG ExecEnvId;
    LONG State;
    WCHAR SessionName[ 33 ];
    LONG AbsSessionId;
    WCHAR HostName[ 33 ];
    WCHAR UserName[ 33 ];
    WCHAR DomainName[ 33 ];
    WCHAR FarmName[ 33 ];
    } 	EXECENVDATA_LEVEL2;

typedef struct _EXECENVDATA_LEVEL2 *PEXECENVDATA_LEVEL2;

typedef /* [switch_type] */ union _ExecEnvData
    {
    /* [case()] */ EXECENVDATA_LEVEL1 ExecEnvEnum_Level1;
    /* [case()] */ EXECENVDATA_LEVEL2 ExecEnvEnum_Level2;
    } 	ExecEnvData;

typedef /* [switch_type] */ union _ExecEnvData *PExecEnvData;

typedef struct _EXECENVDATA
    {
    DWORD Level;
    /* [switch_is] */ ExecEnvData Data;
    } 	EXECENVDATA;

typedef struct _EXECENVDATA *PEXECENVDATA;

typedef struct _EXECENVDATAEX_LEVEL1
    {
    LONG ExecEnvId;
    LONG State;
    LONG AbsSessionId;
    /* [max_is][string] */ LPWSTR pszSessionName;
    /* [max_is][string] */ LPWSTR pszHostName;
    /* [max_is][string] */ LPWSTR pszUserName;
    /* [max_is][string] */ LPWSTR pszDomainName;
    /* [max_is][string] */ LPWSTR pszFarmName;
    } 	EXECENVDATAEX_LEVEL1;

typedef struct _EXECENVDATAEX_LEVEL1 *PEXECENVDATAEX_LEVEL1;

typedef /* [switch_type] */ union _ExecEnvDataEx
    {
    /* [case()] */ EXECENVDATAEX_LEVEL1 ExecEnvEnum_Level1;
    } 	ExecEnvDataEx;

typedef /* [switch_type] */ union _ExecEnvDataEx *PExecEnvDataEx;

typedef struct _EXECENVDATAEX
    {
    DWORD Level;
    /* [switch_is] */ ExecEnvDataEx Data;
    } 	EXECENVDATAEX;

typedef struct _EXECENVDATAEX *PEXECENVDATAEX;

HRESULT RpcOpenEnum( 
    /* [in] */ handle_t hBinding,
    /* [out] */ ENUM_HANDLE *phEnum);

HRESULT RpcCloseEnum( 
    /* [out][in] */ ENUM_HANDLE *phEnum);

HRESULT RpcFilterByState( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ LONG State,
    /* [in] */ BOOL bInvert);

HRESULT RpcFilterByCallersName( 
    /* [in] */ ENUM_HANDLE hEnum);

HRESULT RpcEnumAddFilter( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ ENUM_HANDLE hSubEnum);

HRESULT RpcGetEnumResult( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [size_is][size_is][out] */ PSESSIONENUM *ppSessionEnumResult,
    /* [in] */ DWORD Level,
    /* [out] */ ULONG *pEntries);

HRESULT RpcFilterBySessionType( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [in] */ GUID *pSessionType);

VOID Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetSessionIds( 
    /* [in] */ handle_t hBinding,
    /* [in] */ SESSION_FILTER Filter,
    /* [range][in] */ ULONG MaxEntries,
    /* [size_is][size_is][out] */ LONG **pSessionIds,
    /* [out] */ ULONG *pcSessionIds);

HRESULT RpcGetEnumResultEx( 
    /* [in] */ ENUM_HANDLE hEnum,
    /* [size_is][size_is][out] */ PSESSIONENUM_EX *ppSessionEnumResult,
    /* [in] */ DWORD Level,
    /* [out] */ ULONG *pEntries);

HRESULT RpcGetAllSessions( 
    /* [in] */ handle_t hBinding,
    /* [out][in] */ ULONG *pLevel,
    /* [size_is][size_is][out] */ PEXECENVDATA *ppSessionData,
    /* [out] */ ULONG *pcEntries);

HRESULT RpcGetAllSessionsEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG Level,
    /* [size_is][size_is][out] */ PEXECENVDATAEX *ppSessionData,
    /* [out] */ ULONG *pcEntries);



extern RPC_IF_HANDLE TermSrvEnumeration_v1_0_c_ifspec;
extern RPC_IF_HANDLE TermSrvEnumeration_v1_0_s_ifspec;
#endif /* __TermSrvEnumeration_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER SESSION_HANDLE_rundown( SESSION_HANDLE );
void __RPC_USER NOTIFY_HANDLE_rundown( NOTIFY_HANDLE );
void __RPC_USER ENUM_HANDLE_rundown( ENUM_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


