// ServerView.cpp : implementation of the CServerView class
//

#include "stdafx.h"
#include "Server.h"

#include "ServerDoc.h"
#include "ServerView.h"
#include <comdef.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CServerView

IMPLEMENT_DYNCREATE(CServerView, CTreeView)

BEGIN_MESSAGE_MAP(CServerView, CTreeView)
	//{{AFX_MSG_MAP(CServerView)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_EVENTSINK_MAP(CServerView, CTreeView)
END_EVENTSINK_MAP()

/////////////////////////////////////////////////////////////////////////////
// CServerView construction/destruction

CServerView::CServerView()
{
	// TODO: add construction code here
	
}

CServerView::~CServerView()
{
	update_station_register( OUT_DTTM );
	update_audit_trace( OUT_DTTM );
	cmd_close_database();
}

BOOL CServerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CTreeView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CServerView drawing

void CServerView::OnDraw(CDC* pDC)
{
	CServerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

void CServerView::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();


	// TODO: You may populate your TreeView with items by directly accessing
	//  its tree control through a call to GetTreeCtrl().
	m_plstImage = new CImageList;
	ASSERT( m_plstImage != NULL );
	m_pApp = (CServerApp *)AfxGetApp();
	ASSERT( m_pApp != NULL );
	m_pApp->m_pServerView = this;

	m_plstImage->Create(16, 16, ILC_MASK, 4, 4);   
  	m_plstImage->Add(m_pApp->LoadIcon(IDR_MAINFRAME));
	m_plstImage->Add(m_pApp->LoadIcon(IDR_CLIENTOFF));
	m_plstImage->Add(m_pApp->LoadIcon(IDR_CLIENTON));
	m_plstImage->Add(m_pApp->LoadIcon(IDR_CLIENTERR));

	GetTreeCtrl().SetImageList(m_plstImage, LVSIL_NORMAL);

	if( cmd_init_app() == FALSE ){
		AfxMessageBox( m_sLastError );
		exit ( 0 );
	}
	SetTimer( 10, 2000, NULL );

}

/////////////////////////////////////////////////////////////////////////////
// CServerView diagnostics

#ifdef _DEBUG
void CServerView::AssertValid() const
{
	CTreeView::AssertValid();
}

void CServerView::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}

CServerDoc* CServerView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CServerDoc)));
	return (CServerDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CServerView message handlers

void CServerView::SetWndStyle(long lStyleMask, BOOL bSetBits)
{
	long	lStyleOld;

	lStyleOld = GetWindowLong(m_hWnd, GWL_STYLE);
	lStyleOld &= ~lStyleMask;
	if (bSetBits)	lStyleOld |= lStyleMask;

	SetWindowLong(m_hWnd, GWL_STYLE, lStyleOld);
}

void CServerView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	KillTimer( nIDEvent );
	m_dwTimer ++;

	static int lstminute = 0;
	int nMinute = 0;
	int nRetval;
	CString sCtemp;
	
	if( m_pDatabase == NULL ){
		nRetval = cmd_open_database();
		if( nRetval == FALSE ){
			SetTimer( nIDEvent, 60000, NULL );
			CTreeView::OnTimer(nIDEvent);
			return;
		}
	}
	
	if( m_dwTimer == 1 ){
		update_view( 0, "LOG", "starting SPF Recall System MMS Center ..." );
		update_view( 0, "LOG", "open database completed" );
		sCtemp.Format( "Get User name - %s", m_sUsername );
		update_view( 0, "LOG", sCtemp );

		sCtemp.Format( "Get Computer name - %s", m_sPcname );
		update_view( 0, "LOG", sCtemp );
	
		if( cmd_init_view() == FALSE ){
			update_view( 0, "ERR", m_sLastError );
		}
		else{
			update_view( 0, "LOG", "initialize communication objects completed" );
		}
		
		update_audit_trace( IN_DTTM );
		update_station_register( IN_DTTM );

		SetTimer( nIDEvent, 1000, NULL );
		CTreeView::OnTimer(nIDEvent);
		return;
	}
	
	cmd_icon_change();
	nMinute = get_workstation_time();
	
	if( lstminute != nMinute ){
		lstminute = nMinute;
		update_station_register( UPDATE_DTTM );
	}
	
	nRetval = device_complete_status();

	m_nWorkingDevice = check_working_device();
	if( m_nWorkingDevice >= MAX_CONCURRENT ){
		SetTimer( nIDEvent, 1000, NULL );
		CTreeView::OnTimer(nIDEvent);
		return;
	}

	m_nAvailableDevice = check_available_device();
	if( m_nAvailableDevice == 0 ){
		SetTimer( nIDEvent, 1000, NULL );
		CTreeView::OnTimer(nIDEvent);
		return;
	}

	g_tCount ++;
	if( g_tCount > TMR_15SECONDS || m_lstMobid > 0 || m_lstAdhocid > 0 ){
		g_tCount = 0;
		
		m_lstMobid = check_mobbroadcast_timetable();
		m_lstAdhocid = check_adhoc_timetable();
	}
	
	if( m_lstMobid > 0 ){
		m_lstMobid = check_register_status( m_lstMobid );
	}
	if( m_lstAdhocid > 0 ){
		check_adhoc_log( m_lstAdhocid );
	}
	if( m_lstMobid > 0 || m_lstAdhocid > 0 ){
		SetTimer( nIDEvent, 1000, NULL );
		CTreeView::OnTimer(nIDEvent);
		return;
	}
	

	if( m_lstMobid == 0 && m_lstAdhocid == 0 ){
		nRetval = check_incoming_msg();
		if( nRetval == TRUE ){
			m_nFilenameid = cmd_get_filenameid();
		}
	}


	SetTimer( nIDEvent, 1000, NULL );
	CTreeView::OnTimer(nIDEvent);
}

BOOL CServerView::cmd_open_database()
{
	CString sCtemp;
	
	m_pDatabase = new CDatabase();
	
	TRY{
		sCtemp.LoadString( ID_CONNECT_STATEMENT );
		m_pDatabase->OpenEx( sCtemp,CDatabase::noOdbcDialog );
	}
	CATCH(CDBException, e){
		m_sLastError = e->m_strError;
		delete m_pDatabase;
		m_pDatabase = NULL;
		return FALSE;
	}
	END_CATCH

	return TRUE;
}

void CServerView::cmd_close_database()
{
	if( m_pDatabase ){
		if( m_pDatabase->IsOpen() ){
			m_pDatabase->Close();
		}
		delete m_pDatabase;
	}
	m_pDatabase = NULL;
}

