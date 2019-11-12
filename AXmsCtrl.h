

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Thu Sep 03 14:12:36 2009
 */
/* Compiler settings for .\AXmsCtrl.idl:
    Oicf, W1, Zp8, env=Win64 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AXmsCtrl_h__
#define __AXmsCtrl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISmsProtocolGsm_FWD_DEFINED__
#define __ISmsProtocolGsm_FWD_DEFINED__
typedef interface ISmsProtocolGsm ISmsProtocolGsm;
#endif 	/* __ISmsProtocolGsm_FWD_DEFINED__ */


#ifndef __ISmsMessage_FWD_DEFINED__
#define __ISmsMessage_FWD_DEFINED__
typedef interface ISmsMessage ISmsMessage;
#endif 	/* __ISmsMessage_FWD_DEFINED__ */


#ifndef __ISmsProtocolSmpp_FWD_DEFINED__
#define __ISmsProtocolSmpp_FWD_DEFINED__
typedef interface ISmsProtocolSmpp ISmsProtocolSmpp;
#endif 	/* __ISmsProtocolSmpp_FWD_DEFINED__ */


#ifndef __ISmsConstants_FWD_DEFINED__
#define __ISmsConstants_FWD_DEFINED__
typedef interface ISmsConstants ISmsConstants;
#endif 	/* __ISmsConstants_FWD_DEFINED__ */


#ifndef __ISmsProtocolHttp_FWD_DEFINED__
#define __ISmsProtocolHttp_FWD_DEFINED__
typedef interface ISmsProtocolHttp ISmsProtocolHttp;
#endif 	/* __ISmsProtocolHttp_FWD_DEFINED__ */


#ifndef __ISmsProtocolDialup_FWD_DEFINED__
#define __ISmsProtocolDialup_FWD_DEFINED__
typedef interface ISmsProtocolDialup ISmsProtocolDialup;
#endif 	/* __ISmsProtocolDialup_FWD_DEFINED__ */


#ifndef __IPagerProtocolSnpp_FWD_DEFINED__
#define __IPagerProtocolSnpp_FWD_DEFINED__
typedef interface IPagerProtocolSnpp IPagerProtocolSnpp;
#endif 	/* __IPagerProtocolSnpp_FWD_DEFINED__ */


#ifndef __ISmsDataRingtone_FWD_DEFINED__
#define __ISmsDataRingtone_FWD_DEFINED__
typedef interface ISmsDataRingtone ISmsDataRingtone;
#endif 	/* __ISmsDataRingtone_FWD_DEFINED__ */


#ifndef __ISmsDataPicture_FWD_DEFINED__
#define __ISmsDataPicture_FWD_DEFINED__
typedef interface ISmsDataPicture ISmsDataPicture;
#endif 	/* __ISmsDataPicture_FWD_DEFINED__ */


#ifndef __ISmsDataWapBookmark_FWD_DEFINED__
#define __ISmsDataWapBookmark_FWD_DEFINED__
typedef interface ISmsDataWapBookmark ISmsDataWapBookmark;
#endif 	/* __ISmsDataWapBookmark_FWD_DEFINED__ */


#ifndef __ISmsDataWapPush_FWD_DEFINED__
#define __ISmsDataWapPush_FWD_DEFINED__
typedef interface ISmsDataWapPush ISmsDataWapPush;
#endif 	/* __ISmsDataWapPush_FWD_DEFINED__ */


#ifndef __ISmsDeliveryStatus_FWD_DEFINED__
#define __ISmsDeliveryStatus_FWD_DEFINED__
typedef interface ISmsDeliveryStatus ISmsDeliveryStatus;
#endif 	/* __ISmsDeliveryStatus_FWD_DEFINED__ */


#ifndef __IPagerMessage_FWD_DEFINED__
#define __IPagerMessage_FWD_DEFINED__
typedef interface IPagerMessage IPagerMessage;
#endif 	/* __IPagerMessage_FWD_DEFINED__ */


#ifndef __IMmsProtocolMm1_FWD_DEFINED__
#define __IMmsProtocolMm1_FWD_DEFINED__
typedef interface IMmsProtocolMm1 IMmsProtocolMm1;
#endif 	/* __IMmsProtocolMm1_FWD_DEFINED__ */


#ifndef __IMmsSlide_FWD_DEFINED__
#define __IMmsSlide_FWD_DEFINED__
typedef interface IMmsSlide IMmsSlide;
#endif 	/* __IMmsSlide_FWD_DEFINED__ */


#ifndef __IMmsConstants_FWD_DEFINED__
#define __IMmsConstants_FWD_DEFINED__
typedef interface IMmsConstants IMmsConstants;
#endif 	/* __IMmsConstants_FWD_DEFINED__ */


#ifndef __IMmsPermission_FWD_DEFINED__
#define __IMmsPermission_FWD_DEFINED__
typedef interface IMmsPermission IMmsPermission;
#endif 	/* __IMmsPermission_FWD_DEFINED__ */


#ifndef __IMmsProtocolMm4_FWD_DEFINED__
#define __IMmsProtocolMm4_FWD_DEFINED__
typedef interface IMmsProtocolMm4 IMmsProtocolMm4;
#endif 	/* __IMmsProtocolMm4_FWD_DEFINED__ */


#ifndef __IMmsProtocolMm7_FWD_DEFINED__
#define __IMmsProtocolMm7_FWD_DEFINED__
typedef interface IMmsProtocolMm7 IMmsProtocolMm7;
#endif 	/* __IMmsProtocolMm7_FWD_DEFINED__ */


#ifndef __IMmsMessage_FWD_DEFINED__
#define __IMmsMessage_FWD_DEFINED__
typedef interface IMmsMessage IMmsMessage;
#endif 	/* __IMmsMessage_FWD_DEFINED__ */


#ifndef __ISmsDataMmsNotification_FWD_DEFINED__
#define __ISmsDataMmsNotification_FWD_DEFINED__
typedef interface ISmsDataMmsNotification ISmsDataMmsNotification;
#endif 	/* __ISmsDataMmsNotification_FWD_DEFINED__ */


#ifndef __ISmsDatavCard_FWD_DEFINED__
#define __ISmsDatavCard_FWD_DEFINED__
typedef interface ISmsDatavCard ISmsDatavCard;
#endif 	/* __ISmsDatavCard_FWD_DEFINED__ */


#ifndef __SmsProtocolGsm_FWD_DEFINED__
#define __SmsProtocolGsm_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsProtocolGsm SmsProtocolGsm;
#else
typedef struct SmsProtocolGsm SmsProtocolGsm;
#endif /* __cplusplus */

#endif 	/* __SmsProtocolGsm_FWD_DEFINED__ */


#ifndef __SmsMessage_FWD_DEFINED__
#define __SmsMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsMessage SmsMessage;
#else
typedef struct SmsMessage SmsMessage;
#endif /* __cplusplus */

#endif 	/* __SmsMessage_FWD_DEFINED__ */


#ifndef __SmsProtocolSmpp_FWD_DEFINED__
#define __SmsProtocolSmpp_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsProtocolSmpp SmsProtocolSmpp;
#else
typedef struct SmsProtocolSmpp SmsProtocolSmpp;
#endif /* __cplusplus */

#endif 	/* __SmsProtocolSmpp_FWD_DEFINED__ */


#ifndef __SmsConstants_FWD_DEFINED__
#define __SmsConstants_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsConstants SmsConstants;
#else
typedef struct SmsConstants SmsConstants;
#endif /* __cplusplus */

#endif 	/* __SmsConstants_FWD_DEFINED__ */


#ifndef __SmsProtocolHttp_FWD_DEFINED__
#define __SmsProtocolHttp_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsProtocolHttp SmsProtocolHttp;
#else
typedef struct SmsProtocolHttp SmsProtocolHttp;
#endif /* __cplusplus */

#endif 	/* __SmsProtocolHttp_FWD_DEFINED__ */


#ifndef __SmsProtocolDialup_FWD_DEFINED__
#define __SmsProtocolDialup_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsProtocolDialup SmsProtocolDialup;
#else
typedef struct SmsProtocolDialup SmsProtocolDialup;
#endif /* __cplusplus */

#endif 	/* __SmsProtocolDialup_FWD_DEFINED__ */


#ifndef __PagerProtocolSnpp_FWD_DEFINED__
#define __PagerProtocolSnpp_FWD_DEFINED__

#ifdef __cplusplus
typedef class PagerProtocolSnpp PagerProtocolSnpp;
#else
typedef struct PagerProtocolSnpp PagerProtocolSnpp;
#endif /* __cplusplus */

#endif 	/* __PagerProtocolSnpp_FWD_DEFINED__ */


#ifndef __SmsDataRingtone_FWD_DEFINED__
#define __SmsDataRingtone_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDataRingtone SmsDataRingtone;
#else
typedef struct SmsDataRingtone SmsDataRingtone;
#endif /* __cplusplus */

#endif 	/* __SmsDataRingtone_FWD_DEFINED__ */


#ifndef __SmsDataPicture_FWD_DEFINED__
#define __SmsDataPicture_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDataPicture SmsDataPicture;
#else
typedef struct SmsDataPicture SmsDataPicture;
#endif /* __cplusplus */

#endif 	/* __SmsDataPicture_FWD_DEFINED__ */


#ifndef __SmsDataWapBookmark_FWD_DEFINED__
#define __SmsDataWapBookmark_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDataWapBookmark SmsDataWapBookmark;
#else
typedef struct SmsDataWapBookmark SmsDataWapBookmark;
#endif /* __cplusplus */

#endif 	/* __SmsDataWapBookmark_FWD_DEFINED__ */


#ifndef __SmsDataWapPush_FWD_DEFINED__
#define __SmsDataWapPush_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDataWapPush SmsDataWapPush;
#else
typedef struct SmsDataWapPush SmsDataWapPush;
#endif /* __cplusplus */

#endif 	/* __SmsDataWapPush_FWD_DEFINED__ */


#ifndef __SmsDeliveryStatus_FWD_DEFINED__
#define __SmsDeliveryStatus_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDeliveryStatus SmsDeliveryStatus;
#else
typedef struct SmsDeliveryStatus SmsDeliveryStatus;
#endif /* __cplusplus */

#endif 	/* __SmsDeliveryStatus_FWD_DEFINED__ */


#ifndef __PagerMessage_FWD_DEFINED__
#define __PagerMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class PagerMessage PagerMessage;
#else
typedef struct PagerMessage PagerMessage;
#endif /* __cplusplus */

#endif 	/* __PagerMessage_FWD_DEFINED__ */


#ifndef __MmsProtocolMm1_FWD_DEFINED__
#define __MmsProtocolMm1_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsProtocolMm1 MmsProtocolMm1;
#else
typedef struct MmsProtocolMm1 MmsProtocolMm1;
#endif /* __cplusplus */

#endif 	/* __MmsProtocolMm1_FWD_DEFINED__ */


#ifndef __MmsSlide_FWD_DEFINED__
#define __MmsSlide_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsSlide MmsSlide;
#else
typedef struct MmsSlide MmsSlide;
#endif /* __cplusplus */

#endif 	/* __MmsSlide_FWD_DEFINED__ */


#ifndef __MmsConstants_FWD_DEFINED__
#define __MmsConstants_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsConstants MmsConstants;
#else
typedef struct MmsConstants MmsConstants;
#endif /* __cplusplus */

#endif 	/* __MmsConstants_FWD_DEFINED__ */


#ifndef __MmsPermission_FWD_DEFINED__
#define __MmsPermission_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsPermission MmsPermission;
#else
typedef struct MmsPermission MmsPermission;
#endif /* __cplusplus */

#endif 	/* __MmsPermission_FWD_DEFINED__ */


#ifndef __MmsProtocolMm4_FWD_DEFINED__
#define __MmsProtocolMm4_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsProtocolMm4 MmsProtocolMm4;
#else
typedef struct MmsProtocolMm4 MmsProtocolMm4;
#endif /* __cplusplus */

#endif 	/* __MmsProtocolMm4_FWD_DEFINED__ */


#ifndef __MmsProtocolMm7_FWD_DEFINED__
#define __MmsProtocolMm7_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsProtocolMm7 MmsProtocolMm7;
#else
typedef struct MmsProtocolMm7 MmsProtocolMm7;
#endif /* __cplusplus */

#endif 	/* __MmsProtocolMm7_FWD_DEFINED__ */


#ifndef __MmsMessage_FWD_DEFINED__
#define __MmsMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class MmsMessage MmsMessage;
#else
typedef struct MmsMessage MmsMessage;
#endif /* __cplusplus */

#endif 	/* __MmsMessage_FWD_DEFINED__ */


#ifndef __SmsDataMmsNotification_FWD_DEFINED__
#define __SmsDataMmsNotification_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDataMmsNotification SmsDataMmsNotification;
#else
typedef struct SmsDataMmsNotification SmsDataMmsNotification;
#endif /* __cplusplus */

#endif 	/* __SmsDataMmsNotification_FWD_DEFINED__ */


#ifndef __SmsDatavCard_FWD_DEFINED__
#define __SmsDatavCard_FWD_DEFINED__

#ifdef __cplusplus
typedef class SmsDatavCard SmsDatavCard;
#else
typedef struct SmsDatavCard SmsDatavCard;
#endif /* __cplusplus */

#endif 	/* __SmsDatavCard_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISmsProtocolGsm_INTERFACE_DEFINED__
#define __ISmsProtocolGsm_INTERFACE_DEFINED__

