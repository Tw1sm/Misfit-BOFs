#include <windows.h>
#include "bofdefs.h"
#include "base.c"

/*  Required privilege to call ExitWindowsEx / InitiateSystemShutdownEx  */
#ifndef SE_SHUTDOWN_NAME
#define SE_SHUTDOWN_NAME TEXT( "SeShutdownPrivilege" )
#endif

/*  ExitWindowsEx reason codes ( shutdown.exe /r /f /t 0 equivalent )  */
#ifndef SHTDN_REASON_MAJOR_OTHER
#define SHTDN_REASON_MAJOR_OTHER     0x00000000
#endif
#ifndef SHTDN_REASON_MINOR_OTHER
#define SHTDN_REASON_MINOR_OTHER     0x00000000
#endif
#ifndef SHTDN_REASON_FLAG_PLANNED
#define SHTDN_REASON_FLAG_PLANNED    0x80000000
#endif

BOOL OpenEffectiveToken( PHANDLE phToken )
{
    DWORD dwErr = 0;

    if ( ADVAPI32$OpenThreadToken( KERNEL32$GetCurrentThread( ), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, TRUE, phToken ) )
    {
        return TRUE;
    }

    dwErr = KERNEL32$GetLastError( );
    if ( dwErr != ERROR_NO_TOKEN )
    {
        internal_printf( "OpenThreadToken failed: %lu", dwErr );
        return FALSE;
    }

    if ( !ADVAPI32$OpenProcessToken( KERNEL32$GetCurrentProcess( ), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, phToken ) )
    {
        internal_printf( "OpenProcessToken failed: %lu", KERNEL32$GetLastError( ) );
        return FALSE;
    }

    return TRUE;
}

VOID Reboot( VOID ) {
    HANDLE           hToken = NULL;
    TOKEN_PRIVILEGES tkp    = { 0 };
    DWORD            dwErr  = 0;

    /*  Open the effective token with the rights needed to adjust privileges  */
    if ( !OpenEffectiveToken( &hToken ) )
    {
        return;
    }

    /*  Look up the LUID for SeShutdownPrivilege on the local system  */
    if ( !ADVAPI32$LookupPrivilegeValueA( NULL, "SeShutdownPrivilege", &tkp.Privileges[ 0 ].Luid ) )
    {
        internal_printf( "LookupPrivilegeValue failed: %lu", KERNEL32$GetLastError( ) );
        KERNEL32$CloseHandle( hToken );
        return;
    }

    tkp.PrivilegeCount             = 1;
    tkp.Privileges[ 0 ].Attributes = SE_PRIVILEGE_ENABLED;

    /*  Enable SeShutdownPrivilege in the current token  */
    KERNEL32$SetLastError( ERROR_SUCCESS );
    if ( !ADVAPI32$AdjustTokenPrivileges( hToken, FALSE, &tkp, 0, NULL, NULL ) )
    {
        internal_printf( "AdjustTokenPrivileges failed: %lu", KERNEL32$GetLastError( ) );
        KERNEL32$CloseHandle( hToken );
        return;
    }

    /*  AdjustTokenPrivileges can succeed even when the privilege was not assigned, so check GetLastError  */
    dwErr = KERNEL32$GetLastError( );
    if ( dwErr != ERROR_SUCCESS )
    {
        if ( dwErr == ERROR_NOT_ALL_ASSIGNED )
        {
            internal_printf( "SeShutdownPrivilege not held by current token" );
        }
        else
        {
            internal_printf( "AdjustTokenPrivileges completed with error: %lu", dwErr );
        }
        KERNEL32$CloseHandle( hToken );
        return;
    }

    KERNEL32$CloseHandle( hToken );

    /*  EWX_REBOOT | EWX_FORCE  ==  shutdown.exe /r /f /t 0  */
    if ( !USER32$ExitWindowsEx( EWX_REBOOT | EWX_FORCE, SHTDN_REASON_MAJOR_OTHER | SHTDN_REASON_MINOR_OTHER | SHTDN_REASON_FLAG_PLANNED ) )
    {
        internal_printf( "ExitWindowsEx failed: %lu", KERNEL32$GetLastError( ) );
        return;
    }

    internal_printf( "Reboot initiated ( /r /f /t 0 equivalent )" );
}

#ifdef BOF
VOID go( IN PCHAR Args, IN ULONG Length )
{
    (void)Args;
    (void)Length;

    if ( !bofstart() )
    {
        return;
    }
    Reboot();
    printoutput(TRUE);
}

#else
int main()
{
   Reboot();
   return 0;
}

#endif
