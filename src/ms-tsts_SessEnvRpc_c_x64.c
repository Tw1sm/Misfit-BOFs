

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for SessEnvRpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-tsts_SessEnvRpc_x64.h"

#define TYPE_FORMAT_STRING_SIZE   29                                
#define PROC_FORMAT_STRING_SIZE   73                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SessEnvRpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SessEnvRpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _SessEnvRpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SessEnvRpc_MIDL_PROC_FORMAT_STRING;

typedef struct _SessEnvRpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SessEnvRpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const SessEnvRpc_MIDL_TYPE_FORMAT_STRING SessEnvRpc__MIDL_TypeFormatString;
extern const SessEnvRpc_MIDL_PROC_FORMAT_STRING SessEnvRpc__MIDL_ProcFormatString;
extern const SessEnvRpc_MIDL_EXPR_FORMAT_STRING SessEnvRpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: __MIDL_itf_SessEnvRpc_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: SessEnvPublicRpc, ver. 1.0,
   GUID={0x1257B580,0xCE2F,0x4109,{0x82,0xD6,0xA9,0x45,0x9D,0x0B,0xF6,0xBC}} */



static const RPC_CLIENT_INTERFACE SessEnvPublicRpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x1257B580,0xCE2F,0x4109,{0x82,0xD6,0xA9,0x45,0x9D,0x0B,0xF6,0xBC}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE SessEnvPublicRpc_v1_0_c_ifspec = (RPC_IF_HANDLE)& SessEnvPublicRpc___RpcClientInterface;

extern const MIDL_STUB_DESC SessEnvPublicRpc_StubDesc;

static RPC_BINDING_HANDLE SessEnvPublicRpc__MIDL_AutoBindHandle;


HRESULT RpcShadow2( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG TargetSessionId,
    /* [in] */ SHADOW_CONTROL_REQUEST eRequestControl,
    /* [in] */ SHADOW_PERMISSION_REQUEST eRequestPermission,
    /* [out] */ SHADOW_REQUEST_RESPONSE *pePermission,
    /* [size_is][string][out] */ LPWSTR pszInvitation,
    /* [range][in] */ ULONG cchInvitation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&SessEnvPublicRpc_StubDesc,
                  (PFORMAT_STRING) &SessEnvRpc__MIDL_ProcFormatString.Format[0],
                  hBinding,
                  TargetSessionId,
                  eRequestControl,
                  eRequestPermission,
                  pePermission,
                  pszInvitation,
                  cchInvitation);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const SessEnvRpc_MIDL_PROC_FORMAT_STRING SessEnvRpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcShadow2 */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x1c ),	/* 28 */
/* 16 */	NdrFcShort( 0x22 ),	/* 34 */
/* 18 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 20 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TargetSessionId */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter eRequestControl */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter eRequestPermission */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pePermission */

/* 48 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInvitation */

/* 54 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cchInvitation */

/* 60 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 62 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 64 */	NdrFcShort( 0x12 ),	/* 18 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const SessEnvRpc_MIDL_TYPE_FORMAT_STRING SessEnvRpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 12 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 16 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 18 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 20 */	NdrFcLong( 0x1 ),	/* 1 */
/* 24 */	NdrFcLong( 0x2000 ),	/* 8192 */

			0x0
        }
    };

static const unsigned short SessEnvPublicRpc_FormatStringOffsetTable[] =
    {
    0
    };


static const MIDL_STUB_DESC SessEnvPublicRpc_StubDesc = 
    {
    (void *)& SessEnvPublicRpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &SessEnvPublicRpc__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    SessEnvRpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

