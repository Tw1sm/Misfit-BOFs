

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for TSVIPRpc.idl:
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

#include "ms-tsts_TSVIPRpc_x64.h"

#define TYPE_FORMAT_STRING_SIZE   147                               
#define PROC_FORMAT_STRING_SIZE   55                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _TSVIPRpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } TSVIPRpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _TSVIPRpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } TSVIPRpc_MIDL_PROC_FORMAT_STRING;

typedef struct _TSVIPRpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } TSVIPRpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const TSVIPRpc_MIDL_TYPE_FORMAT_STRING TSVIPRpc__MIDL_TypeFormatString;
extern const TSVIPRpc_MIDL_PROC_FORMAT_STRING TSVIPRpc__MIDL_ProcFormatString;
extern const TSVIPRpc_MIDL_EXPR_FORMAT_STRING TSVIPRpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: __MIDL_itf_TSVIPRpc_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: TSVIPPublic, ver. 1.0,
   GUID={0x53b46b02,0xc73b,0x4a3e,{0x8d,0xee,0xb1,0x6b,0x80,0x67,0x2f,0xc0}} */



static const RPC_CLIENT_INTERFACE TSVIPPublic___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x53b46b02,0xc73b,0x4a3e,{0x8d,0xee,0xb1,0x6b,0x80,0x67,0x2f,0xc0}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE TSVIPPublic_v1_0_c_ifspec = (RPC_IF_HANDLE)& TSVIPPublic___RpcClientInterface;

extern const MIDL_STUB_DESC TSVIPPublic_StubDesc;

static RPC_BINDING_HANDLE TSVIPPublic__MIDL_AutoBindHandle;


HRESULT RpcGetSessionIP( 
    /* [in] */ handle_t hBinding,
    /* [in] */ USHORT Family,
    /* [in] */ DWORD SessionId,
    /* [out][ref] */ TSVIPSession *ppVIPSession)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&TSVIPPublic_StubDesc,
                  (PFORMAT_STRING) &TSVIPRpc__MIDL_ProcFormatString.Format[0],
                  hBinding,
                  Family,
                  SessionId,
                  ppVIPSession);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const TSVIPRpc_MIDL_PROC_FORMAT_STRING TSVIPRpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcGetSessionIP */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0xe ),	/* 14 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Family */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter SessionId */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVIPSession */

/* 42 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const TSVIPRpc_MIDL_TYPE_FORMAT_STRING TSVIPRpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x7e ),	/* Offset= 126 (130) */
/*  6 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x47,		/* 71 */
/*  8 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12 */	NdrFcLong( 0x2 ),	/* 2 */
/* 16 */	NdrFcShort( 0x10 ),	/* Offset= 16 (32) */
/* 18 */	NdrFcLong( 0x17 ),	/* 23 */
/* 22 */	NdrFcShort( 0x1c ),	/* Offset= 28 (50) */
/* 24 */	NdrFcShort( 0xffff ),	/* Offset= -1 (23) */
/* 26 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 28 */	NdrFcShort( 0x8 ),	/* 8 */
/* 30 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 32 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x10 ),	/* 16 */
/* 36 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 38 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 40 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (26) */
			0x5b,		/* FC_END */
/* 44 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 46 */	NdrFcShort( 0x10 ),	/* 16 */
/* 48 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 50 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x1c ),	/* 28 */
/* 54 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 56 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 58 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (44) */
			0x8,		/* FC_LONG */
/* 62 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 64 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 66 */	NdrFcShort( 0x20 ),	/* 32 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* Offset= 0 (70) */
/* 72 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (6) */
/* 76 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 78 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcLong( 0x10 ),	/* 16 */
/* 88 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0x10 ),	/* 16 */
/* 92 */	NdrFcShort( 0x10 ),	/* 16 */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 98 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 100 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 102 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 104 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x48 ),	/* 72 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* Offset= 0 (110) */
/* 112 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 114 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (64) */
			0x8,		/* FC_LONG */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (78) */
/* 122 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 124 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (88) */
/* 126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 128 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 130 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0x50 ),	/* 80 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* Offset= 0 (136) */
/* 138 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 140 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 142 */	NdrFcShort( 0xffda ),	/* Offset= -38 (104) */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short TSVIPPublic_FormatStringOffsetTable[] =
    {
    0
    };


static const MIDL_STUB_DESC TSVIPPublic_StubDesc = 
    {
    (void *)& TSVIPPublic___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &TSVIPPublic__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    TSVIPRpc__MIDL_TypeFormatString.Format,
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

