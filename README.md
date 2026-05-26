# Misfit BOFs
Miscellaneous BOFs created during ops. Code here probably doesn't fit with existing repos or is manually written and too ugly to PR, or is pure AI slop.

## BOFs

| Name | Description |
| --- | --- |
| [dcsync](src/bofs/dcsync/README.md) | DCSync a single target account |
| [reboot](src/bofs/reboot/README.md) | Force an immediate reboot |
| [recentfiles](src/bofs/recentfiles/README.md) | Parses Windows shortcut files in a directory to print recently accessed target paths |
| [sessionhop](src/bofs/sessionhop/README.md) | Starts a process in another user's session |
| [ts-qwinsta](src/bofs/ts-qwinsta/README.md) | Queries remote Terminal Services session data over MS-TSTS RPC. |
| [ts-tasklist](src/bofs/ts-tasklist/README.md) | Lists processes on a remote host over MS-TSTS RPC. |

Individual READMEs in the `src/bofs/*/` folders.

## References
- [c2-tool-collection](https://github.com/outflanknl/C2-Tool-Collection/tree/main/BOF/PetitPotam) (PetitPotam BOF)
- TrustedSec blogs on RPC development ([1](https://www.trustedsec.com/blog/rpc-programming-for-the-aspiring-windows-developer/), [2](https://www.trustedsec.com/blog/using-rpc-in-bofs/))
- [CS-Situational-Awareness-BOF](https://github.com/trustedsec/CS-Situational-Awareness-BOF)