BOOL CServerView::cmd_init_view()
{
	
	if( m_pDatabase == NULL ){
		m_sLastError = "cmd_init_view: m_pDatabase == NULL";
		return FALSE;
	}

	char cSQLStatement[270];
	SQLHSTMT hSelect;
	char cGSM_no[9];
	char cNetwork[2], cUsed[2];
	char cAPN[21], cAPNAcc[21], cAPNPwd[21];
	char cWAPGateway[16], cMMSC[51];
	SQLINTEGER cb_cGSM_no = SQL_NTS;
	SQLINTEGER cb_cNetwork = SQL_NTS;
	SQLINTEGER cb_cUsed = SQL_NTS;
	SQLINTEGER cb_cAPN = SQL_NTS;
	SQLINTEGER cb_cAPNAcc = SQL_NTS;
	SQLINTEGER cb_cAPNPwd = SQL_NTS;
	SQLINTEGER cb_cWAPGateway = SQL_NTS;
	SQLINTEGER cb_cMMSC = SQL_NTS;
	SQLINTEGER nComport = 0,cb_nComport = 0;
	int i = 0, nRetval;
	OBJ_Device *pObjDevice;

	
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select com_port,gsm_no,network,used, APN, WAPGateway, MMSC, APNAcc, APNPwd from mms_device (nolock) where app_code = '" );
	strcat(cSQLStatement, m_sApplicationid );
	strcat(cSQLStatement,"' order by com_port asc" );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		return FALSE;
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nComport,sizeof(SQLINTEGER),&cb_nComport);
	nRetval = SQLBindCol(hSelect,2,SQL_C_CHAR,&cGSM_no,9,&cb_cGSM_no);
	nRetval = SQLBindCol(hSelect,3,SQL_C_CHAR,&cNetwork,2,&cb_cNetwork);
	nRetval = SQLBindCol(hSelect,4,SQL_C_CHAR,&cUsed,2,&cb_cUsed);
	nRetval = SQLBindCol(hSelect,5,SQL_C_CHAR,&cAPN,21,&cb_cAPN);
	nRetval = SQLBindCol(hSelect,6,SQL_C_CHAR,&cWAPGateway,16,&cb_cWAPGateway);
	nRetval = SQLBindCol(hSelect,7,SQL_C_CHAR,&cMMSC,51,&cb_cMMSC);
	nRetval = SQLBindCol(hSelect,8,SQL_C_CHAR,&cAPNAcc,21,&cb_cAPNAcc);
	nRetval = SQLBindCol(hSelect,9,SQL_C_CHAR,&cAPNPwd,21,&cb_cAPNPwd);
	nComport = 0; strcpy( cGSM_no, "" );
	strcpy( cNetwork, "" ); strcpy( cUsed, "" );
	strcpy( cAPN, "" ); strcpy( cWAPGateway, "" );
	strcpy( cMMSC, "" ); strcpy( cAPNAcc, "" ); strcpy( cAPNPwd, "" );
	nRetval = SQLFetch( hSelect );
	while( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		
		pObjDevice = m_pApp->m_pMMSView[i]->m_pObjDevice;
		pObjDevice->nComport = nComport;
		if( cUsed[0] == 'Y' ){
			pObjDevice->cState = DEV_INIT;
		}
		else{
			pObjDevice->cState = DEV_UNUSED;
		}
		pObjDevice->sGSM_no = cGSM_no;
		pObjDevice->cGsmNetwork = cNetwork[0];
		if( cNetwork[0] == 'H' )
			//pObjDevice->nMax_Mms_Contacts = 40;
			pObjDevice->nMax_Mms_Contacts = 40;
		if( cNetwork[0] == 'S' )
			pObjDevice->nMax_Mms_Contacts = 30;
		if( cNetwork[0] == 'M' )
			pObjDevice->nMax_Mms_Contacts = 20;
		pObjDevice->hImage = NULL;
		pObjDevice->sAPN = cAPN; pObjDevice->sAPN.TrimRight();
		pObjDevice->sAPNAcc = cAPNAcc; pObjDevice->sAPNAcc.TrimRight();
		pObjDevice->sAPNPwd = cAPNPwd; pObjDevice->sAPNPwd.TrimRight();
		pObjDevice->sWAPGateway = cWAPGateway; pObjDevice->sWAPGateway.TrimRight();
		pObjDevice->sMMSC = cMMSC; pObjDevice->sMMSC.TrimRight();

		nComport = 0; strcpy( cGSM_no, "" );
		strcpy( cNetwork, "" ); strcpy( cUsed, "" );
		strcpy( cAPN, "" ); strcpy( cWAPGateway, "" );
		strcpy( cMMSC, "" ); strcpy( cAPNAcc, "" ); strcpy( cAPNPwd, "" );
		nRetval = SQLFetch( hSelect );
		
		i = i + 1;
		if( i >= MAX_COM_OBJECT )
			break;
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
	
	if( i == 0 ){
		m_sLastError = "No MMS device used, please contact system administrator.";
		return FALSE;
	}
	
	CString sCtemp;
	int nLen, nNum, nNums;
	TV_INSERTSTRUCT tvItemStruct;
	HTREEITEM hParentItem,hItem;
	
	tvItemStruct.hParent = NULL;
	tvItemStruct.hInsertAfter = TVI_SORT;
	tvItemStruct.item.iImage = 0;
	tvItemStruct.item.iSelectedImage = tvItemStruct.item.iImage;
	sCtemp = "SPF - MMS CONTROL CENTER";
	nLen = sCtemp.GetLength();
	tvItemStruct.item.pszText = sCtemp.GetBuffer( nLen );
	sCtemp.ReleaseBuffer();
	tvItemStruct.item.mask = TVIF_IMAGE | TVIF_SELECTEDIMAGE | TVIF_TEXT;
	hParentItem = GetTreeCtrl().InsertItem(&tvItemStruct);
		
	nNums = MAX_COM_OBJECT;
	for( nNum=0; nNum<nNums; nNum++ ){
		tvItemStruct.hParent = hParentItem;
		tvItemStruct.hInsertAfter = TVI_SORT;
		tvItemStruct.item.iImage = 1;
		tvItemStruct.item.iSelectedImage = tvItemStruct.item.iImage;
		
		pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
		tvItemStruct.item.mask = TVIF_IMAGE | TVIF_SELECTEDIMAGE | TVIF_TEXT;
		hItem = GetTreeCtrl().InsertItem(&tvItemStruct);
		pObjDevice->hImage = hItem;
		
		sCtemp.Format( "<%s> <COM%.2d> UNUSED", m_sApplicationid, pObjDevice->nComport);
		pObjDevice->sIcontext = sCtemp;
		GetTreeCtrl().SetItemText(pObjDevice->hImage, pObjDevice->sIcontext );
		GetTreeCtrl().SetItemImage(pObjDevice->hImage, 1,1);
	
	}

	GetTreeCtrl().SetItemHeight( 32 );
	SetWndStyle(TVS_HASLINES, TRUE);
	SetWndStyle(TVS_LINESATROOT, TRUE);
	SetWndStyle(TVS_HASBUTTONS, TRUE);
	SetWndStyle(TVS_DISABLEDRAGDROP, TRUE);
	GetTreeCtrl().Expand(hParentItem,TVE_EXPAND);

	COLORREF Color = 0x00C0C0C0;
	GetTreeCtrl().SetBkColor( Color );

	GetTreeCtrl().SortChildren(TVI_ROOT);

	return TRUE;
}


void CServerView::update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg)
{
	m_pApp->m_pMsgView->update_view(nComport, pMsgtype, pMsg);
}


void CServerView::DoEvents()
{
	MSG msg;

	// Process existing messages in the application's message queue.
	// When the queue is empty, do clean up and return.
	while (::PeekMessage(&msg,NULL,0,0,PM_NOREMOVE) )
	{
		if (!AfxGetThread()->PumpMessage())
			return;
	}
}

OBJ_Device * CServerView::get_com_table(int nPort)
{
	POSITION ptPosition;
	OBJ_Device *pObjDevice;

	int nNums = m_pApp->m_lstObjDevice.GetCount();
	int nNum;
	for( nNum=0; nNum<nNums; nNum++ ){
		ptPosition = m_pApp->m_lstObjDevice.FindIndex( nNum );
		if( !ptPosition )
			continue;
		pObjDevice = (OBJ_Device *)m_pApp->m_lstObjDevice.GetAt( ptPosition );
		if( !pObjDevice )
			continue;
		if( pObjDevice->nComport == nPort  )
			return pObjDevice;
	}

	return NULL;
}

BOOL CServerView::update_station_register(int nMode)
{
	if( m_pDatabase == NULL )
		return FALSE;
	
	CString sCtemp;
	int nChansblock = 0;
	OBJ_Device *pObjDevice;
	int nNum, nNums;
	
	switch( nMode ){
	case IN_DTTM:
		sCtemp.Format( "update systemmonitoring set app_name = '%s', pc_name = '%s', in_dttm = getdate(), alarm_dttm = dateadd(n,5,getdate()), chans_block = 0, chans_dttm = getdate(), chans_alarm = dateadd(n,5,getdate()) where app_code = '%s'",
			"MMS", m_sPcname, m_sApplicationid );
		update_view( 0, "LOG", sCtemp );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
			cmd_close_database();
			return FALSE;
		}
		END_CATCH
		break;
	case UPDATE_DTTM:
		nNums = MAX_COM_OBJECT;
		for( nNum=0; nNum<nNums; nNum++ ){
			pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
			if( !pObjDevice )
				break;
			if( pObjDevice->cState == DEV_ERR )
				nChansblock = nChansblock + 1;
		}
	
		if( nChansblock > 0 ){
			sCtemp.Format( "update systemmonitoring set pro_dttm = getdate(), alarm_dttm = dateadd(n,5,getdate()), chans_block = %d where app_code = '%s'",
				nChansblock, m_sApplicationid );
			update_view( 0, "LOG", sCtemp );
			TRY{
				m_pDatabase->ExecuteSQL(sCtemp);
			}
			CATCH(CDBException, e){
				m_sLastError = e->m_strError;
				update_view( 0, "ERR", m_sLastError );
				cmd_close_database();
				return FALSE;
			}
			END_CATCH
		}
		else{
			sCtemp.Format( "update systemmonitoring set pro_dttm = getdate(), alarm_dttm = dateadd(n,5,getdate()), chans_block = %d, chans_dttm = getdate(), chans_alarm = dateadd(n,5,getdate()) where app_code = '%s'",
				nChansblock, m_sApplicationid );
			update_view( 0, "LOG", sCtemp );
			TRY{
				m_pDatabase->ExecuteSQL(sCtemp);
			}
			CATCH(CDBException, e){
				m_sLastError = e->m_strError;
				update_view( 0, "ERR", m_sLastError );
				cmd_close_database();
				return FALSE;
			}
			END_CATCH
		}
		break;
	case OUT_DTTM:
		sCtemp.Format( "update systemmonitoring set out_dttm = getdate(), alarm_dttm = dateadd(n,5,getdate()), chans_block = 0, chans_dttm = getdate(), chans_alarm = dateadd(n,5,getdate()) where app_code = '%s'",
			m_sApplicationid );
		update_view( 0, "LOG", sCtemp );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
			cmd_close_database();
			return FALSE;
		}
		END_CATCH
		break;
	default:
		return FALSE;
		break;
	}
	return TRUE;

}

