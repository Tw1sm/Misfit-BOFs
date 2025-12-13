#include <windows.h>
#include "base.c"

#ifdef WOW64
#include "ms-tsts_tspubrpc_c_x86.c"
#else
#include "ms-tsts_tspubrpc_c_x64.c"
#endif


#define BUF_SIZE 512

EXTERN_C void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len) {
	return(MSVCRT$malloc(len));
}

EXTERN_C void __RPC_USER midl_user_free(void __RPC_FAR* ptr) {
	MSVCRT$free(ptr);
}

// Convert session state to string
const char* GetSessionState(LONG state) {
	switch(state) {
		case 0: return "Active";
		case 1: return "Connected";
		case 2: return "ConnectQuery";
		case 3: return "Shadow";
		case 4: return "Disconnected";
		case 5: return "Idle";
		case 6: return "Listen";
		case 7: return "Reset";
		case 8: return "Down";
		case 9: return "Init";
		default: return "Unknown";
	}
}

// Get lock status from session flags
const char* GetLockStatus(LONG sessionFlags) {
	// 0x1 = Locked, 0x0 = Unlocked
	if (sessionFlags & 0x1) {
		return "Locked";
	} else {
		return "Unlocked";
	}
}

// Convert FILETIME to formatted string
void FormatFileTime(hyper fileTime, char* buffer, size_t bufferSize) {
	if (fileTime == 0) {
		MSVCRT$_snprintf(buffer, bufferSize, "N/A");
		return;
	}

	FILETIME ft;
	SYSTEMTIME st, lt;

	ft.dwLowDateTime = (DWORD)(fileTime & 0xFFFFFFFF);
	ft.dwHighDateTime = (DWORD)(fileTime >> 32);

	if (!KERNEL32$FileTimeToSystemTime(&ft, &st)) {
		MSVCRT$_snprintf(buffer, bufferSize, "Invalid Time");
		return;
	}

	if (!KERNEL32$SystemTimeToTzSpecificLocalTime(NULL, &st, &lt)) {
		MSVCRT$_snprintf(buffer, bufferSize, "Invalid Time");
		return;
	}

	MSVCRT$_snprintf(buffer, bufferSize, "%02d/%02d/%04d %02d:%02d:%02d",
		lt.wMonth, lt.wDay, lt.wYear, lt.wHour, lt.wMinute, lt.wSecond);
}


