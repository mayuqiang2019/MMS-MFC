// MMSThread.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "MMSThread.h"
#include <comdef.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMMSThread

IMPLEMENT_DYNCREATE(CMMSThread, CWinThread)

CMMSThread::CMMSThread()
{
}

CMMSThread::CMMSThread(CWnd* pWnd, OBJ_Device *pObjDevice)
{

	m_pView = (CMMSView *)pWnd;
	m_pObjDevice = pObjDevice;

}	

CMMSThread::~CMMSThread()
{
}

BOOL CMMSThread::InitInstance()
{
	
	if( m_pObjDevice->cGsmstatus == GSM_PROCEEDING_RECV ){
		m_pObjDevice->tStart = CTime::GetCurrentTime();
		cmd_recv_mms();
		m_pObjDevice->tEnd = CTime::GetCurrentTime();
	}
	else{
		m_pObjDevice->tStart = CTime::GetCurrentTime();
		cmd_send_mms( ' ' );
		m_pObjDevice->tEnd = CTime::GetCurrentTime();
	}

	return FALSE;
}

int CMMSThread::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CMMSThread, CWinThread)
	//{{AFX_MSG_MAP(CMMSThread)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMMSThread message handlers

BOOL CMMSThread::cmd_send_mms(char cType)
{
	BSTR bstrTemp = NULL;
	CString strCtemp;
	LONG lLastError = 0;
	int i;

	CHAR szErrorDescription[ 1024 + 1 ] = { 0 };
	BSTR bstrErrDescr = NULL;

	// Set Device
	bstrTemp = m_pObjDevice->sModem.AllocSysString ();
	m_pView->m_pConnection->put_Device ( bstrTemp );
	SysFreeString ( bstrTemp );
	
	// Set MessageData
	m_pView->m_pMessage->Clear ();

	if( m_pObjDevice->cGsmNetwork == 'H' ){
		strCtemp.Format( "+65%s", m_pObjDevice->sGSM_no );
		bstrTemp = strCtemp.AllocSysString ();
		m_pView->m_pMessage->AddRecipient( bstrTemp );
		SysFreeString ( bstrTemp );
	}
	for( i = 0; i < m_pObjDevice->nMax_Mms_Contacts; i ++ ){
		if( m_pObjDevice->sContactno[i] == "" ){
			break;
		}
		else{
			strCtemp.Format( "+65%s", m_pObjDevice->sContactno[ i ] );
			bstrTemp = strCtemp.AllocSysString ();
			m_pView->m_pMessage->AddRecipient( bstrTemp, 2 );
			SysFreeString ( bstrTemp );
		}
	}

	strCtemp.Format( "+65%s", m_pObjDevice->sGSM_no );
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pMessage->put_From ( bstrTemp );
	SysFreeString ( bstrTemp );
	
	m_pObjDevice->sMMS_Subject = "Recall Message";
	strCtemp = m_pObjDevice->sMMS_Subject;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pMessage->put_Subject ( bstrTemp );
	SysFreeString ( bstrTemp );

	m_pView->m_pMessage->put_RequestDeliveryReport( 0 );
	m_pView->m_pMessage->put_RequestReadReceipt( 0 );

	m_pView->m_pSlide->Clear();
	if( m_pObjDevice->sMMS_Picture != "" ){
		strCtemp.Format( "%s\\%s", m_pObjDevice->sMMS_Folder, 
			m_pObjDevice->sMMS_Picture );
		bstrTemp = bstrTemp = strCtemp.AllocSysString ();
		m_pView->m_pSlide->AddAttachment ( bstrTemp );
		SysFreeString ( bstrTemp );
	}
	if( m_pObjDevice->sMMS_Video != "" ){
		strCtemp.Format( "%s\\%s", m_pObjDevice->sMMS_Folder, 
			m_pObjDevice->sMMS_Video );
		bstrTemp = bstrTemp = strCtemp.AllocSysString ();
		m_pView->m_pSlide->AddAttachment ( bstrTemp );
		SysFreeString ( bstrTemp );
	}
	strCtemp = m_pObjDevice->sMMS_Text;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pSlide->AddText ( bstrTemp );
	SysFreeString ( bstrTemp );

	m_pView->m_pMessage->AddSlide( &_variant_t ( ( IDispatch*) m_pView->m_pSlide ) );
	
	// Set MMS Server Parameters
	//strCtemp = "hicard";
	strCtemp = m_pObjDevice->sAPN;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderAPN( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "165.21.42.84";
	strCtemp = m_pObjDevice->sWAPGateway;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderWAPGateway( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "http://mms.singtel.com:10021/mmsc";
	strCtemp = m_pObjDevice->sMMSC;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderMMSC( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "65IDEAS";
	strCtemp = m_pObjDevice->sAPNAcc;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderAPNAccount( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "IDEAS";
	strCtemp = m_pObjDevice->sAPNPwd;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderAPNPassword( bstrTemp );
	SysFreeString ( bstrTemp );

	strCtemp = "";
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_LogFile ( bstrTemp );
	SysFreeString ( bstrTemp );


	//AfxGetApp()->DoWaitCursor ( 1 );

	// Send The Message
	m_pView->m_pConnection->Connect ();
	m_pView->m_pConnection->get_LastError ( &lLastError );
	if( lLastError != 0 ){
		m_pView->m_pConnection->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL )
		{
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			m_pView->m_sLastError = szErrorDescription;
			//update_view( m_pObjDevice->nComport, "ERR", strCtemp );
			
			SysFreeString ( bstrErrDescr );
		}
		m_pView->m_pConnection->Disconnect();
		m_pObjDevice->cGsmstatus = GSM_FAIL;
		return FALSE;
	}

	
	m_pView->m_pConnection->Send( &_variant_t ( ( IDispatch*) m_pView->m_pMessage ) );
	m_pView->m_pConnection->get_LastError ( &lLastError );
	if( lLastError != 0 ){
		m_pView->m_pConnection->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL )
		{
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			m_pView->m_sLastError = szErrorDescription;
			//update_view( m_pObjDevice->nComport, "ERR", strCtemp );
			
			SysFreeString ( bstrErrDescr );
		}
		m_pView->m_pConnection->Disconnect();
		m_pObjDevice->cGsmstatus = GSM_FAIL;
		return FALSE;
	}

	
	m_pView->m_pConnection->Disconnect ();
	//update_view( m_pObjDevice->nComport, "LOG", "MMS Send Succeed" );
	//AfxGetApp()->DoWaitCursor ( 0 );
	m_pObjDevice->cGsmstatus = GSM_COMPLETED;
	return TRUE;
}

BOOL CMMSThread::cmd_recv_mms()
{
	
	BSTR bstrTemp = NULL;
	CString strCtemp, sExtension;
	CString strRecvFrom;
	int nLen, nPos;
	LONG lLastError = 0, lCount = 0;
	VARIANT vtVarMsg;
	VARIANT vtVarSld;
	IMmsMessage	*pMessage = NULL;
	IMmsSlide *pSlide = NULL;

	CHAR szErrorDescription[ 1024 + 1 ] = { 0 };
	BSTR bstrErrDescr = NULL;

	bstrTemp = m_pObjDevice->sModem.AllocSysString ();
	m_pView->m_pConnection->put_Device( bstrTemp );
	SysFreeString ( bstrTemp );
	
	// Set MessageData
	m_pView->m_pMessage->Clear ();
	// check Message
	m_pView->m_pConnection->CountReceivedMessages ( &lCount );
	m_pView->m_pConnection->get_LastError ( &lLastError );
	if( lLastError != 0 ){
		m_pView->m_pConnection->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL )
		{
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			m_pView->m_sLastError = szErrorDescription;
			//update_view( m_pObjDevice->nComport, "ERR", strCtemp );
			
			SysFreeString ( bstrErrDescr );
		}
		m_pObjDevice->cGsmstatus = GSM_FAIL;
		return FALSE;
	}
	
	if( lCount == 0 ){
		m_pObjDevice->nMsgCount = 0;
		m_pView->m_sLastError = "No new MMS messages waiting";
		m_pObjDevice->cGsmstatus = GSM_COMPLETED;
		//update_view( m_pObjDevice->nComport, "LOG", strCtemp );
		return TRUE;
	}

	m_pObjDevice->nMsgCount = 1;
	// Initialize Variants
	VariantInit ( &vtVarMsg );
	VariantInit ( &vtVarSld );

	// Set MMS Server Parameters
	//strCtemp = "hicard";
	strCtemp = m_pObjDevice->sAPN;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderAPN( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "165.21.42.84";
	strCtemp = m_pObjDevice->sWAPGateway;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderWAPGateway( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "http://mms.singtel.com:10021/mmsc";
	strCtemp = m_pObjDevice->sMMSC;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderMMSC( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "65IDEAS";
	strCtemp = m_pObjDevice->sAPNAcc;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderAPNAccount( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "IDEAS";
	strCtemp = m_pObjDevice->sAPNPwd;
	bstrTemp = strCtemp.AllocSysString ();
	m_pView->m_pConnection->put_ProviderAPNPassword( bstrTemp );
	SysFreeString ( bstrTemp );

	//strCtemp = "";
	//bstrTemp = strCtemp.AllocSysString ();
	//m_pConnection->put_LogFile ( bstrTemp );
	//SysFreeString ( bstrTemp );

	m_pView->m_pConnection->Connect();
	m_pView->m_pConnection->get_LastError ( &lLastError );
	if( lLastError != 0 ){
		m_pView->m_pConnection->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL )
		{
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			m_pView->m_sLastError = szErrorDescription;
			//update_view( m_pObjDevice->nComport, "ERR", strCtemp );
			
			SysFreeString ( bstrErrDescr );
		}
		
		m_pView->m_pConnection->Disconnect();
		VariantClear( &vtVarSld );
		VariantClear( &vtVarMsg );
		m_pObjDevice->cGsmstatus = GSM_FAIL;

		return FALSE;
	}

	// MmsProtocolMm1: Receive Messages
	m_pView->m_pConnection->GetMessage ( 0, &vtVarMsg );
	m_pView->m_pConnection->get_LastError ( &lLastError );
	if( lLastError != 0 ){
		m_pView->m_pConnection->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL )
		{
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			//update_view( m_pObjDevice->nComport, "ERR", strCtemp );
			m_pView->m_sLastError = szErrorDescription;
			SysFreeString ( bstrErrDescr );
			m_pView->m_pConnection->Disconnect();
			VariantClear( &vtVarSld );
			VariantClear( &vtVarMsg );
		
			m_pObjDevice->cGsmstatus = GSM_FAIL;
			return FALSE;
		}
	}
	pMessage = ( IMmsMessage * ) vtVarMsg.pdispVal;
	if( pMessage ){
		// Get Sender Address
		pMessage->get_From( &bstrTemp );
		if( bstrTemp == NULL ){
		}
		else{
			strCtemp = bstrTemp;
			strRecvFrom = strCtemp;
			strCtemp.Replace( "+65","" );
			m_pObjDevice->sRecvFrom = strCtemp;
			SysFreeString( bstrTemp );
		}
		if( m_pObjDevice->sRecvFrom == m_pObjDevice->sGSM_no ){
		}
		else{
			// Get first slide
			pMessage->GetFirstSlide ( &vtVarSld );
			pSlide = ( IMmsSlide * )vtVarSld.pdispVal;
			if( pSlide )
			{
				LONG lAttachments = 0L, k = 0L;
				// Count Text
				pSlide->GetTextCount( &lAttachments );
				// Display Text
				if( lAttachments > 0 ){
				
					pSlide->GetText( 0, &bstrTemp );
					if( bstrTemp == NULL ){
					}
					else{
						strCtemp = bstrTemp;
						m_pObjDevice->sRecvText = strCtemp; 
						SysFreeString( bstrTemp );
						if( m_pObjDevice->sRecvText == strRecvFrom )
							m_pObjDevice->sRecvText = "";
						
						strCtemp.Format( "%s\\H%.8d_%s_%s.txt", m_pObjDevice->sTemp_Folder, 
							m_pView->m_nFilenameid, m_pObjDevice->sRecvFrom, m_pObjDevice->sGSM_no );
					
					//	FILE *pLog;
					//	pLog = fopen(strCtemp,"a");
					//	fprintf(pLog,"%s",m_pObjDevice->sRecvText);
					//	fclose(pLog);
					
					}
				}

				// Count attachments
				lAttachments = 0;
				pSlide->CountAttachments( &lAttachments );
				// Display attachment filenames
				if( lAttachments > 0 ){
					pSlide->GetAttachmentName( 0, &bstrTemp );
					if( bstrTemp == NULL ){
					}
					else{
						strCtemp = bstrTemp;
						nLen = strCtemp.GetLength();
						nPos = strCtemp.ReverseFind( '.' );
						if( nPos == -1 ){
							sExtension = "";
						}
						else{
							if( nLen > nPos ){
								sExtension = strCtemp.Right( nLen-nPos );
							}
							else{
								sExtension = "";
							}
						}
						strCtemp.Format( "H%.8d_%s_%s%s", m_pView->m_nFilenameid, m_pObjDevice->sRecvFrom, 
							m_pObjDevice->sGSM_no, sExtension );
						m_pObjDevice->sRecvAttachment = strCtemp;
					
						strCtemp.Format( "%s\\%s", m_pObjDevice->sTemp_Folder,
							m_pObjDevice->sRecvAttachment );
						bstrTemp = strCtemp.AllocSysString ();
						pSlide->SaveAttachment( 0, bstrTemp );
						SysFreeString( bstrTemp );
					
					}
				}
			
				VariantClear ( &vtVarSld );
			} // pSlide
		} // m_pObjDevice->sRecvFrom == m_pObjDevice->sGSM_no
		VariantClear ( &vtVarMsg );	
	} // pMessage
	
	m_pView->m_pConnection->Disconnect();
	VariantClear( &vtVarSld );
	VariantClear( &vtVarMsg );	
	m_pObjDevice->cGsmstatus = GSM_COMPLETED;
//	if( pSlide != NULL ) 
//		pSlide->Release();
//	if( pMessage != NULL ) 
//		pMessage->Release();

//	CoUninitialize();

	return TRUE;

}