int CServerView::check_mobbroadcast_timetable()
{
	if( m_pDatabase == NULL )
		return 0;

	char cSQLStatement[350];
	SQLHSTMT hSelect;
	SQLINTEGER nMobid = 0, cb_nMobid = 0;
	SQLINTEGER nAmsgid = 0, cb_nAmsgid = 0;
	SQLINTEGER aMobid[10];
	SQLINTEGER aAmsgid[10];
	int i, nNum, nRetval;
	CString sCtemp;
	char cPicture[16], cVideo[16];
	char cTextmsg[513];
	SQLINTEGER cb_cPicture = SQL_NTS;
	SQLINTEGER cb_cVideo = SQL_NTS;
	SQLINTEGER cb_cTextmsg = SQL_NTS;
	

	for( i = 0; i < 10; i++ ){
		aMobid[i] = 0;
		aAmsgid[i] = 0;
	}
	nNum = 0;
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	sprintf(cSQLStatement,"select mob_id, a_msg_id from mobbroadcast_timetable (nolock) where status = 'D' and mob_id > %d order by mob_id",
		m_lstMobid );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval );
		update_view( 0, "ERR", m_sLastError );
		return 0;
	}
	//update_view( 0, "SQL", cSQLStatement );
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nMobid,sizeof(SQLINTEGER),&cb_nMobid);
	nRetval = SQLBindCol(hSelect,2,SQL_C_SLONG,&nAmsgid,sizeof(SQLINTEGER),&cb_nAmsgid);
	nRetval = SQLFetch( hSelect );
	while( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		
		aMobid[ nNum ] = nMobid;
		aAmsgid[ nNum ] = nAmsgid;

		nNum = nNum + 1;
		if( nNum > 8 ){
			SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
			break;
		}
		
		nMobid = 0;
		nAmsgid = 0;
		nRetval = SQLFetch( hSelect );
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);

	if( nNum > 0 ){
		for( i = 0; i < nNum; i++ ){
			SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
			sprintf(cSQLStatement,"select m_picturefile, m_videofile, m_textmsg from ack_msg (nolock) where a_msg_id = %d", aAmsgid[i] );
			nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
			if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
				SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
			
				m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
				update_view( 0, "ERR", m_sLastError );
				return 0;
			}
			nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&cPicture,15,&cb_cPicture);
			nRetval = SQLBindCol(hSelect,2,SQL_C_CHAR,&cVideo,15,&cb_cVideo);
			nRetval = SQLBindCol(hSelect,3,SQL_C_CHAR,&cTextmsg,513,&cb_cTextmsg);
			strcpy( cPicture, "" );
			strcpy( cVideo, "" );
			strcpy( cTextmsg, "" );
			nRetval = SQLFetch( hSelect );
			if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
				cPicture[15] = '\0';
				cVideo[15] = '\0';
				cTextmsg[512] = '\0';
				sCtemp = cPicture;
				sCtemp.TrimRight();
				if( sCtemp != "" ){
					SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
					return aMobid[i];
				}
				sCtemp = cVideo;
				sCtemp.TrimRight();
				if( sCtemp != "" ){
					SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
					return aMobid[i];
				}
				sCtemp = cTextmsg;
				sCtemp.TrimRight();
				if( sCtemp != "" ){
					SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
					return aMobid[i];
				}
			}
			else{
			}
			SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		}	
	}

	for( i = 0; i < 10; i++ ){
		aMobid[i] = 0;
		aAmsgid[i] = 0;
	}
	nNum = 0;
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select mob_id, a_msg_id from mobbroadcast_timetable (nolock) where status = 'D' order by mob_id" );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval );
		update_view( 0, "ERR", m_sLastError );
		return 0;
	}
	//update_view( 0, "SQL", cSQLStatement );
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nMobid,sizeof(SQLINTEGER),&cb_nMobid);
	nRetval = SQLBindCol(hSelect,2,SQL_C_SLONG,&nAmsgid,sizeof(SQLINTEGER),&cb_nAmsgid);
	nRetval = SQLFetch( hSelect );
	while( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		
		aMobid[ nNum ] = nMobid;
		aAmsgid[ nNum ] = nAmsgid;

		nNum = nNum + 1;
		if( nNum > 8 ){
			SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
			break;
		}
		
		nMobid = 0;
		nAmsgid = 0;
		nRetval = SQLFetch( hSelect );
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);

	if( nNum > 0 ){
		for( i = 0; i < nNum; i++ ){
			SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
			sprintf(cSQLStatement,"select m_picturefile, m_videofile, m_textmsg from ack_msg (nolock) where a_msg_id = %d", aAmsgid[i] );
			nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
			if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
				SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
			
				m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
				update_view( 0, "ERR", m_sLastError );
				return 0;
			}
			nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&cPicture,15,&cb_cPicture);
			nRetval = SQLBindCol(hSelect,2,SQL_C_CHAR,&cVideo,15,&cb_cVideo);
			nRetval = SQLBindCol(hSelect,3,SQL_C_CHAR,&cTextmsg,513,&cb_cTextmsg);
			strcpy( cPicture, "" );
			strcpy( cVideo, "" );
			strcpy( cTextmsg, "" );
			nRetval = SQLFetch( hSelect );
			if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
				cPicture[15] = '\0';
				cVideo[15] = '\0';
				cTextmsg[512] = '\0';
				sCtemp = cPicture;
				sCtemp.TrimRight();
				if( sCtemp != "" ){
					SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
					return aMobid[i];
				}
				sCtemp = cVideo;
				sCtemp.TrimRight();
				if( sCtemp != "" ){
					SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
					return aMobid[i];
				}
				sCtemp = cTextmsg;
				sCtemp.TrimRight();
				if( sCtemp != "" ){
					SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
					return aMobid[i];
				}
			}
			else{
			}
			SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		}	
	}

	return 0;
	
}

OBJ_Device * CServerView::get_com_device(char cNetwork, int nContacts)
{
	int i = 0, nNum, nNums;
	OBJ_Device *pObjDevice = NULL;
	nNums = MAX_COM_OBJECT;
	
	if( m_lstDevice > nNums - 1 )
		m_lstDevice = 0;
	
	if( cNetwork == ' ' ){ // any network
		for( i = 0; i < nNums; i ++ ){
			//nNum = m_lstDevice + i + 1;
			nNum = m_lstDevice + i;
			if( nNum > nNums - 1 )
				nNum = nNum - nNums;
			pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
			if( pObjDevice->nBitErrorRate > 0 || pObjDevice->nSignalStrength < 10 || pObjDevice->nSignalStrength > 35 )
				continue;

			if( pObjDevice->cState == DEV_USED && pObjDevice->cCmdstatus == CMD_START &&
				pObjDevice->nMax_Mms_Contacts > nContacts ){
				
				m_lstDevice = nNum;
				return pObjDevice;
			}
		}

		for( i = 0; i < nNums; i ++ ){
			//nNum = m_lstDevice + i + 1;
			nNum = m_lstDevice + i;
			if( nNum > nNums - 1 )
				nNum = nNum - nNums;
			pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
			if( pObjDevice->nBitErrorRate > 0 || pObjDevice->nSignalStrength < 10 || pObjDevice->nSignalStrength > 35 )
				continue;

			if( pObjDevice->cState == DEV_USED && pObjDevice->cCmdstatus == CMD_START ){
			
				m_lstDevice = nNum;
				return pObjDevice;
			}
		}
	} // any network
	
	else{

		for( i = 0; i < nNums; i ++ ){
			//nNum = m_lstDevice + i + 1;
			nNum = m_lstDevice + i;
			if( nNum > nNums - 1 )
				nNum = nNum - nNums;
			pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
			if( pObjDevice->nBitErrorRate > 0 || pObjDevice->nSignalStrength < 10 || pObjDevice->nSignalStrength > 35 )
				continue;

			if( pObjDevice->cState == DEV_USED && pObjDevice->cCmdstatus == CMD_START &&
				pObjDevice->cGsmNetwork == cNetwork ){
			
				m_lstDevice = nNum;
				return pObjDevice;
			}
		}
	
		for( i = 0; i < nNums; i ++ ){
			//nNum = m_lstDevice + i + 1;
			nNum = m_lstDevice + i;
			if( nNum > nNums - 1 )
				nNum = nNum - nNums;
			pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
			if( pObjDevice->nBitErrorRate > 0 || pObjDevice->nSignalStrength < 10 || pObjDevice->nSignalStrength > 35 )
				continue;

			if( pObjDevice->cState == DEV_USED && pObjDevice->cCmdstatus == CMD_START ){
			
				m_lstDevice = nNum;
				return pObjDevice;
			}
		}
	}

	return NULL;
}

void CServerView::update_audit_trace(int nMode)
{
	if( m_pDatabase == NULL )
		return;

	CString sCtemp;
	
	switch( nMode ){
	case IN_DTTM:
		sCtemp.Format( "insert into audit_trace (app_name, pc_name, [function], action, action_dttm, action_by) values ('%s', '%s', '%s', '%s', getdate(), '%s')",
			"MMS", m_sPcname, m_sApplicationid, "APP START", m_sUsername );
		update_view( 0, "SQL", sCtemp );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
			cmd_close_database();
			return;
		}
		END_CATCH
		break;
	case OUT_DTTM:
		sCtemp.Format( "insert into audit_trace (app_name, pc_name, [function], action, action_dttm, action_by) values ('%s', '%s', '%s', '%s', getdate(), '%s')",
			"MMS", m_sPcname, m_sApplicationid, "APP STOP", m_sUsername );
		update_view( 0, "SQL", sCtemp );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
			cmd_close_database();
			return;
		}
		END_CATCH
		break;
	default:
		break;
	}
	return;
}



char CServerView::check_GSM_network(LPCTSTR pPhoneno)
{
	if( m_pDatabase == NULL )
		return 'O';

	CString sCtemp = pPhoneno;
	CString sPhoneno;
	char cSQLStatement[200];
	SQLHSTMT hSelect;
	char cNetwork[2];
	SQLINTEGER cb_cNetwork = SQL_NTS;
	int nRetval;
	
	if( sCtemp.GetLength() > 5 )
		sPhoneno = sCtemp.Left( 4 );
	else
		return 'O';

	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select operator from mobile_operator (nolock) where '");
	strcat(cSQLStatement,sPhoneno );
	strcat(cSQLStatement,"' between str_level and end_level order by update_dttm desc" );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "1100 \"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		return 'O';
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&cNetwork,2,&cb_cNetwork);
	strcpy( cNetwork, "O" );
	nRetval = SQLFetch( hSelect );
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
	
	switch( cNetwork[0] ){
	case 'S':
		return 'S';
		break;
	case 'M':
		return 'M';
		break;
	case 'H':
		return 'H';
		break;
	default:
		return 'O';
		break;
	}
	
	return 'O';
}

int CServerView::get_system_time()
{
	char cSQLStatement[100];
	SQLHSTMT hSelect;
	char sysdttm[25],tmp[3];
	SQLINTEGER cb_sysdttm=SQL_NTS;
	int nRetval,nMinute = 0;
	CString sCtemp;
	
	CTime cTime = CTime::GetCurrentTime();
	nMinute = cTime.GetMinute();
	if( m_pDatabase == NULL ){
		m_sCurrentTime = cTime.Format( "TIME: %Y-%m-%d %H:%M:%S" );
		return nMinute;
	}

	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select getdate()");
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		update_view( 0, "ERR", m_sLastError );
		cmd_close_database();
		return nMinute;
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&sysdttm,24,&cb_sysdttm);
	strcpy( sysdttm, "" );
	nRetval = SQLFetch( hSelect );
	if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		sysdttm[19] = '\0';
		m_sCurrentTime.Format( "TIME: %s", sysdttm );
		tmp[0] = sysdttm[14];
		tmp[1] = sysdttm[15];
		tmp[2] = '\0';
		nMinute = atoi(tmp);
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
	
	return nMinute;
}

