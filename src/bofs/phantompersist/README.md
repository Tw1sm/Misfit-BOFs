# phantompersist

Registers the current executable for Windows Application Restart and installs an unload-safe shutdown handler implementing the Phantom Persistence technique. The handler replaces a normal shutdown, restart, or logoff with `ExitWindowsEx(EWX_RESTARTAPPS | EWX_FORCE)`.

The current host executable is what Windows restarts. Use an EXE-backed implant whose normal launch and optional arguments recreate the implant; this cannot persist an arbitrary executable or make a reflective DLL host restart the implant.

## Arguments

The BOF buffer contains a 32-bit action and, for install, an optional packed UTF-16 restart-argument string:

| Action | Effect |
| --- | --- |
| `1` | Install or update; optional second argument is passed to `RegisterApplicationRestart` |
| `2` | Show registration, resident-handler, executable, and 60-second eligibility status |
| `3` | Remove the registration and stop the resident handler |

Windows adds the executable path itself; do not include it in the restart arguments. Shutdowns before the process has run for 60 seconds, hard power loss, and force termination outside the normal shutdown flow do not trigger restart.

## Validation notes

Validated end to end with a 64-bit Apollo WinExe on Windows Server 2022: a non-forced `InitiateSystemShutdownEx` request was aborted, CSRSS created the per-user `RunOnce\\Application Restart #0` value, and the same executable produced a new Mythic callback after that user logged on again. A nonzero `shutdown.exe /t` implicitly forces applications closed and therefore bypasses this handler.
