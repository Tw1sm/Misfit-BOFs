#include <windows.h>
#include "ts-tasklist.h"

#ifdef WOW64
#include "ms-tsts_legacy_c_x86.c"
#else
#include "ms-tsts_legacy_c_x64.c"
#endif

#ifdef BOF
#include "beacon.h"
#else
#include <stdio.h>
#include <sddl.h>
#endif

#define BUF_SIZE 512

EXTERN_C void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len) {
	return(MSVCRT$malloc(len));
}

EXTERN_C void __RPC_USER midl_user_free(void __RPC_FAR* ptr) {
	MSVCRT$free(ptr);
}


// adapted from
// https://github.com/G0ldenGunSec/GetWebDAVStatus/blob/main/GetWebDAVStatus_BOF/src/Source.c
int CheckPipeAccessibility(WCHAR** dispatch, LPWSTR lpwTarget) {
	char* pipeNameHead = "\\\\";
	char* pipeNameTail = "\\pipe\\Ctx_WinStation_API_service";

	// convert target to char*
	int requiredSize = KERNEL32$WideCharToMultiByte(CP_UTF8, 0, lpwTarget, -1, NULL, 0, NULL, NULL);
    char* target = (char*)MSVCRT$malloc(requiredSize * sizeof(char));
	KERNEL32$WideCharToMultiByte(CP_UTF8, 0, lpwTarget, -1, target, requiredSize, NULL, NULL);

	BOOL pipeStatus = 0;

	char* fullPipeName = MSVCRT$malloc(MSVCRT$strlen(target) + MSVCRT$strlen(pipeNameHead) + MSVCRT$strlen(pipeNameTail) + 1);
	MSVCRT$strcpy(fullPipeName, pipeNameHead);
	MSVCRT$strcat(fullPipeName, target);
	MSVCRT$strcat(fullPipeName, pipeNameTail);
	pipeStatus = KERNEL32$WaitNamedPipeA(fullPipeName, 3000);
	MSVCRT$free((void*)fullPipeName);
	return pipeStatus;
}

void CloseServerHandle(WCHAR** dispatch, _In_ SERVER_HANDLE phServer) {
	DWORD pResult;
	BOOLEAN result;
	result = RpcWinStationCloseServer(phServer, &pResult);
	if (result) {
		PRINT(dispatch, "[>] RpcWinStationCloseServer successful\n");
	}
	else {
		PRINT(dispatch, "[!] RpcWinStationCloseServer failed with error code: %d\n", pResult);
	}
}
 