BOOL CServerView::cmd_init_app()
{
	CString sCtemp;
	char buf[127], tmp[10];
	unsigned long lengthofbuffer;
	int lengthofusername;
	int lengthofpcname;
	FILE *fp;
	int nRetval;

	lengthofusername = 9;
	lengthofpcname = 15;
	
	m_sCurrentTime = "";
	m_sLastError = "";

	fp = fopen("c:\\windows\\acd_cti.ini","r");
	if ( fp == NULL ){
		m_sLastError = "Error open acd_cti.ini";
		return FALSE;
	}
	nRetval = GetPrivateProfileString("Station","PC_StationID","",tmp,10,"c:\\windows\\acd_cti.ini");
	if( nRetval == 0 ){
		m_sLastError = "Error open acd_cti.ini";
		return FALSE;
	}
	m_pcid[0] = tmp[0];
	m_pcid[1] = tmp[1];
	m_pcid[2] = NULL;

	nRetval = GetPrivateProfileString("Station","MMS_Folder","",buf,125,"c:\\windows\\acd_cti.ini");
	if( nRetval == 0 ){
		m_sLastError = "Error open acd_cti.ini";
		return FALSE;
	}
	m_sMMS_Folder = buf;
	m_sMMS_Folder.TrimRight();
	nRetval = GetPrivateProfileString("Station","Temp_Folder","",buf,125,"c:\\windows\\acd_cti.ini");
	if( nRetval == 0 ){
		m_sLastError = "Error open acd_cti.ini";
		return FALSE;
	}
	m_sTemp_Folder = buf;
	m_sTemp_Folder.TrimRight();

	fclose(fp);

	m_sApplicationid.Format( "03%s", m_pcid );
	
	m_dwTimer = 0;
	m_lstMobid = 0;
	m_lstAdhocid = 0;
	m_lstDevice = MAX_COM_OBJECT - 1;
	g_tCount = 0;
	m_nAvailableDevice = 0;
	m_nWorkingDevice = 0;
	m_nFilenameid = 0;

	lengthofbuffer = 25;	
	if( ::GetUserName(buf,&lengthofbuffer) == 0 ){
		strcpy( buf, "Unknown" );
	}
	else{
		buf[lengthofusername] = '\0';
	}
	m_sUsername = buf;
	
	lengthofbuffer = 25;
	if( ::GetComputerName(buf,&lengthofbuffer) == 0 ){
		strcpy( buf, "Unknown" );
	}
	else{
		buf[lengthofpcname] = '\0';
	}
	m_sPcname = buf;
	
	m_pDatabase = NULL;
	if( cmd_open_database() == FALSE )
		return FALSE;
	
	return TRUE;
}

int CServerView::get_workstation_time()
{
	int nMinute;
	CTime cTime = CTime::GetCurrentTime();
	nMinute = cTime.GetMinute();
	m_sCurrentTime = cTime.Format( "TIME: %Y-%m-%d %H:%M:%S" );

	return nMinute;
}

int CServerView::check_register_status(int nMob_id)
{

	if( m_pDatabase == NULL )
		return 0;

	OBJ_Device *pObjDevice;

	pObjDevice = get_com_device( ' ', 0 );
	if( pObjDevice == NULL )
		return nMob_id;

	char cSQLStatement[700], tmp[10];
	SQLHSTMT hSelect;
	char cNRIC[10], cPin[10];
	char cCn[6][9];
	char cCn_status[6][2],cCn_network[6][2];
	char cCn_mode[6][2];
	char cRegisterno[9], cAckstatus[2];
	SQLINTEGER cb_cRegisterno = SQL_NTS;
	SQLINTEGER cb_cAckstatus = SQL_NTS;
	SQLINTEGER cb_cNRIC = SQL_NTS;
	SQLINTEGER cb_cPin = SQL_NTS;
	SQLINTEGER cb_cCn[6],cb_cCn_mode[6];
	SQLINTEGER cb_cCn_status[6],cb_cCn_network[6];
	SQLINTEGER nAmsgid = 0,cb_nAmsgid = 0;
	SQLINTEGER nMobid = 0,cb_nMobid = 0;
	SQLINTEGER nWhichbroadcast = 0,cb_nWhichbroadcast = 0;
	
	char cAmsgcode[31];
	char cPicture[16], cVideo[16];
	char cTextmsg[513];
	SQLINTEGER cb_cAmsgcode = SQL_NTS;
	SQLINTEGER cb_cPicture = SQL_NTS;
	SQLINTEGER cb_cVideo = SQL_NTS;
	SQLINTEGER cb_cTextmsg = SQL_NTS;

	int nRetval, nI, nRows = 0;
	CString sCtemp;
	
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select Mob_id,a_msg_id,Whichbroadcast,NRIC,Pin,ack_status,register_no,");
	strcat(cSQLStatement,"Cn1st,Cn1st_mode,Cn1st_sms,Cn1st_Network,Cn2nd,Cn2nd_mode,Cn2nd_sms,Cn2nd_Network,Cn3rd,Cn3rd_mode,Cn3rd_sms,Cn3rd_Network,");
	strcat(cSQLStatement,"Cn4th,Cn4th_mode,Cn4th_sms,Cn4th_Network,Cn5th,Cn5th_mode,Cn5th_sms,Cn5th_Network,Cn6th,Cn6th_mode,Cn6th_sms,Cn6th_Network");
	strcat(cSQLStatement," from Mobnominalroll (nolock) Where Mob_id = ");
	sprintf( tmp, "%d", nMob_id );
	strcat(cSQLStatement, tmp );
	strcat(cSQLStatement, " and (ACK_Status = 'I' or ACK_Status = 'S') and MMS_status = 'N' and whichbroadcast > 0 order by Priority asc" );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		update_view( 0, "ERR", m_sLastError );
		return nMob_id;
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nMobid,sizeof(SQLINTEGER),&cb_nMobid);
	nRetval = SQLBindCol(hSelect,2,SQL_C_SLONG,&nAmsgid,sizeof(SQLINTEGER),&cb_nAmsgid);
	nRetval = SQLBindCol(hSelect,3,SQL_C_SLONG,&nWhichbroadcast,sizeof(SQLINTEGER),&cb_nWhichbroadcast);
	nRetval = SQLBindCol(hSelect,4,SQL_C_CHAR,&cNRIC,10,&cb_cNRIC);
	nRetval = SQLBindCol(hSelect,5,SQL_C_CHAR,&cPin,10,&cb_cPin);
	nRetval = SQLBindCol(hSelect,6,SQL_C_CHAR,&cAckstatus,2,&cb_cAckstatus);
	nRetval = SQLBindCol(hSelect,7,SQL_C_CHAR,&cRegisterno,9,&cb_cRegisterno);
	for( nI=0; nI<6; nI++ ){
		nRetval = SQLBindCol(hSelect,8+nI*4,SQL_C_CHAR,&cCn[nI],9,&cb_cCn[nI]);
		nRetval = SQLBindCol(hSelect,9+nI*4,SQL_C_CHAR,&cCn_mode[nI],2,&cb_cCn_mode[nI]);
		nRetval = SQLBindCol(hSelect,10+nI*4,SQL_C_CHAR,&cCn_status[nI],2,&cb_cCn_status[nI]);
		nRetval = SQLBindCol(hSelect,11+nI*4,SQL_C_CHAR,&cCn_network[nI],2,&cb_cCn_network[nI]);
	}

	strcpy( cRegisterno, "" );
	nMobid = 0; nAmsgid = 0; nWhichbroadcast = 0;
	strcpy( cNRIC, "" );
	strcpy( cPin, "" );
	strcpy( cAckstatus, "" );
	for( nI=0; nI<6; nI++ ){
		strcpy( cCn[nI], "" );
	}
	nRetval = SQLFetch( hSelect );
	while( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		cNRIC[9] = '\0'; cPin[9] = '\0';
		cRegisterno[8] = '\0';
		for( nI=0; nI<6; nI++ ){
			cCn[nI][8] = '\0';
		}
		sCtemp = cRegisterno;
		sCtemp.TrimRight();
		if( sCtemp.GetLength() == 8 ){
			pObjDevice->nMobid = nMobid;
			pObjDevice->nAmsgid = nAmsgid;
			pObjDevice->sNRIC[nRows] = cNRIC;
			pObjDevice->nWhichbroadcast[nRows] = nWhichbroadcast;
			pObjDevice->nWhichcontactno[nRows] = 0;
			pObjDevice->sPin[nRows] = cPin;
			pObjDevice->sContactno[nRows] = cRegisterno;
			pObjDevice->cContactNetwork[nRows] = 'O';
			nRows = nRows + 1;
			pObjDevice->nMms_Contacts = nRows;
			if( nRows >= pObjDevice->nMax_Mms_Contacts )
				break;
		}
		else{
			for( nI=0; nI<6; nI++ ){
				if( cCn_mode[nI][0] == 'H' ){
					pObjDevice->nMobid = nMobid;
					pObjDevice->nAmsgid = nAmsgid;
					pObjDevice->sNRIC[nRows] = cNRIC;
					pObjDevice->nWhichbroadcast[nRows] = nWhichbroadcast;
					pObjDevice->nWhichcontactno[nRows] = nI + 1;
					pObjDevice->sPin[nRows] = cPin;
					pObjDevice->sContactno[nRows] = cCn[nI];
					pObjDevice->cContactNetwork[nRows] = cCn_network[nI][0];
					nRows = nRows + 1;
					pObjDevice->nMms_Contacts = nRows;
					if( nRows >= pObjDevice->nMax_Mms_Contacts )
						break;
				}
			}
			if( nRows >= pObjDevice->nMax_Mms_Contacts )
				break;
		}
		
		if( nRows >= pObjDevice->nMax_Mms_Contacts )
			break;

		strcpy( cRegisterno, "" );
		nMobid = 0; nAmsgid = 0; nWhichbroadcast = 0;
		strcpy( cNRIC, "" );
		strcpy( cPin, "" );
		strcpy( cAckstatus, "" );
		for( nI=0; nI<6; nI++ ){
			strcpy( cCn[nI], "" );
		}
		nRetval = SQLFetch( hSelect );
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);

	if( nRows == 0 ) return nMob_id;

	for( nI = 0; nI < nRows; nI ++ ){
		if( pObjDevice->cContactNetwork[nI] == 'O' ){
			pObjDevice->cContactNetwork[nI] = check_GSM_network( pObjDevice->sContactno[nI] );
		}
	}

	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	sprintf(cSQLStatement,"select a_msg_code, m_picturefile, m_videofile, m_textmsg from ack_msg (nolock) where a_msg_id = %d", pObjDevice->nAmsgid );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		update_view( 0, "ERR", m_sLastError );
		return nMob_id;
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&cAmsgcode,31,&cb_cAmsgcode);
	nRetval = SQLBindCol(hSelect,2,SQL_C_CHAR,&cPicture,16,&cb_cPicture);
	nRetval = SQLBindCol(hSelect,3,SQL_C_CHAR,&cVideo,16,&cb_cVideo);
	nRetval = SQLBindCol(hSelect,4,SQL_C_CHAR,&cTextmsg,513,&cb_cTextmsg);
	strcpy( cAmsgcode, "" );
	strcpy( cPicture, "" );
	strcpy( cVideo, "" );
	strcpy( cTextmsg, "" );
	nRetval = SQLFetch( hSelect );
	if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		cAmsgcode[30] = '\0';
		cPicture[15] = '\0';
		cVideo[15] = '\0';
		cTextmsg[512] = '\0';
		pObjDevice->sAmsgcode = cAmsgcode;
		pObjDevice->sAmsgcode.TrimRight();
		pObjDevice->sMMS_Picture = cPicture;
		pObjDevice->sMMS_Picture.TrimRight();
		pObjDevice->sMMS_Video = cVideo;
		pObjDevice->sMMS_Video.TrimRight();
		pObjDevice->sMMS_Text = cTextmsg;
		pObjDevice->sMMS_Text.TrimRight();
	}
	else{
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		
	for( nI = 0; nI < nRows; nI ++ ){
		sCtemp.Format( "update mobnominalroll set MMS_status = 'D' where mob_id = %d and pin = '%s' and ack_status != 'N'",
			pObjDevice->nMobid, pObjDevice->sPin[nI] );
		update_view( 0, "SQL", "update mobnominalroll set MMS_status = 'D' ..." );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
		}
		END_CATCH
	}
	
	pObjDevice->nNoofretry = 0;
	pObjDevice->nTimeoutValue = 0;
	pObjDevice->nTimeoutCount = 0;
	
	pObjDevice->cCmdstatus = CMD_SEND_MOB;
	return nMob_id;
	
}


