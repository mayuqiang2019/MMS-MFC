// MMSView.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "MMSView.h"
#include <comdef.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMMSView

IMPLEMENT_DYNCREATE(CMMSView, CEditView)

CMMSView::CMMSView()
{
}

CMMSView::~CMMSView()
{
}


BEGIN_MESSAGE_MAP(CMMSView, CEditView)
	//{{AFX_MSG_MAP(CMMSView)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMMSView drawing

void CMMSView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CMMSView diagnostics

#ifdef _DEBUG
void CMMSView::AssertValid() const
{
	CEditView::AssertValid();
}

void CMMSView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMMSView message handlers

void CMMSView::OnInitialUpdate() 
{
	CEditView::OnInitialUpdate();
	int i;
	// TODO: Add your specialized code here and/or call the base class
	m_pApp = (CServerApp *)AfxGetApp();
	ASSERT( m_pApp != NULL );
	
	m_dwTimer = 0;
	m_nFilenameid = 0;
	for( i = 0; i < MAX_COM_OBJECT; i++ ){
		if( m_pApp->m_pMMSView[i] == NULL ){
			m_pApp->m_pMMSView[i] = this;
			m_nViewid = i + 1;
			break;
		}
	}
	
	cmd_object_init();
	
	SetTimer( 10 + m_nViewid, 1000, NULL );

}

void CMMSView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	KillTimer( nIDEvent );
	m_dwTimer ++;

	int nRetval;
	CString sCtemp;
	
	if( m_pObjDevice->cState == DEV_INIT ){
		nRetval = cmd_device_init( m_nViewid );
		if( nRetval == TRUE ){
			m_pObjDevice->sIcontext.Format( "<%s> <COM%.2d> USED", 
				m_sApplicationid, m_pObjDevice->nComport);
			cmd_detect_signal();
			m_pObjDevice->cState = DEV_USED;
			m_pObjDevice->cCmdstatus = CMD_START;
			m_pObjDevice->cGsmstatus = GSM_START;
			m_pObjDevice->nIconstatus = ICON_CHG;
		}
		else{
			m_pObjDevice->cState = DEV_BLOCK;
			m_pObjDevice->sIcontext.Format( "<%s> <COM%.2d> BLOCKED (ERROR)", 
				m_sApplicationid, m_pObjDevice->nComport);
			m_pObjDevice->nIconstatus = ICON_CHG;
		}
		sCtemp.Format( "COM PORT %d - %s - %s", 
			m_pObjDevice->nComport, m_pObjDevice->sModem, m_pObjDevice->sGSM_no );
		GetEditCtrl().ReplaceSel( sCtemp );
		SetTimer( nIDEvent, 1000, NULL );
		CEditView::OnTimer(nIDEvent);
		return;
	}
	
	if( m_pObjDevice->cState != DEV_USED ){
		SetTimer( nIDEvent, 1000, NULL );
		CEditView::OnTimer(nIDEvent);
		return;
	}

	if( m_pObjDevice->cGsmstatus == GSM_PROCEEDING_SEND || 
		m_pObjDevice->cGsmstatus == GSM_PROCEEDING_RECV ){

		m_pObjDevice->lMmsViewTimeout = m_pObjDevice->lMmsViewTimeout + 1;

		SetTimer( nIDEvent, 1000, NULL );
		CEditView::OnTimer(nIDEvent);
		return;
	}
	m_pObjDevice->lMmsViewTimeout = 0;

	m_pObjDevice->nTimeoutCount ++ ;
	if( m_pObjDevice->nTimeoutCount > m_pObjDevice->nTimeoutValue ){
		m_pObjDevice->nTimeoutCount = 0;
		
		nRetval = check_device_status();
		if( nRetval == TRUE ){
			m_pObjDevice->nDetectsignal = 0;
		}
	}

	if( m_pApp->m_pServerView->m_lstAdhocid > 0 || m_pApp->m_pServerView->m_lstMobid > 0 )
		m_pObjDevice->nDetectsignal = 0;		
	if( m_pObjDevice->cCmdstatus == CMD_START )
		m_pObjDevice->nDetectsignal ++ ;
	if( m_pObjDevice->nDetectsignal > MAX_DETECT_SIGNAL ){
		m_pObjDevice->nDetectsignal = 0;
		
		cmd_detect_signal();
		
	}

	SetTimer( nIDEvent, 1000, NULL );
	CEditView::OnTimer(nIDEvent);

}

