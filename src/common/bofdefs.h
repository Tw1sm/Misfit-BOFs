#pragma once
#pragma intrinsic(memcmp, memcpy,strcpy,strcmp,_stricmp,strlen)

#include <windows.h>
#include <stdio.h>


#ifdef BOF

//MSVCRT
WINBASEAPI void *__cdecl MSVCRT$memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount);
WINBASEAPI wchar_t *__cdecl MSVCRT$wcscat_s(wchar_t *strDestination, size_t numberOfElements, const wchar_t *strSource);
WINBASEAPI void* __cdecl MSVCRT$malloc( size_t size);
WINBASEAPI void* __cdecl MSVCRT$calloc(size_t num, size_t size);
WINBASEAPI void __cdecl MSVCRT$free( void* memblock);
WINBASEAPI errno_t __cdecl MSVCRT$wcsncpy_s(wchar_t *strDest, size_t numberOfElements, const wchar_t *strSource, size_t count);
WINBASEAPI SIZE_T WINAPI MSVCRT$strlen(const char* str);
WINBASEAPI void* WINAPI MSVCRT$strcpy(const char* dest, const char* source);
WINBASEAPI void* WINAPI MSVCRT$strcat(const char* dest, const char* source);
WINBASEAPI int __cdecl MSVCRT$_snprintf(char *buffer, size_t count, const char *format, ...);
WINBASEAPI int __cdecl MSVCRT$vsnprintf(char *buffer, size_t count, const char *format, va_list argptr);
WINBASEAPI void __cdecl MSVCRT$srand(unsigned int seed);
WINBASEAPI time_t __cdecl MSVCRT$time(time_t *timer);
WINBASEAPI int __cdecl MSVCRT$rand(void);


//KERNEL32
WINBASEAPI HANDLE WINAPI KERNEL32$GetProcessHeap(void);
WINBASEAPI LPVOID WINAPI KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
WINBASEAPI BOOL WINAPI KERNEL32$HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
WINBASEAPI BOOL WINAPI KERNEL32$WaitNamedPipeA(LPCSTR lpNamedPipeName, DWORD nTimeOut);
WINBASEAPI int WINAPI KERNEL32$WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
WINBASEAPI int WINAPI KERNEL32$MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
WINBASEAPI BOOL WINAPI KERNEL32$FileTimeToSystemTime(const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime);
WINBASEAPI BOOL WINAPI KERNEL32$SystemTimeToTzSpecificLocalTime(const TIME_ZONE_INFORMATION *lpTimeZoneInformation, const SYSTEMTIME *lpUniversalTime, LPSYSTEMTIME lpLocalTime);

//RPCRT4
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingFromStringBindingW(RPC_WSTR StringBinding, RPC_BINDING_HANDLE *Binding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcStringBindingComposeW(RPC_WSTR ObjUuid, RPC_WSTR ProtSeq, RPC_WSTR NetworkAddr, RPC_WSTR Endpoint, RPC_WSTR Options, RPC_WSTR *StringBinding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingSetAuthInfoExW(RPC_BINDING_HANDLE Binding, RPC_WSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc, RPC_SECURITY_QOS *SecurityQOS);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingFree(RPC_BINDING_HANDLE *Binding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcStringFreeW(RPC_WSTR *String);
DECLSPEC_IMPORT CLIENT_CALL_RETURN RPC_VAR_ENTRY RPCRT4$NdrClientCall2(PMIDL_STUB_DESC pStubDescriptor, PFORMAT_STRING  pFormat, ...);

//ADVAPI32
WINBASEAPI BOOL WINAPI ADVAPI32$ConvertSidToStringSidW(PSID Sid, LPWSTR *StringSid);
WINBASEAPI BOOL WINAPI ADVAPI32$IsValidSid(PSID pSid);


#define intAlloc(size) KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intFree(addr) KERNEL32$HeapFree(KERNEL32$GetProcessHeap(), 0, addr)
#define intZeroMemory(addr,size) MSVCRT$memset((addr),0,size)


#else

#define intAlloc(size) KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intFree(addr) KERNEL32$HeapFree(KERNEL32$GetProcessHeap(), 0, addr)
#define intZeroMemory(addr,size) MSVCRT$memset((addr),0,size)

//MSVCRT
#define MSVCRT$memcpy memcpy
#define MSVCRT$wcscat_s wcscat_s
#define MSVCRT$malloc malloc
#define MSVCRT$calloc calloc
#define MSVCRT$free free
#define MSVCRT$wcsncpy_s wcsncpy_s
#define MSVCRT$strlen strlen
#define MSVCRT$strcpy strcpy
#define MSVCRT$strcat strcat
#define MSVCRT$_snprintf _snprintf
#define MSVCRT$vsnprintf vsnprintf
#define MSVCRT$srand srand
#define MSVCRT$time time
#define MSVCRT$rand rand

//KERNEL32
#define KERNEL32$GetProcessHeap GetProcessHeap
#define KERNEL32$HeapAlloc HeapAlloc
#define KERNEL32$HeapFree HeapFree
#define KERNEL32$WaitNamedPipeA WaitNamedPipeA
#define KERNEL32$WideCharToMultiByte WideCharToMultiByte
#define KERNEL32$MultiByteToWideChar MultiByteToWideChar
#define KERNEL32$FileTimeToSystemTime FileTimeToSystemTime
#define KERNEL32$SystemTimeToTzSpecificLocalTime SystemTimeToTzSpecificLocalTime

//RPCRT4
#define RPCRT4$RpcBindingFromStringBindingW RpcBindingFromStringBindingW
#define RPCRT4$RpcStringBindingComposeW RpcStringBindingComposeW
#define RPCRT4$RpcBindingSetAuthInfoExW RpcBindingSetAuthInfoExW
#define RPCRT4$RpcBindingFree RpcBindingFree
#define RPCRT4$RpcStringFreeW RpcStringFreeW
#define RPCRT4$NdrClientCall2 NdrClientCall2

//ADVAPI32
#define ADVAPI32$ConvertSidToStringSidW ConvertSidToStringSidW
#define ADVAPI32$IsValidSid IsValidSid

#endif