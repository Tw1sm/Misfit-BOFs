

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for rcmpublic.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "ms-tsts_rcmpublic_x86.h"

#define TYPE_FORMAT_STRING_SIZE   319                               
#define PROC_FORMAT_STRING_SIZE   815                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rcmpublic_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } rcmpublic_MIDL_TYPE_FORMAT_STRING;

typedef struct _rcmpublic_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } rcmpublic_MIDL_PROC_FORMAT_STRING;

typedef struct _rcmpublic_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } rcmpublic_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const rcmpublic_MIDL_TYPE_FORMAT_STRING rcmpublic__MIDL_TypeFormatString;
extern const rcmpublic_MIDL_PROC_FORMAT_STRING rcmpublic__MIDL_ProcFormatString;
extern const rcmpublic_MIDL_EXPR_FORMAT_STRING rcmpublic__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: RCMPublic, ver. 1.0,
   GUID={0xbde95fdf,0xeee0,0x45de,{0x9e,0x12,0xe5,0xa6,0x1c,0xd0,0xd4,0xfe}} */



static const RPC_CLIENT_INTERFACE RCMPublic___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xbde95fdf,0xeee0,0x45de,{0x9e,0x12,0xe5,0xa6,0x1c,0xd0,0xd4,0xfe}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE RCMPublic_v1_0_c_ifspec = (RPC_IF_HANDLE)& RCMPublic___RpcClientInterface;

extern const MIDL_STUB_DESC RCMPublic_StubDesc;

static RPC_BINDING_HANDLE RCMPublic__MIDL_AutoBindHandle;


HRESULT RpcGetClientData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [size_is][size_is][out] */ unsigned char **ppBuff,
    /* [out] */ ULONG *pOutBuffByteLen)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetConfigData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [size_is][size_is][out] */ unsigned char **ppBuff,
    /* [out] */ ULONG *pOutBuffByteLen)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[52],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetProtocolStatus( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [in] */ PROTOCOLSTATUS_INFO_TYPE InfoType,
    /* [size_is][size_is][out] */ unsigned char **ppProtoStatus,
    /* [out] */ ULONG *pcbProtoStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[104],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetLastInputTime( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [out] */ hyper *pLastInputTime)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[162],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetRemoteAddress( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [out] */ PRCM_REMOTEADDRESS pRemoteAddress)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[208],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[254],
                  ( unsigned char * )&IDL_handle);
    
}


VOID Opnum6NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[282],
                  ( unsigned char * )&IDL_handle);
    
}


VOID Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[310],
                  ( unsigned char * )&IDL_handle);
    
}


HRESULT RpcGetAllListeners( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ PLISTENERENUM *ppListeners,
    /* [in] */ DWORD Level,
    /* [out] */ ULONG *pNumListeners)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[338],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetSessionProtocolLastInputTime( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [in] */ PROTOCOLSTATUS_INFO_TYPE InfoType,
    /* [size_is][size_is][out] */ unsigned char **ppProtoStatus,
    /* [out] */ ULONG *pcbProtoStatus,
    /* [out] */ hyper *pLastInputTime)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[390],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcGetUserCertificates( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [out] */ ULONG *pcCerts,
    /* [size_is][size_is][out] */ byte **ppbCerts,
    /* [out] */ ULONG *pcbCerts)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[454],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcQuerySessionData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [in] */ QUERY_SESSION_DATA_TYPE type,
    /* [size_is][unique][in] */ byte *pbInputData,
    /* [range][in] */ DWORD cbInputData,
    /* [length_is][size_is][ref][out] */ byte *pbSessionData,
    /* [range][in] */ ULONG cbSessionData,
    /* [ref][out] */ ULONG *pcbReturnLength,
    /* [ref][out] */ ULONG *pcbRequireBufferSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[512],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


/* Standard interface: RCMListener, ver. 1.0,
   GUID={0x497d95a6,0x2d27,0x4bf5,{0x9b,0xbd,0xa6,0x04,0x69,0x57,0x13,0x3c}} */



static const RPC_CLIENT_INTERFACE RCMListener___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x497d95a6,0x2d27,0x4bf5,{0x9b,0xbd,0xa6,0x04,0x69,0x57,0x13,0x3c}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE RCMListener_v1_0_c_ifspec = (RPC_IF_HANDLE)& RCMListener___RpcClientInterface;

extern const MIDL_STUB_DESC RCMListener_StubDesc;

static RPC_BINDING_HANDLE RCMListener__MIDL_AutoBindHandle;