BOOL CMMSView::cmd_device_init(int nView)
{
	LONG	lDeviceCount	= 0L;
	BSTR	bstrDevice		= NULL;
	
	m_pConnection	= NULL;
	m_pMessage		= NULL;
	
	m_sApplicationid = m_pApp->m_pServerView->m_sApplicationid;
	m_pObjDevice->sMMS_Folder = m_pApp->m_pServerView->m_sMMS_Folder;
	m_pObjDevice->sTemp_Folder = m_pApp->m_pServerView->m_sTemp_Folder;


	HRESULT hr = S_OK;

 	CoInitialize ( NULL );

	hr = CoCreateInstance(CLSID_SmsProtocolGsm, NULL, CLSCTX_INPROC_SERVER, IID_ISmsProtocolGsm, (void**) &m_pGsm);
	if( ! SUCCEEDED( hr ) )
	{
		m_pGsm = NULL;
		return FALSE;
	}

	hr = CoCreateInstance(CLSID_MmsProtocolMm1, NULL, CLSCTX_INPROC_SERVER, IID_IMmsProtocolMm1, (void**) &m_pConnection );
	
	if( ! SUCCEEDED( hr ) )
	{
		m_pConnection = NULL;	
		return FALSE;
	}

	hr = CoCreateInstance(CLSID_MmsMessage, NULL, CLSCTX_INPROC_SERVER, IID_IMmsMessage, (void**) &m_pMessage );
	
	if( ! SUCCEEDED( hr ) )
	{
		m_pMessage = NULL;	
		return FALSE;
	}

	hr = CoCreateInstance(CLSID_MmsSlide, NULL, CLSCTX_INPROC_SERVER, IID_IMmsSlide, (void**) &m_pSlide );
	
	if( ! SUCCEEDED( hr ) )
	{
		m_pSlide = NULL;	
		return FALSE;
	}

	m_pConnection->GetDeviceCount ( &lDeviceCount );

	if( lDeviceCount < nView )
		return FALSE;
	m_pConnection->GetDevice ( nView - 1, &bstrDevice );
	m_pConnection->put_Device( bstrDevice );
	m_pObjDevice->sModem = bstrDevice;
	
	return TRUE;

}

void CMMSView::update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg)
{
	m_pApp->m_pMsgView->update_view(nComport, pMsgtype, pMsg);
}