/* interface ISmsProtocolGsm */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsProtocolGsm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DEF0FEB-7F19-4BDD-A2D5-60A1E6E9A473")
    ISmsProtocolGsm : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Device( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Device( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceSpeed( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceSpeed( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceInitString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceInitString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceFlowControl( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceFlowControl( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageStorage( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageStorage( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReportsStorage( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReportsStorage( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMSC( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SMSC( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDeviceCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDevice( 
            LONG lDevice,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnterPin( 
            BSTR bstrPIN) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            BSTR bstrCommand,
            LONG lTimeout,
            /* [retval][out] */ BSTR *pbstrResponse) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pMessage,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Receive( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE QueryStatus( 
            BSTR bstrReference,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetMessage( 
            LONG lIndex,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteAllMessages( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteMessage( 
            LONG lIndex) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveReports( 
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadReports( 
            /* [in] */ BSTR bstrFileName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsProtocolGsmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsProtocolGsm * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsProtocolGsm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsProtocolGsm * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsProtocolGsm * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsProtocolGsm * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsProtocolGsm * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsProtocolGsm * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsProtocolGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsProtocolGsm * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsProtocolGsm * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsProtocolGsm * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Device )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Device )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceSpeed )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceSpeed )( 
            ISmsProtocolGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceInitString )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceInitString )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceFlowControl )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceFlowControl )( 
            ISmsProtocolGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageStorage )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageStorage )( 
            ISmsProtocolGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReportsStorage )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReportsStorage )( 
            ISmsProtocolGsm * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMSC )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SMSC )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            ISmsProtocolGsm * This,
            LONG lDevice,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnterPin )( 
            ISmsProtocolGsm * This,
            BSTR bstrPIN);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            ISmsProtocolGsm * This,
            BSTR bstrCommand,
            LONG lTimeout,
            /* [retval][out] */ BSTR *pbstrResponse);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISmsProtocolGsm * This,
            VARIANT *pMessage,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *QueryStatus )( 
            ISmsProtocolGsm * This,
            BSTR bstrReference,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstMessage )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMessage )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetMessage )( 
            ISmsProtocolGsm * This,
            LONG lIndex,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteAllMessages )( 
            ISmsProtocolGsm * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteMessage )( 
            ISmsProtocolGsm * This,
            LONG lIndex);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmsProtocolGsm * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveReports )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadReports )( 
            ISmsProtocolGsm * This,
            /* [in] */ BSTR bstrFileName);
        
        END_INTERFACE
    } ISmsProtocolGsmVtbl;

    interface ISmsProtocolGsm
    {
        CONST_VTBL struct ISmsProtocolGsmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsProtocolGsm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsProtocolGsm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsProtocolGsm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsProtocolGsm_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsProtocolGsm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsProtocolGsm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsProtocolGsm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsProtocolGsm_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsProtocolGsm_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsProtocolGsm_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsProtocolGsm_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsProtocolGsm_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsProtocolGsm_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISmsProtocolGsm_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISmsProtocolGsm_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define ISmsProtocolGsm_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define ISmsProtocolGsm_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsProtocolGsm_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsProtocolGsm_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsProtocolGsm_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsProtocolGsm_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsProtocolGsm_get_Device(This,pVal)	\
    ( (This)->lpVtbl -> get_Device(This,pVal) ) 

#define ISmsProtocolGsm_put_Device(This,newVal)	\
    ( (This)->lpVtbl -> put_Device(This,newVal) ) 

#define ISmsProtocolGsm_get_DeviceSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceSpeed(This,pVal) ) 

#define ISmsProtocolGsm_put_DeviceSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceSpeed(This,newVal) ) 

#define ISmsProtocolGsm_get_DeviceInitString(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceInitString(This,pVal) ) 

#define ISmsProtocolGsm_put_DeviceInitString(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceInitString(This,newVal) ) 

#define ISmsProtocolGsm_get_DeviceFlowControl(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceFlowControl(This,pVal) ) 

#define ISmsProtocolGsm_put_DeviceFlowControl(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceFlowControl(This,newVal) ) 

#define ISmsProtocolGsm_get_MessageStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MessageStorage(This,pVal) ) 

#define ISmsProtocolGsm_put_MessageStorage(This,newVal)	\
    ( (This)->lpVtbl -> put_MessageStorage(This,newVal) ) 

#define ISmsProtocolGsm_get_ReportsStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_ReportsStorage(This,pVal) ) 

#define ISmsProtocolGsm_put_ReportsStorage(This,newVal)	\
    ( (This)->lpVtbl -> put_ReportsStorage(This,newVal) ) 

#define ISmsProtocolGsm_get_SMSC(This,pVal)	\
    ( (This)->lpVtbl -> get_SMSC(This,pVal) ) 

#define ISmsProtocolGsm_put_SMSC(This,newVal)	\
    ( (This)->lpVtbl -> put_SMSC(This,newVal) ) 

#define ISmsProtocolGsm_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define ISmsProtocolGsm_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define ISmsProtocolGsm_GetDeviceCount(This,pVal)	\
    ( (This)->lpVtbl -> GetDeviceCount(This,pVal) ) 

#define ISmsProtocolGsm_GetDevice(This,lDevice,pVal)	\
    ( (This)->lpVtbl -> GetDevice(This,lDevice,pVal) ) 

#define ISmsProtocolGsm_EnterPin(This,bstrPIN)	\
    ( (This)->lpVtbl -> EnterPin(This,bstrPIN) ) 

#define ISmsProtocolGsm_SendCommand(This,bstrCommand,lTimeout,pbstrResponse)	\
    ( (This)->lpVtbl -> SendCommand(This,bstrCommand,lTimeout,pbstrResponse) ) 

#define ISmsProtocolGsm_Send(This,pMessage,pVal)	\
    ( (This)->lpVtbl -> Send(This,pMessage,pVal) ) 

#define ISmsProtocolGsm_Receive(This,pVal)	\
    ( (This)->lpVtbl -> Receive(This,pVal) ) 

#define ISmsProtocolGsm_QueryStatus(This,bstrReference,pVal)	\
    ( (This)->lpVtbl -> QueryStatus(This,bstrReference,pVal) ) 

#define ISmsProtocolGsm_GetFirstMessage(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstMessage(This,pVal) ) 

#define ISmsProtocolGsm_GetNextMessage(This,pVal)	\
    ( (This)->lpVtbl -> GetNextMessage(This,pVal) ) 

#define ISmsProtocolGsm_GetMessage(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> GetMessage(This,lIndex,pVal) ) 

#define ISmsProtocolGsm_DeleteAllMessages(This)	\
    ( (This)->lpVtbl -> DeleteAllMessages(This) ) 

#define ISmsProtocolGsm_DeleteMessage(This,lIndex)	\
    ( (This)->lpVtbl -> DeleteMessage(This,lIndex) ) 

#define ISmsProtocolGsm_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define ISmsProtocolGsm_SaveReports(This,bstrFileName)	\
    ( (This)->lpVtbl -> SaveReports(This,bstrFileName) ) 

#define ISmsProtocolGsm_LoadReports(This,bstrFileName)	\
    ( (This)->lpVtbl -> LoadReports(This,bstrFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsProtocolGsm_INTERFACE_DEFINED__ */


#ifndef __ISmsMessage_INTERFACE_DEFINED__
#define __ISmsMessage_INTERFACE_DEFINED__

/* interface ISmsMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74A9B740-4199-41D8-AF10-5D9ECB68980C")
    ISmsMessage : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Sender( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Sender( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Recipient( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Recipient( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Data( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Format( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Format( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidityPeriod( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValidityPeriod( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SMSC( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SMSC( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TimeSecs( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TimeSecs( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PID( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DCS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DCS( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ESM( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ESM( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceTON( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SourceTON( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceNPI( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SourceNPI( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DestinationTON( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DestinationTON( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DestinationNPI( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DestinationNPI( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServiceType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServiceType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestDeliveryStatus( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestDeliveryStatus( 
            /* [in] */ BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsMessage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsMessage * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sender )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sender )( 
            ISmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Recipient )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Recipient )( 
            ISmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Data )( 
            ISmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Format )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Format )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValidityPeriod )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValidityPeriod )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SMSC )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SMSC )( 
            ISmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            ISmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeSecs )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeSecs )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PID )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PID )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCS )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DCS )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ESM )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ESM )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceTON )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceTON )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceNPI )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceNPI )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationTON )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationTON )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationNPI )( 
            ISmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationNPI )( 
            ISmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceType )( 
            ISmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServiceType )( 
            ISmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestDeliveryStatus )( 
            ISmsMessage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestDeliveryStatus )( 
            ISmsMessage * This,
            /* [in] */ BOOL newVal);
        
        END_INTERFACE
    } ISmsMessageVtbl;

    interface ISmsMessage
    {
        CONST_VTBL struct ISmsMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsMessage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsMessage_get_Sender(This,pVal)	\
    ( (This)->lpVtbl -> get_Sender(This,pVal) ) 

#define ISmsMessage_put_Sender(This,newVal)	\
    ( (This)->lpVtbl -> put_Sender(This,newVal) ) 

#define ISmsMessage_get_Recipient(This,pVal)	\
    ( (This)->lpVtbl -> get_Recipient(This,pVal) ) 

#define ISmsMessage_put_Recipient(This,newVal)	\
    ( (This)->lpVtbl -> put_Recipient(This,newVal) ) 

#define ISmsMessage_get_Data(This,pVal)	\
    ( (This)->lpVtbl -> get_Data(This,pVal) ) 

#define ISmsMessage_put_Data(This,newVal)	\
    ( (This)->lpVtbl -> put_Data(This,newVal) ) 

#define ISmsMessage_get_Format(This,pVal)	\
    ( (This)->lpVtbl -> get_Format(This,pVal) ) 

#define ISmsMessage_put_Format(This,newVal)	\
    ( (This)->lpVtbl -> put_Format(This,newVal) ) 

#define ISmsMessage_get_ValidityPeriod(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidityPeriod(This,pVal) ) 

#define ISmsMessage_put_ValidityPeriod(This,newVal)	\
    ( (This)->lpVtbl -> put_ValidityPeriod(This,newVal) ) 

#define ISmsMessage_get_SMSC(This,pVal)	\
    ( (This)->lpVtbl -> get_SMSC(This,pVal) ) 

#define ISmsMessage_put_SMSC(This,newVal)	\
    ( (This)->lpVtbl -> put_SMSC(This,newVal) ) 

#define ISmsMessage_get_Time(This,pVal)	\
    ( (This)->lpVtbl -> get_Time(This,pVal) ) 

#define ISmsMessage_put_Time(This,newVal)	\
    ( (This)->lpVtbl -> put_Time(This,newVal) ) 

#define ISmsMessage_get_TimeSecs(This,pVal)	\
    ( (This)->lpVtbl -> get_TimeSecs(This,pVal) ) 

#define ISmsMessage_put_TimeSecs(This,newVal)	\
    ( (This)->lpVtbl -> put_TimeSecs(This,newVal) ) 

#define ISmsMessage_get_PID(This,pVal)	\
    ( (This)->lpVtbl -> get_PID(This,pVal) ) 

#define ISmsMessage_put_PID(This,newVal)	\
    ( (This)->lpVtbl -> put_PID(This,newVal) ) 

#define ISmsMessage_get_DCS(This,pVal)	\
    ( (This)->lpVtbl -> get_DCS(This,pVal) ) 

#define ISmsMessage_put_DCS(This,newVal)	\
    ( (This)->lpVtbl -> put_DCS(This,newVal) ) 

#define ISmsMessage_get_ESM(This,pVal)	\
    ( (This)->lpVtbl -> get_ESM(This,pVal) ) 

#define ISmsMessage_put_ESM(This,newVal)	\
    ( (This)->lpVtbl -> put_ESM(This,newVal) ) 

#define ISmsMessage_get_SourceTON(This,pVal)	\
    ( (This)->lpVtbl -> get_SourceTON(This,pVal) ) 

#define ISmsMessage_put_SourceTON(This,newVal)	\
    ( (This)->lpVtbl -> put_SourceTON(This,newVal) ) 

#define ISmsMessage_get_SourceNPI(This,pVal)	\
    ( (This)->lpVtbl -> get_SourceNPI(This,pVal) ) 

#define ISmsMessage_put_SourceNPI(This,newVal)	\
    ( (This)->lpVtbl -> put_SourceNPI(This,newVal) ) 

#define ISmsMessage_get_DestinationTON(This,pVal)	\
    ( (This)->lpVtbl -> get_DestinationTON(This,pVal) ) 

#define ISmsMessage_put_DestinationTON(This,newVal)	\
    ( (This)->lpVtbl -> put_DestinationTON(This,newVal) ) 

#define ISmsMessage_get_DestinationNPI(This,pVal)	\
    ( (This)->lpVtbl -> get_DestinationNPI(This,pVal) ) 

#define ISmsMessage_put_DestinationNPI(This,newVal)	\
    ( (This)->lpVtbl -> put_DestinationNPI(This,newVal) ) 

#define ISmsMessage_get_ServiceType(This,pVal)	\
    ( (This)->lpVtbl -> get_ServiceType(This,pVal) ) 

#define ISmsMessage_put_ServiceType(This,newVal)	\
    ( (This)->lpVtbl -> put_ServiceType(This,newVal) ) 

#define ISmsMessage_get_RequestDeliveryStatus(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestDeliveryStatus(This,pVal) ) 

#define ISmsMessage_put_RequestDeliveryStatus(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestDeliveryStatus(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsMessage_INTERFACE_DEFINED__ */


#ifndef __ISmsProtocolSmpp_INTERFACE_DEFINED__
#define __ISmsProtocolSmpp_INTERFACE_DEFINED__

/* interface ISmsProtocolSmpp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsProtocolSmpp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDFEC40E-1773-488E-86DC-D4C5CFD0BF10")
    ISmsProtocolSmpp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerKeepAlive( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerKeepAlive( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemMode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemVersion( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemSourceAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemSourceAddress( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemSourceTON( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemSourceTON( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemSourceNPI( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemSourceNPI( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemThroughput( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemThroughput( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemCharSet( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemCharSet( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressRange( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AddressRange( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeliveryReportFormat( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeliveryReportFormat( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemDestinationTON( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemDestinationTON( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemDestinationNPI( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SystemDestinationNPI( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pMessage,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetTLVValue( 
            LONG lType,
            LONG lTLV,
            VARIANT newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTLVValue( 
            LONG lTLV,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE QueryStatus( 
            BSTR bstrRef,
            BOOL bWaitUntilCompleted,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountReceivedMessages( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetMessage( 
            LONG lIndex,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR bstrConfigFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR bstrConfigFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            LONG lDelay) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadReports( 
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveReports( 
            /* [in] */ BSTR bstrFileName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsProtocolSmppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsProtocolSmpp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsProtocolSmpp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsProtocolSmpp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsProtocolSmpp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsProtocolSmpp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsProtocolSmpp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsProtocolSmpp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsProtocolSmpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsProtocolSmpp * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsProtocolSmpp * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerPort )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerPort )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerTimeout )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerTimeout )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerKeepAlive )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerKeepAlive )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemID )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemID )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemPassword )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemPassword )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemType )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemType )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemMode )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemMode )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemVersion )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemVersion )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemSourceAddress )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemSourceAddress )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemSourceTON )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemSourceTON )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemSourceNPI )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemSourceNPI )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemThroughput )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemThroughput )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemCharSet )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemCharSet )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddressRange )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddressRange )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeliveryReportFormat )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeliveryReportFormat )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemDestinationTON )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemDestinationTON )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemDestinationNPI )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SystemDestinationNPI )( 
            ISmsProtocolSmpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ISmsProtocolSmpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            ISmsProtocolSmpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISmsProtocolSmpp * This,
            VARIANT *pMessage,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetTLVValue )( 
            ISmsProtocolSmpp * This,
            LONG lType,
            LONG lTLV,
            VARIANT newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTLVValue )( 
            ISmsProtocolSmpp * This,
            LONG lTLV,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *QueryStatus )( 
            ISmsProtocolSmpp * This,
            BSTR bstrRef,
            BOOL bWaitUntilCompleted,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountReceivedMessages )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstMessage )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMessage )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetMessage )( 
            ISmsProtocolSmpp * This,
            LONG lIndex,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            ISmsProtocolSmpp * This,
            BSTR bstrConfigFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            ISmsProtocolSmpp * This,
            BSTR bstrConfigFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISmsProtocolSmpp * This,
            LONG lDelay);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmsProtocolSmpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadReports )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveReports )( 
            ISmsProtocolSmpp * This,
            /* [in] */ BSTR bstrFileName);
        
        END_INTERFACE
    } ISmsProtocolSmppVtbl;

    interface ISmsProtocolSmpp
    {
        CONST_VTBL struct ISmsProtocolSmppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsProtocolSmpp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsProtocolSmpp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsProtocolSmpp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsProtocolSmpp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsProtocolSmpp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsProtocolSmpp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsProtocolSmpp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsProtocolSmpp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsProtocolSmpp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsProtocolSmpp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsProtocolSmpp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsProtocolSmpp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsProtocolSmpp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISmsProtocolSmpp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISmsProtocolSmpp_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define ISmsProtocolSmpp_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define ISmsProtocolSmpp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsProtocolSmpp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsProtocolSmpp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsProtocolSmpp_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsProtocolSmpp_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsProtocolSmpp_get_Server(This,pVal)	\
    ( (This)->lpVtbl -> get_Server(This,pVal) ) 

#define ISmsProtocolSmpp_put_Server(This,newVal)	\
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define ISmsProtocolSmpp_get_ServerPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerPort(This,pVal) ) 

#define ISmsProtocolSmpp_put_ServerPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerPort(This,newVal) ) 

#define ISmsProtocolSmpp_get_ServerTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerTimeout(This,pVal) ) 

#define ISmsProtocolSmpp_put_ServerTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerTimeout(This,newVal) ) 

#define ISmsProtocolSmpp_get_ServerKeepAlive(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerKeepAlive(This,pVal) ) 

#define ISmsProtocolSmpp_put_ServerKeepAlive(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerKeepAlive(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemID(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemID(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemID(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemID(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemPassword(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemPassword(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemType(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemType(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemType(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemType(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemMode(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemMode(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemMode(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemMode(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemVersion(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemVersion(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemVersion(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemSourceAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemSourceAddress(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemSourceAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemSourceAddress(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemSourceTON(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemSourceTON(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemSourceTON(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemSourceTON(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemSourceNPI(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemSourceNPI(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemSourceNPI(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemSourceNPI(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemThroughput(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemThroughput(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemThroughput(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemThroughput(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemCharSet(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemCharSet(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemCharSet(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemCharSet(This,newVal) ) 

#define ISmsProtocolSmpp_get_AddressRange(This,pVal)	\
    ( (This)->lpVtbl -> get_AddressRange(This,pVal) ) 

#define ISmsProtocolSmpp_put_AddressRange(This,newVal)	\
    ( (This)->lpVtbl -> put_AddressRange(This,newVal) ) 

#define ISmsProtocolSmpp_get_DeliveryReportFormat(This,pVal)	\
    ( (This)->lpVtbl -> get_DeliveryReportFormat(This,pVal) ) 

#define ISmsProtocolSmpp_put_DeliveryReportFormat(This,newVal)	\
    ( (This)->lpVtbl -> put_DeliveryReportFormat(This,newVal) ) 

#define ISmsProtocolSmpp_get_IsConnected(This,pVal)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pVal) ) 

#define ISmsProtocolSmpp_get_SystemDestinationTON(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemDestinationTON(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemDestinationTON(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemDestinationTON(This,newVal) ) 

#define ISmsProtocolSmpp_get_SystemDestinationNPI(This,pVal)	\
    ( (This)->lpVtbl -> get_SystemDestinationNPI(This,pVal) ) 

#define ISmsProtocolSmpp_put_SystemDestinationNPI(This,newVal)	\
    ( (This)->lpVtbl -> put_SystemDestinationNPI(This,newVal) ) 