void CServerView::cmd_icon_change()
{
	int nNum, nNums;
	OBJ_Device *pObjDevice;

	nNums = MAX_COM_OBJECT;
	for( nNum=0; nNum<nNums; nNum++ ){
		pObjDevice = m_pApp->m_pMMSView[nNum]->m_pObjDevice;
		if( pObjDevice->nIconstatus == ICON_CHG ){
			switch( pObjDevice->cState ){
			case DEV_USED:
				GetTreeCtrl().SetItemText(pObjDevice->hImage, pObjDevice->sIcontext );
				GetTreeCtrl().SetItemImage(pObjDevice->hImage, 2,2);
				break;
			case DEV_UNUSED:
				GetTreeCtrl().SetItemText(pObjDevice->hImage, pObjDevice->sIcontext );
				GetTreeCtrl().SetItemImage(pObjDevice->hImage, 1,1);
				break;
			case DEV_ERR:
			case DEV_BLOCK:
				GetTreeCtrl().SetItemText(pObjDevice->hImage, pObjDevice->sIcontext );
				GetTreeCtrl().SetItemImage(pObjDevice->hImage, 3,3);
				break;
			default:
				GetTreeCtrl().SetItemText(pObjDevice->hImage, pObjDevice->sIcontext );
				GetTreeCtrl().SetItemImage(pObjDevice->hImage, 1,1);
				break;
			}
			pObjDevice->nIconstatus = ICON_UNCHG;
		} 
	}
		
}

int CServerView::check_available_device()
{
	int i = 0, nAvailableDevice = 0;
	OBJ_Device *pObjDevice;

	for( i = 0; i < MAX_COM_OBJECT; i ++ ){
		pObjDevice = m_pApp->m_pMMSView[i]->m_pObjDevice;
		if( pObjDevice->cState == DEV_USED && pObjDevice->cCmdstatus == CMD_START ){
			nAvailableDevice = nAvailableDevice + 1;
		}
	}
	return nAvailableDevice;
}

int CServerView::check_adhoc_timetable()
{
	if( m_pDatabase == NULL )
		return 0;

	char cSQLStatement[270];
	SQLHSTMT hSelect;
	SQLINTEGER nAdhocid = 0, cb_nAdhocid = 0;
	int nRetval;
	CString sCtemp;
	
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	sprintf(cSQLStatement,"select adhoc_id from adhoc_timetable (nolock) where adhoc_status = 'P' and adhoc_type = 'M' and adhoc_id > %d order by adhoc_id",
		m_lstAdhocid );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval );
		update_view( 0, "ERR", m_sLastError );
		return 0;
	}
	//update_view( 0, "SQL", cSQLStatement );
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nAdhocid,sizeof(SQLINTEGER),&cb_nAdhocid);
	nRetval = SQLFetch( hSelect );
	if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		return nAdhocid;
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);

	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select adhoc_id from adhoc_timetable (nolock) where ");
	strcat(cSQLStatement,"adhoc_status = 'P' and adhoc_type = 'M' order by adhoc_id" );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval );
		update_view( 0, "ERR", m_sLastError );
		return 0;
	}
	//update_view( 0, "SQL", cSQLStatement );
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nAdhocid,sizeof(SQLINTEGER),&cb_nAdhocid);
	nRetval = SQLFetch( hSelect );
	if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		return nAdhocid;
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);

	return 0;
}

BOOL CServerView::check_adhoc_log(int nAdhoc_id)
{
	if( m_pDatabase == NULL )
		return FALSE;

	OBJ_Device *pObjDevice;

	int nRetval, nI, nRows = 0;
	CString sCtemp, sPhoneno;
	char cNetwork = 'O';
	
	nRetval = check_available_device();
	if( nRetval == 0 )
		return FALSE;

	char cSQLStatement[500];
	SQLHSTMT hSelect;
	char cNRIC[10], cPin[10];
	char cCn[9];
	char cCn_network[2];
	SQLINTEGER cb_cNRIC = SQL_NTS;
	SQLINTEGER cb_cPin = SQL_NTS;
	SQLINTEGER cb_cCn = SQL_NTS;
	SQLINTEGER cb_cCn_network = SQL_NTS;
	SQLINTEGER nAdhocsno = 0,cb_nAdhocsno = 0;
	
	char cPicture[16], cVideo[16];
	char cTextmsg[513];
	SQLINTEGER cb_cPicture = SQL_NTS;
	SQLINTEGER cb_cVideo = SQL_NTS;
	SQLINTEGER cb_cTextmsg = SQL_NTS;

	nRetval = 2000;
	while( nRetval ){
		SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
		sprintf(cSQLStatement,"select top 1 contactno from adhoc_log (nolock) where adhoc_id = %d and contactnetwork = ' '", 
			nAdhoc_id);
		nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
		if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
			SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
			m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
			update_view( 0, "ERR", m_sLastError );
			return FALSE;
		}
		nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&cCn,9,&cb_cCn);
		nRetval = SQLFetch( hSelect );
		if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
			nRetval = SQLFetch( hSelect );

			cCn[8] = '\0'; 
			sPhoneno = cCn;
			cNetwork = check_GSM_network( sPhoneno );

			sCtemp.Format( "update adhoc_log set contactnetwork = '%c' where adhoc_id = %d and contactno = '%s'",
				cNetwork, nAdhoc_id, sPhoneno );
			update_view( 0, "SQL", "update adhoc_log set contactnetwork = ' ' ..." );
			TRY{
				m_pDatabase->ExecuteSQL(sCtemp);
			}
			CATCH(CDBException, e){
				m_sLastError = e->m_strError;
				update_view( 0, "ERR", m_sLastError );
				cmd_close_database();
				return FALSE;
			}
			END_CATCH

			nRetval = nRetval - 1;
		}
		else{
			nRetval = SQLFetch( hSelect );

			nRetval = FALSE;
		}
	}
	
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	sprintf(cSQLStatement,"select adhoc_sno, nric, pin, contactno, contactnetwork from adhoc_log (nolock) where adhoc_id = %d and adhoc_status = 'P' order by contactnetwork desc", 
		nAdhoc_id);
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		update_view( 0, "ERR", m_sLastError );
		return FALSE;
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nAdhocsno,sizeof(SQLINTEGER),&cb_nAdhocsno);
	nRetval = SQLBindCol(hSelect,2,SQL_C_CHAR,&cNRIC,10,&cb_cNRIC);
	nRetval = SQLBindCol(hSelect,3,SQL_C_CHAR,&cPin,10,&cb_cPin);
	nRetval = SQLBindCol(hSelect,4,SQL_C_CHAR,&cCn,9,&cb_cCn);
	nRetval = SQLBindCol(hSelect,5,SQL_C_CHAR,&cCn_network,2,&cb_cCn_network);
	
	nRetval = SQLFetch( hSelect );
	while( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		if( nRows == 0 ){
			pObjDevice = get_com_device( cCn_network[0], 0 );
			if( pObjDevice == NULL ){
				SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
				return FALSE;
			}
		}

		cNRIC[9] = '\0'; cPin[9] = '\0';
		cCn[8] = '\0';
		
		pObjDevice->nAdhocid = nAdhoc_id;
		pObjDevice->nAdhocsno[nRows] = nAdhocsno;
		pObjDevice->sNRIC[nRows] = cNRIC;
		pObjDevice->sPin[nRows] = cNRIC;
		pObjDevice->sContactno[nRows] = cCn;
		pObjDevice->cContactNetwork[nRows] = cCn_network[0];
		nRows = nRows + 1;
		pObjDevice->nMms_Contacts = nRows;
		if( nRows >= pObjDevice->nMax_Mms_Contacts )
			break;
		
		nRetval = SQLFetch( hSelect );
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);

	if( nRows == 0 ){
		sCtemp.Format( "update adhoc_timetable set adhoc_status = 'S', end_dttm = getdate() where adhoc_id = %d",
			nAdhoc_id );
		update_view( 0, "SQL", "update adhoc_timetable set adhoc_status = 'S' ..." );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
			cmd_close_database();
			return FALSE;
		}
		END_CATCH
		
		return FALSE;
	}

	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	sprintf(cSQLStatement,"select msg_picture, msg_video, msg_text from adhoc_timetable (nolock) where adhoc_id = %d", pObjDevice->nAdhocid );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval ); 
		update_view( 0, "ERR", m_sLastError );
		return FALSE;
	}
	nRetval = SQLBindCol(hSelect,1,SQL_C_CHAR,&cPicture,16,&cb_cPicture);
	nRetval = SQLBindCol(hSelect,2,SQL_C_CHAR,&cVideo,16,&cb_cVideo);
	nRetval = SQLBindCol(hSelect,3,SQL_C_CHAR,&cTextmsg,513,&cb_cTextmsg);
	strcpy( cPicture, "" );
	strcpy( cVideo, "" );
	strcpy( cTextmsg, "" );
	nRetval = SQLFetch( hSelect );
	if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
		cPicture[15] = '\0';
		cVideo[15] = '\0';
		cTextmsg[512] = '\0';
		pObjDevice->sMMS_Picture = cPicture;
		pObjDevice->sMMS_Picture.TrimRight();
		pObjDevice->sMMS_Video = cVideo;
		pObjDevice->sMMS_Video.TrimRight();
		pObjDevice->sMMS_Text = cTextmsg;
		pObjDevice->sMMS_Text.TrimRight();
	}
	else{
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		
	for( nI = 0; nI < nRows; nI ++ ){
		sCtemp.Format( "update adhoc_log set adhoc_status = 'D', proc_dttm = getdate() where adhoc_id = %d and adhoc_sno = %d",
			pObjDevice->nAdhocid, pObjDevice->nAdhocsno[nI] );
		update_view( 0, "SQL", "update adhoc_log set adhoc_status = 'D', proc_dttm ..." );
		TRY{
			m_pDatabase->ExecuteSQL(sCtemp);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			update_view( 0, "ERR", m_sLastError );
			cmd_close_database();
			return FALSE;
		}
		END_CATCH
	}
	
	pObjDevice->nNoofretry = 0;
	pObjDevice->nTimeoutValue = 0;
	pObjDevice->nTimeoutCount = 0;
	
	pObjDevice->cCmdstatus = CMD_SEND_ADHOC;
	return TRUE;
	
}