BOOL CMMSView::cmd_detect_signal()
{
	
	int nRetval;
	int nLen;
	BSTR bstrTemp = NULL;
	BSTR bstrRetval	= NULL;
	CString sData, sCtemp;

	sCtemp = "AT+CSQ\r";
	bstrTemp = sCtemp.AllocSysString ();
	nRetval = m_pConnection->SendCommand( bstrTemp, 5000, &bstrRetval );
	SysFreeString ( bstrTemp );
	
	if( bstrRetval == NULL ){
		m_pObjDevice->nErrorCount = m_pObjDevice->nErrorCount + 1;
		if( m_pObjDevice->nErrorCount >= MAX_ERR_NUM ){
			m_pObjDevice->cState = DEV_ERR;
			m_pObjDevice->cCmdstatus = CMD_START;
			update_view( m_pObjDevice->nComport, "ERR", "communication device closed" );
			m_pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
				m_sApplicationid, m_pObjDevice->nComport);
			m_pObjDevice->nIconstatus = ICON_CHG;
		}
	}
	else{
		sData = bstrRetval;
		nRetval = sData.Find( "OK" );
		if( nRetval != -1 ){
			m_pObjDevice->nErrorCount = 0;

			nRetval = sData.Find( "+CSQ: " );
			if( nRetval != -1 ){
				nRetval = nRetval + 6;
				nLen = sData.GetLength();
				if( nLen > nRetval )
					nLen = nLen - nRetval;
				else
					nLen = 0;
				sData = sData.Mid( nRetval, nLen );
				nLen = sData.GetLength();
				nRetval = sData.Find( ',' );
				if( nRetval != -1 ){
					sCtemp = sData.Left( nRetval );
					m_pObjDevice->nSignalStrength = atoi(sCtemp);
					if( nLen > nRetval + 2 ){
						sCtemp = sData.Mid( nRetval + 1, 1 );
						m_pObjDevice->nBitErrorRate = atoi( sCtemp );
					}
					else{
						m_pObjDevice->nBitErrorRate = 0;
					}
				}
				else{
					m_pObjDevice->nSignalStrength = 0;
				}
				
				sCtemp.Format( "<%s> <COM%.2d> USED ( %s )",
					m_sApplicationid, m_pObjDevice->nComport,sData );
				m_pObjDevice->sIcontext = sCtemp;
				m_pObjDevice->nIconstatus = ICON_CHG;
			}
			else{
				sCtemp.Format( "detect GSM_NET_SIGNAL AT+CSQ return: %s", sData );
				update_view( m_pObjDevice->nComport, "LOG", sCtemp );
			}

		}
		else{
			sCtemp.Format( "detect GSM_NET_SIGNAL AT+CSQ return: %s", sData );
			update_view( m_pObjDevice->nComport, "ERR", sCtemp );

			m_pObjDevice->nSignalStrength = 0;
			m_pObjDevice->nErrorCount = m_pObjDevice->nErrorCount + 1;
			if( m_pObjDevice->nErrorCount >= MAX_ERR_NUM ){
				m_pObjDevice->cState = DEV_ERR;
				m_pObjDevice->cCmdstatus = CMD_START;
				update_view( m_pObjDevice->nComport, "ERR", "communication device closed" );
				m_pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
					m_sApplicationid, m_pObjDevice->nComport);
				m_pObjDevice->nIconstatus = ICON_CHG;
			}
		}
		
		SysFreeString( bstrRetval );
	}

	return TRUE;
}