// modified from
// https://github.com/outflanknl/C2-Tool-Collection/blob/8b7a73b5b40bf13e905fd69eb0573a88fa81e892/BOF/PetitPotam/SOURCE/PetitPotam.c#L223
RPC_STATUS CreateBindingHandle(WCHAR** dispatch, _In_ LPWSTR lpwTarget, _Out_ RPC_BINDING_HANDLE* binding_handle) {
	RPC_STATUS rStatus;
	RPC_BINDING_HANDLE v5;
	RPC_SECURITY_QOS SecurityQOS = { 0 };
	RPC_WSTR StringBinding = NULL;
	RPC_BINDING_HANDLE Binding;

	StringBinding = 0;
	Binding = 0;

	rStatus = RPCRT4$RpcStringBindingComposeW((RPC_WSTR)L"5ca4a760-ebb1-11cf-8611-00a0245420ed", (RPC_WSTR)L"ncacn_np", (RPC_WSTR)lpwTarget, (RPC_WSTR)L"\\pipe\\Ctx_WinStation_API_service", (RPC_WSTR)NULL, &StringBinding);
	if (rStatus == RPC_S_OK) {
		rStatus = RPCRT4$RpcBindingFromStringBindingW(StringBinding, &Binding);
		if (!rStatus) {
			SecurityQOS.Version = 1;
			SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_IMPERSONATE;
			SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_DEFAULT;
			SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_STATIC;

			rStatus = RPCRT4$RpcBindingSetAuthInfoExW(Binding, 0, RPC_C_AUTHN_LEVEL_PKT_PRIVACY, RPC_C_AUTHN_WINNT, 0, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
			if (rStatus == RPC_S_OK) {
				v5 = Binding;
				Binding = 0;
				*binding_handle = v5;
				PRINT(dispatch, "[>] RPC Binding successful\n");
			}
		}
	}
	if (Binding) {
		RPCRT4$RpcBindingFree(&Binding);
	}

	if (StringBinding) {
		RPCRT4$RpcStringFreeW(&StringBinding);
	}

	return rStatus;
}

void FreeAllProcessesInfo(PTS_ALL_PROCESSES_INFO pTsAllProcessesInfo, BOUNDED_ULONG numberOfProcesses) {
    for (ULONG i = 0; i < numberOfProcesses; i++) {
        // Free the memory for the pTsProcessInfo in each element
        if (pTsAllProcessesInfo[i].pTsProcessInfo) {
            MIDL_user_free(pTsAllProcessesInfo[i].pTsProcessInfo);
        }

        // Free the memory for the pSid in each element
        if (pTsAllProcessesInfo[i].pSid) {
            MIDL_user_free(pTsAllProcessesInfo[i].pSid);
        }
    }

    // Free the memory for the pTsAllProcessesInfo array
    MIDL_user_free(pTsAllProcessesInfo);
}

void execute(WCHAR** dispatch, LPWSTR lpwTarget) {
	WCHAR wcRPCTarget[BUF_SIZE] = L"\\\\";

	RPC_BINDING_HANDLE bHandle;
	RPC_STATUS rStatus = RPC_S_NO_BINDINGS;

	MSVCRT$wcscat_s(wcRPCTarget, _countof(wcRPCTarget), lpwTarget);
	PRINT(dispatch, "\n[>] Targeting %S\n", lpwTarget);

	// beacon will crash if RPC binding is attempted and pipe is not accessible
	// to "handle" this, we check if the pipe is accessible before attempting to bind
	int pipeStatus = 0;
	pipeStatus = CheckPipeAccessibility(dispatch, lpwTarget);
	if (pipeStatus == 0) {
		PRINT(dispatch, "[!] Pipe not accessible\n");
		return;
	}
	else {
		PRINT(dispatch, "[>] Pipe accessible\n");
	}

	rStatus = CreateBindingHandle(dispatch, wcRPCTarget, &bHandle);
	if (rStatus != RPC_S_OK) {
		PRINT(dispatch, "[!] RPC Binding failed...\n");
		return;
	}	

	// Make call to open server handle
	DWORD pResult;
	SERVER_HANDLE phServer;
	BOOLEAN result;

	result = RpcWinStationOpenServer(bHandle, &pResult, &phServer);

	if (!result) {
		PRINT(dispatch, "[!] RpcWinStationOpenServer failed with error code: %d\n", pResult);
		return;
	}

	PRINT(dispatch, "[>] RpcWinStationOpenServer successful\n");

	// Make call to get process info
	ULONG level = 0;
	BOUNDED_ULONG numberOfProcesses = 0x8000;
	PTS_ALL_PROCESSES_INFO ppTsAllProcessesInfo = NULL;

	result = RpcWinStationGetAllProcesses(phServer, &pResult, level, &numberOfProcesses, &ppTsAllProcessesInfo);
	if (!result) {
		PRINT(dispatch, "[!] RpcWinStationGetAllProcesses failed with error code: %d\n", pResult);
		CloseServerHandle(dispatch, phServer);
		rStatus = RPCRT4$RpcBindingFree(&bHandle);
		return;
	}

	PRINT(dispatch, "[>] RpcWinStationGetAllProcesses successful\n");

	// handle cleanup
	CloseServerHandle(dispatch, phServer);
    rStatus = RPCRT4$RpcBindingFree(&bHandle);

	
	if (numberOfProcesses == 0) {
		PRINT(dispatch, "\n[!] 0 processes returned - likely insufficent permissions\n");
		return;
	} else {
		PRINT(dispatch, "\n[+] Number of processes: %d\n\n", numberOfProcesses);
	}
	
	// parse process info
	PTS_SYS_PROCESS_INFORMATION pCurrentProcessInfo;
    WCHAR imageName[MAX_PATH];

	const char *headers[] = {"PPID", "PID", "Image Name", "SessionId", "SID"};
	PRINT(dispatch, "%6s%6s %-50s %-10s %-50s\n", headers[0], headers[1], headers[2], headers[3], headers[4]);

	PRINT(dispatch, "----------------------------------------------------------------------------------------------------------------------------\n");

    for (ULONG i = 0; i < numberOfProcesses; i++) {
        pCurrentProcessInfo = ppTsAllProcessesInfo[i].pTsProcessInfo;

		LPWSTR lpSidString = L"";

		#ifndef WOW64
		if (ADVAPI32$IsValidSid((PSID)ppTsAllProcessesInfo[i].pSid)) {
			ADVAPI32$ConvertSidToStringSidW((PSID)ppTsAllProcessesInfo[i].pSid, &lpSidString);
		}
		#endif

        if (pCurrentProcessInfo->ImageName.Length > 0 && pCurrentProcessInfo->ImageName.Buffer) {
            MSVCRT$wcsncpy_s(imageName, MAX_PATH, pCurrentProcessInfo->ImageName.Buffer, pCurrentProcessInfo->ImageName.Length / sizeof(WCHAR));
            imageName[pCurrentProcessInfo->ImageName.Length / sizeof(WCHAR)] = L'\0';
			PRINT(dispatch, "%6d%6d %-50S %-10d %-50S\n", pCurrentProcessInfo->InheritedFromUniqueProcessId, pCurrentProcessInfo->UniqueProcessId, imageName, pCurrentProcessInfo->SessionId, lpSidString);	
		}
	}

	FreeAllProcessesInfo(ppTsAllProcessesInfo, numberOfProcesses);

	PRINT(dispatch, "\n[>] Done\n");
	return;

}

#ifdef BOF
void go(IN PCHAR Args, IN ULONG Length) {
	LPWSTR lpwTarget = NULL;
	
	// Parse Arguments
	datap parser;
	BeaconDataParse(&parser, Args, Length);
	lpwTarget = (WCHAR*)BeaconDataExtract(&parser, NULL);

	if (lpwTarget == NULL) {
		PRINT(NULL, "[!] Missing arguments\n");
		return;
	}

	execute(NULL, lpwTarget);

	return;
}

#else

int main(int argc, char* argv[]) {
	if (argc < 2) {
		PRINT(NULL, "[!] Missing arguments\n");
		return 0;
	}

	char* target = argv[1];
	
	// covert target to lpwTarget
	int requiredSize = KERNEL32$MultiByteToWideChar(CP_UTF8, 0, target, -1, NULL, 0);
    LPWSTR lpwTarget = (LPWSTR)MSVCRT$malloc(requiredSize * sizeof(WCHAR));

    KERNEL32$MultiByteToWideChar(CP_UTF8, 0, target, -1, lpwTarget, requiredSize);

	execute(NULL, lpwTarget);
	return 0;
}

#endif