
#include <windows.h>
#include <shlobj.h>
#include <shlguid.h>
#include <initguid.h>
#include "bofdefs.h"
#include "base.c"

DEFINE_GUID(CLSID_ShellLink, 0x00021401, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(IID_IShellLinkW, __MSABI_LONG(0x000214f9), 0, 0, 0xc0, 0, 0, 0, 0, 0, 0, 0x46);
DEFINE_GUID(IID_IPersistFile, 0x0000010B, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);

//
// Get and print the target path of a .lnk file
//
void GetShortcutTargetPath(const wchar_t *shortcutPath) {
    HRESULT hres;
    IShellLinkW *psl;
    wchar_t targetPath[MAX_PATH];

    hres = OLE32$CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    if (FAILED(hres)) {
        hres = OLE32$CoInitializeEx(NULL, COINIT_MULTITHREADED);

        if (FAILED(hres)) {
            internal_printf("CoInitializeEx failed");
            return;
        }
    }

    hres = OLE32$CoCreateInstance(&CLSID_ShellLink, NULL, CLSCTX_INPROC_SERVER, 
                            &IID_IShellLinkW, (void **)&psl);

    if (SUCCEEDED(hres)) {
        //
        // IPersistFile interface to load the shortcut
        //
        IPersistFile *ppf;
        hres = psl->lpVtbl->QueryInterface(psl, &IID_IPersistFile, (void **)&ppf);
        if (SUCCEEDED(hres)) {
            hres = ppf->lpVtbl->Load(ppf, shortcutPath, STGM_READ);
            if (SUCCEEDED(hres)) {
                hres = psl->lpVtbl->Resolve(psl, NULL, SLR_NO_UI);
                if (SUCCEEDED(hres)) {
                    //
                    // Get the path the shortcut points to
                    //
                    hres = psl->lpVtbl->GetPath(psl, targetPath, MAX_PATH, NULL, 0);
                    if (SUCCEEDED(hres) && targetPath[0] != L'\0') {
                        //
                        // Check if the path is a valid file or directory
                        //
                        if (KERNEL32$GetFileAttributesW(targetPath) != INVALID_FILE_ATTRIBUTES) {
                            char* pathString = NULL;
                            pathString = Utf16ToUtf8(targetPath);
                            internal_printf("%s\n", pathString);
                        }
                    }
                }
            }
            //
            // Release IPersistFile
            //
            ppf->lpVtbl->Release(ppf);
        }
        //
        // Release IShellLink
        //
        psl->lpVtbl->Release(psl);
    }

    OLE32$CoUninitialize();
}

//
// List .lnk files in a directory and process them
//
void ProcessShortcutFilesInDirectory(const wchar_t *directoryPath) {
    WIN32_FIND_DATAW findFileData;
    HANDLE hFind;
    wchar_t searchPath[MAX_PATH];

    char* dirString = NULL;
    dirString = Utf16ToUtf8(directoryPath);
    internal_printf("Searching: %s\n\n", dirString);

    MSVCRT$_snwprintf(searchPath, MAX_PATH, L"%s\\*.lnk", directoryPath);

    hFind = KERNEL32$FindFirstFileW(searchPath, &findFileData);
    if (hFind == INVALID_HANDLE_VALUE) {
        internal_printf("No .lnk files found\n");
        return;
    }

    do {
        wchar_t fullPath[MAX_PATH];
        MSVCRT$_snwprintf(fullPath, MAX_PATH, L"%s\\%s", directoryPath, findFileData.cFileName);

        GetShortcutTargetPath(fullPath);

    } while (KERNEL32$FindNextFileW(hFind, &findFileData) != 0);

    KERNEL32$FindClose(hFind);
}

// Get %APPDATA%\Microsoft\Windows\Recent
void GetRecentFolderPath(wchar_t *path, size_t size) {
    wchar_t appDataPath[MAX_PATH];
    if (KERNEL32$GetEnvironmentVariableW(L"APPDATA", appDataPath, MAX_PATH)) {
        MSVCRT$_snwprintf(path, size, L"%s\\Microsoft\\Windows\\Recent", appDataPath);
    }
}

#ifdef BOF
VOID go( 
	IN PCHAR Buffer, 
	IN ULONG Length 
)
{
	if(!bofstart())
	{
		return;
	}

    datap parser;
    wchar_t* directory = NULL;

    BeaconDataParse(&parser, Buffer, Length);
    directory = (wchar_t*)BeaconDataExtract(&parser, NULL);

    // if directory is NULL, use the default Recent folder path
    if (directory == NULL) {
        wchar_t recentFolderPath[MAX_PATH] = {0};
        GetRecentFolderPath(recentFolderPath, MAX_PATH);
        if (recentFolderPath[0] != L'\0') {
            ProcessShortcutFilesInDirectory(recentFolderPath);
        } else {
            internal_printf("Failed to get %%APPDATA%%\\Microsoft\\Windows\\Recent folder path\n");
        }
    } else {
        ProcessShortcutFilesInDirectory(directory);
    }

	printoutput(TRUE);
};
#else
int main()
{
    printf("==== Explicit Path ====\n");
    ProcessShortcutFilesInDirectory(L"C:\\Users\\cersei.lannister\\AppData\\Roaming\\Microsoft\\Windows\\Recent");
    printf("=== Implicit Path ====\n");
    wchar_t recentFolderPath[MAX_PATH];
    GetRecentFolderPath(recentFolderPath, MAX_PATH);
    ProcessShortcutFilesInDirectory(recentFolderPath);
    return 1;
}

#endif