#define ISmsProtocolSmpp_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define ISmsProtocolSmpp_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define ISmsProtocolSmpp_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define ISmsProtocolSmpp_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define ISmsProtocolSmpp_Send(This,pMessage,pVal)	\
    ( (This)->lpVtbl -> Send(This,pMessage,pVal) ) 

#define ISmsProtocolSmpp_SetTLVValue(This,lType,lTLV,newVal)	\
    ( (This)->lpVtbl -> SetTLVValue(This,lType,lTLV,newVal) ) 

#define ISmsProtocolSmpp_GetTLVValue(This,lTLV,pVal)	\
    ( (This)->lpVtbl -> GetTLVValue(This,lTLV,pVal) ) 

#define ISmsProtocolSmpp_QueryStatus(This,bstrRef,bWaitUntilCompleted,pVal)	\
    ( (This)->lpVtbl -> QueryStatus(This,bstrRef,bWaitUntilCompleted,pVal) ) 

#define ISmsProtocolSmpp_CountReceivedMessages(This,pVal)	\
    ( (This)->lpVtbl -> CountReceivedMessages(This,pVal) ) 

#define ISmsProtocolSmpp_GetFirstMessage(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstMessage(This,pVal) ) 

#define ISmsProtocolSmpp_GetNextMessage(This,pVal)	\
    ( (This)->lpVtbl -> GetNextMessage(This,pVal) ) 

#define ISmsProtocolSmpp_GetMessage(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> GetMessage(This,lIndex,pVal) ) 

#define ISmsProtocolSmpp_ProviderLoadConfig(This,bstrConfigFile)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,bstrConfigFile) ) 

#define ISmsProtocolSmpp_ProviderSaveConfig(This,bstrConfigFile)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,bstrConfigFile) ) 

#define ISmsProtocolSmpp_Sleep(This,lDelay)	\
    ( (This)->lpVtbl -> Sleep(This,lDelay) ) 

#define ISmsProtocolSmpp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#define ISmsProtocolSmpp_LoadReports(This,bstrFileName)	\
    ( (This)->lpVtbl -> LoadReports(This,bstrFileName) ) 

