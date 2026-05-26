# ts-tasklist
BOF to pull a process listing from a remote host using [MS-TSTS](https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-tsts/1eb45af1-94f1-4c42-9e13-dd0a018646fd) RPC calls. Essentially a BOF port of some [tstool.py](https://github.com/fortra/impacket/blob/master/examples/tstool.py) functionality. 

Returns PID, PPID, process name and SID of the account the process is running as.

Relies upon the `Ctx_WinStation_API_service` named pipe.

## Usage
```
ts-tasklist [target_host]

Args:
- target_host: wide string/Z
```