BOOL CServerView::device_complete_status()
{
	if( m_pDatabase == NULL )
		return FALSE;

	int i = 0, j = 0;
	int nLen, nPictureVideo = 0;
	OBJ_Device *pObjDevice;
	CString sCtemp;
	CTimeSpan ts;
	char cNetwork;

	for( i = 0; i < MAX_COM_OBJECT; i ++ ){
		pObjDevice = m_pApp->m_pMMSView[i]->m_pObjDevice;

		if( pObjDevice->cState == DEV_ERR ){
			continue;
		}
		if( pObjDevice->lMmsViewTimeout > TMR_03MINUTES ){
			pObjDevice->cState = DEV_ERR;
			pObjDevice->cCmdstatus = CMD_START;
			update_view( pObjDevice->nComport, "ERR", "communication device closed" );
			pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
				m_sApplicationid, pObjDevice->nComport);
			pObjDevice->nIconstatus = ICON_CHG;
		}
		
		// CMD_SHIFT_DEVICE
		if( pObjDevice->cCmdstatus ==  CMD_SHIFT_MOB || pObjDevice->cCmdstatus ==  CMD_SHIFT_ADHOC ){
			device_shift( pObjDevice );
		}
		// CMD_SHIFT_DEVICE
		
		// CMD_COMPLETE_MOB
		if( pObjDevice->cCmdstatus == CMD_COMPLETE_MOB ){
			pObjDevice->nErrorCount = 0;
			ts = pObjDevice->tEnd - pObjDevice->tStart;
			
			for( j = 0; j < pObjDevice->nMms_Contacts; j ++ ){
				sCtemp.Format( "update mobnominalroll set MMS_status = 'S' where mob_id = %d and pin = '%s' and ack_status != 'N'",
					pObjDevice->nMobid, pObjDevice->sPin[j] );
				update_view( 0, "SQL", "update mobnominalroll set MMS_status = 'S' where mob_id = ..." );
				TRY{
					m_pDatabase->ExecuteSQL(sCtemp);
				}
				CATCH(CDBException, e){
					m_sLastError = e->m_strError;
					update_view( 0, "ERR", m_sLastError );
				}
				END_CATCH

				pObjDevice->sMMS_Text.Remove( '\"' );
				pObjDevice->sMMS_Text.Replace( "'", "''" );
				sCtemp.Format( "insert into broadcastdetail_mms (mob_id,nric,pin,whichcontactno,contact_no,contact_operator,contact_mode,whichbroadcast,mms_mode,mms_str_dttm,mms_end_dttm,a_msg_id,a_msg_code,m_picturefile,m_videofile,m_textmsg,mms_result,duration,gsm_no,gsm_operator,update_dttm) values (%d,'%s','%s',%d,'%s','%c','H',%d,'O',dateadd(s,-%d,getdate()),getdate(),%d,'%s','%s','%s','%s','S',%d,'%s','%c',getdate())",
					pObjDevice->nMobid, pObjDevice->sNRIC[j], pObjDevice->sPin[j], pObjDevice->nWhichcontactno[j], pObjDevice->sContactno[j], pObjDevice->cContactNetwork[j], pObjDevice->nWhichbroadcast[j], ts.GetTotalSeconds(), pObjDevice->nAmsgid, pObjDevice->sAmsgcode, 
					pObjDevice->sMMS_Picture, pObjDevice->sMMS_Video, pObjDevice->sMMS_Text, ts.GetTotalSeconds(), pObjDevice->sGSM_no, pObjDevice->cGsmNetwork );
				update_view( 0, "SQL", "insert into broadcastdetail_mms (mob_id,nric,pin,whichcontactno,contact_no,..." );
				TRY{
					m_pDatabase->ExecuteSQL(sCtemp);
				}
				CATCH(CDBException, e){
					m_sLastError = e->m_strError;
					update_view( 0, "ERR", m_sLastError );
				}
				END_CATCH
			}
			
			device_cmd_start( pObjDevice );	
		} // CMD_COMPLETE_MOB

		
		// CMD_FAIL_MOB
		if( pObjDevice->cCmdstatus == CMD_FAIL_MOB ){
			
			ts = pObjDevice->tEnd - pObjDevice->tStart;
			
			if( pObjDevice->nNoofshift < MAX_NOOFSHIFT ){
				pObjDevice->cCmdstatus = CMD_SHIFT_MOB;
			}
			else{
				for( j = 0; j < pObjDevice->nMms_Contacts; j ++ ){
					sCtemp.Format( "update mobnominalroll set MMS_status = 'F' where mob_id = %d and pin = '%s'",
						pObjDevice->nMobid, pObjDevice->sPin[j] );
					update_view( 0, "SQL", "update mobnominalroll set MMS_status = 'F' where mob_id = ..." );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
					}
					END_CATCH

					pObjDevice->sMMS_Text.Remove( '\"' );
					pObjDevice->sMMS_Text.Replace( "'", "''" );
					sCtemp.Format( "insert into broadcastdetail_mms (mob_id,nric,pin,whichcontactno,contact_no,contact_operator,contact_mode,whichbroadcast,mms_mode,mms_str_dttm,mms_end_dttm,a_msg_id,a_msg_code,m_picturefile,m_videofile,m_textmsg,mms_result,duration,gsm_no,gsm_operator,update_dttm) values (%d,'%s','%s',%d,'%s','%c','H',%d,'O',dateadd(s,-%d,getdate()),getdate(),%d,'%s','%s','%s','%s','F',%d,'%s','%c',getdate())",
						pObjDevice->nMobid, pObjDevice->sNRIC[j], pObjDevice->sPin[j], pObjDevice->nWhichcontactno[j], pObjDevice->sContactno[j], pObjDevice->cContactNetwork[j], pObjDevice->nWhichbroadcast[j], ts.GetTotalSeconds(), pObjDevice->nAmsgid, pObjDevice->sAmsgcode, 
						pObjDevice->sMMS_Picture, pObjDevice->sMMS_Video, pObjDevice->sMMS_Text, ts.GetTotalSeconds(), pObjDevice->sGSM_no, pObjDevice->cGsmNetwork );
					update_view( 0, "SQL", "insert into broadcastdetail_mms (mob_id,nric,pin,whichcontactno,contact_no,..." );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
					}
					END_CATCH
				}
			
				device_cmd_start( pObjDevice );
			}

			pObjDevice->nErrorCount = pObjDevice->nErrorCount + 1;
			if( pObjDevice->nErrorCount >= MAX_ERR_NUM ){
				pObjDevice->cState = DEV_ERR;
				pObjDevice->cCmdstatus = CMD_START;
				update_view( pObjDevice->nComport, "ERR", "communication device closed" );
				pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
					m_sApplicationid, pObjDevice->nComport);
				pObjDevice->nIconstatus = ICON_CHG;
			}
		} // CMD_FAIL_MOB


		// CMD_COMPLETE_ADHOC
		if( pObjDevice->cCmdstatus == CMD_COMPLETE_ADHOC ){
			pObjDevice->nErrorCount = 0;
			ts = pObjDevice->tEnd - pObjDevice->tStart;
			
			for( j = 0; j < pObjDevice->nMms_Contacts; j ++ ){
				sCtemp.Format( "update adhoc_log set adhoc_status = 'S', end_dttm = getdate() where adhoc_id = %d and adhoc_sno = %d",
					pObjDevice->nAdhocid, pObjDevice->nAdhocsno[j] );
				update_view( 0, "SQL", "update adhoc_log set adhoc_status = 'S', end_dttm = getdate() where adhoc_id = ..." );
				TRY{
					m_pDatabase->ExecuteSQL(sCtemp);
				}
				CATCH(CDBException, e){
					m_sLastError = e->m_strError;
					update_view( 0, "ERR", m_sLastError );
				}
				END_CATCH

				pObjDevice->sMMS_Text.Remove( '\"' );
				pObjDevice->sMMS_Text.Replace( "'", "''" );
				sCtemp.Format( "insert into broadcastdetail_mms (mob_id,adhoc_id,contact_no,contact_operator,contact_mode,mms_mode,mms_str_dttm,mms_end_dttm,a_msg_id,a_msg_code,m_picturefile,m_videofile,m_textmsg,mms_result,duration,gsm_no,gsm_operator,update_dttm) values (0,%d,'%s','%c','H','H',dateadd(s,-%d,getdate()),getdate(),0,'','%s','%s','%s','S',%d,'%s','%c',getdate())",
					pObjDevice->nAdhocid, pObjDevice->sContactno[j], pObjDevice->cContactNetwork[j], ts.GetTotalSeconds(), 
					pObjDevice->sMMS_Picture, pObjDevice->sMMS_Video, pObjDevice->sMMS_Text, ts.GetTotalSeconds(), pObjDevice->sGSM_no, pObjDevice->cGsmNetwork );
				update_view( 0, "SQL", "insert into broadcastdetail_mms (adhoc_id,contact_no,contact_operator..." );
				TRY{
					m_pDatabase->ExecuteSQL(sCtemp);
				}
				CATCH(CDBException, e){
					m_sLastError = e->m_strError;
					update_view( 0, "ERR", m_sLastError );
				}
				END_CATCH
			}
			
			device_cmd_start( pObjDevice );
		} // CMD_COMPLETE_ADHOC


		// CMD_FAIL_ADHOC
		if( pObjDevice->cCmdstatus == CMD_FAIL_ADHOC ){
			ts = pObjDevice->tEnd - pObjDevice->tStart;
			
			if( pObjDevice->nNoofshift < MAX_NOOFSHIFT ){
				pObjDevice->cCmdstatus = CMD_SHIFT_ADHOC;
			}
			else{
				for( j = 0; j < pObjDevice->nMms_Contacts; j ++ ){
					sCtemp.Format( "update adhoc_log set adhoc_status = 'F', end_dttm = getdate() where adhoc_id = %d and adhoc_sno = %d",
						pObjDevice->nAdhocid, pObjDevice->nAdhocsno[j] );
					update_view( 0, "SQL", "update adhoc_log set adhoc_status = 'F', end_dttm = getdate() where adhoc_id = ..." );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
					}
					END_CATCH

					
					pObjDevice->sMMS_Text.Remove( '\"' );
					pObjDevice->sMMS_Text.Replace( "'", "''" );
					sCtemp.Format( "insert into broadcastdetail_mms (mob_id,adhoc_id,contact_no,contact_operator,contact_mode,mms_mode,mms_str_dttm,mms_end_dttm,a_msg_id,a_msg_code,m_picturefile,m_videofile,m_textmsg,mms_result,duration,gsm_no,gsm_operator,update_dttm) values (0,%d,'%s','%c','H','H',dateadd(s,-%d,getdate()),getdate(),0,'','%s','%s','%s','F',%d,'%s','%c',getdate())",
						pObjDevice->nAdhocid, pObjDevice->sContactno[j], pObjDevice->cContactNetwork[j], ts.GetTotalSeconds(),
						pObjDevice->sMMS_Picture, pObjDevice->sMMS_Video, pObjDevice->sMMS_Text, ts.GetTotalSeconds(), pObjDevice->sGSM_no, pObjDevice->cGsmNetwork );
					update_view( 0, "SQL", "insert into broadcastdetail_mms (adhoc_id,contact_no,contact_operator..." );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
					}
					END_CATCH
				}

				device_cmd_start( pObjDevice );
			}

			pObjDevice->nErrorCount = pObjDevice->nErrorCount + 1;
			if( pObjDevice->nErrorCount >= MAX_ERR_NUM ){
				pObjDevice->cState = DEV_ERR;
				pObjDevice->cCmdstatus = CMD_START;
				update_view( pObjDevice->nComport, "ERR", "communication device closed" );
				pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
					m_sApplicationid, pObjDevice->nComport);
				pObjDevice->nIconstatus = ICON_CHG;
			}
		} // CMD_FAIL_ADHOC


		// CMD_COMPLETE_RECV
		if( pObjDevice->cCmdstatus == CMD_COMPLETE_RECV ){
			
			pObjDevice->nErrorCount = 0;
			if( pObjDevice->nMsgCount > 0 ){
				ts = pObjDevice->tEnd - pObjDevice->tStart;
			
				nLen = pObjDevice->sRecvFrom.GetLength();
				if( nLen > 15 )
					pObjDevice->sRecvFrom = pObjDevice->sRecvFrom.Left(15);
				
				if( pObjDevice->sRecvFrom == pObjDevice->sGSM_no ){
				}
				else{
					cNetwork = check_GSM_network( pObjDevice->sRecvFrom );

					pObjDevice->sRecvText.Remove( '\"' );
					pObjDevice->sRecvText.Replace( "'", "''" );
					nLen = pObjDevice->sRecvText.GetLength();
					if( nLen > 512 )
						pObjDevice->sRecvText = pObjDevice->sRecvText.Left(512);
				
					nLen = pObjDevice->sRecvAttachment.GetLength();
					if( nLen > 50 )
						pObjDevice->sRecvAttachment = pObjDevice->sRecvAttachment.Right(50);
					if( pObjDevice->sRecvAttachment.Find(".3gp") != -1 )
						nPictureVideo = 1;
					if( pObjDevice->sRecvAttachment.Find(".avi") != -1 )
						nPictureVideo = 1;
					if( pObjDevice->sRecvAttachment.Find(".mpg") != -1 )
						nPictureVideo = 1;
					if( pObjDevice->sRecvAttachment.Find(".mp4") != -1 )
						nPictureVideo = 1;
			
					if( nPictureVideo == 1 ){ // video
						sCtemp.Format( "insert into MMS_Inbox (phoneno,gsm_no,com_port,m_picturefile,m_videofile,m_textmsg,msg_status,msg_type,in_dttm) values ('%s','%s',%d,'','%s','%s','N','S',getdate())",
							pObjDevice->sRecvFrom, pObjDevice->sGSM_no, pObjDevice->nComport, pObjDevice->sRecvAttachment, pObjDevice->sRecvText );
					}
					else{
						sCtemp.Format( "insert into MMS_Inbox (phoneno,gsm_no,com_port,m_picturefile,m_videofile,m_textmsg,msg_status,msg_type,in_dttm) values ('%s','%s',%d,'%s','','%s','N','S',getdate())",
							pObjDevice->sRecvFrom, pObjDevice->sGSM_no, pObjDevice->nComport, pObjDevice->sRecvAttachment, pObjDevice->sRecvText );
					}
					update_view( pObjDevice->nComport, "SQL", "insert into MMS_Inbox (phoneno, gsm_no, com_port ..." );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
					}
					END_CATCH

					if( nPictureVideo == 1 ){ // video
						sCtemp.Format( "insert into broadcastdetail_mms (mob_id,alarm_id,adhoc_id,contact_no,contact_operator,contact_mode,mms_mode,mms_str_dttm,mms_end_dttm,m_picturefile,m_videofile,m_textmsg,duration,gsm_no,gsm_operator,update_dttm) values (0,0,0,'%s','%c','H','I',dateadd(s,-%d,getdate()),getdate(),'','%s','%s',%d,'%s','%c',getdate())",
							pObjDevice->sRecvFrom, cNetwork, ts.GetTotalSeconds(), 
							pObjDevice->sRecvAttachment, pObjDevice->sRecvText, ts.GetTotalSeconds(), pObjDevice->sGSM_no, pObjDevice->cGsmNetwork );
					}
					else{
						sCtemp.Format( "insert into broadcastdetail_mms (mob_id,alarm_id,adhoc_id,contact_no,contact_operator,contact_mode,mms_mode,mms_str_dttm,mms_end_dttm,m_picturefile,m_videofile,m_textmsg,duration,gsm_no,gsm_operator,update_dttm) values (0,0,0,'%s','%c','H','I',dateadd(s,-%d,getdate()),getdate(),'%s','','%s',%d,'%s','%c',getdate())",
							pObjDevice->sRecvFrom, cNetwork, ts.GetTotalSeconds(), 
							pObjDevice->sRecvAttachment, pObjDevice->sRecvText, ts.GetTotalSeconds(), pObjDevice->sGSM_no, pObjDevice->cGsmNetwork );
					}
					update_view( pObjDevice->nComport, "SQL", "insert into broadcastdetail_mms (mob_id, alarm_id, adhoc_id ..." );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
					}
					END_CATCH

					sCtemp = "update parameter set Filename_id = Filename_id + 1",
					update_view( pObjDevice->nComport, "SQL", sCtemp );
					TRY{
						m_pDatabase->ExecuteSQL(sCtemp);
					}
					CATCH(CDBException, e){
						m_sLastError = e->m_strError;
						update_view( 0, "ERR", m_sLastError );
						cmd_close_database();
						return FALSE;
					}
					END_CATCH
				} // pObjDevice->sRecvFrom == pObjDevice->sGSM_no
				device_cmd_start( pObjDevice );
			}
			else{
				pObjDevice->cCmdstatus = CMD_READ_ALL_MSG;
			}
		} // CMD_COMPLETE_RECV

		// CMD_FAIL_RECV
		if( pObjDevice->cCmdstatus == CMD_FAIL_RECV ){
			
			pObjDevice->cState = DEV_ERR;
			pObjDevice->cCmdstatus = CMD_START;
			update_view( pObjDevice->nComport, "ERR", "communication device closed" );
			pObjDevice->sIcontext.Format( "<%s> <COM%.2d> ERROR", 
				m_sApplicationid, pObjDevice->nComport);
			pObjDevice->nIconstatus = ICON_CHG;
			
		} // CMD_FAIL_RECV

		
		// CMD_FAIL_READ || CMD_COMPLETE_READ
		if( pObjDevice->cCmdstatus == CMD_FAIL_READ || pObjDevice->cCmdstatus == CMD_COMPLETE_READ ){

			device_cmd_start( pObjDevice );
			
		} // CMD_FAIL_RECV

	}
	return TRUE;
}

