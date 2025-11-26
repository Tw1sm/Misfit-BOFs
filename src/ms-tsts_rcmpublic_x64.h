

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Dtsts_rcmpublic_x64_h__
#define __ms2Dtsts_rcmpublic_x64_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __RCMPublic_INTERFACE_DEFINED__
#define __RCMPublic_INTERFACE_DEFINED__

/* interface RCMPublic */
/* [unique][version][uuid] */ 

static const WCHAR TSRCMRPC_REMOTE_ENDPOINT[  ]	=	L"\\pipe\\TermSrv_API_service";

typedef /* [public] */ struct __MIDL_RCMPublic_0001
    {
    USHORT sin_family;
    struct 
        {
        USHORT sin_family;
        /* [switch_is] */ /* [switch_type] */ union __MIDL_RCMPublic_0006
            {
            /* [case()] */ struct 
                {
                USHORT sin_port;
                ULONG in_addr;
                UCHAR sin_zero[ 8 ];
                } 	ipv4;
            /* [case()] */ struct 
                {
                USHORT sin6_port;
                ULONG sin6_flowinfo;
                USHORT sin6_addr[ 8 ];
                ULONG sin6_scope_id;
                } 	ipv6;
            } 	tagged_union;
        } 	;
    } 	RCM_REMOTEADDRESS;

typedef struct __MIDL_RCMPublic_0001 *PRCM_REMOTEADDRESS;

typedef WCHAR LISTENER_NAME[ 32 ];

typedef struct _LISTENERENUM_LEVEL1
    {
    LONG Id;
    BOOL bListening;
    WCHAR Name[ 33 ];
    } 	LISTENERENUM_LEVEL1;

typedef struct _LISTENERENUM_LEVEL1 *PLISTENERENUM_LEVEL1;

typedef /* [switch_type] */ union _ListenerInfo
    {
    /* [case()] */ LISTENERENUM_LEVEL1 ListenerEnum_Level1;
    /* [default] */  /* Empty union arm */ 
    } 	ListenerInfo;

typedef /* [switch_type] */ union _ListenerInfo *PListenerInfo;

typedef struct _LISTENERENUM
    {
    DWORD Level;
    /* [switch_is] */ ListenerInfo Data;
    } 	LISTENERENUM;

typedef struct _LISTENERENUM *PLISTENERENUM;

HRESULT RpcGetClientData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [size_is][size_is][out] */ unsigned char **ppBuff,
    /* [out] */ ULONG *pOutBuffByteLen);

HRESULT RpcGetConfigData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [size_is][size_is][out] */ unsigned char **ppBuff,
    /* [out] */ ULONG *pOutBuffByteLen);

typedef /* [public][public][public] */ 
enum __MIDL_RCMPublic_0007
    {
        PROTOCOLSTATUS_INFO_BASIC	= 0,
        PROTOCOLSTATUS_INFO_EXTENDED	= 1
    } 	PROTOCOLSTATUS_INFO_TYPE;

HRESULT RpcGetProtocolStatus( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [in] */ PROTOCOLSTATUS_INFO_TYPE InfoType,
    /* [size_is][size_is][out] */ unsigned char **ppProtoStatus,
    /* [out] */ ULONG *pcbProtoStatus);

HRESULT RpcGetLastInputTime( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [out] */ hyper *pLastInputTime);

HRESULT RpcGetRemoteAddress( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [out] */ PRCM_REMOTEADDRESS pRemoteAddress);

VOID Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

VOID Opnum6NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

VOID Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetAllListeners( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ PLISTENERENUM *ppListeners,
    /* [in] */ DWORD Level,
    /* [out] */ ULONG *pNumListeners);

HRESULT RpcGetSessionProtocolLastInputTime( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [in] */ PROTOCOLSTATUS_INFO_TYPE InfoType,
    /* [size_is][size_is][out] */ unsigned char **ppProtoStatus,
    /* [out] */ ULONG *pcbProtoStatus,
    /* [out] */ hyper *pLastInputTime);

HRESULT RpcGetUserCertificates( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [out] */ ULONG *pcCerts,
    /* [size_is][size_is][out] */ byte **ppbCerts,
    /* [out] */ ULONG *pcbCerts);

typedef /* [public][public] */ 
enum __MIDL_RCMPublic_0008
    {
        QUERY_SESSION_DATA_MODULE	= 0,
        QUERY_SESSION_DATA_WDCONFIG	= ( QUERY_SESSION_DATA_MODULE + 1 ) ,
        QUERY_SESSION_DATA_VIRTUALDATA	= ( QUERY_SESSION_DATA_WDCONFIG + 1 ) ,
        QUERY_SESSION_DATA_LICENSE	= ( QUERY_SESSION_DATA_VIRTUALDATA + 1 ) ,
        QUERY_SESSION_DATA_DEVICEID	= ( QUERY_SESSION_DATA_LICENSE + 1 ) ,
        QUERY_SESSION_DATA_LICENSE_VALIDATION	= ( QUERY_SESSION_DATA_DEVICEID + 1 ) 
    } 	QUERY_SESSION_DATA_TYPE;

HRESULT RpcQuerySessionData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG SessionId,
    /* [in] */ QUERY_SESSION_DATA_TYPE type,
    /* [size_is][unique][in] */ byte *pbInputData,
    /* [range][in] */ DWORD cbInputData,
    /* [length_is][size_is][ref][out] */ byte *pbSessionData,
    /* [range][in] */ ULONG cbSessionData,
    /* [ref][out] */ ULONG *pcbReturnLength,
    /* [ref][out] */ ULONG *pcbRequireBufferSize);



extern RPC_IF_HANDLE RCMPublic_v1_0_c_ifspec;
extern RPC_IF_HANDLE RCMPublic_v1_0_s_ifspec;
#endif /* __RCMPublic_INTERFACE_DEFINED__ */

#ifndef __RCMListener_INTERFACE_DEFINED__
#define __RCMListener_INTERFACE_DEFINED__

/* interface RCMListener */
/* [unique][version][uuid] */ 

typedef /* [context_handle] */ void *HLISTENER;

HRESULT RpcOpenListener( 
    /* [in] */ handle_t hBinding,
    /* [string][in] */ WCHAR *szListenerName,
    /* [out] */ HLISTENER *phListener);

HRESULT RpcCloseListener( 
    /* [out][in] */ HLISTENER *phListener);

HRESULT RpcStopListener( 
    /* [in] */ HLISTENER hListener);

HRESULT RpcStartListener( 
    /* [in] */ HLISTENER hListener);

HRESULT RpcIsListening( 
    /* [in] */ HLISTENER hListener,
    /* [out] */ BOOL *pbIsListening);



extern RPC_IF_HANDLE RCMListener_v1_0_c_ifspec;
extern RPC_IF_HANDLE RCMListener_v1_0_s_ifspec;
#endif /* __RCMListener_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER HLISTENER_rundown( HLISTENER );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


