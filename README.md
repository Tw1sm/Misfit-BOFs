# termserv-tasklist
BOF to pull a process listing from a remote host using [MS-TSTS](https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-tsts/1eb45af1-94f1-4c42-9e13-dd0a018646fd) RPC calls. Essentially a BOF port of some [tstool.py](https://github.com/fortra/impacket/blob/master/examples/tstool.py) functionality.

## Usage
```
termserv-tasklist <target host>
```

### Example
```
=> termserv-tasklist tretogor.redania.local

[>] Targeting tretogor.redania.local
[>] Pipe accessible
[>] RPC Binding successful
[>] RpcWinStationOpenServer successful
[>] RpcWinStationGetAllProcesses successful
[>] RpcWinStationCloseServer successful

[+] Number of processes: 113

  PPID   PID Image Name                                         SessionId  SID
----------------------------------------------------------------------------------------------------------------------------
     0     4 System                                             0
     4   124 Registry                                           0          S-1-5-18
     4   344 smss.exe                                           0          S-1-5-18
   456   472 csrss.exe                                          0          S-1-5-18
   456   548 wininit.exe                                        0          S-1-5-18
   548   696 services.exe                                       0          S-1-5-18
   548   712 lsass.exe                                          0          S-1-5-18
   
    // SNIP

   932  6684 dllhost.exe                                        1          S-1-5-21-1308756548-3893869957-2915408613-500
   932  7016 ApplicationFrameHost.exe                           1          S-1-5-21-1308756548-3893869957-2915408613-500
  4160  7116 cmd.exe                                            1          S-1-5-21-1308756548-3893869957-2915408613-500
  7116  4724 conhost.exe                                        1          S-1-5-21-1308756548-3893869957-2915408613-500
   932  5484 explorer.exe                                       1          S-1-5-21-1308756548-3893869957-2915408613-500
  4160  6196 mmc.exe                                            1          S-1-5-21-1308756548-3893869957-2915408613-500
   932  4808 dllhost.exe                                        1          S-1-5-21-1308756548-3893869957-2915408613-500

[>] Done
```

Host is not reachable/`Ctx_WinStation_API_service` pipe can't be reached/some other issue:
```
=> termserv-tasklist tretogor.redania.local

[>] Targeting tretogor.redania.local
[!] Pipe not accessible
```

## References
- [nanorobues](https://github.com/wavvs/nanorobeus)
- [c2-tool-collection](https://github.com/outflanknl/C2-Tool-Collection/tree/main/BOF/PetitPotam) (PetitPotam BOF)
- TrustedSec blogs on RPC development ([1](https://www.trustedsec.com/blog/rpc-programming-for-the-aspiring-windows-developer/), [2](https://www.trustedsec.com/blog/using-rpc-in-bofs/))
- [tstool.py](https://github.com/fortra/impacket/blob/master/examples/tstool.py)