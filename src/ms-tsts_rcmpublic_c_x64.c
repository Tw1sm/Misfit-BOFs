

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for rcmpublic.idl:
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

#include "ms-tsts_rcmpublic_x64.h"

#define TYPE_FORMAT_STRING_SIZE   319                               
#define PROC_FORMAT_STRING_SIZE   849                               
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
                  hBinding,
                  SessionId,
                  ppBuff,
                  pOutBuffByteLen);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[54],
                  hBinding,
                  SessionId,
                  ppBuff,
                  pOutBuffByteLen);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[108],
                  hBinding,
                  SessionId,
                  InfoType,
                  ppProtoStatus,
                  pcbProtoStatus);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[168],
                  hBinding,
                  SessionId,
                  pLastInputTime);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[216],
                  hBinding,
                  SessionId,
                  pRemoteAddress);
    return ( HRESULT  )_RetVal.Simple;
    
}


VOID Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[264],
                  IDL_handle);
    
}


VOID Opnum6NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[294],
                  IDL_handle);
    
}


VOID Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMPublic_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[324],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[354],
                  hBinding,
                  ppListeners,
                  Level,
                  pNumListeners);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[408],
                  hBinding,
                  SessionId,
                  InfoType,
                  ppProtoStatus,
                  pcbProtoStatus,
                  pLastInputTime);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[474],
                  hBinding,
                  SessionId,
                  pcCerts,
                  ppbCerts,
                  pcbCerts);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[534],
                  hBinding,
                  SessionId,
                  type,
                  pbInputData,
                  cbInputData,
                  pbSessionData,
                  cbSessionData,
                  pcbReturnLength,
                  pcbRequireBufferSize);
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
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[618],
                  hBinding,
                  szListenerName,
                  phListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcCloseListener( 
    /* [out][in] */ HLISTENER *phListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[666],
                  phListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcStopListener( 
    /* [in] */ HLISTENER hListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[710],
                  hListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcStartListener( 
    /* [in] */ HLISTENER hListener)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[754],
                  hListener);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcIsListening( 
    /* [in] */ HLISTENER hListener,
    /* [out] */ BOOL *pbIsListening)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&RCMListener_StubDesc,
                  (PFORMAT_STRING) &rcmpublic__MIDL_ProcFormatString.Format[798],
                  hListener,
                  pbIsListening);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppBuff */

/* 36 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pOutBuffByteLen */

/* 42 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetConfigData */

/* 54 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 64 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	NdrFcShort( 0x24 ),	/* 36 */
/* 72 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 74 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 76 */	NdrFcShort( 0x1 ),	/* 1 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 84 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 86 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppBuff */

/* 90 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 94 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pOutBuffByteLen */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetProtocolStatus */

/* 108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x2 ),	/* 2 */
/* 116 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 122 */	NdrFcShort( 0xe ),	/* 14 */
/* 124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 128 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoType */

/* 144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 146 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 148 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppProtoStatus */

/* 150 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 154 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pcbProtoStatus */

/* 156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 158 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetLastInputTime */

/* 168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x3 ),	/* 3 */
/* 176 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 178 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	NdrFcShort( 0x2c ),	/* 44 */
/* 186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 188 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pLastInputTime */

/* 204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 208 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetRemoteAddress */

/* 216 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x4 ),	/* 4 */
/* 224 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 226 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 236 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pRemoteAddress */

/* 252 */	NdrFcShort( 0xa113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=40 */
/* 254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 256 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 264 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x5 ),	/* 5 */
/* 272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 274 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 276 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 284 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum6NotUsedOnWire */

/* 294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x6 ),	/* 6 */
/* 302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 304 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 314 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum7NotUsedOnWire */

/* 324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x7 ),	/* 7 */
/* 332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 334 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 344 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetAllListeners */

/* 354 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 364 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	NdrFcShort( 0x24 ),	/* 36 */
/* 372 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 374 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppListeners */

/* 384 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 388 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter Level */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNumListeners */

/* 396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetSessionProtocolLastInputTime */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 418 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 422 */	NdrFcShort( 0xe ),	/* 14 */
/* 424 */	NdrFcShort( 0x48 ),	/* 72 */
/* 426 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 428 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoType */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 448 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppProtoStatus */

/* 450 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 454 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pcbProtoStatus */

/* 456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 458 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pLastInputTime */

/* 462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 466 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetUserCertificates */

/* 474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0xa ),	/* 10 */
/* 482 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 484 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 490 */	NdrFcShort( 0x40 ),	/* 64 */
/* 492 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 494 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcCerts */

/* 510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbCerts */

/* 516 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 518 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 520 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */

	/* Parameter pcbCerts */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcQuerySessionData */

/* 534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0xb ),	/* 11 */
/* 542 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 544 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 548 */	NdrFcShort( 0x1e ),	/* 30 */
/* 550 */	NdrFcShort( 0x40 ),	/* 64 */
/* 552 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 554 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SessionId */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 574 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pbInputData */

/* 576 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 578 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 580 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter cbInputData */

/* 582 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 584 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 586 */	NdrFcShort( 0xfc ),	/* 252 */

	/* Parameter pbSessionData */

/* 588 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 590 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 592 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter cbSessionData */

/* 594 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 596 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 598 */	NdrFcShort( 0x11c ),	/* 284 */

	/* Parameter pcbReturnLength */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbRequireBufferSize */

/* 606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenListener */

/* 618 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 628 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x40 ),	/* 64 */
/* 636 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 638 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szListenerName */

/* 648 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 650 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 652 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter phListener */

/* 654 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 656 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 658 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCloseListener */

/* 666 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 676 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 678 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 682 */	NdrFcShort( 0x38 ),	/* 56 */
/* 684 */	NdrFcShort( 0x40 ),	/* 64 */
/* 686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 688 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phListener */

/* 698 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 700 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 702 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStopListener */

/* 710 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x2 ),	/* 2 */
/* 718 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 720 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 722 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 724 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0x24 ),	/* 36 */
/* 728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 732 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hListener */

/* 742 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 744 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 746 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Return value */

/* 748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartListener */

/* 754 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x3 ),	/* 3 */
/* 762 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 764 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 766 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 768 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 770 */	NdrFcShort( 0x24 ),	/* 36 */
/* 772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 776 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hListener */

/* 786 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 788 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 790 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcIsListening */

/* 798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x4 ),	/* 4 */
/* 806 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 808 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 810 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 812 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0x24 ),	/* 36 */
/* 816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 820 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hListener */

/* 830 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 832 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 834 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Parameter pbIsListening */

/* 836 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 846 */	0x8,		/* FC_LONG */
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
/* 16 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
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
/* 40 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
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
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
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
/* 230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
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
/* 246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
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
/* 272 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 274 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 276 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 278 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
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
    54,
    108,
    168,
    216,
    264,
    294,
    324,
    354,
    408,
    474,
    534
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
    618,
    666,
    710,
    754,
    798
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


#endif /* defined(_M_AMD64)*/

