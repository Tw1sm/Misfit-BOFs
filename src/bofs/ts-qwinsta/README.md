# ts-qwinsta
BOF to query session data from a remote host using [MS-TSTS](https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-tsts/1eb45af1-94f1-4c42-9e13-dd0a018646fd) RPC calls. Essentially a BOF port of some [tstool.py](https://github.com/fortra/impacket/blob/master/examples/tstool.py) functionality. 

Returns information such as the session state (active/disconnected), session flags (locked/unlocked), connect time, disconnect time, and session user info.

Relies upon the `LSM_API_service` named pipe.

## Usage
```
ts-qwinsta [target_host]

Args:
- target_host: wide string/Z
```
