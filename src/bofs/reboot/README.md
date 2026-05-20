# reboot
BOF to enable `SeShutdownPrivilege` (if held and not enabled on token) and then call `USER32$ExitWindowsEx` equivalent of `shutdown /r /t 0 /f`

## Usage
The bof takes no args, just execute the `go` entrypoint