// adapted from
// https://github.com/G0ldenGunSec/GetWebDAVStatus/blob/main/GetWebDAVStatus_BOF/src/Source.c
int CheckPipeAccessibility(LPWSTR lpwTarget) {
	char* pipeNameHead = "\\\\";
	char* pipeNameTail = "\\pipe\\LSM_API_service";

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
 
// modified from
// https://github.com/outflanknl/C2-Tool-Collection/blob/8b7a73b5b40bf13e905fd69eb0573a88fa81e892/BOF/PetitPotam/SOURCE/PetitPotam.c#L223
RPC_STATUS CreateBindingHandle(_In_ LPWSTR lpwTarget, _Out_ RPC_BINDING_HANDLE* binding_handle) {
	RPC_STATUS rStatus;
	RPC_BINDING_HANDLE v5;
	RPC_SECURITY_QOS SecurityQOS = { 0 };
	RPC_WSTR StringBinding = NULL;
	RPC_BINDING_HANDLE Binding;

	StringBinding = 0;
	Binding = 0;

	rStatus = RPCRT4$RpcStringBindingComposeW((RPC_WSTR)L"88143fd0-c28d-4b2b-8fef-8d882f6a9390", (RPC_WSTR)L"ncacn_np", (RPC_WSTR)lpwTarget, (RPC_WSTR)L"\\pipe\\LSM_API_service", (RPC_WSTR)NULL, &StringBinding);
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
				//internal_printf("[>] RPC Binding successful\n");
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

void execute(LPWSTR lpwTarget) {
	WCHAR wcRPCTarget[BUF_SIZE] = L"\\\\";

	RPC_BINDING_HANDLE bHandle;
	RPC_STATUS rStatus = RPC_S_NO_BINDINGS;
	HRESULT hr;

	MSVCRT$wcscat_s(wcRPCTarget, _countof(wcRPCTarget), lpwTarget);
	internal_printf("\n[>] Targeting %S\n", lpwTarget);

	// beacon will crash if RPC binding is attempted and pipe is not accessible
	// to "handle" this, we check if the pipe is accessible before attempting to bind
	int pipeStatus = 0;
	pipeStatus = CheckPipeAccessibility(lpwTarget);
	if (pipeStatus == 0) {
		internal_printf("[!] Pipe not accessible\n");
		return;
	}
	//else {
	//	internal_printf("[>] Pipe accessible\n");
	//}

	rStatus = CreateBindingHandle(wcRPCTarget, &bHandle);
	if (rStatus != RPC_S_OK) {
		internal_printf("[!] RPC Binding failed...\n");
		return;
	}	


	ENUM_HANDLE hEnum = NULL;
	PSESSIONENUM_EX pAllSessions = NULL;
	ULONG Entries = 0;
	DWORD Level = 1;

	hr = RpcOpenEnum(bHandle, &hEnum);
	if(hr == S_OK) {
		//internal_printf("[>] RpcOpenEnum successful\n");
		//internal_printf("[>] Calling RpcGetEnumResultEx with Level %d...\n", Level);
		
		hr = RpcGetEnumResultEx( hEnum, &pAllSessions, Level, &Entries );
		
		//internal_printf("[>] RpcGetEnumResultEx returned hr=0x%08x, Entries=%d\n", hr, Entries);

		if(hr == S_OK) {
			internal_printf("[>] RpcGetEnumResultEx successful, got %d entries\n\n", Entries);

			for(ULONG i=0;i<Entries;i++)
			{
				LONG SessionId = pAllSessions[i].Data.SessionEnum_Level1.SessionId;
				internal_printf("[>] Session %d (%S):\n", SessionId, pAllSessions[i].Data.SessionEnum_Level1.Name);

				// Get detailed session information
				LSMSESSIONINFORMATION_EX SessionInfoEx = {0};
				SessionInfoEx.Level = 1;

				hr = RpcGetSessionInformationEx(bHandle, SessionId, 1, &SessionInfoEx);
				if(hr == S_OK) {
					PLSM_SESSIONINFO_EX_LEVEL1 pLevel1 = &SessionInfoEx.Data.LSM_SessionInfo_Level1;

					char timeBuffer[32];

					internal_printf("  Session Name:    %S\n", pLevel1->SessionName);
					internal_printf("  Domain:          %S\n", pLevel1->DomainName);
					internal_printf("  User Name:       %S\n", pLevel1->UserName);
					internal_printf("  Session State:   %s\n", GetSessionState(pLevel1->SessionState));
					internal_printf("  Session Flags:   %s\n", GetLockStatus(pLevel1->SessionFlags));

					FormatFileTime(pLevel1->ConnectTime, timeBuffer, sizeof(timeBuffer));
					internal_printf("  Connect Time:    %s\n", timeBuffer);

					FormatFileTime(pLevel1->DisconnectTime, timeBuffer, sizeof(timeBuffer));
					internal_printf("  Disconnect Time: %s\n", timeBuffer);

					FormatFileTime(pLevel1->LogonTime, timeBuffer, sizeof(timeBuffer));
					internal_printf("  Logon Time:      %s\n\n", timeBuffer);
					
					/* Does not appear to work */
					//FormatFileTime(pLevel1->LastInputTime, timeBuffer, sizeof(timeBuffer));
					//internal_printf("  Last Input Time: %s\n\n", timeBuffer);

					// Free protocol data if present
					if(pLevel1->ProtocolDataSize > 0 && pLevel1->ProtocolData != NULL) {
						MIDL_user_free(pLevel1->ProtocolData);
					}
				}
				else {
					internal_printf("  [!] RpcGetSessionInformationEx failed 0x%08x\n\n", hr);
				}
			}
		}
		else {
			internal_printf("[!] RpcGetEnumResultEx failed 0x%08x\n", hr);
		}

		if ( pAllSessions )
		{
			MIDL_user_free(pAllSessions);
		}
	}
	else {
		internal_printf("[!] RpcOpenEnum failed 0x%08x\n", hr);
	}
	
	// handle cleanup
	if (hEnum) {
		RpcCloseEnum(&hEnum);
	}
    rStatus = RPCRT4$RpcBindingFree(&bHandle);

	
	internal_printf("\n[>] Done\n");
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
		internal_printf(NULL, "[!] Missing arguments\n");
		return;
	}

	if(!bofstart())
	{
		return;
	}


	execute(lpwTarget);

	printoutput(TRUE);
	return;
}

#else

int main(int argc, char* argv[]) {
	if (argc < 2) {
		internal_printf(NULL, "[!] Missing arguments\n");
		return 0;
	}

	char* target = argv[1];
	
	// covert target to lpwTarget
	int requiredSize = KERNEL32$MultiByteToWideChar(CP_UTF8, 0, target, -1, NULL, 0);
    LPWSTR lpwTarget = (LPWSTR)MSVCRT$malloc(requiredSize * sizeof(WCHAR));

    KERNEL32$MultiByteToWideChar(CP_UTF8, 0, target, -1, lpwTarget, requiredSize);

	execute(lpwTarget);
	return 0;
}

#endif