#define ISmsProtocolSmpp_SaveReports(This,bstrFileName)	\
    ( (This)->lpVtbl -> SaveReports(This,bstrFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsProtocolSmpp_INTERFACE_DEFINED__ */


#ifndef __ISmsConstants_INTERFACE_DEFINED__
#define __ISmsConstants_INTERFACE_DEFINED__

/* interface ISmsConstants */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsConstants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B20DC41C-F2CB-4B5A-B174-73CEA23BF84B")
    ISmsConstants : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_TEXT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_TEXT_FLASH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_TEXT_MULTIPART( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_TEXT_MULTIPART_FLASH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_DATA( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_DATA_UDH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_UNICODE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_UNICODE_FLASH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_UNICODE_MULTIPART( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_UNICODE_MULTIPART_FLASH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_REPORT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMESSAGEFORMAT_NOTIFICATION_MMS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPMODE_TRANSCEIVER( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPMODE_TRANSMITTER( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPMODE_RECEIVER( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPROVIDERTYPE_UCP( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPROVIDERTYPE_TAP_DEFAULT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPROVIDERTYPE_TAP_NOLF( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPROVIDERTYPE_TAP_NOEOT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDIALMODE_TONE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDIALMODE_PULSE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPVERSION_33( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPVERSION_34( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPVERSION_50( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPP_TLV_1BYTE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPP_TLV_2BYTE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPP_TLV_4BYTE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPP_TLV_COCTET( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPP_TLV_OCTET( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPP_TLV_VARIABLE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_SCHEDULED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_ENROUTE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_DELIVERED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_EXPIRED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_DELETED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_UNDELIVERABLE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_ACCEPTED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_UNKNOWN( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_REJECTED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_SKIPPED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_SUBMITTED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_SUBMITREQUESTED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_FAILED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDELIVERYSTATUS_NOCREDITS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSH_SERVICE_INDICATION( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSH_SERVICE_LOAD( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSHSIGNAL_NONE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSHSIGNAL_LOW( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSHSIGNAL_MEDIUM( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSHSIGNAL_HIGH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSHSIGNAL_DELETE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSH_ACTION_EXECUTE_LOW( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSH_ACTION_EXECUTE_HIGH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asWAPPUSH_ACTION_CACHE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPICTURE_MESSAGE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPICTURE_CALLERGROUP( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPICTURE_OPERATORLOGO( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asPICTURE_OPERATORLOGO_RESTORE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDEVICESETTINGS_DEFAULT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDEVICESETTINGS_8N1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDEVICESETTINGS_7E1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_DEFAULT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_GSM( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_ASCII( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_LATIN( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_JIS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_CYRILLIC( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_HEBREW( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_JAPANESE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPCHARSET_GREEK( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSTORAGE_ALL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSTORAGE_SIM( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSTORAGE_DEVICE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSTORAGE_COMBINED( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSTORAGE_REPORTS( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDEVICEFLOWCONTROL_DEFAULT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDEVICEFLOWCONTROL_ENABLE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asDEVICEFLOWCONTROL_DISABLE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_ADVERTISEMENT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_INFORMATIONAL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_AUTO( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_PERSONAL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPDELIVERYREPORTFORMAT_HEX( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asSMPPDELIVERYREPORTFORMAT_DEC( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsConstantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsConstants * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsConstants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsConstants * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsConstants * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsConstants * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsConstants * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsConstants * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_TEXT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_TEXT_FLASH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_TEXT_MULTIPART )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_TEXT_MULTIPART_FLASH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_DATA )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_DATA_UDH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_UNICODE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_UNICODE_FLASH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_UNICODE_MULTIPART )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_UNICODE_MULTIPART_FLASH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_REPORT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMESSAGEFORMAT_NOTIFICATION_MMS )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPMODE_TRANSCEIVER )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPMODE_TRANSMITTER )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPMODE_RECEIVER )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPROVIDERTYPE_UCP )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPROVIDERTYPE_TAP_DEFAULT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPROVIDERTYPE_TAP_NOLF )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPROVIDERTYPE_TAP_NOEOT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDIALMODE_TONE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDIALMODE_PULSE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPVERSION_33 )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPVERSION_34 )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPVERSION_50 )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPP_TLV_1BYTE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPP_TLV_2BYTE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPP_TLV_4BYTE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPP_TLV_COCTET )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPP_TLV_OCTET )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPP_TLV_VARIABLE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_SCHEDULED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_ENROUTE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_DELIVERED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_EXPIRED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_DELETED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_UNDELIVERABLE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_ACCEPTED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_UNKNOWN )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_REJECTED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_SKIPPED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_SUBMITTED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_SUBMITREQUESTED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_FAILED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDELIVERYSTATUS_NOCREDITS )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSH_SERVICE_INDICATION )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSH_SERVICE_LOAD )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSHSIGNAL_NONE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSHSIGNAL_LOW )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSHSIGNAL_MEDIUM )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSHSIGNAL_HIGH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSHSIGNAL_DELETE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSH_ACTION_EXECUTE_LOW )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSH_ACTION_EXECUTE_HIGH )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asWAPPUSH_ACTION_CACHE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPICTURE_MESSAGE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPICTURE_CALLERGROUP )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPICTURE_OPERATORLOGO )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asPICTURE_OPERATORLOGO_RESTORE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDEVICESETTINGS_DEFAULT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDEVICESETTINGS_8N1 )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDEVICESETTINGS_7E1 )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_DEFAULT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_GSM )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_ASCII )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_LATIN )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_JIS )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_CYRILLIC )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_HEBREW )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_JAPANESE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPCHARSET_GREEK )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSTORAGE_ALL )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSTORAGE_SIM )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSTORAGE_DEVICE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSTORAGE_COMBINED )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSTORAGE_REPORTS )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDEVICEFLOWCONTROL_DEFAULT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDEVICEFLOWCONTROL_ENABLE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asDEVICEFLOWCONTROL_DISABLE )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_ADVERTISEMENT )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_INFORMATIONAL )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_AUTO )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_PERSONAL )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPDELIVERYREPORTFORMAT_HEX )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asSMPPDELIVERYREPORTFORMAT_DEC )( 
            ISmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ISmsConstantsVtbl;

    interface ISmsConstants
    {
        CONST_VTBL struct ISmsConstantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsConstants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsConstants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsConstants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsConstants_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsConstants_get_asMESSAGEFORMAT_TEXT(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_TEXT(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_TEXT_FLASH(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_TEXT_FLASH(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_TEXT_MULTIPART(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_TEXT_MULTIPART(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_TEXT_MULTIPART_FLASH(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_TEXT_MULTIPART_FLASH(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_DATA(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_DATA(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_DATA_UDH(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_DATA_UDH(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_UNICODE(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_UNICODE(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_UNICODE_FLASH(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_UNICODE_FLASH(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_UNICODE_MULTIPART(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_UNICODE_MULTIPART(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_UNICODE_MULTIPART_FLASH(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_UNICODE_MULTIPART_FLASH(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_REPORT(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_REPORT(This,pVal) ) 

#define ISmsConstants_get_asMESSAGEFORMAT_NOTIFICATION_MMS(This,pVal)	\
    ( (This)->lpVtbl -> get_asMESSAGEFORMAT_NOTIFICATION_MMS(This,pVal) ) 

#define ISmsConstants_get_asSMPPMODE_TRANSCEIVER(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPMODE_TRANSCEIVER(This,pVal) ) 

#define ISmsConstants_get_asSMPPMODE_TRANSMITTER(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPMODE_TRANSMITTER(This,pVal) ) 

#define ISmsConstants_get_asSMPPMODE_RECEIVER(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPMODE_RECEIVER(This,pVal) ) 

#define ISmsConstants_get_asPROVIDERTYPE_UCP(This,pVal)	\
    ( (This)->lpVtbl -> get_asPROVIDERTYPE_UCP(This,pVal) ) 

#define ISmsConstants_get_asPROVIDERTYPE_TAP_DEFAULT(This,pVal)	\
    ( (This)->lpVtbl -> get_asPROVIDERTYPE_TAP_DEFAULT(This,pVal) ) 

#define ISmsConstants_get_asPROVIDERTYPE_TAP_NOLF(This,pVal)	\
    ( (This)->lpVtbl -> get_asPROVIDERTYPE_TAP_NOLF(This,pVal) ) 

#define ISmsConstants_get_asPROVIDERTYPE_TAP_NOEOT(This,pVal)	\
    ( (This)->lpVtbl -> get_asPROVIDERTYPE_TAP_NOEOT(This,pVal) ) 

#define ISmsConstants_get_asDIALMODE_TONE(This,pVal)	\
    ( (This)->lpVtbl -> get_asDIALMODE_TONE(This,pVal) ) 

#define ISmsConstants_get_asDIALMODE_PULSE(This,pVal)	\
    ( (This)->lpVtbl -> get_asDIALMODE_PULSE(This,pVal) ) 

#define ISmsConstants_get_asSMPPVERSION_33(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPVERSION_33(This,pVal) ) 

#define ISmsConstants_get_asSMPPVERSION_34(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPVERSION_34(This,pVal) ) 

#define ISmsConstants_get_asSMPPVERSION_50(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPVERSION_50(This,pVal) ) 

#define ISmsConstants_get_asSMPP_TLV_1BYTE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPP_TLV_1BYTE(This,pVal) ) 

#define ISmsConstants_get_asSMPP_TLV_2BYTE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPP_TLV_2BYTE(This,pVal) ) 

#define ISmsConstants_get_asSMPP_TLV_4BYTE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPP_TLV_4BYTE(This,pVal) ) 

#define ISmsConstants_get_asSMPP_TLV_COCTET(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPP_TLV_COCTET(This,pVal) ) 

#define ISmsConstants_get_asSMPP_TLV_OCTET(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPP_TLV_OCTET(This,pVal) ) 

#define ISmsConstants_get_asSMPP_TLV_VARIABLE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPP_TLV_VARIABLE(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_SCHEDULED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_SCHEDULED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_ENROUTE(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_ENROUTE(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_DELIVERED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_DELIVERED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_EXPIRED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_EXPIRED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_DELETED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_DELETED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_UNDELIVERABLE(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_UNDELIVERABLE(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_ACCEPTED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_ACCEPTED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_UNKNOWN(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_UNKNOWN(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_REJECTED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_REJECTED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_SKIPPED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_SKIPPED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_SUBMITTED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_SUBMITTED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_SUBMITREQUESTED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_SUBMITREQUESTED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_FAILED(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_FAILED(This,pVal) ) 

#define ISmsConstants_get_asDELIVERYSTATUS_NOCREDITS(This,pVal)	\
    ( (This)->lpVtbl -> get_asDELIVERYSTATUS_NOCREDITS(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSH_SERVICE_INDICATION(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSH_SERVICE_INDICATION(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSH_SERVICE_LOAD(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSH_SERVICE_LOAD(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSHSIGNAL_NONE(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSHSIGNAL_NONE(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSHSIGNAL_LOW(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSHSIGNAL_LOW(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSHSIGNAL_MEDIUM(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSHSIGNAL_MEDIUM(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSHSIGNAL_HIGH(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSHSIGNAL_HIGH(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSHSIGNAL_DELETE(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSHSIGNAL_DELETE(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSH_ACTION_EXECUTE_LOW(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSH_ACTION_EXECUTE_LOW(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSH_ACTION_EXECUTE_HIGH(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSH_ACTION_EXECUTE_HIGH(This,pVal) ) 

#define ISmsConstants_get_asWAPPUSH_ACTION_CACHE(This,pVal)	\
    ( (This)->lpVtbl -> get_asWAPPUSH_ACTION_CACHE(This,pVal) ) 

#define ISmsConstants_get_asPICTURE_MESSAGE(This,pVal)	\
    ( (This)->lpVtbl -> get_asPICTURE_MESSAGE(This,pVal) ) 

#define ISmsConstants_get_asPICTURE_CALLERGROUP(This,pVal)	\
    ( (This)->lpVtbl -> get_asPICTURE_CALLERGROUP(This,pVal) ) 

#define ISmsConstants_get_asPICTURE_OPERATORLOGO(This,pVal)	\
    ( (This)->lpVtbl -> get_asPICTURE_OPERATORLOGO(This,pVal) ) 

#define ISmsConstants_get_asPICTURE_OPERATORLOGO_RESTORE(This,pVal)	\
    ( (This)->lpVtbl -> get_asPICTURE_OPERATORLOGO_RESTORE(This,pVal) ) 

#define ISmsConstants_get_asDEVICESETTINGS_DEFAULT(This,pVal)	\
    ( (This)->lpVtbl -> get_asDEVICESETTINGS_DEFAULT(This,pVal) ) 

#define ISmsConstants_get_asDEVICESETTINGS_8N1(This,pVal)	\
    ( (This)->lpVtbl -> get_asDEVICESETTINGS_8N1(This,pVal) ) 

#define ISmsConstants_get_asDEVICESETTINGS_7E1(This,pVal)	\
    ( (This)->lpVtbl -> get_asDEVICESETTINGS_7E1(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_DEFAULT(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_DEFAULT(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_GSM(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_GSM(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_ASCII(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_ASCII(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_LATIN(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_LATIN(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_JIS(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_JIS(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_CYRILLIC(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_CYRILLIC(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_HEBREW(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_HEBREW(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_JAPANESE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_JAPANESE(This,pVal) ) 

#define ISmsConstants_get_asSMPPCHARSET_GREEK(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPCHARSET_GREEK(This,pVal) ) 

#define ISmsConstants_get_asSTORAGE_ALL(This,pVal)	\
    ( (This)->lpVtbl -> get_asSTORAGE_ALL(This,pVal) ) 

#define ISmsConstants_get_asSTORAGE_SIM(This,pVal)	\
    ( (This)->lpVtbl -> get_asSTORAGE_SIM(This,pVal) ) 

#define ISmsConstants_get_asSTORAGE_DEVICE(This,pVal)	\
    ( (This)->lpVtbl -> get_asSTORAGE_DEVICE(This,pVal) ) 

#define ISmsConstants_get_asSTORAGE_COMBINED(This,pVal)	\
    ( (This)->lpVtbl -> get_asSTORAGE_COMBINED(This,pVal) ) 

#define ISmsConstants_get_asSTORAGE_REPORTS(This,pVal)	\
    ( (This)->lpVtbl -> get_asSTORAGE_REPORTS(This,pVal) ) 

#define ISmsConstants_get_asDEVICEFLOWCONTROL_DEFAULT(This,pVal)	\
    ( (This)->lpVtbl -> get_asDEVICEFLOWCONTROL_DEFAULT(This,pVal) ) 

#define ISmsConstants_get_asDEVICEFLOWCONTROL_ENABLE(This,pVal)	\
    ( (This)->lpVtbl -> get_asDEVICEFLOWCONTROL_ENABLE(This,pVal) ) 

#define ISmsConstants_get_asDEVICEFLOWCONTROL_DISABLE(This,pVal)	\
    ( (This)->lpVtbl -> get_asDEVICEFLOWCONTROL_DISABLE(This,pVal) ) 

#define ISmsConstants_get_asMMS_CLASS_ADVERTISEMENT(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_ADVERTISEMENT(This,pVal) ) 

#define ISmsConstants_get_asMMS_CLASS_INFORMATIONAL(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_INFORMATIONAL(This,pVal) ) 

#define ISmsConstants_get_asMMS_CLASS_AUTO(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_AUTO(This,pVal) ) 

#define ISmsConstants_get_asMMS_CLASS_PERSONAL(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_PERSONAL(This,pVal) ) 

#define ISmsConstants_get_asSMPPDELIVERYREPORTFORMAT_HEX(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPDELIVERYREPORTFORMAT_HEX(This,pVal) ) 

#define ISmsConstants_get_asSMPPDELIVERYREPORTFORMAT_DEC(This,pVal)	\
    ( (This)->lpVtbl -> get_asSMPPDELIVERYREPORTFORMAT_DEC(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsConstants_INTERFACE_DEFINED__ */


#ifndef __ISmsProtocolHttp_INTERFACE_DEFINED__
#define __ISmsProtocolHttp_INTERFACE_DEFINED__

/* interface ISmsProtocolHttp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsProtocolHttp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE747A06-B435-4E13-89B9-A4EFFB6AED75")
    ISmsProtocolHttp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderHost( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderHost( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderWebAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderWebAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderWebPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderWebPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderUseSSL( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderUseSSL( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderCharset( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderCharset( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderSuccessResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderSuccessResponse( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderErrorResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderErrorResponse( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyServer( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URLText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URLText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URLBinary( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URLBinary( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URLUnicode( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URLUnicode( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pVariant) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR bstrFileName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsProtocolHttpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsProtocolHttp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsProtocolHttp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsProtocolHttp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsProtocolHttp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsProtocolHttp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsProtocolHttp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsProtocolHttp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsProtocolHttp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsProtocolHttp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsProtocolHttp * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsProtocolHttp * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderHost )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderHost )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPort )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPort )( 
            ISmsProtocolHttp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderWebAccount )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderWebAccount )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderWebPassword )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderWebPassword )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderUseSSL )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderUseSSL )( 
            ISmsProtocolHttp * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderCharset )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderCharset )( 
            ISmsProtocolHttp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderSuccessResponse )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderSuccessResponse )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderErrorResponse )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderErrorResponse )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyServer )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyServer )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPort )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPort )( 
            ISmsProtocolHttp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyAccount )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyAccount )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPassword )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPassword )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URLText )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URLText )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URLBinary )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URLBinary )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URLUnicode )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URLUnicode )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            ISmsProtocolHttp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISmsProtocolHttp * This,
            VARIANT *pVariant);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            ISmsProtocolHttp * This,
            BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            ISmsProtocolHttp * This,
            BSTR bstrFileName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmsProtocolHttp * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISmsProtocolHttpVtbl;

    interface ISmsProtocolHttp
    {
        CONST_VTBL struct ISmsProtocolHttpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsProtocolHttp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsProtocolHttp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsProtocolHttp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsProtocolHttp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsProtocolHttp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsProtocolHttp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsProtocolHttp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsProtocolHttp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsProtocolHttp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsProtocolHttp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsProtocolHttp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsProtocolHttp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsProtocolHttp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISmsProtocolHttp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISmsProtocolHttp_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define ISmsProtocolHttp_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define ISmsProtocolHttp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsProtocolHttp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsProtocolHttp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsProtocolHttp_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsProtocolHttp_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsProtocolHttp_get_ProviderHost(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderHost(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderHost(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderHost(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderPort(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPort(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderWebAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderWebAccount(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderWebAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderWebAccount(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderWebPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderWebPassword(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderWebPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderWebPassword(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderUseSSL(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderUseSSL(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderUseSSL(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderUseSSL(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderCharset(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderCharset(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderCharset(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderCharset(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,pVal) ) 

#define ISmsProtocolHttp_get_ProviderSuccessResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderSuccessResponse(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderSuccessResponse(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderSuccessResponse(This,newVal) ) 

#define ISmsProtocolHttp_get_ProviderErrorResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderErrorResponse(This,pVal) ) 

#define ISmsProtocolHttp_put_ProviderErrorResponse(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderErrorResponse(This,newVal) ) 

#define ISmsProtocolHttp_get_ProxyServer(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyServer(This,pVal) ) 

#define ISmsProtocolHttp_put_ProxyServer(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyServer(This,newVal) ) 

#define ISmsProtocolHttp_get_ProxyPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyPort(This,pVal) ) 

#define ISmsProtocolHttp_put_ProxyPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyPort(This,newVal) ) 

#define ISmsProtocolHttp_get_ProxyAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyAccount(This,pVal) ) 

#define ISmsProtocolHttp_put_ProxyAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyAccount(This,newVal) ) 

#define ISmsProtocolHttp_get_ProxyPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyPassword(This,pVal) ) 

#define ISmsProtocolHttp_put_ProxyPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyPassword(This,newVal) ) 

#define ISmsProtocolHttp_get_URLText(This,pVal)	\
    ( (This)->lpVtbl -> get_URLText(This,pVal) ) 

#define ISmsProtocolHttp_put_URLText(This,newVal)	\
    ( (This)->lpVtbl -> put_URLText(This,newVal) ) 

#define ISmsProtocolHttp_get_URLBinary(This,pVal)	\
    ( (This)->lpVtbl -> get_URLBinary(This,pVal) ) 

#define ISmsProtocolHttp_put_URLBinary(This,newVal)	\
    ( (This)->lpVtbl -> put_URLBinary(This,newVal) ) 

#define ISmsProtocolHttp_get_URLUnicode(This,pVal)	\
    ( (This)->lpVtbl -> get_URLUnicode(This,pVal) ) 

#define ISmsProtocolHttp_put_URLUnicode(This,newVal)	\
    ( (This)->lpVtbl -> put_URLUnicode(This,newVal) ) 

#define ISmsProtocolHttp_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define ISmsProtocolHttp_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define ISmsProtocolHttp_Send(This,pVariant)	\
    ( (This)->lpVtbl -> Send(This,pVariant) ) 

#define ISmsProtocolHttp_ProviderLoadConfig(This,bstrFileName)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,bstrFileName) ) 

#define ISmsProtocolHttp_ProviderSaveConfig(This,bstrFileName)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,bstrFileName) ) 

#define ISmsProtocolHttp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsProtocolHttp_INTERFACE_DEFINED__ */


#ifndef __ISmsProtocolDialup_INTERFACE_DEFINED__
#define __ISmsProtocolDialup_INTERFACE_DEFINED__

/* interface ISmsProtocolDialup */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsProtocolDialup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6981A9D3-9F5E-4AE0-B915-E582DE5769DC")
    ISmsProtocolDialup : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Device( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Device( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceSpeed( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceSpeed( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceSettings( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceSettings( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceInitString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceInitString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceFlowControl( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceFlowControl( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DialMode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DialMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderDialString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderDialString( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderType( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDeviceCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDevice( 
            LONG lIndex,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pMessage) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR bstrFileName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsProtocolDialupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsProtocolDialup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsProtocolDialup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsProtocolDialup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsProtocolDialup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsProtocolDialup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsProtocolDialup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsProtocolDialup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsProtocolDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsProtocolDialup * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsProtocolDialup * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsProtocolDialup * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Device )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Device )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceSpeed )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceSpeed )( 
            ISmsProtocolDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceSettings )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceSettings )( 
            ISmsProtocolDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceInitString )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceInitString )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceFlowControl )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceFlowControl )( 
            ISmsProtocolDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DialMode )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DialMode )( 
            ISmsProtocolDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderDialString )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderDialString )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPassword )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPassword )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderType )( 
            ISmsProtocolDialup * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            ISmsProtocolDialup * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            ISmsProtocolDialup * This,
            LONG lIndex,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISmsProtocolDialup * This,
            VARIANT *pMessage);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            ISmsProtocolDialup * This,
            BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            ISmsProtocolDialup * This,
            BSTR bstrFileName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmsProtocolDialup * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISmsProtocolDialupVtbl;

    interface ISmsProtocolDialup
    {
        CONST_VTBL struct ISmsProtocolDialupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsProtocolDialup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsProtocolDialup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsProtocolDialup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsProtocolDialup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsProtocolDialup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsProtocolDialup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsProtocolDialup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsProtocolDialup_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsProtocolDialup_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsProtocolDialup_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsProtocolDialup_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsProtocolDialup_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsProtocolDialup_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define ISmsProtocolDialup_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define ISmsProtocolDialup_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define ISmsProtocolDialup_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define ISmsProtocolDialup_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsProtocolDialup_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsProtocolDialup_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsProtocolDialup_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsProtocolDialup_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsProtocolDialup_get_Device(This,pVal)	\
    ( (This)->lpVtbl -> get_Device(This,pVal) ) 

#define ISmsProtocolDialup_put_Device(This,newVal)	\
    ( (This)->lpVtbl -> put_Device(This,newVal) ) 

#define ISmsProtocolDialup_get_DeviceSpeed(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceSpeed(This,pVal) ) 

#define ISmsProtocolDialup_put_DeviceSpeed(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceSpeed(This,newVal) ) 

#define ISmsProtocolDialup_get_DeviceSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceSettings(This,pVal) ) 

#define ISmsProtocolDialup_put_DeviceSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceSettings(This,newVal) ) 

#define ISmsProtocolDialup_get_DeviceInitString(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceInitString(This,pVal) ) 

#define ISmsProtocolDialup_put_DeviceInitString(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceInitString(This,newVal) ) 

#define ISmsProtocolDialup_get_DeviceFlowControl(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceFlowControl(This,pVal) ) 

#define ISmsProtocolDialup_put_DeviceFlowControl(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceFlowControl(This,newVal) ) 

#define ISmsProtocolDialup_get_DialMode(This,pVal)	\
    ( (This)->lpVtbl -> get_DialMode(This,pVal) ) 

#define ISmsProtocolDialup_put_DialMode(This,newVal)	\
    ( (This)->lpVtbl -> put_DialMode(This,newVal) ) 

#define ISmsProtocolDialup_get_ProviderDialString(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderDialString(This,pVal) ) 

#define ISmsProtocolDialup_put_ProviderDialString(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderDialString(This,newVal) ) 

#define ISmsProtocolDialup_get_ProviderPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderPassword(This,pVal) ) 

#define ISmsProtocolDialup_put_ProviderPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPassword(This,newVal) ) 

#define ISmsProtocolDialup_get_ProviderType(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderType(This,pVal) ) 

#define ISmsProtocolDialup_put_ProviderType(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderType(This,newVal) ) 

#define ISmsProtocolDialup_get_ProviderResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,pVal) ) 

#define ISmsProtocolDialup_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define ISmsProtocolDialup_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define ISmsProtocolDialup_GetDeviceCount(This,pVal)	\
    ( (This)->lpVtbl -> GetDeviceCount(This,pVal) ) 

#define ISmsProtocolDialup_GetDevice(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> GetDevice(This,lIndex,pVal) ) 

#define ISmsProtocolDialup_Send(This,pMessage)	\
    ( (This)->lpVtbl -> Send(This,pMessage) ) 

#define ISmsProtocolDialup_ProviderLoadConfig(This,bstrFileName)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,bstrFileName) ) 

#define ISmsProtocolDialup_ProviderSaveConfig(This,bstrFileName)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,bstrFileName) ) 

#define ISmsProtocolDialup_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsProtocolDialup_INTERFACE_DEFINED__ */


#ifndef __IPagerProtocolSnpp_INTERFACE_DEFINED__
#define __IPagerProtocolSnpp_INTERFACE_DEFINED__

/* interface IPagerProtocolSnpp */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPagerProtocolSnpp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AAFC490C-6EFB-42E5-8267-7BE9FB2ACF8F")
    IPagerProtocolSnpp : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerTimeout( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerTimeout( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pVariant) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPagerProtocolSnppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPagerProtocolSnpp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPagerProtocolSnpp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPagerProtocolSnpp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPagerProtocolSnpp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPagerProtocolSnpp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPagerProtocolSnpp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPagerProtocolSnpp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IPagerProtocolSnpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IPagerProtocolSnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IPagerProtocolSnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IPagerProtocolSnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IPagerProtocolSnpp * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IPagerProtocolSnpp * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IPagerProtocolSnpp * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IPagerProtocolSnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerPort )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerPort )( 
            IPagerProtocolSnpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerTimeout )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerTimeout )( 
            IPagerProtocolSnpp * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPassword )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPassword )( 
            IPagerProtocolSnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            IPagerProtocolSnpp * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IPagerProtocolSnpp * This,
            VARIANT *pVariant);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IPagerProtocolSnpp * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IPagerProtocolSnppVtbl;

    interface IPagerProtocolSnpp
    {
        CONST_VTBL struct IPagerProtocolSnppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPagerProtocolSnpp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPagerProtocolSnpp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPagerProtocolSnpp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPagerProtocolSnpp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPagerProtocolSnpp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPagerProtocolSnpp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPagerProtocolSnpp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPagerProtocolSnpp_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IPagerProtocolSnpp_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IPagerProtocolSnpp_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IPagerProtocolSnpp_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IPagerProtocolSnpp_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IPagerProtocolSnpp_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IPagerProtocolSnpp_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IPagerProtocolSnpp_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IPagerProtocolSnpp_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IPagerProtocolSnpp_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IPagerProtocolSnpp_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IPagerProtocolSnpp_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define IPagerProtocolSnpp_get_Server(This,pVal)	\
    ( (This)->lpVtbl -> get_Server(This,pVal) ) 

#define IPagerProtocolSnpp_put_Server(This,newVal)	\
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IPagerProtocolSnpp_get_ServerPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerPort(This,pVal) ) 

#define IPagerProtocolSnpp_put_ServerPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerPort(This,newVal) ) 

#define IPagerProtocolSnpp_get_ServerTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_ServerTimeout(This,pVal) ) 

#define IPagerProtocolSnpp_put_ServerTimeout(This,newVal)	\
    ( (This)->lpVtbl -> put_ServerTimeout(This,newVal) ) 

#define IPagerProtocolSnpp_get_ProviderPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderPassword(This,pVal) ) 

#define IPagerProtocolSnpp_put_ProviderPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPassword(This,newVal) ) 

#define IPagerProtocolSnpp_get_ProviderResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,pVal) ) 

#define IPagerProtocolSnpp_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define IPagerProtocolSnpp_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define IPagerProtocolSnpp_Send(This,pVariant)	\
    ( (This)->lpVtbl -> Send(This,pVariant) ) 

#define IPagerProtocolSnpp_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPagerProtocolSnpp_INTERFACE_DEFINED__ */


#ifndef __ISmsDataRingtone_INTERFACE_DEFINED__
#define __ISmsDataRingtone_INTERFACE_DEFINED__

/* interface ISmsDataRingtone */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDataRingtone;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("635FA587-04B6-4176-86E6-A6E6D6EE13D8")
    ISmsDataRingtone : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadRTTTL( 
            BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDataRingtoneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDataRingtone * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDataRingtone * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDataRingtone * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDataRingtone * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDataRingtone * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDataRingtone * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDataRingtone * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsDataRingtone * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsDataRingtone * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsDataRingtone * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsDataRingtone * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsDataRingtone * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsDataRingtone * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsDataRingtone * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsDataRingtone * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsDataRingtone * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsDataRingtone * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            ISmsDataRingtone * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadRTTTL )( 
            ISmsDataRingtone * This,
            BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ISmsDataRingtone * This);
        
        END_INTERFACE
    } ISmsDataRingtoneVtbl;

    interface ISmsDataRingtone
    {
        CONST_VTBL struct ISmsDataRingtoneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDataRingtone_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDataRingtone_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDataRingtone_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDataRingtone_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDataRingtone_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDataRingtone_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDataRingtone_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDataRingtone_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsDataRingtone_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsDataRingtone_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsDataRingtone_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsDataRingtone_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsDataRingtone_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsDataRingtone_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsDataRingtone_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsDataRingtone_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsDataRingtone_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsDataRingtone_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define ISmsDataRingtone_LoadRTTTL(This,bstrFileName)	\
    ( (This)->lpVtbl -> LoadRTTTL(This,bstrFileName) ) 

#define ISmsDataRingtone_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDataRingtone_INTERFACE_DEFINED__ */


#ifndef __ISmsDataPicture_INTERFACE_DEFINED__
#define __ISmsDataPicture_INTERFACE_DEFINED__

/* interface ISmsDataPicture */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDataPicture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A00B602-894E-4CA3-92EC-5921F29E302B")
    ISmsDataPicture : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PictureType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PictureType( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CountryCode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NetworkCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NetworkCode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDataPictureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDataPicture * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDataPicture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDataPicture * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDataPicture * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDataPicture * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDataPicture * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDataPicture * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsDataPicture * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsDataPicture * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsDataPicture * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsDataPicture * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsDataPicture * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsDataPicture * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsDataPicture * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PictureType )( 
            ISmsDataPicture * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PictureType )( 
            ISmsDataPicture * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapFile )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapFile )( 
            ISmsDataPicture * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ISmsDataPicture * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CountryCode )( 
            ISmsDataPicture * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NetworkCode )( 
            ISmsDataPicture * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NetworkCode )( 
            ISmsDataPicture * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISmsDataPicture * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ISmsDataPicture * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmsDataPicture * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISmsDataPictureVtbl;

    interface ISmsDataPicture
    {
        CONST_VTBL struct ISmsDataPictureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDataPicture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDataPicture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDataPicture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDataPicture_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDataPicture_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDataPicture_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDataPicture_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDataPicture_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsDataPicture_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsDataPicture_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsDataPicture_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsDataPicture_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsDataPicture_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsDataPicture_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsDataPicture_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsDataPicture_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsDataPicture_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsDataPicture_get_PictureType(This,pVal)	\
    ( (This)->lpVtbl -> get_PictureType(This,pVal) ) 

#define ISmsDataPicture_put_PictureType(This,newVal)	\
    ( (This)->lpVtbl -> put_PictureType(This,newVal) ) 

#define ISmsDataPicture_get_BitmapFile(This,pVal)	\
    ( (This)->lpVtbl -> get_BitmapFile(This,pVal) ) 

#define ISmsDataPicture_put_BitmapFile(This,newVal)	\
    ( (This)->lpVtbl -> put_BitmapFile(This,newVal) ) 

#define ISmsDataPicture_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ISmsDataPicture_put_CountryCode(This,newVal)	\
    ( (This)->lpVtbl -> put_CountryCode(This,newVal) ) 

#define ISmsDataPicture_get_NetworkCode(This,pVal)	\
    ( (This)->lpVtbl -> get_NetworkCode(This,pVal) ) 

#define ISmsDataPicture_put_NetworkCode(This,newVal)	\
    ( (This)->lpVtbl -> put_NetworkCode(This,newVal) ) 

#define ISmsDataPicture_get_Text(This,pVal)	\
    ( (This)->lpVtbl -> get_Text(This,pVal) ) 

#define ISmsDataPicture_put_Text(This,newVal)	\
    ( (This)->lpVtbl -> put_Text(This,newVal) ) 

#define ISmsDataPicture_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define ISmsDataPicture_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define ISmsDataPicture_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDataPicture_INTERFACE_DEFINED__ */


#ifndef __ISmsDataWapBookmark_INTERFACE_DEFINED__
#define __ISmsDataWapBookmark_INTERFACE_DEFINED__

/* interface ISmsDataWapBookmark */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDataWapBookmark;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97288A28-A8CE-4175-8E0B-75F0AEF9E489")
    ISmsDataWapBookmark : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URL( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDataWapBookmarkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDataWapBookmark * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDataWapBookmark * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDataWapBookmark * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDataWapBookmark * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDataWapBookmark * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDataWapBookmark * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDataWapBookmark * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsDataWapBookmark * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsDataWapBookmark * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsDataWapBookmark * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsDataWapBookmark * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsDataWapBookmark * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsDataWapBookmark * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ISmsDataWapBookmark * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            ISmsDataWapBookmark * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            ISmsDataWapBookmark * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ISmsDataWapBookmark * This);
        
        END_INTERFACE
    } ISmsDataWapBookmarkVtbl;

    interface ISmsDataWapBookmark
    {
        CONST_VTBL struct ISmsDataWapBookmarkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDataWapBookmark_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDataWapBookmark_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDataWapBookmark_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDataWapBookmark_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDataWapBookmark_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDataWapBookmark_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDataWapBookmark_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDataWapBookmark_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsDataWapBookmark_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsDataWapBookmark_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsDataWapBookmark_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsDataWapBookmark_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsDataWapBookmark_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsDataWapBookmark_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsDataWapBookmark_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsDataWapBookmark_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsDataWapBookmark_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsDataWapBookmark_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define ISmsDataWapBookmark_put_Description(This,newVal)	\
    ( (This)->lpVtbl -> put_Description(This,newVal) ) 

#define ISmsDataWapBookmark_get_URL(This,pVal)	\
    ( (This)->lpVtbl -> get_URL(This,pVal) ) 

#define ISmsDataWapBookmark_put_URL(This,newVal)	\
    ( (This)->lpVtbl -> put_URL(This,newVal) ) 

#define ISmsDataWapBookmark_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define ISmsDataWapBookmark_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDataWapBookmark_INTERFACE_DEFINED__ */


#ifndef __ISmsDataWapPush_INTERFACE_DEFINED__
#define __ISmsDataWapPush_INTERFACE_DEFINED__

/* interface ISmsDataWapPush */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDataWapPush;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51052D1C-80F1-4FCE-A458-A1CD8BA753CA")
    ISmsDataWapPush : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SignalReference( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SignalReference( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SignalAction( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SignalAction( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URL( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionType( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExecuteAction( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ExecuteAction( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDataWapPushVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDataWapPush * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDataWapPush * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDataWapPush * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDataWapPush * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDataWapPush * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDataWapPush * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDataWapPush * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsDataWapPush * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsDataWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsDataWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsDataWapPush * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsDataWapPush * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsDataWapPush * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalReference )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalReference )( 
            ISmsDataWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalAction )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalAction )( 
            ISmsDataWapPush * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ISmsDataWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            ISmsDataWapPush * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionType )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionType )( 
            ISmsDataWapPush * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExecuteAction )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExecuteAction )( 
            ISmsDataWapPush * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            ISmsDataWapPush * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ISmsDataWapPush * This);
        
        END_INTERFACE
    } ISmsDataWapPushVtbl;

    interface ISmsDataWapPush
    {
        CONST_VTBL struct ISmsDataWapPushVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDataWapPush_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDataWapPush_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDataWapPush_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDataWapPush_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDataWapPush_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDataWapPush_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDataWapPush_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDataWapPush_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsDataWapPush_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsDataWapPush_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsDataWapPush_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsDataWapPush_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsDataWapPush_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsDataWapPush_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsDataWapPush_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsDataWapPush_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsDataWapPush_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsDataWapPush_get_SignalReference(This,pVal)	\
    ( (This)->lpVtbl -> get_SignalReference(This,pVal) ) 

#define ISmsDataWapPush_put_SignalReference(This,newVal)	\
    ( (This)->lpVtbl -> put_SignalReference(This,newVal) ) 

#define ISmsDataWapPush_get_SignalAction(This,pVal)	\
    ( (This)->lpVtbl -> get_SignalAction(This,pVal) ) 

#define ISmsDataWapPush_put_SignalAction(This,newVal)	\
    ( (This)->lpVtbl -> put_SignalAction(This,newVal) ) 

#define ISmsDataWapPush_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define ISmsDataWapPush_put_Description(This,newVal)	\
    ( (This)->lpVtbl -> put_Description(This,newVal) ) 

#define ISmsDataWapPush_get_URL(This,pVal)	\
    ( (This)->lpVtbl -> get_URL(This,pVal) ) 

#define ISmsDataWapPush_put_URL(This,newVal)	\
    ( (This)->lpVtbl -> put_URL(This,newVal) ) 

#define ISmsDataWapPush_get_ConnectionType(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnectionType(This,pVal) ) 

#define ISmsDataWapPush_put_ConnectionType(This,newVal)	\
    ( (This)->lpVtbl -> put_ConnectionType(This,newVal) ) 

#define ISmsDataWapPush_get_ExecuteAction(This,pVal)	\
    ( (This)->lpVtbl -> get_ExecuteAction(This,pVal) ) 

#define ISmsDataWapPush_put_ExecuteAction(This,newVal)	\
    ( (This)->lpVtbl -> put_ExecuteAction(This,newVal) ) 

#define ISmsDataWapPush_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define ISmsDataWapPush_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDataWapPush_INTERFACE_DEFINED__ */


#ifndef __ISmsDeliveryStatus_INTERFACE_DEFINED__
#define __ISmsDeliveryStatus_INTERFACE_DEFINED__

/* interface ISmsDeliveryStatus */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDeliveryStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF9718BC-DDEC-44C7-B2E0-F9046E840AF7")
    ISmsDeliveryStatus : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusCode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusCode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusCompletedTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusCompletedTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusCompletedTimeSecs( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StatusCompletedTimeSecs( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsCompleted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IsCompleted( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StatusDescription( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderReference( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderReference( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDeliveryStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDeliveryStatus * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDeliveryStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDeliveryStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDeliveryStatus * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDeliveryStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDeliveryStatus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDeliveryStatus * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            ISmsDeliveryStatus * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCode )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusCode )( 
            ISmsDeliveryStatus * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCompletedTime )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusCompletedTime )( 
            ISmsDeliveryStatus * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusCompletedTimeSecs )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusCompletedTimeSecs )( 
            ISmsDeliveryStatus * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompleted )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsCompleted )( 
            ISmsDeliveryStatus * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusDescription )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderReference )( 
            ISmsDeliveryStatus * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderReference )( 
            ISmsDeliveryStatus * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISmsDeliveryStatusVtbl;

    interface ISmsDeliveryStatus
    {
        CONST_VTBL struct ISmsDeliveryStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDeliveryStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDeliveryStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDeliveryStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDeliveryStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDeliveryStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDeliveryStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDeliveryStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDeliveryStatus_get_Status(This,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,pVal) ) 

#define ISmsDeliveryStatus_put_Status(This,newVal)	\
    ( (This)->lpVtbl -> put_Status(This,newVal) ) 

#define ISmsDeliveryStatus_get_StatusCode(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusCode(This,pVal) ) 

#define ISmsDeliveryStatus_put_StatusCode(This,newVal)	\
    ( (This)->lpVtbl -> put_StatusCode(This,newVal) ) 

#define ISmsDeliveryStatus_get_StatusCompletedTime(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusCompletedTime(This,pVal) ) 

#define ISmsDeliveryStatus_put_StatusCompletedTime(This,newVal)	\
    ( (This)->lpVtbl -> put_StatusCompletedTime(This,newVal) ) 

#define ISmsDeliveryStatus_get_StatusCompletedTimeSecs(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusCompletedTimeSecs(This,pVal) ) 

#define ISmsDeliveryStatus_put_StatusCompletedTimeSecs(This,newVal)	\
    ( (This)->lpVtbl -> put_StatusCompletedTimeSecs(This,newVal) ) 

#define ISmsDeliveryStatus_get_IsCompleted(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCompleted(This,pVal) ) 

#define ISmsDeliveryStatus_put_IsCompleted(This,newVal)	\
    ( (This)->lpVtbl -> put_IsCompleted(This,newVal) ) 

#define ISmsDeliveryStatus_get_StatusDescription(This,pVal)	\
    ( (This)->lpVtbl -> get_StatusDescription(This,pVal) ) 

#define ISmsDeliveryStatus_get_ProviderReference(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderReference(This,pVal) ) 

#define ISmsDeliveryStatus_put_ProviderReference(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderReference(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDeliveryStatus_INTERFACE_DEFINED__ */


#ifndef __IPagerMessage_INTERFACE_DEFINED__
#define __IPagerMessage_INTERFACE_DEFINED__

/* interface IPagerMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPagerMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("990F731B-B2A8-45B8-9E39-8DF6FA8B85C1")
    IPagerMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Recipient( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Recipient( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Data( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPagerMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPagerMessage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPagerMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPagerMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPagerMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPagerMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPagerMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPagerMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IPagerMessage * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Recipient )( 
            IPagerMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Recipient )( 
            IPagerMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            IPagerMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Data )( 
            IPagerMessage * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IPagerMessageVtbl;

    interface IPagerMessage
    {
        CONST_VTBL struct IPagerMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPagerMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPagerMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPagerMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPagerMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPagerMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPagerMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPagerMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPagerMessage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IPagerMessage_get_Recipient(This,pVal)	\
    ( (This)->lpVtbl -> get_Recipient(This,pVal) ) 

#define IPagerMessage_put_Recipient(This,newVal)	\
    ( (This)->lpVtbl -> put_Recipient(This,newVal) ) 

#define IPagerMessage_get_Data(This,pVal)	\
    ( (This)->lpVtbl -> get_Data(This,pVal) ) 

#define IPagerMessage_put_Data(This,newVal)	\
    ( (This)->lpVtbl -> put_Data(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPagerMessage_INTERFACE_DEFINED__ */


#ifndef __IMmsProtocolMm1_INTERFACE_DEFINED__
#define __IMmsProtocolMm1_INTERFACE_DEFINED__

/* interface IMmsProtocolMm1 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsProtocolMm1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B87BF35-D56F-42A8-8D23-8631953DBA68")
    IMmsProtocolMm1 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Device( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Device( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderAPN( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderAPN( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderAPNAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderAPNAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderAPNPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderAPNPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderWAPGateway( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderWAPGateway( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMMSC( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMMSC( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMessageSizeLimit( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMessageSizeLimit( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProvidersFolder( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDeviceCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDevice( 
            LONG lDevice,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR bstrFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR bstrFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnterPin( 
            BSTR bstrPinCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            BSTR bstrCommand,
            LONG lTimeout,
            /* [retval][out] */ BSTR *pbstrResponse) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Retrieve( 
            BSTR bstrContentLocation,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextMessage( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Receive( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountReceivedMessages( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetMessage( 
            LONG lIndex,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsProtocolMm1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsProtocolMm1 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsProtocolMm1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsProtocolMm1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsProtocolMm1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsProtocolMm1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsProtocolMm1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsProtocolMm1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IMmsProtocolMm1 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMmsProtocolMm1 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMmsProtocolMm1 * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMmsProtocolMm1 * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Device )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Device )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderAPN )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderAPN )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderAPNAccount )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderAPNAccount )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderAPNPassword )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderAPNPassword )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderWAPGateway )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderWAPGateway )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMMSC )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMMSC )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMessageSizeLimit )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMessageSizeLimit )( 
            IMmsProtocolMm1 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            IMmsProtocolMm1 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageId )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProvidersFolder )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMmsProtocolMm1 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMmsProtocolMm1 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IMmsProtocolMm1 * This,
            VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            IMmsProtocolMm1 * This,
            LONG lDevice,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            IMmsProtocolMm1 * This,
            BSTR bstrFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            IMmsProtocolMm1 * This,
            BSTR bstrFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnterPin )( 
            IMmsProtocolMm1 * This,
            BSTR bstrPinCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            IMmsProtocolMm1 * This,
            BSTR bstrCommand,
            LONG lTimeout,
            /* [retval][out] */ BSTR *pbstrResponse);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Retrieve )( 
            IMmsProtocolMm1 * This,
            BSTR bstrContentLocation,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstMessage )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMessage )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Receive )( 
            IMmsProtocolMm1 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountReceivedMessages )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetMessage )( 
            IMmsProtocolMm1 * This,
            LONG lIndex,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMmsProtocolMm1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMmsProtocolMm1Vtbl;

    interface IMmsProtocolMm1
    {
        CONST_VTBL struct IMmsProtocolMm1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsProtocolMm1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsProtocolMm1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsProtocolMm1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsProtocolMm1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsProtocolMm1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsProtocolMm1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsProtocolMm1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsProtocolMm1_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMmsProtocolMm1_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMmsProtocolMm1_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IMmsProtocolMm1_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IMmsProtocolMm1_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IMmsProtocolMm1_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IMmsProtocolMm1_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IMmsProtocolMm1_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define IMmsProtocolMm1_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define IMmsProtocolMm1_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IMmsProtocolMm1_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IMmsProtocolMm1_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMmsProtocolMm1_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IMmsProtocolMm1_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define IMmsProtocolMm1_put_Device(This,newVal)	\
    ( (This)->lpVtbl -> put_Device(This,newVal) ) 

#define IMmsProtocolMm1_get_Device(This,pVal)	\
    ( (This)->lpVtbl -> get_Device(This,pVal) ) 

#define IMmsProtocolMm1_get_ProviderAPN(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderAPN(This,pVal) ) 

#define IMmsProtocolMm1_put_ProviderAPN(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderAPN(This,newVal) ) 

#define IMmsProtocolMm1_get_ProviderAPNAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderAPNAccount(This,pVal) ) 

#define IMmsProtocolMm1_put_ProviderAPNAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderAPNAccount(This,newVal) ) 

#define IMmsProtocolMm1_get_ProviderAPNPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderAPNPassword(This,pVal) ) 

#define IMmsProtocolMm1_put_ProviderAPNPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderAPNPassword(This,newVal) ) 

#define IMmsProtocolMm1_get_ProviderWAPGateway(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderWAPGateway(This,pVal) ) 

#define IMmsProtocolMm1_put_ProviderWAPGateway(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderWAPGateway(This,newVal) ) 

#define IMmsProtocolMm1_get_ProviderMMSC(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMMSC(This,pVal) ) 

#define IMmsProtocolMm1_put_ProviderMMSC(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMMSC(This,newVal) ) 

#define IMmsProtocolMm1_get_ProviderMessageSizeLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMessageSizeLimit(This,pVal) ) 

#define IMmsProtocolMm1_put_ProviderMessageSizeLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMessageSizeLimit(This,newVal) ) 

#define IMmsProtocolMm1_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define IMmsProtocolMm1_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define IMmsProtocolMm1_get_ProviderResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,pVal) ) 

#define IMmsProtocolMm1_get_MessageId(This,pVal)	\
    ( (This)->lpVtbl -> get_MessageId(This,pVal) ) 

#define IMmsProtocolMm1_get_ProvidersFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ProvidersFolder(This,pVal) ) 

#define IMmsProtocolMm1_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMmsProtocolMm1_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMmsProtocolMm1_Send(This,pVal)	\
    ( (This)->lpVtbl -> Send(This,pVal) ) 

#define IMmsProtocolMm1_GetDeviceCount(This,pVal)	\
    ( (This)->lpVtbl -> GetDeviceCount(This,pVal) ) 

#define IMmsProtocolMm1_GetDevice(This,lDevice,pVal)	\
    ( (This)->lpVtbl -> GetDevice(This,lDevice,pVal) ) 

#define IMmsProtocolMm1_ProviderSaveConfig(This,bstrFile)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,bstrFile) ) 

#define IMmsProtocolMm1_ProviderLoadConfig(This,bstrFile)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,bstrFile) ) 

#define IMmsProtocolMm1_EnterPin(This,bstrPinCode)	\
    ( (This)->lpVtbl -> EnterPin(This,bstrPinCode) ) 

#define IMmsProtocolMm1_SendCommand(This,bstrCommand,lTimeout,pbstrResponse)	\
    ( (This)->lpVtbl -> SendCommand(This,bstrCommand,lTimeout,pbstrResponse) ) 

#define IMmsProtocolMm1_Retrieve(This,bstrContentLocation,pVal)	\
    ( (This)->lpVtbl -> Retrieve(This,bstrContentLocation,pVal) ) 

#define IMmsProtocolMm1_GetFirstMessage(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstMessage(This,pVal) ) 

#define IMmsProtocolMm1_GetNextMessage(This,pVal)	\
    ( (This)->lpVtbl -> GetNextMessage(This,pVal) ) 

#define IMmsProtocolMm1_Receive(This)	\
    ( (This)->lpVtbl -> Receive(This) ) 

#define IMmsProtocolMm1_CountReceivedMessages(This,pVal)	\
    ( (This)->lpVtbl -> CountReceivedMessages(This,pVal) ) 

#define IMmsProtocolMm1_GetMessage(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> GetMessage(This,lIndex,pVal) ) 

#define IMmsProtocolMm1_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsProtocolMm1_INTERFACE_DEFINED__ */


#ifndef __IMmsSlide_INTERFACE_DEFINED__
#define __IMmsSlide_INTERFACE_DEFINED__

/* interface IMmsSlide */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsSlide;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C97CA114-C43B-49D9-B077-41F7299C1A11")
    IMmsSlide : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sysClone( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddText( 
            BSTR bstrText) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddAttachment( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ VARIANT *pVal = 0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddAttachmentData( 
            BSTR FileName,
            /* [in] */ VARIANT *Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CountAttachments( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAttachmentName( 
            LONG lIndex,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveAttachment( 
            LONG lIndex,
            BSTR bstrFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTextCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetText( 
            LONG lIndex,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsSlideVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsSlide * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsSlide * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsSlide * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsSlide * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsSlide * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsSlide * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsSlide * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMmsSlide * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMmsSlide * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMmsSlide * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IMmsSlide * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IMmsSlide * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IMmsSlide * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IMmsSlide * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMmsSlide * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMmsSlide * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMmsSlide * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMmsSlide * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IMmsSlide * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IMmsSlide * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysClone )( 
            IMmsSlide * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IMmsSlide * This,
            BSTR bstrText);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachment )( 
            IMmsSlide * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddAttachmentData )( 
            IMmsSlide * This,
            BSTR FileName,
            /* [in] */ VARIANT *Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CountAttachments )( 
            IMmsSlide * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAttachmentName )( 
            IMmsSlide * This,
            LONG lIndex,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveAttachment )( 
            IMmsSlide * This,
            LONG lIndex,
            BSTR bstrFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTextCount )( 
            IMmsSlide * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IMmsSlide * This,
            LONG lIndex,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMmsSlide * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMmsSlideVtbl;

    interface IMmsSlide
    {
        CONST_VTBL struct IMmsSlideVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsSlide_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsSlide_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsSlide_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsSlide_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsSlide_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsSlide_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsSlide_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsSlide_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMmsSlide_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMmsSlide_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IMmsSlide_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IMmsSlide_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IMmsSlide_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IMmsSlide_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IMmsSlide_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMmsSlide_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IMmsSlide_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define IMmsSlide_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMmsSlide_get_Duration(This,pVal)	\
    ( (This)->lpVtbl -> get_Duration(This,pVal) ) 

#define IMmsSlide_put_Duration(This,newVal)	\
    ( (This)->lpVtbl -> put_Duration(This,newVal) ) 

#define IMmsSlide_get_sysClone(This,pVal)	\
    ( (This)->lpVtbl -> get_sysClone(This,pVal) ) 

#define IMmsSlide_AddText(This,bstrText)	\
    ( (This)->lpVtbl -> AddText(This,bstrText) ) 

#define IMmsSlide_AddAttachment(This,newVal,pVal)	\
    ( (This)->lpVtbl -> AddAttachment(This,newVal,pVal) ) 

#define IMmsSlide_AddAttachmentData(This,FileName,Data)	\
    ( (This)->lpVtbl -> AddAttachmentData(This,FileName,Data) ) 

#define IMmsSlide_CountAttachments(This,pVal)	\
    ( (This)->lpVtbl -> CountAttachments(This,pVal) ) 

#define IMmsSlide_GetAttachmentName(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> GetAttachmentName(This,lIndex,pVal) ) 

#define IMmsSlide_SaveAttachment(This,lIndex,bstrFileName)	\
    ( (This)->lpVtbl -> SaveAttachment(This,lIndex,bstrFileName) ) 

#define IMmsSlide_GetTextCount(This,pVal)	\
    ( (This)->lpVtbl -> GetTextCount(This,pVal) ) 

#define IMmsSlide_GetText(This,lIndex,pVal)	\
    ( (This)->lpVtbl -> GetText(This,lIndex,pVal) ) 

#define IMmsSlide_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsSlide_INTERFACE_DEFINED__ */


#ifndef __IMmsConstants_INTERFACE_DEFINED__
#define __IMmsConstants_INTERFACE_DEFINED__

/* interface IMmsConstants */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsConstants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B85A2092-FE47-452A-AFC8-8F12C5BDCDE3")
    IMmsConstants : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_PERSONAL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_ADVERTISEMENT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_INFORMATIONAL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_CLASS_AUTO( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_PRIORITY_LOW( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_PRIORITY_NORMAL( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_PRIORITY_HIGH( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_DRM_FORWARDLOCK( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_DRM_PLAY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_DRM_DISPLAY( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_DRM_EXECUTE( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_DRM_PRINT( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_MM7VARIATION_3GPP( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_MM7VARIATION_ERICSSON( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_MM7VARIATION_PAP( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_PROTOCOL_MM1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_PROTOCOL_MM4( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_PROTOCOL_MM7( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_2_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_3_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_4_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_5_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_6_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_7_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_8_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_9_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_10_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_5_11_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_0_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_1_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_2_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_3_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_4_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_5_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_6_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_7_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL5_MM7_1_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL5_MM7_1_1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL5_MM7_1_2( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL5_MM7_1_3( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL5_MM7_1_4( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL5_MM7_1_5( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL6_MM7_1_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL6_MM7_1_1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL6_MM7_1_2( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL6_MM7_1_3( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_MM1FILE_MSENDREQ( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_MM1FILE_MRETRIEVECONF( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_RECIPIENT_TO( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_RECIPIENT_CC( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_RECIPIENT_BCC( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_VERSION_6_8_0( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_asMMS_SCHEMA_REL6_MM7_1_4( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsConstantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsConstants * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsConstants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsConstants * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsConstants * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsConstants * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsConstants * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsConstants * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_PERSONAL )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_ADVERTISEMENT )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_INFORMATIONAL )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_CLASS_AUTO )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_PRIORITY_LOW )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_PRIORITY_NORMAL )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_PRIORITY_HIGH )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_DRM_FORWARDLOCK )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_DRM_PLAY )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_DRM_DISPLAY )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_DRM_EXECUTE )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_DRM_PRINT )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_MM7VARIATION_3GPP )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_MM7VARIATION_ERICSSON )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_MM7VARIATION_PAP )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_PROTOCOL_MM1 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_PROTOCOL_MM4 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_PROTOCOL_MM7 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_2_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_3_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_4_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_5_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_6_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_7_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_8_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_9_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_10_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_5_11_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_0_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_1_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_2_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_3_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_4_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_5_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_6_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_7_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL5_MM7_1_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL5_MM7_1_1 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL5_MM7_1_2 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL5_MM7_1_3 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL5_MM7_1_4 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL5_MM7_1_5 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL6_MM7_1_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL6_MM7_1_1 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL6_MM7_1_2 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL6_MM7_1_3 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_MM1FILE_MSENDREQ )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_MM1FILE_MRETRIEVECONF )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_RECIPIENT_TO )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_RECIPIENT_CC )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_RECIPIENT_BCC )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_VERSION_6_8_0 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_asMMS_SCHEMA_REL6_MM7_1_4 )( 
            IMmsConstants * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IMmsConstantsVtbl;

    interface IMmsConstants
    {
        CONST_VTBL struct IMmsConstantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsConstants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsConstants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsConstants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsConstants_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsConstants_get_asMMS_CLASS_PERSONAL(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_PERSONAL(This,pVal) ) 

#define IMmsConstants_get_asMMS_CLASS_ADVERTISEMENT(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_ADVERTISEMENT(This,pVal) ) 

#define IMmsConstants_get_asMMS_CLASS_INFORMATIONAL(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_INFORMATIONAL(This,pVal) ) 

#define IMmsConstants_get_asMMS_CLASS_AUTO(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_CLASS_AUTO(This,pVal) ) 

#define IMmsConstants_get_asMMS_PRIORITY_LOW(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_PRIORITY_LOW(This,pVal) ) 

#define IMmsConstants_get_asMMS_PRIORITY_NORMAL(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_PRIORITY_NORMAL(This,pVal) ) 

#define IMmsConstants_get_asMMS_PRIORITY_HIGH(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_PRIORITY_HIGH(This,pVal) ) 

#define IMmsConstants_get_asMMS_DRM_FORWARDLOCK(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_DRM_FORWARDLOCK(This,pVal) ) 

#define IMmsConstants_get_asMMS_DRM_PLAY(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_DRM_PLAY(This,pVal) ) 

#define IMmsConstants_get_asMMS_DRM_DISPLAY(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_DRM_DISPLAY(This,pVal) ) 

#define IMmsConstants_get_asMMS_DRM_EXECUTE(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_DRM_EXECUTE(This,pVal) ) 

#define IMmsConstants_get_asMMS_DRM_PRINT(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_DRM_PRINT(This,pVal) ) 

#define IMmsConstants_get_asMMS_MM7VARIATION_3GPP(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_MM7VARIATION_3GPP(This,pVal) ) 

#define IMmsConstants_get_asMMS_MM7VARIATION_ERICSSON(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_MM7VARIATION_ERICSSON(This,pVal) ) 

#define IMmsConstants_get_asMMS_MM7VARIATION_PAP(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_MM7VARIATION_PAP(This,pVal) ) 

#define IMmsConstants_get_asMMS_PROTOCOL_MM1(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_PROTOCOL_MM1(This,pVal) ) 

#define IMmsConstants_get_asMMS_PROTOCOL_MM4(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_PROTOCOL_MM4(This,pVal) ) 

#define IMmsConstants_get_asMMS_PROTOCOL_MM7(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_PROTOCOL_MM7(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_2_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_2_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_3_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_3_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_4_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_4_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_5_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_5_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_6_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_6_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_7_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_7_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_8_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_8_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_9_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_9_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_10_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_10_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_5_11_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_5_11_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_0_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_0_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_1_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_1_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_2_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_2_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_3_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_3_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_4_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_4_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_5_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_5_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_6_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_6_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_7_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_7_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL5_MM7_1_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL5_MM7_1_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL5_MM7_1_1(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL5_MM7_1_1(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL5_MM7_1_2(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL5_MM7_1_2(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL5_MM7_1_3(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL5_MM7_1_3(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL5_MM7_1_4(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL5_MM7_1_4(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL5_MM7_1_5(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL5_MM7_1_5(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL6_MM7_1_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL6_MM7_1_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL6_MM7_1_1(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL6_MM7_1_1(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL6_MM7_1_2(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL6_MM7_1_2(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL6_MM7_1_3(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL6_MM7_1_3(This,pVal) ) 

#define IMmsConstants_get_asMMS_MM1FILE_MSENDREQ(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_MM1FILE_MSENDREQ(This,pVal) ) 

#define IMmsConstants_get_asMMS_MM1FILE_MRETRIEVECONF(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_MM1FILE_MRETRIEVECONF(This,pVal) ) 

#define IMmsConstants_get_asMMS_RECIPIENT_TO(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_RECIPIENT_TO(This,pVal) ) 

#define IMmsConstants_get_asMMS_RECIPIENT_CC(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_RECIPIENT_CC(This,pVal) ) 

#define IMmsConstants_get_asMMS_RECIPIENT_BCC(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_RECIPIENT_BCC(This,pVal) ) 

#define IMmsConstants_get_asMMS_VERSION_6_8_0(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_VERSION_6_8_0(This,pVal) ) 

#define IMmsConstants_get_asMMS_SCHEMA_REL6_MM7_1_4(This,pVal)	\
    ( (This)->lpVtbl -> get_asMMS_SCHEMA_REL6_MM7_1_4(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsConstants_INTERFACE_DEFINED__ */


#ifndef __IMmsPermission_INTERFACE_DEFINED__
#define __IMmsPermission_INTERFACE_DEFINED__

/* interface IMmsPermission */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsPermission;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8FABC032-B5CD-4405-85E5-98A8DDEBFC3F")
    IMmsPermission : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Operation( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Operation( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Times( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Times( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Days( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Days( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BeginDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BeginDate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EndDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EndDate( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsPermissionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsPermission * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsPermission * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsPermission * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsPermission * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsPermission * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsPermission * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsPermission * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMmsPermission * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Operation )( 
            IMmsPermission * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Operation )( 
            IMmsPermission * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Times )( 
            IMmsPermission * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Times )( 
            IMmsPermission * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Days )( 
            IMmsPermission * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Days )( 
            IMmsPermission * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginDate )( 
            IMmsPermission * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginDate )( 
            IMmsPermission * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndDate )( 
            IMmsPermission * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndDate )( 
            IMmsPermission * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IMmsPermissionVtbl;

    interface IMmsPermission
    {
        CONST_VTBL struct IMmsPermissionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsPermission_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsPermission_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsPermission_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsPermission_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsPermission_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsPermission_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsPermission_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsPermission_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMmsPermission_get_Operation(This,pVal)	\
    ( (This)->lpVtbl -> get_Operation(This,pVal) ) 

#define IMmsPermission_put_Operation(This,newVal)	\
    ( (This)->lpVtbl -> put_Operation(This,newVal) ) 

#define IMmsPermission_get_Times(This,pVal)	\
    ( (This)->lpVtbl -> get_Times(This,pVal) ) 

#define IMmsPermission_put_Times(This,newVal)	\
    ( (This)->lpVtbl -> put_Times(This,newVal) ) 

#define IMmsPermission_get_Days(This,pVal)	\
    ( (This)->lpVtbl -> get_Days(This,pVal) ) 

#define IMmsPermission_put_Days(This,newVal)	\
    ( (This)->lpVtbl -> put_Days(This,newVal) ) 

#define IMmsPermission_get_BeginDate(This,pVal)	\
    ( (This)->lpVtbl -> get_BeginDate(This,pVal) ) 

#define IMmsPermission_put_BeginDate(This,newVal)	\
    ( (This)->lpVtbl -> put_BeginDate(This,newVal) ) 

#define IMmsPermission_get_EndDate(This,pVal)	\
    ( (This)->lpVtbl -> get_EndDate(This,pVal) ) 

#define IMmsPermission_put_EndDate(This,newVal)	\
    ( (This)->lpVtbl -> put_EndDate(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsPermission_INTERFACE_DEFINED__ */


#ifndef __IMmsProtocolMm4_INTERFACE_DEFINED__
#define __IMmsProtocolMm4_INTERFACE_DEFINED__

/* interface IMmsProtocolMm4 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsProtocolMm4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A233DA9D-E345-4909-9D95-DB9ACDEF7D21")
    IMmsProtocolMm4 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderHost( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderHost( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPort( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPort( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderDomain( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderDomain( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMM4Format( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMM4Format( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMM4Version( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMM4Version( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMessageSizeLimit( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMessageSizeLimit( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR bstrConfigFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR bstrConfigFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsProtocolMm4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsProtocolMm4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsProtocolMm4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsProtocolMm4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsProtocolMm4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsProtocolMm4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsProtocolMm4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsProtocolMm4 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IMmsProtocolMm4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMmsProtocolMm4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMmsProtocolMm4 * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMmsProtocolMm4 * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderHost )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderHost )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPort )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPort )( 
            IMmsProtocolMm4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderAccount )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderAccount )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderPassword )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderPassword )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderDomain )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderDomain )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMM4Format )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMM4Format )( 
            IMmsProtocolMm4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMM4Version )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMM4Version )( 
            IMmsProtocolMm4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            IMmsProtocolMm4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMessageSizeLimit )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMessageSizeLimit )( 
            IMmsProtocolMm4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IMmsProtocolMm4 * This,
            VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            IMmsProtocolMm4 * This,
            BSTR bstrConfigFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            IMmsProtocolMm4 * This,
            BSTR bstrConfigFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMmsProtocolMm4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMmsProtocolMm4Vtbl;

    interface IMmsProtocolMm4
    {
        CONST_VTBL struct IMmsProtocolMm4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsProtocolMm4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsProtocolMm4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsProtocolMm4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsProtocolMm4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsProtocolMm4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsProtocolMm4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsProtocolMm4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsProtocolMm4_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMmsProtocolMm4_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMmsProtocolMm4_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IMmsProtocolMm4_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IMmsProtocolMm4_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IMmsProtocolMm4_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IMmsProtocolMm4_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IMmsProtocolMm4_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define IMmsProtocolMm4_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define IMmsProtocolMm4_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IMmsProtocolMm4_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IMmsProtocolMm4_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMmsProtocolMm4_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IMmsProtocolMm4_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define IMmsProtocolMm4_get_ProviderHost(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderHost(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderHost(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderHost(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderPort(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderPort(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPort(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderAccount(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderAccount(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderPassword(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderPassword(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderDomain(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderDomain(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderDomain(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderDomain(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderMM4Format(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMM4Format(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderMM4Format(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMM4Format(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderMM4Version(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMM4Version(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderMM4Version(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMM4Version(This,newVal) ) 

#define IMmsProtocolMm4_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define IMmsProtocolMm4_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderMessageSizeLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMessageSizeLimit(This,pVal) ) 

#define IMmsProtocolMm4_put_ProviderMessageSizeLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMessageSizeLimit(This,newVal) ) 

#define IMmsProtocolMm4_get_ProviderResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,pVal) ) 

#define IMmsProtocolMm4_Send(This,pVal)	\
    ( (This)->lpVtbl -> Send(This,pVal) ) 

#define IMmsProtocolMm4_ProviderLoadConfig(This,bstrConfigFile)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,bstrConfigFile) ) 

#define IMmsProtocolMm4_ProviderSaveConfig(This,bstrConfigFile)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,bstrConfigFile) ) 

#define IMmsProtocolMm4_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsProtocolMm4_INTERFACE_DEFINED__ */


#ifndef __IMmsProtocolMm7_INTERFACE_DEFINED__
#define __IMmsProtocolMm7_INTERFACE_DEFINED__

/* interface IMmsProtocolMm7 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsProtocolMm7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA67C0B2-CB9F-4D3F-B50F-A7CE1CEF346A")
    IMmsProtocolMm7 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivityFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivityFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderURL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderURL( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderWebAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderWebAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderWebPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderWebPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyServer( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAccount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAccount( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyPassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyPassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderUseSSL( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderUseSSL( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderVASID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderVASID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderVASPID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderVASPID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderServiceCode( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderServiceCode( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMM7Version( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMM7Version( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMM7Schema( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMM7Schema( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProvidersFolder( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMM7Variation( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMM7Variation( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderMessageSizeLimit( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderMessageSizeLimit( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedSettings( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Send( 
            VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderLoadConfig( 
            BSTR bstrFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProviderSaveConfig( 
            BSTR bstrFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsProtocolMm7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsProtocolMm7 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsProtocolMm7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsProtocolMm7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsProtocolMm7 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsProtocolMm7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsProtocolMm7 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsProtocolMm7 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IMmsProtocolMm7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogFile )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogFile )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivityFile )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivityFile )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMmsProtocolMm7 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMmsProtocolMm7 * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMmsProtocolMm7 * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderURL )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderURL )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderWebAccount )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderWebAccount )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderWebPassword )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderWebPassword )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyServer )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyServer )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyAccount )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyAccount )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyPassword )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyPassword )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderResponse )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageID )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderUseSSL )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderUseSSL )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderVASID )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderVASID )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderVASPID )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderVASPID )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderServiceCode )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderServiceCode )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMM7Version )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMM7Version )( 
            IMmsProtocolMm7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMM7Schema )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMM7Schema )( 
            IMmsProtocolMm7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProvidersFolder )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMM7Variation )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMM7Variation )( 
            IMmsProtocolMm7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderMessageSizeLimit )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderMessageSizeLimit )( 
            IMmsProtocolMm7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedSettings )( 
            IMmsProtocolMm7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Send )( 
            IMmsProtocolMm7 * This,
            VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderLoadConfig )( 
            IMmsProtocolMm7 * This,
            BSTR bstrFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProviderSaveConfig )( 
            IMmsProtocolMm7 * This,
            BSTR bstrFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMmsProtocolMm7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMmsProtocolMm7Vtbl;

    interface IMmsProtocolMm7
    {
        CONST_VTBL struct IMmsProtocolMm7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsProtocolMm7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsProtocolMm7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsProtocolMm7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsProtocolMm7_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsProtocolMm7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsProtocolMm7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsProtocolMm7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsProtocolMm7_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMmsProtocolMm7_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMmsProtocolMm7_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IMmsProtocolMm7_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IMmsProtocolMm7_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IMmsProtocolMm7_get_LogFile(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFile(This,pVal) ) 

#define IMmsProtocolMm7_put_LogFile(This,newVal)	\
    ( (This)->lpVtbl -> put_LogFile(This,newVal) ) 

#define IMmsProtocolMm7_get_ActivityFile(This,pVal)	\
    ( (This)->lpVtbl -> get_ActivityFile(This,pVal) ) 

#define IMmsProtocolMm7_put_ActivityFile(This,newVal)	\
    ( (This)->lpVtbl -> put_ActivityFile(This,newVal) ) 

#define IMmsProtocolMm7_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IMmsProtocolMm7_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IMmsProtocolMm7_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMmsProtocolMm7_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IMmsProtocolMm7_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define IMmsProtocolMm7_get_ProviderURL(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderURL(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderURL(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderURL(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderWebAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderWebAccount(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderWebAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderWebAccount(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderWebPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderWebPassword(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderWebPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderWebPassword(This,newVal) ) 

#define IMmsProtocolMm7_get_ProxyServer(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyServer(This,pVal) ) 

#define IMmsProtocolMm7_put_ProxyServer(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyServer(This,newVal) ) 

#define IMmsProtocolMm7_get_ProxyAccount(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyAccount(This,pVal) ) 

#define IMmsProtocolMm7_put_ProxyAccount(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyAccount(This,newVal) ) 

#define IMmsProtocolMm7_get_ProxyPassword(This,pVal)	\
    ( (This)->lpVtbl -> get_ProxyPassword(This,pVal) ) 

#define IMmsProtocolMm7_put_ProxyPassword(This,newVal)	\
    ( (This)->lpVtbl -> put_ProxyPassword(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderResponse(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderResponse(This,pVal) ) 

#define IMmsProtocolMm7_get_MessageID(This,pVal)	\
    ( (This)->lpVtbl -> get_MessageID(This,pVal) ) 

#define IMmsProtocolMm7_get_ProviderUseSSL(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderUseSSL(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderUseSSL(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderUseSSL(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderVASID(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderVASID(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderVASID(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderVASID(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderVASPID(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderVASPID(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderVASPID(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderVASPID(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderServiceCode(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderServiceCode(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderServiceCode(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderServiceCode(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderMM7Version(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMM7Version(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderMM7Version(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMM7Version(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderMM7Schema(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMM7Schema(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderMM7Schema(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMM7Schema(This,newVal) ) 

#define IMmsProtocolMm7_get_ProvidersFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ProvidersFolder(This,pVal) ) 

#define IMmsProtocolMm7_get_ProviderMM7Variation(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMM7Variation(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderMM7Variation(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMM7Variation(This,newVal) ) 

#define IMmsProtocolMm7_get_ProviderMessageSizeLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderMessageSizeLimit(This,pVal) ) 

#define IMmsProtocolMm7_put_ProviderMessageSizeLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_ProviderMessageSizeLimit(This,newVal) ) 

#define IMmsProtocolMm7_get_AdvancedSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedSettings(This,pVal) ) 

#define IMmsProtocolMm7_put_AdvancedSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedSettings(This,newVal) ) 

#define IMmsProtocolMm7_Send(This,pVal)	\
    ( (This)->lpVtbl -> Send(This,pVal) ) 

#define IMmsProtocolMm7_ProviderLoadConfig(This,bstrFile)	\
    ( (This)->lpVtbl -> ProviderLoadConfig(This,bstrFile) ) 

#define IMmsProtocolMm7_ProviderSaveConfig(This,bstrFile)	\
    ( (This)->lpVtbl -> ProviderSaveConfig(This,bstrFile) ) 

#define IMmsProtocolMm7_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsProtocolMm7_INTERFACE_DEFINED__ */


#ifndef __IMmsMessage_INTERFACE_DEFINED__
#define __IMmsMessage_INTERFACE_DEFINED__

/* interface IMmsMessage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMmsMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEBE8D74-8123-4D0C-A710-997AF5666166")
    IMmsMessage : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_From( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_From( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Class( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EncodedMessage( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestReadReceipt( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestReadReceipt( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestDeliveryReport( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RequestDeliveryReport( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Protocol( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Protocol( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TransactionId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TransactionId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sysBoundary( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_sysSettings( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveToFile( 
            /* [in] */ BSTR bstrFolder,
            /* [in] */ LONG lFormat) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EncodeMessage( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DecodeMessage( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddRecipient( 
            BSTR bstrRecipient,
            /* [defaultvalue][optional][in] */ LONG lType = 0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddSlide( 
            VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadFromFile( 
            BSTR bstrFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstSlide( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextSlide( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstRecipient( 
            LONG lType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextRecipient( 
            LONG lType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearRecipients( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadCustomSMIL( 
            BSTR bstrFile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMmsMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMmsMessage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMmsMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMmsMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMmsMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMmsMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMmsMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMmsMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IMmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            IMmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            IMmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            IMmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMmsMessage * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMmsMessage * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMmsMessage * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_From )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_From )( 
            IMmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            IMmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Class )( 
            IMmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IMmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IMmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            IMmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodedMessage )( 
            IMmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestReadReceipt )( 
            IMmsMessage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestReadReceipt )( 
            IMmsMessage * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestDeliveryReport )( 
            IMmsMessage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RequestDeliveryReport )( 
            IMmsMessage * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Protocol )( 
            IMmsMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Protocol )( 
            IMmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionId )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionId )( 
            IMmsMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sysBoundary )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_sysSettings )( 
            IMmsMessage * This,
            /* [in] */ LONG newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            IMmsMessage * This,
            /* [in] */ BSTR bstrFolder,
            /* [in] */ LONG lFormat);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EncodeMessage )( 
            IMmsMessage * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DecodeMessage )( 
            IMmsMessage * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddRecipient )( 
            IMmsMessage * This,
            BSTR bstrRecipient,
            /* [defaultvalue][optional][in] */ LONG lType);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddSlide )( 
            IMmsMessage * This,
            VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            IMmsMessage * This,
            BSTR bstrFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSlide )( 
            IMmsMessage * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextSlide )( 
            IMmsMessage * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstRecipient )( 
            IMmsMessage * This,
            LONG lType,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextRecipient )( 
            IMmsMessage * This,
            LONG lType,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearRecipients )( 
            IMmsMessage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadCustomSMIL )( 
            IMmsMessage * This,
            BSTR bstrFile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMmsMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMmsMessageVtbl;

    interface IMmsMessage
    {
        CONST_VTBL struct IMmsMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMmsMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMmsMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMmsMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMmsMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMmsMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMmsMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMmsMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMmsMessage_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define IMmsMessage_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMmsMessage_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define IMmsMessage_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IMmsMessage_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define IMmsMessage_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define IMmsMessage_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define IMmsMessage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMmsMessage_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define IMmsMessage_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define IMmsMessage_get_From(This,pVal)	\
    ( (This)->lpVtbl -> get_From(This,pVal) ) 

#define IMmsMessage_put_From(This,newVal)	\
    ( (This)->lpVtbl -> put_From(This,newVal) ) 

#define IMmsMessage_get_Class(This,pVal)	\
    ( (This)->lpVtbl -> get_Class(This,pVal) ) 

#define IMmsMessage_put_Class(This,newVal)	\
    ( (This)->lpVtbl -> put_Class(This,newVal) ) 

#define IMmsMessage_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define IMmsMessage_put_Priority(This,newVal)	\
    ( (This)->lpVtbl -> put_Priority(This,newVal) ) 

#define IMmsMessage_get_Subject(This,pVal)	\
    ( (This)->lpVtbl -> get_Subject(This,pVal) ) 

#define IMmsMessage_put_Subject(This,newVal)	\
    ( (This)->lpVtbl -> put_Subject(This,newVal) ) 

#define IMmsMessage_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define IMmsMessage_put_EncodedMessage(This,newVal)	\
    ( (This)->lpVtbl -> put_EncodedMessage(This,newVal) ) 

#define IMmsMessage_get_RequestReadReceipt(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestReadReceipt(This,pVal) ) 

#define IMmsMessage_put_RequestReadReceipt(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestReadReceipt(This,newVal) ) 

#define IMmsMessage_get_RequestDeliveryReport(This,pVal)	\
    ( (This)->lpVtbl -> get_RequestDeliveryReport(This,pVal) ) 

#define IMmsMessage_put_RequestDeliveryReport(This,newVal)	\
    ( (This)->lpVtbl -> put_RequestDeliveryReport(This,newVal) ) 

#define IMmsMessage_get_Protocol(This,pVal)	\
    ( (This)->lpVtbl -> get_Protocol(This,pVal) ) 

#define IMmsMessage_put_Protocol(This,newVal)	\
    ( (This)->lpVtbl -> put_Protocol(This,newVal) ) 

#define IMmsMessage_get_TransactionId(This,pVal)	\
    ( (This)->lpVtbl -> get_TransactionId(This,pVal) ) 

#define IMmsMessage_put_TransactionId(This,newVal)	\
    ( (This)->lpVtbl -> put_TransactionId(This,newVal) ) 

#define IMmsMessage_get_sysBoundary(This,pVal)	\
    ( (This)->lpVtbl -> get_sysBoundary(This,pVal) ) 

#define IMmsMessage_put_sysSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_sysSettings(This,newVal) ) 

#define IMmsMessage_SaveToFile(This,bstrFolder,lFormat)	\
    ( (This)->lpVtbl -> SaveToFile(This,bstrFolder,lFormat) ) 

#define IMmsMessage_EncodeMessage(This)	\
    ( (This)->lpVtbl -> EncodeMessage(This) ) 

#define IMmsMessage_DecodeMessage(This)	\
    ( (This)->lpVtbl -> DecodeMessage(This) ) 

#define IMmsMessage_AddRecipient(This,bstrRecipient,lType)	\
    ( (This)->lpVtbl -> AddRecipient(This,bstrRecipient,lType) ) 

#define IMmsMessage_AddSlide(This,pVal)	\
    ( (This)->lpVtbl -> AddSlide(This,pVal) ) 

#define IMmsMessage_LoadFromFile(This,bstrFile)	\
    ( (This)->lpVtbl -> LoadFromFile(This,bstrFile) ) 

#define IMmsMessage_GetFirstSlide(This,pVal)	\
    ( (This)->lpVtbl -> GetFirstSlide(This,pVal) ) 

#define IMmsMessage_GetNextSlide(This,pVal)	\
    ( (This)->lpVtbl -> GetNextSlide(This,pVal) ) 

#define IMmsMessage_GetFirstRecipient(This,lType,pVal)	\
    ( (This)->lpVtbl -> GetFirstRecipient(This,lType,pVal) ) 

#define IMmsMessage_GetNextRecipient(This,lType,pVal)	\
    ( (This)->lpVtbl -> GetNextRecipient(This,lType,pVal) ) 

#define IMmsMessage_ClearRecipients(This)	\
    ( (This)->lpVtbl -> ClearRecipients(This) ) 

#define IMmsMessage_LoadCustomSMIL(This,bstrFile)	\
    ( (This)->lpVtbl -> LoadCustomSMIL(This,bstrFile) ) 

#define IMmsMessage_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMmsMessage_INTERFACE_DEFINED__ */


#ifndef __ISmsDataMmsNotification_INTERFACE_DEFINED__
#define __ISmsDataMmsNotification_INTERFACE_DEFINED__

/* interface ISmsDataMmsNotification */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDataMmsNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4105A254-0E01-4939-A5F7-D49D623B0986")
    ISmsDataMmsNotification : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG newVal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_From( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_From( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Class( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Class( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Expiration( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Expiration( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ContentLocation( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ContentLocation( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageSize( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageSize( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TransactionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TransactionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EncodedMessage( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDataMmsNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDataMmsNotification * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDataMmsNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDataMmsNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDataMmsNotification * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDataMmsNotification * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDataMmsNotification * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDataMmsNotification * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsDataMmsNotification * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsDataMmsNotification * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsDataMmsNotification * This,
            LONG newVal,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsDataMmsNotification * This,
            BSTR newVal,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_From )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_From )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Class )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Class )( 
            ISmsDataMmsNotification * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Expiration )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expiration )( 
            ISmsDataMmsNotification * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentLocation )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContentLocation )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageSize )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageSize )( 
            ISmsDataMmsNotification * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionID )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionID )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncodedMessage )( 
            ISmsDataMmsNotification * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ISmsDataMmsNotification * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            ISmsDataMmsNotification * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISmsDataMmsNotificationVtbl;

    interface ISmsDataMmsNotification
    {
        CONST_VTBL struct ISmsDataMmsNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDataMmsNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDataMmsNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDataMmsNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDataMmsNotification_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDataMmsNotification_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDataMmsNotification_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDataMmsNotification_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDataMmsNotification_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsDataMmsNotification_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsDataMmsNotification_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsDataMmsNotification_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsDataMmsNotification_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsDataMmsNotification_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsDataMmsNotification_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsDataMmsNotification_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsDataMmsNotification_GetErrorDescription(This,newVal,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,newVal,pVal) ) 

#define ISmsDataMmsNotification_Activate(This,newVal,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,newVal,bPersistent) ) 

#define ISmsDataMmsNotification_get_From(This,pVal)	\
    ( (This)->lpVtbl -> get_From(This,pVal) ) 

#define ISmsDataMmsNotification_put_From(This,newVal)	\
    ( (This)->lpVtbl -> put_From(This,newVal) ) 

#define ISmsDataMmsNotification_get_Subject(This,pVal)	\
    ( (This)->lpVtbl -> get_Subject(This,pVal) ) 

#define ISmsDataMmsNotification_put_Subject(This,newVal)	\
    ( (This)->lpVtbl -> put_Subject(This,newVal) ) 

#define ISmsDataMmsNotification_get_Class(This,pVal)	\
    ( (This)->lpVtbl -> get_Class(This,pVal) ) 

#define ISmsDataMmsNotification_put_Class(This,newVal)	\
    ( (This)->lpVtbl -> put_Class(This,newVal) ) 

#define ISmsDataMmsNotification_get_Expiration(This,pVal)	\
    ( (This)->lpVtbl -> get_Expiration(This,pVal) ) 

#define ISmsDataMmsNotification_put_Expiration(This,newVal)	\
    ( (This)->lpVtbl -> put_Expiration(This,newVal) ) 

#define ISmsDataMmsNotification_get_ContentLocation(This,pVal)	\
    ( (This)->lpVtbl -> get_ContentLocation(This,pVal) ) 

#define ISmsDataMmsNotification_put_ContentLocation(This,newVal)	\
    ( (This)->lpVtbl -> put_ContentLocation(This,newVal) ) 

#define ISmsDataMmsNotification_get_MessageSize(This,pVal)	\
    ( (This)->lpVtbl -> get_MessageSize(This,pVal) ) 

#define ISmsDataMmsNotification_put_MessageSize(This,newVal)	\
    ( (This)->lpVtbl -> put_MessageSize(This,newVal) ) 

#define ISmsDataMmsNotification_get_TransactionID(This,pVal)	\
    ( (This)->lpVtbl -> get_TransactionID(This,pVal) ) 

#define ISmsDataMmsNotification_put_TransactionID(This,newVal)	\
    ( (This)->lpVtbl -> put_TransactionID(This,newVal) ) 

#define ISmsDataMmsNotification_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define ISmsDataMmsNotification_put_EncodedMessage(This,newVal)	\
    ( (This)->lpVtbl -> put_EncodedMessage(This,newVal) ) 

#define ISmsDataMmsNotification_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#define ISmsDataMmsNotification_get_Module(This,pVal)	\
    ( (This)->lpVtbl -> get_Module(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDataMmsNotification_INTERFACE_DEFINED__ */


#ifndef __ISmsDatavCard_INTERFACE_DEFINED__
#define __ISmsDatavCard_INTERFACE_DEFINED__

/* interface ISmsDatavCard */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISmsDatavCard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1F392F11-0F25-4CC9-A3B5-4E05C07258F1")
    ISmsDatavCard : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Build( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Reserved( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DistributionKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            LONG lError,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( 
            BSTR bstrRegKey,
            /* [defaultvalue][optional][in] */ BOOL bPersistent = TRUE) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Phone( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Phone( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PhoneWork( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PhoneWork( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PhoneHome( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PhoneHome( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Mobile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Mobile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Pager( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Pager( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Fax( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Fax( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Email( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Email( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncodedMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Encode( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISmsDatavCardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISmsDatavCard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISmsDatavCard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISmsDatavCard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISmsDatavCard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISmsDatavCard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISmsDatavCard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISmsDatavCard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            ISmsDatavCard * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Build )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reserved )( 
            ISmsDatavCard * This,
            /* [in] */ LONG newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionID )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DistributionKey )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISmsDatavCard * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            ISmsDatavCard * This,
            LONG lError,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISmsDatavCard * This,
            BSTR bstrRegKey,
            /* [defaultvalue][optional][in] */ BOOL bPersistent);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Phone )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Phone )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhoneWork )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PhoneWork )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhoneHome )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PhoneHome )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mobile )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mobile )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pager )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Pager )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fax )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Fax )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            ISmsDatavCard * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedMessage )( 
            ISmsDatavCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ISmsDatavCard * This);
        
        END_INTERFACE
    } ISmsDatavCardVtbl;

    interface ISmsDatavCard
    {
        CONST_VTBL struct ISmsDatavCardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISmsDatavCard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISmsDatavCard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISmsDatavCard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISmsDatavCard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISmsDatavCard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISmsDatavCard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISmsDatavCard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISmsDatavCard_get_LastError(This,pVal)	\
    ( (This)->lpVtbl -> get_LastError(This,pVal) ) 

#define ISmsDatavCard_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ISmsDatavCard_get_Build(This,pVal)	\
    ( (This)->lpVtbl -> get_Build(This,pVal) ) 

#define ISmsDatavCard_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define ISmsDatavCard_put_Reserved(This,newVal)	\
    ( (This)->lpVtbl -> put_Reserved(This,newVal) ) 

#define ISmsDatavCard_put_DistributionID(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionID(This,newVal) ) 

#define ISmsDatavCard_put_DistributionKey(This,newVal)	\
    ( (This)->lpVtbl -> put_DistributionKey(This,newVal) ) 

#define ISmsDatavCard_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ISmsDatavCard_GetErrorDescription(This,lError,pVal)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,lError,pVal) ) 

#define ISmsDatavCard_Activate(This,bstrRegKey,bPersistent)	\
    ( (This)->lpVtbl -> Activate(This,bstrRegKey,bPersistent) ) 

#define ISmsDatavCard_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ISmsDatavCard_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define ISmsDatavCard_get_Phone(This,pVal)	\
    ( (This)->lpVtbl -> get_Phone(This,pVal) ) 

#define ISmsDatavCard_put_Phone(This,newVal)	\
    ( (This)->lpVtbl -> put_Phone(This,newVal) ) 

#define ISmsDatavCard_get_PhoneWork(This,pVal)	\
    ( (This)->lpVtbl -> get_PhoneWork(This,pVal) ) 

#define ISmsDatavCard_put_PhoneWork(This,newVal)	\
    ( (This)->lpVtbl -> put_PhoneWork(This,newVal) ) 

#define ISmsDatavCard_get_PhoneHome(This,pVal)	\
    ( (This)->lpVtbl -> get_PhoneHome(This,pVal) ) 

#define ISmsDatavCard_put_PhoneHome(This,newVal)	\
    ( (This)->lpVtbl -> put_PhoneHome(This,newVal) ) 

#define ISmsDatavCard_get_Mobile(This,pVal)	\
    ( (This)->lpVtbl -> get_Mobile(This,pVal) ) 

#define ISmsDatavCard_put_Mobile(This,newVal)	\
    ( (This)->lpVtbl -> put_Mobile(This,newVal) ) 

#define ISmsDatavCard_get_Pager(This,pVal)	\
    ( (This)->lpVtbl -> get_Pager(This,pVal) ) 

#define ISmsDatavCard_put_Pager(This,newVal)	\
    ( (This)->lpVtbl -> put_Pager(This,newVal) ) 

#define ISmsDatavCard_get_Fax(This,pVal)	\
    ( (This)->lpVtbl -> get_Fax(This,pVal) ) 

#define ISmsDatavCard_put_Fax(This,newVal)	\
    ( (This)->lpVtbl -> put_Fax(This,newVal) ) 

#define ISmsDatavCard_get_Email(This,pVal)	\
    ( (This)->lpVtbl -> get_Email(This,pVal) ) 

#define ISmsDatavCard_put_Email(This,newVal)	\
    ( (This)->lpVtbl -> put_Email(This,newVal) ) 

#define ISmsDatavCard_get_Title(This,pVal)	\
    ( (This)->lpVtbl -> get_Title(This,pVal) ) 

#define ISmsDatavCard_put_Title(This,newVal)	\
    ( (This)->lpVtbl -> put_Title(This,newVal) ) 

#define ISmsDatavCard_get_Url(This,pVal)	\
    ( (This)->lpVtbl -> get_Url(This,pVal) ) 

#define ISmsDatavCard_put_Url(This,newVal)	\
    ( (This)->lpVtbl -> put_Url(This,newVal) ) 

#define ISmsDatavCard_get_EncodedMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedMessage(This,pVal) ) 

#define ISmsDatavCard_Encode(This)	\
    ( (This)->lpVtbl -> Encode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISmsDatavCard_INTERFACE_DEFINED__ */



#ifndef __AXmsCtrl_LIBRARY_DEFINED__
#define __AXmsCtrl_LIBRARY_DEFINED__

/* library AXmsCtrl */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AXmsCtrl;

EXTERN_C const CLSID CLSID_SmsProtocolGsm;

#ifdef __cplusplus

class DECLSPEC_UUID("30F256C0-EE6E-4C57-A475-E3E81236119F")
SmsProtocolGsm;
#endif

EXTERN_C const CLSID CLSID_SmsMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("6900ABDD-A93C-430F-9939-A0477D4D6F4E")
SmsMessage;
#endif

EXTERN_C const CLSID CLSID_SmsProtocolSmpp;

#ifdef __cplusplus

class DECLSPEC_UUID("0B3C73A0-D209-465A-B6C4-9B6AC9DCC424")
SmsProtocolSmpp;
#endif

EXTERN_C const CLSID CLSID_SmsConstants;

#ifdef __cplusplus

class DECLSPEC_UUID("D59B5767-F7FA-47B7-A1D3-816934964EC4")
SmsConstants;
#endif

EXTERN_C const CLSID CLSID_SmsProtocolHttp;

#ifdef __cplusplus

class DECLSPEC_UUID("0F81C972-915E-41C7-B881-667FD2629300")
SmsProtocolHttp;
#endif

EXTERN_C const CLSID CLSID_SmsProtocolDialup;

#ifdef __cplusplus

class DECLSPEC_UUID("7FE9716E-6120-433C-B7C5-F42F4805B6C2")
SmsProtocolDialup;
#endif

EXTERN_C const CLSID CLSID_PagerProtocolSnpp;

#ifdef __cplusplus

class DECLSPEC_UUID("69AD3E44-38BB-49E2-A03F-2BA71444BDF5")
PagerProtocolSnpp;
#endif

EXTERN_C const CLSID CLSID_SmsDataRingtone;

#ifdef __cplusplus

class DECLSPEC_UUID("2046BDCF-E8C3-454E-8FE4-F7B239E6A1EE")
SmsDataRingtone;
#endif

EXTERN_C const CLSID CLSID_SmsDataPicture;

#ifdef __cplusplus

class DECLSPEC_UUID("7B735208-011D-409F-BC5C-205AE4E93CE0")
SmsDataPicture;
#endif

EXTERN_C const CLSID CLSID_SmsDataWapBookmark;

#ifdef __cplusplus

class DECLSPEC_UUID("ED494BC8-222A-4716-A46D-14F72F02CB89")
SmsDataWapBookmark;
#endif

EXTERN_C const CLSID CLSID_SmsDataWapPush;

#ifdef __cplusplus

class DECLSPEC_UUID("EF74EFF2-4F98-464A-9F73-CF6D77D9C954")
SmsDataWapPush;
#endif

EXTERN_C const CLSID CLSID_SmsDeliveryStatus;

#ifdef __cplusplus

class DECLSPEC_UUID("E3C1E60A-87B3-4178-BB93-CCB8D6AC59F8")
SmsDeliveryStatus;
#endif

EXTERN_C const CLSID CLSID_PagerMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("A4ECB249-089A-458B-B1DC-AFA3F6DFD691")
PagerMessage;
#endif

EXTERN_C const CLSID CLSID_MmsProtocolMm1;

#ifdef __cplusplus

class DECLSPEC_UUID("F0589DF4-1745-4437-B41A-F72B780410AF")
MmsProtocolMm1;
#endif

EXTERN_C const CLSID CLSID_MmsSlide;

#ifdef __cplusplus

class DECLSPEC_UUID("43BFDCA2-0801-4A5F-897F-DA987DD62EF3")
MmsSlide;
#endif

EXTERN_C const CLSID CLSID_MmsConstants;

#ifdef __cplusplus

class DECLSPEC_UUID("51B8A8E6-CC2F-4160-8645-E0B264659493")
MmsConstants;
#endif

EXTERN_C const CLSID CLSID_MmsPermission;

#ifdef __cplusplus

class DECLSPEC_UUID("D3458AB2-3485-4E68-95CB-49EEA9566B35")
MmsPermission;
#endif

EXTERN_C const CLSID CLSID_MmsProtocolMm4;

#ifdef __cplusplus

class DECLSPEC_UUID("BC79F6EF-F0D4-45A6-AB37-44A9ED6B084A")
MmsProtocolMm4;
#endif

EXTERN_C const CLSID CLSID_MmsProtocolMm7;

#ifdef __cplusplus

class DECLSPEC_UUID("368A6DD4-34BD-44F7-BE1D-FD282B3112F1")
MmsProtocolMm7;
#endif

EXTERN_C const CLSID CLSID_MmsMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("968295DF-EE56-433A-99A8-64B47C5FF613")
MmsMessage;
#endif

EXTERN_C const CLSID CLSID_SmsDataMmsNotification;

#ifdef __cplusplus

class DECLSPEC_UUID("4868BE0E-AA1B-4289-8FFB-CC75275D9822")
SmsDataMmsNotification;
#endif

EXTERN_C const CLSID CLSID_SmsDatavCard;

#ifdef __cplusplus

class DECLSPEC_UUID("4368F874-0EBD-4816-8915-F340F7150B95")
SmsDatavCard;
#endif
#endif /* __AXmsCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