BOOL CMMSView::cmd_recv_mms()
{
	LONG lLastError = 0, lCount = 0;
	LONG l = 0, i = 0, lRetval;
	CHAR szErrorDescription[ 1024 + 1 ] = { 0 };
	BSTR bstrErrDescr = NULL;
	CString sCtemp, sMsg;
	BSTR bstrTemp = NULL;

	ISmsMessage *pMessage = NULL;
	LPSTR lpszMessage = NULL;
	VARIANT vtVar;
	LONG lMessageFormat;
	
	VariantInit( &vtVar );

	// GsmProtocol: Device property
	bstrTemp = m_pObjDevice->sModem.AllocSysString ();
	m_pGsm->put_Device( bstrTemp );
	SysFreeString ( bstrTemp );
	
	m_pGsm->put_MessageStorage( asSTORAGE_ALL );

	m_pGsm->Receive( &lCount );
	m_pGsm->get_LastError( &lLastError );
	if( lLastError != 0 ){
		m_pGsm->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL ){
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			m_sLastError = szErrorDescription;
			update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			
			SysFreeString ( bstrErrDescr );
		}
		VariantClear( &vtVar );
		return FALSE;
	}
	
	for( l = 0 ; l < lCount ; l++ )
	{
		m_pGsm->GetMessage ( l, &vtVar );

		m_pGsm->get_LastError( &lLastError );
		if( lLastError != 0 ){
			m_pGsm->GetErrorDescription( lLastError, &bstrErrDescr );
			if( bstrErrDescr != NULL ){
				sprintf( szErrorDescription, "%ls", bstrErrDescr );
				m_sLastError = szErrorDescription;
				update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			
				SysFreeString ( bstrErrDescr );
			}
			VariantClear( &vtVar );
			return FALSE;
		}
		
		if ( lLastError == 0L && vtVar.vt == VT_DISPATCH && ( pMessage = ( ISmsMessage* ) vtVar.pdispVal ) != NULL )
		{
			//pMessage->get_Sender(&bstrTemp);			// Get Message Sender
			//SysFreeString (bstrTemp);
			pMessage->get_Format( &lMessageFormat );
			pMessage->get_Data (&bstrTemp);				// Get Message Text
			if( lMessageFormat != asMESSAGEFORMAT_DATA ){
				lRetval = wcslen(bstrTemp);
				if( lRetval > 512 )
					lRetval = 512;
				for( i = 0; i < lRetval; i++ ){
					szErrorDescription[i] = *(bstrTemp + i);
				}
				szErrorDescription[lRetval] = '\0';
				sMsg = szErrorDescription;
				sCtemp.Format( "FROM=+65%s", m_pObjDevice->sGSM_no );
				lRetval = sMsg.Find( sCtemp );
				if( lRetval > 0 ){
					m_pGsm->DeleteMessage( l );
				}
			}
			SysFreeString (bstrTemp);
			VariantClear( &vtVar );
		}
	}

	if( lCount == 0 ){
		m_pObjDevice->nMsgCount = 0;
		sCtemp = "No new MMS messages waiting";
		update_view( m_pObjDevice->nComport, "LOG", sCtemp );

		VariantClear( &vtVar );
		return TRUE;
	}
	
	lCount = 0;
	bstrTemp = m_pObjDevice->sModem.AllocSysString ();
	m_pConnection->put_Device( bstrTemp );
	SysFreeString ( bstrTemp );
	
	// check Message
	m_pConnection->CountReceivedMessages ( &lCount );
	m_pConnection->get_LastError ( &lLastError );
	if( lLastError != 0 ){
		m_pConnection->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL )
		{
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			sCtemp = szErrorDescription;
			update_view( m_pObjDevice->nComport, "ERR", sCtemp );
			
			SysFreeString ( bstrErrDescr );
		}
		return FALSE;
	}
	
	if( lCount == 0 ){
		m_pObjDevice->nMsgCount = 0;
		sCtemp = "No new MMS messages waiting";
		update_view( m_pObjDevice->nComport, "LOG", sCtemp );


		return TRUE;
	}

	m_pObjDevice->nMsgCount = 1;
	m_pObjDevice->sRecvAttachment = "";
	m_pObjDevice->sRecvFrom = "";
	m_pObjDevice->sRecvText = "";
	m_nFilenameid = m_pApp->m_pServerView->m_nFilenameid;

	CMMSThread* pThread;
	
	pThread = new CMMSThread(this, m_pObjDevice);
	
	if (pThread == NULL){
		m_sLastError = "pThread = new CMMSThread(this, m_pObjDevice) return NULL";
		return FALSE;
	}

	ASSERT_VALID(pThread);
	pThread->m_pThreadParams = NULL;

	if( !pThread->CreateThread(CREATE_SUSPENDED) )
	{
		delete pThread;
		m_sLastError = "!pThread->CreateThread(CREATE_SUSPENDED) return NULL";
		return FALSE;
	}

	VERIFY(pThread->SetThreadPriority(THREAD_PRIORITY_IDLE));
	// Now the thread can run wild
	pThread->ResumeThread();
	
	return TRUE;
}

