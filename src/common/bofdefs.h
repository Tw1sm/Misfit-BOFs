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
WINBASEAPI int __cdecl MSVCRT$_snwprintf(wchar_t *buffer, size_t count, const wchar_t *format, ...);
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
WINBASEAPI DWORD WINAPI KERNEL32$GetFileAttributesW(LPCWSTR lpFileName);
WINBASEAPI HANDLE WINAPI KERNEL32$FindFirstFileW(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData);
WINBASEAPI BOOL WINAPI KERNEL32$FindNextFileW(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData);
WINBASEAPI BOOL WINAPI KERNEL32$FindClose(HANDLE hFindFile);
WINBASEAPI DWORD WINAPI KERNEL32$GetEnvironmentVariableW(LPCWSTR lpName, LPWSTR lpBuffer, DWORD nSize);
WINBASEAPI UINT WINAPI KERNEL32$GetSystemDirectoryW(LPWSTR lpBuffer, UINT uSize);
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$GetCurrentProcess( VOID );
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$GetCurrentThread( VOID );
DECLSPEC_IMPORT WINBOOL WINAPI KERNEL32$CloseHandle( HANDLE hObject );
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetLastError( VOID );
DECLSPEC_IMPORT VOID WINAPI KERNEL32$SetLastError( DWORD dwErrCode );

//RPCRT4
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingFromStringBindingW(RPC_WSTR StringBinding, RPC_BINDING_HANDLE *Binding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcStringBindingComposeW(RPC_WSTR ObjUuid, RPC_WSTR ProtSeq, RPC_WSTR NetworkAddr, RPC_WSTR Endpoint, RPC_WSTR Options, RPC_WSTR *StringBinding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingSetAuthInfoExW(RPC_BINDING_HANDLE Binding, RPC_WSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc, RPC_SECURITY_QOS *SecurityQOS);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingFree(RPC_BINDING_HANDLE *Binding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcStringFreeW(RPC_WSTR *String);
DECLSPEC_IMPORT CLIENT_CALL_RETURN RPC_VAR_ENTRY RPCRT4$NdrClientCall2(PMIDL_STUB_DESC pStubDescriptor, PFORMAT_STRING  pFormat, ...);

//ADVAPI32
WINBASEAPI BOOL WINAPI ADVAPI32$ConvertSidToStringSidW(PSID Sid, LPWSTR *StringSid);
DECLSPEC_IMPORT WINBOOL  WINAPI ADVAPI32$OpenThreadToken( HANDLE ThreadHandle, DWORD DesiredAccess, WINBOOL OpenAsSelf, PHANDLE TokenHandle );
DECLSPEC_IMPORT WINBOOL  WINAPI ADVAPI32$OpenProcessToken( HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle );
DECLSPEC_IMPORT WINBOOL  WINAPI ADVAPI32$LookupPrivilegeValueA( LPCSTR lpSystemName, LPCSTR lpName, PLUID lpLuid );
DECLSPEC_IMPORT WINBOOL  WINAPI ADVAPI32$AdjustTokenPrivileges( HANDLE TokenHandle, WINBOOL DisableAllPrivileges, PTOKEN_PRIVILEGES NewState, DWORD BufferLength, PTOKEN_PRIVILEGES PreviousState, PDWORD ReturnLength );
WINBASEAPI BOOL WINAPI ADVAPI32$IsValidSid(PSID pSid);

//OLE32
WINBASEAPI HRESULT WINAPI OLE32$CoInitializeEx(LPVOID pvReserved, DWORD dwCoInit);
WINBASEAPI HRESULT WINAPI OLE32$CoCreateInstance(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID *ppv);
WINBASEAPI void WINAPI OLE32$CoUninitialize(void);
WINBASEAPI HRESULT WINAPI OLE32$CoGetObject(LPCWSTR pszName, BIND_OPTS *pBindOptions, REFIID riid, void **ppv);
WINBASEAPI HRESULT WINAPI OLE32$StringFromGUID2(REFGUID rguid, LPOLESTR lpsz, int cchMax);
WINBASEAPI HRESULT WINAPI OLE32$CoTaskMemFree(LPVOID pv);

//USER32
DECLSPEC_IMPORT WINBOOL  WINAPI USER32$ExitWindowsEx( UINT uFlags, DWORD dwReason );


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
#define MSVCRT$_snwprintf _snwprintf
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
#define KERNEL32$GetFileAttributesW GetFileAttributesW
#define KERNEL32$FindFirstFileW FindFirstFileW
#define KERNEL32$FindNextFileW FindNextFileW
#define KERNEL32$FindClose FindClose
#define KERNEL32$GetEnvironmentVariableW GetEnvironmentVariableW
#define KERNEL32$GetSystemDirectoryW GetSystemDirectoryW
#define KERNEL32$GetCurrentProcess GetCurrentProcess
#define KERNEL32$GetCurrentThread GetCurrentThread
#define KERNEL32$CloseHandle CloseHandle
#define KERNEL32$GetLastError GetLastError
#define KERNEL32$SetLastError SetLastError

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
#define ADVAPI32$OpenThreadToken OpenThreadToken
#define ADVAPI32$OpenProcessToken OpenProcessToken
#define ADVAPI32$LookupPrivilegeValueA LookupPrivilegeValueA
#define ADVAPI32$AdjustTokenPrivileges AdjustTokenPrivileges

//OLE32
#define OLE32$CoInitializeEx CoInitializeEx
#define OLE32$CoCreateInstance CoCreateInstance
#define OLE32$CoUninitialize CoUninitialize
#define OLE32$CoGetObject CoGetObject
#define OLE32$StringFromGUID2 StringFromGUID2
#define OLE32$CoTaskMemFree CoTaskMemFree

//USER32
#define USER32$ExitWindowsEx ExitWindowsEx

#endif