BOOL CServerView::check_incoming_msg()
{
	int i = 0;
	BOOL bRetval = FALSE;
	OBJ_Device *pObjDevice;

	for( i = 0; i < MAX_COM_OBJECT; i ++ ){
		pObjDevice = m_pApp->m_pMMSView[i]->m_pObjDevice;
		if( pObjDevice->cState == DEV_USED && pObjDevice->cCmdstatus == CMD_START ){
			pObjDevice->nRecvmsg ++ ;
			if( pObjDevice->nRecvmsg > MAX_RECV_MSG ){
				pObjDevice->nRecvmsg = 0;

				pObjDevice->nNoofretry = 0;
				pObjDevice->nNoofshift = 0;
				pObjDevice->nTimeoutValue = 0;
				pObjDevice->nTimeoutCount = 0;
	
				pObjDevice->cCmdstatus = CMD_RECV;
				pObjDevice->cGsmstatus = GSM_START;
				bRetval = TRUE;
			}
		}
	}
	return bRetval;
}

int CServerView::check_working_device()
{
	int i = 0, nWorkingDevice = 0;
	OBJ_Device *pObjDevice;

	for( i = 0; i < MAX_COM_OBJECT; i ++ ){
		pObjDevice = m_pApp->m_pMMSView[i]->m_pObjDevice;
		if( pObjDevice->cCmdstatus == CMD_SEND_MOB || pObjDevice->cCmdstatus == CMD_FAIL_MOB ){
			nWorkingDevice = nWorkingDevice + 1;
		}
		if( pObjDevice->cCmdstatus == CMD_SEND_ADHOC || pObjDevice->cCmdstatus == CMD_FAIL_ADHOC ){
			nWorkingDevice = nWorkingDevice + 1;
		}
		if( pObjDevice->cCmdstatus == CMD_RECV || pObjDevice->cCmdstatus == CMD_FAIL_RECV ){
			nWorkingDevice = nWorkingDevice + 1;
		}
		if( pObjDevice->cCmdstatus == CMD_SHIFT_MOB || pObjDevice->cCmdstatus == CMD_SHIFT_ADHOC ){
			nWorkingDevice = nWorkingDevice + 1;
		}
	}
	return nWorkingDevice;
}