BOOL CMMSView::cmd_delete_all_msg()
{
	int nRetval;
	BSTR bstrTemp = NULL;
	BSTR bstrRetval	= NULL;
	CString sData, sCtemp;

	sCtemp = "AT+CMGD=1,4\r";
	bstrTemp = sCtemp.AllocSysString ();
	nRetval = m_pConnection->SendCommand( bstrTemp, 15000, &bstrRetval );
	SysFreeString ( bstrTemp );
	
	if( bstrRetval == NULL ){
		m_pObjDevice->nErrorCount = m_pObjDevice->nErrorCount + 1;
		if( m_pObjDevice->nErrorCount >= MAX_ERR_NUM ){
			m_pObjDevice->cState = DEV_ERR;
			m_pObjDevice->cCmdstatus = CMD_START;
			update_view( m_pObjDevice->nComport, "ERR", "communication device closed" );
			m_pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
				m_sApplicationid, m_pObjDevice->nComport);
			m_pObjDevice->nIconstatus = ICON_CHG;
		}
		return FALSE;
	}
	else{
		sData = bstrRetval;
		SysFreeString( bstrRetval );
		
		nRetval = sData.Find( "OK" );
		if( nRetval != -1 ){
			m_pObjDevice->nErrorCount = 0;

			sCtemp.Format( "Release MMS Gateway Memory: %s", sData );
			update_view( m_pObjDevice->nComport, "LOG", sCtemp );
			
		}
		else{
			sCtemp.Format( "AT+CMGD=1,4 return: %s", sData );
			update_view( m_pObjDevice->nComport, "ERR", sCtemp );

			m_pObjDevice->nErrorCount = m_pObjDevice->nErrorCount + 1;
			if( m_pObjDevice->nErrorCount >= MAX_ERR_NUM ){
				m_pObjDevice->cState = DEV_ERR;
				m_pObjDevice->cCmdstatus = CMD_START;
				update_view( m_pObjDevice->nComport, "ERR", "communication device closed" );
				m_pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
					m_sApplicationid, m_pObjDevice->nComport);
				m_pObjDevice->nIconstatus = ICON_CHG;
			}
			return FALSE;
		}
		
	}
	
	return TRUE;
}

void CMMSView::cmd_object_init()
{
	int i;

	m_pObjDevice = new OBJ_Device;

	m_pObjDevice->cState = DEV_UNUSED;
	m_pObjDevice->nIconstatus = ICON_UNCHG;
	m_pObjDevice->sIcontext = "";
	m_pObjDevice->cGsmNetwork = 'O';
	m_pObjDevice->nComport = 0;
	m_pObjDevice->hImage = NULL;
	m_pObjDevice->sModem = "";
	m_pObjDevice->cCmdstatus = CMD_START;
	m_pObjDevice->cGsmstatus = GSM_START;
	m_pObjDevice->nErrorCount = 0;
	m_pObjDevice->nDetectsignal = 0;
	m_pObjDevice->nRecvmsg = 0;
	m_pObjDevice->nMax_Mms_Contacts = 20;
	m_pObjDevice->nMms_Contacts = 0;
	m_pObjDevice->nSignalStrength = 0;
	m_pObjDevice->nBitErrorRate = 0;
	m_pObjDevice->lMmsViewTimeout = 0;

	m_pObjDevice->nMobid = 0;
	m_pObjDevice->nAdhocid = 0;
	m_pObjDevice->nAmsgid = 0;
	m_pObjDevice->sAmsgcode = "";
	m_pObjDevice->nNoofretry = 0;
	m_pObjDevice->nNoofshift = 0;
	m_pObjDevice->nTimeoutValue = 0;
	m_pObjDevice->nTimeoutCount = 0;
	
	m_pObjDevice->nMsgCount = 0;
	m_pObjDevice->sRecvAttachment = "";
	m_pObjDevice->sRecvFrom = "";
	m_pObjDevice->sRecvText = "";

	for( i = 0; i < MAX_MMS_CONTACTS; i ++ ){
		m_pObjDevice->sContactno[i] = "";
		m_pObjDevice->sNRIC[i] = "";
		m_pObjDevice->sPin[i] = "";
		m_pObjDevice->cContactNetwork[i] = 'O';
		m_pObjDevice->nWhichbroadcast[i] = 0;
		m_pObjDevice->nWhichcontactno[i] = 0;
		m_pObjDevice->nAdhocsno[i] = 0;
	}

	m_pObjDevice->tStart = CTime::GetCurrentTime();
	m_pObjDevice->tEnd = CTime::GetCurrentTime();
	
}

