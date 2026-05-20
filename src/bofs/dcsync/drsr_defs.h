#pragma once

/*  DRSUAPI Bind GUID  */
#define DRSUAPI_DS_BIND_GUID_STANDARD { 0xe24d201a, 0x4fd6, 0x11d1, {0xa3, 0xda, 0x00, 0x00, 0xf8, 0x75, 0xae, 0x0d} }

/*  DRS_EXT flags  */
#define DRS_EXT_BASE                    0x00000001
#define DRS_EXT_ASYNCREPL               0x00000002
#define DRS_EXT_REMOVEAPI               0x00000004
#define DRS_EXT_MOVEREQ_V2              0x00000008
#define DRS_EXT_GETCHG_DEFLATE          0x00000010
#define DRS_EXT_DCINFO_V1               0x00000020
#define DRS_EXT_RESTORE_USN_OPTIMIZATION 0x00000040
#define DRS_EXT_ADDENTRY                0x00000080
#define DRS_EXT_KCC_EXECUTE             0x00000100
#define DRS_EXT_ADDENTRY_V2             0x00000200
#define DRS_EXT_LINKED_VALUE_REPLICATION 0x00000400
#define DRS_EXT_DCINFO_V2               0x00000800
#define DRS_EXT_INSTANCE_TYPE_NOT_REQ_ON_MOD 0x00001000
#define DRS_EXT_CRYPTO_BIND             0x00002000
#define DRS_EXT_GET_REPL_INFO           0x00004000
#define DRS_EXT_STRONG_ENCRYPTION       0x00008000
#define DRS_EXT_DCINFO_V01              0x00010000
#define DRS_EXT_TRANSITIVE_MEMBERSHIP   0x00020000
#define DRS_EXT_ADD_SID_HISTORY         0x00040000
#define DRS_EXT_POST_BETA3              0x00080000
#define DRS_EXT_GETCHGREQ_V5            0x00100000
#define DRS_EXT_GETMEMBERSHIPS2         0x00200000
#define DRS_EXT_GETCHGREQ_V6            0x00400000
#define DRS_EXT_NONDOMAIN_NCS           0x00800000
#define DRS_EXT_GETCHGREQ_V8            0x01000000
#define DRS_EXT_GETCHGREPLY_V5          0x02000000
#define DRS_EXT_GETCHGREPLY_V6          0x04000000
#define DRS_EXT_WHISTLER_BETA3          0x08000000
#define DRS_EXT_W2K3_DEFLATE            0x10000000
#define DRS_EXT_GETCHGREQ_V10           0x20000000
#define DRS_EXT_RESERVED_FOR_WIN2K_OR_DOTNET_PART2 0x40000000
#define DRS_EXT_RESERVED_FOR_WIN2K_OR_DOTNET_PART3 0x80000000

/*  DRS ulFlags for IDL_DRSGetNCChanges  */
#define DRS_INIT_SYNC                   0x00000020
#define DRS_WRIT_REP                    0x00000010
#define DRS_NEVER_SYNCED                0x00200000
#define DRS_FULL_SYNC_NOW               0x00008000
#define DRS_SYNC_URGENT                 0x00080000

/*  Extended operations  */
#define EXOP_FSMO_REQ_ROLE              0x00000001
#define EXOP_FSMO_RID_ALLOC             0x00000002
#define EXOP_FSMO_REQ_PDC               0x00000003
#define EXOP_FSMO_ABANDON_ROLE          0x00000004
#define EXOP_REPL_OBJ                   0x00000006
#define EXOP_REPL_SECRETS               0x00000003

/*  Attribute type IDs for password attributes  */
#define ATT_UNICODE_PWD                 0x0009005A
#define ATT_SUPPLEMENTAL_CREDENTIALS    0x0009007D
#define ATT_NT_PWD_HISTORY              0x0009005E
#define ATT_LM_PWD_HISTORY              0x000900A0

/*  Encrypted payload structure for strong encryption  */
#pragma pack(push, 1)
typedef struct _ENCRYPTED_PAYLOAD
{
    BYTE Salt[16];
    DWORD Checksum;
    BYTE EncryptedData[1];
} ENCRYPTED_PAYLOAD, *PENCRYPTED_PAYLOAD;
#pragma pack(pop)

/*  DRS_EXTENSIONS_INT structure  */
typedef struct _DRS_EXTENSIONS_INT
{
    DWORD cb;
    DWORD dwFlags;
    GUID SiteObjGuid;
    DWORD Pid;
    DWORD dwReplEpoch;
    DWORD dwFlagsExt;
    GUID ConfigObjGUID;
    DWORD dwExtCaps;
} DRS_EXTENSIONS_INT;