HRESULT RpcOpenListener( 
    /* [in] */ handle_t hBinding,
    /* [string][in] */ WCHAR *szListenerName,
    /* [out] */ HLISTENER *phListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[594],
                  ( unsigned char * )&hBinding);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcCloseListener( 
    /* [out][in] */ HLISTENER *phListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[640],
                  ( unsigned char * )&phListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcStopListener( 
    /* [in] */ HLISTENER hListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[682],
                  ( unsigned char * )&hListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcStartListener( 
    /* [in] */ HLISTENER hListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[724],
                  ( unsigned char * )&hListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcIsListening( 
    /* [in] */ HLISTENER hListener,
    /* [out] */ BOOL *pbIsListening)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[766],
                  ( unsigned char * )&hListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const rcmpublic_MIDL_PROC_FORMAT_STRING rcmpublic__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcGetClientData */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 28 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppBuff */

/* 34 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pOutBuffByteLen */

/* 40 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 46 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetConfigData */

/* 52 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 54 */	NdrFcLong( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x1 ),	/* 1 */
/* 60 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 62 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	NdrFcShort( 0x24 ),	/* 36 */
/* 70 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 72 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 80 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 82 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 84 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppBuff */

/* 86 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 88 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 90 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pOutBuffByteLen */

/* 92 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 94 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 96 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 98 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetProtocolStatus */

/* 104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 114 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 118 */	NdrFcShort( 0xe ),	/* 14 */
/* 120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 124 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoType */

/* 138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppProtoStatus */

/* 144 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pcbProtoStatus */

/* 150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetLastInputTime */

/* 162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x3 ),	/* 3 */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 178 */	NdrFcShort( 0x2c ),	/* 44 */
/* 180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pLastInputTime */

/* 196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 200 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetRemoteAddress */

/* 208 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 218 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 228 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pRemoteAddress */

/* 242 */	NdrFcShort( 0xa113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=40 */
/* 244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 246 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x5 ),	/* 5 */
/* 262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 264 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum6NotUsedOnWire */

/* 282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x6 ),	/* 6 */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum7NotUsedOnWire */

/* 310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x7 ),	/* 7 */
/* 318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 330 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetAllListeners */

/* 338 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 346 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 348 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0x24 ),	/* 36 */
/* 356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 358 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppListeners */

/* 366 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter Level */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNumListeners */

/* 378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionProtocolLastInputTime */

/* 390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x9 ),	/* 9 */
/* 398 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 404 */	NdrFcShort( 0xe ),	/* 14 */
/* 406 */	NdrFcShort( 0x48 ),	/* 72 */
/* 408 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 410 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoType */

/* 424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 428 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppProtoStatus */

/* 430 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 434 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pcbProtoStatus */

/* 436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pLastInputTime */

/* 442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 444 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 446 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetUserCertificates */

/* 454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0xa ),	/* 10 */
/* 462 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 464 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	NdrFcShort( 0x40 ),	/* 64 */
/* 472 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 474 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcCerts */

/* 488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbCerts */

/* 494 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 498 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */

	/* Parameter pcbCerts */

/* 500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 508 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcQuerySessionData */

/* 512 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0xb ),	/* 11 */
/* 520 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 522 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 526 */	NdrFcShort( 0x1e ),	/* 30 */
/* 528 */	NdrFcShort( 0x40 ),	/* 64 */
/* 530 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 532 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pbInputData */

/* 552 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 556 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter cbInputData */

/* 558 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 562 */	NdrFcShort( 0xfc ),	/* 252 */

	/* Parameter pbSessionData */

/* 564 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 566 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 568 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter cbSessionData */

/* 570 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 572 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 574 */	NdrFcShort( 0x11c ),	/* 284 */

	/* Parameter pcbReturnLength */

/* 576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 578 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbRequireBufferSize */

/* 582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 584 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenListener */

/* 594 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 604 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x40 ),	/* 64 */
/* 612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 614 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szListenerName */

/* 622 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 626 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter phListener */

/* 628 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 632 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Return value */

/* 634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCloseListener */

/* 640 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 650 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 652 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 654 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0x38 ),	/* 56 */
/* 658 */	NdrFcShort( 0x40 ),	/* 64 */
/* 660 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 662 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phListener */

/* 670 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 672 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 674 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStopListener */

/* 682 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x2 ),	/* 2 */
/* 690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 692 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 694 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 696 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0x24 ),	/* 36 */
/* 700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hListener */

/* 712 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 716 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Return value */

/* 718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartListener */

/* 724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x3 ),	/* 3 */
/* 732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 734 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 744 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hListener */

/* 754 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 758 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Return value */

/* 760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcIsListening */

/* 766 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x4 ),	/* 4 */
/* 774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 776 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 778 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 780 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hListener */

/* 796 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 798 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 800 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Parameter pbIsListening */

/* 802 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const rcmpublic_MIDL_TYPE_FORMAT_STRING rcmpublic__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 16 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 20 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x12, 0x0,	/* FC_UP */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 40 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 42 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 44 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 46 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 48 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 52 */	NdrFcShort( 0x3c ),	/* Offset= 60 (112) */
/* 54 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x47,		/* 71 */
/* 56 */	NdrFcShort( 0x1c ),	/* 28 */
/* 58 */	NdrFcShort( 0x2 ),	/* 2 */
/* 60 */	NdrFcLong( 0x2 ),	/* 2 */
/* 64 */	NdrFcShort( 0x10 ),	/* Offset= 16 (80) */
/* 66 */	NdrFcLong( 0x17 ),	/* 23 */
/* 70 */	NdrFcShort( 0x1c ),	/* Offset= 28 (98) */
/* 72 */	NdrFcShort( 0xffff ),	/* Offset= -1 (71) */
/* 74 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 76 */	NdrFcShort( 0x8 ),	/* 8 */
/* 78 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 80 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 82 */	NdrFcShort( 0x10 ),	/* 16 */
/* 84 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 86 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 88 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (74) */
			0x5b,		/* FC_END */
/* 92 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 94 */	NdrFcShort( 0x10 ),	/* 16 */
/* 96 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 98 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x1c ),	/* 28 */
/* 102 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 104 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 106 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (92) */
			0x8,		/* FC_LONG */
/* 110 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 112 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* Offset= 0 (118) */
/* 120 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 122 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 124 */	NdrFcShort( 0xffba ),	/* Offset= -70 (54) */
/* 126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 128 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x12, 0x0,	/* FC_UP */
/* 134 */	NdrFcShort( 0x3c ),	/* Offset= 60 (194) */
/* 136 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 138 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 140 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 142 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (146) */
/* 146 */	NdrFcShort( 0x4c ),	/* 76 */
/* 148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 150 */	NdrFcLong( 0x1 ),	/* 1 */
/* 154 */	NdrFcShort( 0xa ),	/* Offset= 10 (164) */
/* 156 */	NdrFcShort( 0x0 ),	/* Offset= 0 (156) */
/* 158 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 160 */	NdrFcShort( 0x42 ),	/* 66 */
/* 162 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 164 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 166 */	NdrFcShort( 0x4c ),	/* 76 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* Offset= 0 (170) */
/* 172 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0xffee ),	/* Offset= -18 (158) */
/* 178 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 180 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x50 ),	/* 80 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* Offset= 0 (186) */
/* 188 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 190 */	0x0,		/* 0 */
			NdrFcShort( 0xffc9 ),	/* Offset= -55 (136) */
			0x5b,		/* FC_END */
/* 194 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 204 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 208 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 210 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 212 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (180) */
/* 214 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 216 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (220) */
/* 220 */	
			0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (224) */
/* 224 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 228 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 232 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 234 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 236 */	
			0x12, 0x0,	/* FC_UP */
/* 238 */	NdrFcShort( 0x2 ),	/* Offset= 2 (240) */
/* 240 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 248 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 250 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 252 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 262 */	
			0x11, 0x0,	/* FC_RP */
/* 264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (266) */
/* 266 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 270 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 274 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 276 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 278 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 280 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 282 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 284 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 290 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 294 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 296 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 298 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 300 */	NdrFcShort( 0x2 ),	/* Offset= 2 (302) */
/* 302 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 304 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 306 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (310) */
/* 310 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 312 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 314 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 316 */	0x0,		/* 0 */
			0x0,		/* 0 */

			0x0
        }
    };

static const unsigned short RCMPublic_FormatStringOffsetTable[] =
    {
    0,
    52,
    104,
    162,
    208,
    254,
    282,
    310,
    338,
    390,
    454,
    512
    };


static const MIDL_STUB_DESC RCMPublic_StubDesc = 
    {
    (void *)& RCMPublic___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &RCMPublic__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    rcmpublic__MIDL_TypeFormatString.Format,
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

static const unsigned short RCMListener_FormatStringOffsetTable[] =
    {
    594,
    640,
    682,
    724,
    766
    };


static const MIDL_STUB_DESC RCMListener_StubDesc = 
    {
    (void *)& RCMListener___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &RCMListener__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    rcmpublic__MIDL_TypeFormatString.Format,
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


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