BOOL CMMSView::cmd_send_mms(char cType)
{
	
	CMMSThread* pThread;
	
	pThread = new CMMSThread(this, m_pObjDevice);
	
	if (pThread == NULL){
		m_sLastError = "pThread = new CMMSThread(this, m_pObjDevice) return NULL";
		return FALSE;
	}

	ASSERT_VALID(pThread);
	pThread->m_pThreadParams = NULL;

	if( !pThread->CreateThread(CREATE_SUSPENDED) )
	{
		delete pThread;
		m_sLastError = "!pThread->CreateThread(CREATE_SUSPENDED) return NULL";
		return FALSE;
	}

	VERIFY(pThread->SetThreadPriority(THREAD_PRIORITY_IDLE));
	// Now the thread can run wild
	pThread->ResumeThread();

	return TRUE;
}

BOOL CMMSView::check_device_status()
{
	int nRetval;
	
	m_pObjDevice->nTimeoutCount = 0;
	m_pObjDevice->nTimeoutValue = 0;
	
	if( m_pObjDevice->cCmdstatus == CMD_SEND_MOB ){
		
		if( m_pObjDevice->cGsmstatus == GSM_START ){
			m_pObjDevice->cGsmstatus = GSM_PROCEEDING_SEND;
			m_sLastError = "";
			nRetval = cmd_send_mms( CMD_SEND_MOB );
			if( nRetval == FALSE ){
				update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
				m_pObjDevice->cCmdstatus = CMD_FAIL_MOB;
			}
		}

		if( m_pObjDevice->cGsmstatus == GSM_COMPLETED ){
			update_view( m_pObjDevice->nComport, "LOG", "MMS Send Succeed" );
			m_pObjDevice->cCmdstatus = CMD_COMPLETE_MOB;
		}

		if( m_pObjDevice->cGsmstatus == GSM_FAIL ){
			update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			m_pObjDevice->nNoofretry ++;
			if( m_pObjDevice->nNoofretry > MAX_NOOFRETRY ){
				m_pObjDevice->cCmdstatus = CMD_FAIL_MOB;
			}
			else{
				m_pObjDevice->nTimeoutCount = 0;
				m_pObjDevice->nTimeoutValue = TMR_5SECONDS;
				m_pObjDevice->cGsmstatus = GSM_START;
			}
		}

		return TRUE;
	} // m_pObjDevice->cCmdstatus == CMD_SEND_MOB
	
	if( m_pObjDevice->cCmdstatus == CMD_SEND_ADHOC ){
		
		if( m_pObjDevice->cGsmstatus == GSM_START ){
			m_pObjDevice->cGsmstatus = GSM_PROCEEDING_SEND;
			m_sLastError = "";
			nRetval = cmd_send_mms( CMD_SEND_ADHOC );
			if( nRetval == FALSE ){
				update_view( m_pObjDevice->nComport, "ERR", "communication device closed" );
				m_pObjDevice->cCmdstatus = CMD_FAIL_ADHOC;
			}
		}

		if( m_pObjDevice->cGsmstatus == GSM_COMPLETED ){
			update_view( m_pObjDevice->nComport, "LOG", "MMS Send Succeed" );
			m_pObjDevice->cCmdstatus = CMD_COMPLETE_ADHOC;
		}

		if( m_pObjDevice->cGsmstatus == GSM_FAIL ){
			update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			m_pObjDevice->nNoofretry ++;
			if( m_pObjDevice->nNoofretry > MAX_NOOFRETRY ){
				m_pObjDevice->cCmdstatus = CMD_FAIL_ADHOC;
			}
			else{
				m_pObjDevice->nTimeoutCount = 0;
				m_pObjDevice->nTimeoutValue = TMR_5SECONDS;
				m_pObjDevice->cGsmstatus = GSM_START;
			}
		}
		
		return TRUE;
	} // m_pObjDevice->cCmdstatus == CMD_SEND_ADHOC

	if( m_pObjDevice->cCmdstatus == CMD_RECV ){
		
		if( m_pObjDevice->cGsmstatus == GSM_START ){
			m_pObjDevice->cGsmstatus = GSM_PROCEEDING_RECV;
			m_sLastError = "";
			nRetval = cmd_recv_mms();
			if( nRetval == FALSE ){
				update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
				m_pObjDevice->cCmdstatus = CMD_FAIL_RECV;
			}
			else{
				if( m_pObjDevice->nMsgCount == 0 ){
					m_pObjDevice->cGsmstatus = GSM_COMPLETED;
				}
			}
		}

		if( m_pObjDevice->cGsmstatus == GSM_COMPLETED ){
			if( m_pObjDevice->nMsgCount == 0 ){
			}
			else{
				update_view( m_pObjDevice->nComport, "LOG", "New MMS message coming" );
			}
			m_pObjDevice->cCmdstatus = CMD_COMPLETE_RECV;
		}

		if( m_pObjDevice->cGsmstatus == GSM_FAIL ){
			update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			m_pObjDevice->nNoofretry ++;
			if( m_pObjDevice->nNoofretry > MAX_NOOFRETRY_RECV ){
				m_pObjDevice->cCmdstatus = CMD_FAIL_RECV;
			}
			else{
				m_pObjDevice->nTimeoutCount = 0;
				m_pObjDevice->nTimeoutValue = TMR_5SECONDS;
				m_pObjDevice->cGsmstatus = GSM_START;
			}
		}

		return TRUE;
	} // m_pObjDevice->cCmdstatus == CMD_RECV

	if( m_pObjDevice->cCmdstatus == CMD_READ_ALL_MSG ){
		
		
		nRetval = cmd_read_all_msg();
		
		if( nRetval == NEW_MSG ){
			nRetval = cmd_delete_all_msg();
		}

		if( nRetval == TRUE ){
			m_pObjDevice->cCmdstatus = CMD_COMPLETE_READ;
		}
		else{
			m_pObjDevice->cCmdstatus = CMD_FAIL_READ;
		}
		
		return TRUE;
	}

	return FALSE;
}


