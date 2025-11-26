

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for TSVIPRpc.idl:
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


#ifndef __ms2Dtsts_TSVIPRpc_x86_h__
#define __ms2Dtsts_TSVIPRpc_x86_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_TSVIPRpc_0000_0000 */
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
        /* [switch_is] */ /* [switch_type] */ union __MIDL___MIDL_itf_TSVIPRpc_0000_0000_0004
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



extern RPC_IF_HANDLE __MIDL_itf_TSVIPRpc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVIPRpc_0000_0000_v0_0_s_ifspec;

#ifndef __TSVIPPublic_INTERFACE_DEFINED__
#define __TSVIPPublic_INTERFACE_DEFINED__

/* interface TSVIPPublic */
/* [unique][version][uuid] */ 

HRESULT RpcGetSessionIP( 
    /* [in] */ handle_t hBinding,
    /* [in] */ USHORT Family,
    /* [in] */ DWORD SessionId,
    /* [out][ref] */ TSVIPSession *ppVIPSession);



extern RPC_IF_HANDLE TSVIPPublic_v1_0_c_ifspec;
extern RPC_IF_HANDLE TSVIPPublic_v1_0_s_ifspec;
#endif /* __TSVIPPublic_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


