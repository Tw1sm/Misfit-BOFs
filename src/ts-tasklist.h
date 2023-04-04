#pragma once

#include <windows.h>


#if defined(BOF) || defined(BRC4)

//MSVCRT
WINBASEAPI wchar_t *__cdecl MSVCRT$wcscat_s(wchar_t *strDestination, size_t numberOfElements, const wchar_t *strSource);
WINBASEAPI void* __cdecl MSVCRT$malloc( size_t size);
WINBASEAPI void __cdecl MSVCRT$free( void* memblock);
WINBASEAPI errno_t __cdecl MSVCRT$wcsncpy_s(wchar_t *strDest, size_t numberOfElements, const wchar_t *strSource, size_t count);
WINBASEAPI SIZE_T WINAPI MSVCRT$strlen(const char* str);
WINBASEAPI void* WINAPI MSVCRT$strcpy(const char* dest, const char* source);
WINBASEAPI void* WINAPI MSVCRT$strcat(const char* dest, const char* source);


//KERNEL32
WINBASEAPI BOOL WINAPI KERNEL32$WaitNamedPipeA(LPCSTR lpNamedPipeName, DWORD nTimeOut);
WINBASEAPI int WINAPI KERNEL32$WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int  cchWideChar, LPSTR lpMultiByteStr, int  cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
WINBASEAPI int WINAPI KERNEL32$MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);

//RPCRT4
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingFromStringBindingW(RPC_WSTR StringBinding, RPC_BINDING_HANDLE *Binding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcStringBindingComposeW(RPC_WSTR ObjUuid, RPC_WSTR ProtSeq, RPC_WSTR NetworkAddr, RPC_WSTR Endpoint, RPC_WSTR Options, RPC_WSTR *StringBinding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingSetAuthInfoExW(RPC_BINDING_HANDLE Binding, RPC_WSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc, RPC_SECURITY_QOS *SecurityQOS);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcBindingFree(RPC_BINDING_HANDLE *Binding);
DECLSPEC_IMPORT RPC_STATUS WINAPI RPCRT4$RpcStringFreeW(RPC_WSTR *String);
DECLSPEC_IMPORT CLIENT_CALL_RETURN RPC_VAR_ENTRY RPCRT4$NdrClientCall2(PMIDL_STUB_DESC pStubDescriptor, PFORMAT_STRING  pFormat, ...);

//ADVAPI32
WINBASEAPI BOOL __cdecl ADVAPI32$ConvertSidToStringSidW(PSID Sid, LPWSTR *StringSid);
WINBASEAPI BOOL __cdecl ADVAPI32$IsValidSid(PSID pSid);

#else

//MSVCRT
#define MSVCRT$wcscat_s wcscat_s
#define MSVCRT$malloc malloc
#define MSVCRT$free free
#define MSVCRT$wcsncpy_s wcsncpy_s
#define MSVCRT$strlen strlen
#define MSVCRT$strcpy strcpy
#define MSVCRT$strcat strcat

//KERNEL32
#define KERNEL32$WaitNamedPipeA WaitNamedPipeA
#define KERNEL32$WideCharToMultiByte WideCharToMultiByte
#define KERNEL32$MultiByteToWideChar MultiByteToWideChar

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

#ifdef BRC4
#define PRINT(dispatch, ...) { BadgerDispatch(dispatch, __VA_ARGS__); }

#elif BOF
#define PRINT(dispatch, ...) { BeaconPrintf(CALLBACK_OUTPUT, __VA_ARGS__); }

#else
#define PRINT(dispatch, ...) { fprintf(stdout, __VA_ARGS__); }

#endif