int CMMSView::cmd_read_all_msg()
{
	
	ISmsMessage *pMessage = NULL;
	LPSTR lpszMessage = NULL;
	VARIANT vtVar;
	LONG lLastError;
	LONG lMessageFormat;
	LONG l, lCount;
	BSTR bstrTemp = NULL;
	CHAR szErrorDescription[ 1024 + 1 ] = { 0 };
	BSTR bstrErrDescr = NULL;
	CString sCtemp;
	CString sPhoneno, sMsg;
	int nLen, n = 0;
	CTimeSpan ts;

	VariantInit( &vtVar );

	// GsmProtocol: Device property
	bstrTemp = m_pObjDevice->sModem.AllocSysString ();
	m_pGsm->put_Device( bstrTemp );
	SysFreeString ( bstrTemp );
	
	m_pGsm->put_MessageStorage( asSTORAGE_ALL );

	m_pGsm->Receive( &lCount );
	m_pGsm->get_LastError( &lLastError );
	if( lLastError != 0 ){
		m_pGsm->GetErrorDescription( lLastError, &bstrErrDescr );
		if( bstrErrDescr != NULL ){
			sprintf( szErrorDescription, "%ls", bstrErrDescr );
			m_sLastError = szErrorDescription;
			update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			
			SysFreeString ( bstrErrDescr );
		}
		VariantClear( &vtVar );
		return FALSE;
	}
	
	for( l = 0 ; l < lCount ; l++ )
	{
		m_pObjDevice->tStart = CTime::GetCurrentTime();

		m_pGsm->GetMessage ( l, &vtVar );

		m_pGsm->get_LastError( &lLastError );
		if( lLastError != 0 ){
			m_pGsm->GetErrorDescription( lLastError, &bstrErrDescr );
			if( bstrErrDescr != NULL ){
				sprintf( szErrorDescription, "%ls", bstrErrDescr );
				m_sLastError = szErrorDescription;
				update_view( m_pObjDevice->nComport, "ERR", m_sLastError );
			
				SysFreeString ( bstrErrDescr );
			}
			VariantClear( &vtVar );
			return FALSE;
		}
		
		if ( lLastError == 0L && vtVar.vt == VT_DISPATCH && ( pMessage = ( ISmsMessage* ) vtVar.pdispVal ) != NULL )
		{
			pMessage->get_Sender(&bstrTemp);			// Get Message Sender
			sPhoneno = bstrTemp;
			sPhoneno.Replace( "+65","" );
			SysFreeString (bstrTemp);

			pMessage->get_Format( &lMessageFormat );
			pMessage->get_Data (&bstrTemp);				// Get Message Text
			if( lMessageFormat == asMESSAGEFORMAT_DATA ){
				//printf( "  %-10.10s %s\n", "Data:", "<DATA>" );
				sMsg = "";
			}
			else{
				sMsg = bstrTemp;
				sMsg.Remove( '\"' );
				sMsg.Replace( "'", "''" );
				nLen = sMsg.GetLength();
				if( nLen > 159 )
					sMsg = sMsg.Right( 159 );
			}
			SysFreeString (bstrTemp);
			VariantClear( &vtVar );
			
			sCtemp.Format( "MMS frm 65%s", m_pObjDevice->sGSM_no );
			n = sMsg.Find( sCtemp );
			if( sMsg == "" || n > 0 ){
			}
			else{
				
				m_pObjDevice->tEnd = CTime::GetCurrentTime();
				ts = m_pObjDevice->tEnd - m_pObjDevice->tStart;
			
				sCtemp.Format( "insert into SMS_Inbox (phoneno,gsm_no,com_port,m_textmsg,msg_status,in_dttm) values ('%s','%s',%d,'%s','N',getdate())",
					sPhoneno, m_pObjDevice->sGSM_no, m_pObjDevice->nComport, sMsg );
				update_view( m_pObjDevice->nComport, "SQL", "insert into SMS_Inbox (phoneno, gsm_no, com_port ..." );
				TRY{
					m_pApp->m_pServerView->m_pDatabase->ExecuteSQL(sCtemp);
				}
				CATCH(CDBException, e){
					m_sLastError = e->m_strError;
					update_view( 0, "ERR", m_sLastError );
				}
				END_CATCH

				sCtemp.Format( "insert into broadcastdetail_sms (mob_id,alarm_id,adhoc_id,contact_no,contact_operator,contact_mode,sms_mode,sms_str_dttm,sms_end_dttm,sms_msg,duration,gsm_no,gsm_operator,update_dttm) values (0,0,0,'%s',' ','H','I',dateadd(s,-%d,getdate()),getdate(),'%s',%d,'%s','%c',getdate())",
					sPhoneno, ts.GetTotalSeconds(), sMsg, ts.GetTotalSeconds(), m_pObjDevice->sGSM_no, m_pObjDevice->cGsmNetwork );
				update_view( m_pObjDevice->nComport, "SQL", "insert into broadcastdetail_sms (mob_id, alarm_id, adhoc_id ..." );
				TRY{
					m_pApp->m_pServerView->m_pDatabase->ExecuteSQL(sCtemp);
				}
				CATCH(CDBException, e){
					m_sLastError = e->m_strError;
					update_view( 0, "ERR", m_sLastError );
				}
				END_CATCH
			}
		}
	}
	
	VariantClear( &vtVar );
	if( lCount > 0 )
		return NEW_MSG;
	
	return TRUE;
}