void CServerView::device_cmd_start(OBJ_Device *pObjDevice)
{
	
	int j;

	pObjDevice->nDetectsignal = 0;
	pObjDevice->nRecvmsg = 0;

	pObjDevice->nMobid = 0;
	pObjDevice->nAdhocid = 0;
	pObjDevice->nAmsgid = 0;
	pObjDevice->sAmsgcode = "";
	pObjDevice->nNoofretry = 0;
	pObjDevice->nNoofshift = 0;
	pObjDevice->nTimeoutValue = 0;
	pObjDevice->nTimeoutCount = 0;
	pObjDevice->nMsgCount = 0;
	pObjDevice->nMms_Contacts = 0;
	
	for( j = 0; j < MAX_MMS_CONTACTS; j ++ ){
		pObjDevice->sContactno[j] = "";
		pObjDevice->sNRIC[j] = "";
		pObjDevice->sPin[j] = "";
		pObjDevice->cContactNetwork[j] = 'O';
		pObjDevice->nWhichbroadcast[j] = 0;
		pObjDevice->nWhichcontactno[j] = 0;
		pObjDevice->nAdhocsno[j] = 0;
	}
			
	pObjDevice->cCmdstatus = CMD_START;
	pObjDevice->cGsmstatus = GSM_START;
}

int CServerView::cmd_get_filenameid()
{
	if( m_pDatabase == NULL )
		return 0;

	char cSQLStatement[100];
	SQLHSTMT hSelect;
	SQLINTEGER nFilenameid = 0, cb_nFilenameid = 0;
	int nRetval;
	
	SQLAllocHandle( SQL_HANDLE_STMT, m_pDatabase->m_hdbc,&hSelect );
	strcpy(cSQLStatement,"select filename_id from parameter (nolock)" );
	nRetval = SQLExecDirect(hSelect,(unsigned char *)&cSQLStatement,SQL_NTS);
	if ( nRetval != SQL_SUCCESS && nRetval != SQL_SUCCESS_WITH_INFO ){
		SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
		m_sLastError.Format( "\"%s\" SQLExecDirect return %d", cSQLStatement, nRetval );
		update_view( 0, "ERR", m_sLastError );
		return 0;
	}
	//update_view( 0, "SQL", cSQLStatement );
	nRetval = SQLBindCol(hSelect,1,SQL_C_SLONG,&nFilenameid,sizeof(SQLINTEGER),&cb_nFilenameid);
	nRetval = SQLFetch( hSelect );
	if( nRetval == SQL_SUCCESS || nRetval == SQL_SUCCESS_WITH_INFO ){
	}
	SQLFreeHandle(SQL_HANDLE_STMT,hSelect);
	
	return nFilenameid;
}

void CServerView::device_shift(OBJ_Device *pObjDevice)
{
	int i = 0, j = 0;
	OBJ_Device *pDevice;
	CString sCtemp;
	
	pDevice = get_com_device( ' ', pObjDevice->nMms_Contacts );
	if( pDevice == NULL ){
		return;
	}
	
	pDevice->nMobid = pObjDevice->nMobid;
	pDevice->nAdhocid = pObjDevice->nAdhocid;
	pDevice->nAmsgid = pObjDevice->nAmsgid;
	pDevice->sAmsgcode = pObjDevice->sAmsgcode;
	pDevice->nNoofretry = 0;
	pDevice->nNoofshift = pObjDevice->nNoofshift + 1;
	
	if( pDevice->nMax_Mms_Contacts >= pObjDevice->nMms_Contacts ){
		for( j = 0; j < pObjDevice->nMms_Contacts; j ++ ){
			pDevice->sContactno[j] = pObjDevice->sContactno[j];
			pDevice->sNRIC[j] = pObjDevice->sNRIC[j];
			pDevice->sPin[j] = pObjDevice->sPin[j];
			pDevice->cContactNetwork[j] = pObjDevice->cContactNetwork[j];
			pDevice->nWhichbroadcast[j] = pObjDevice->nWhichbroadcast[j];
			pDevice->nWhichcontactno[j] = pObjDevice->nWhichcontactno[j];
			pDevice->nAdhocsno[j] = pObjDevice->nAdhocsno[j];
		}
		pDevice->nMms_Contacts = pObjDevice->nMms_Contacts;
		pDevice->sMMS_Picture = pObjDevice->sMMS_Picture;
		pDevice->sMMS_Subject = pObjDevice->sMMS_Subject;
		pDevice->sMMS_Text = pObjDevice->sMMS_Text;
		pDevice->sMMS_Video = pObjDevice->sMMS_Video;
				
		sCtemp.Format( "shifting COM PORT%d --> COM PORT%d", 
		pObjDevice->nComport, pDevice->nComport );
		update_view( pDevice->nComport, "LOG", sCtemp );
		if( pObjDevice->cCmdstatus ==  CMD_SHIFT_MOB ){
			pDevice->cCmdstatus = CMD_SEND_MOB;
		}
		if( pObjDevice->cCmdstatus ==  CMD_SHIFT_ADHOC ){
			pDevice->cCmdstatus = CMD_SEND_ADHOC;
		}
		device_cmd_start( pObjDevice );
	} // pDevice->nMax_Mms_Contacts >= pObjDevice->nMms_Contacts
	else{
		i = pDevice->nMax_Mms_Contacts;
		for( j = 0; j < i; j ++ ){
			pDevice->sContactno[j] = pObjDevice->sContactno[j];
			pDevice->sNRIC[j] = pObjDevice->sNRIC[j];
			pDevice->sPin[j] = pObjDevice->sPin[j];
			pDevice->cContactNetwork[j] = pObjDevice->cContactNetwork[j];
			pDevice->nWhichbroadcast[j] = pObjDevice->nWhichbroadcast[j];
			pDevice->nWhichcontactno[j] = pObjDevice->nWhichcontactno[j];
			pDevice->nAdhocsno[j] = pObjDevice->nAdhocsno[j];
		}
		for( j = i; j < pObjDevice->nMms_Contacts; j ++ ){
			pObjDevice->sContactno[j-i] = pObjDevice->sContactno[j];
			pObjDevice->sNRIC[j-i] = pObjDevice->sNRIC[j];
			pObjDevice->sPin[j-i] = pObjDevice->sPin[j];
			pObjDevice->cContactNetwork[j-i] = pObjDevice->cContactNetwork[j];
			pObjDevice->nWhichbroadcast[j-i] = pObjDevice->nWhichbroadcast[j];
			pObjDevice->nWhichcontactno[j-i] = pObjDevice->nWhichcontactno[j];
			pObjDevice->nAdhocsno[j-i] = pObjDevice->nAdhocsno[j];

			pObjDevice->sContactno[j] = "";
			pObjDevice->sNRIC[j] = "";
			pObjDevice->sPin[j] = "";
			pObjDevice->cContactNetwork[j] = ' ';
			pObjDevice->nWhichbroadcast[j] = 0;
			pObjDevice->nWhichcontactno[j] = 0;
			pObjDevice->nAdhocsno[j] = 0;
		}
		
		pObjDevice->nMms_Contacts = pObjDevice->nMms_Contacts - i;
		pDevice->nMms_Contacts = i;

		pDevice->sMMS_Picture = pObjDevice->sMMS_Picture;
		pDevice->sMMS_Subject = pObjDevice->sMMS_Subject;
		pDevice->sMMS_Text = pObjDevice->sMMS_Text;
		pDevice->sMMS_Video = pObjDevice->sMMS_Video;
				
		sCtemp.Format( "shifting COM PORT%d --> COM PORT%d", 
		pObjDevice->nComport, pDevice->nComport );
		update_view( pDevice->nComport, "LOG", sCtemp );
		if( pObjDevice->cCmdstatus ==  CMD_SHIFT_MOB ){
			pDevice->cCmdstatus = CMD_SEND_MOB;
		}
		if( pObjDevice->cCmdstatus ==  CMD_SHIFT_ADHOC ){
			pDevice->cCmdstatus = CMD_SEND_ADHOC;
		}

	}

}
