// CmdView.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "CmdView.h"
#include "bulkset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#define KW_BACKSPACE	8
#define KW_TAB			9
#define KW_RETURN		13
#define KW_SHIFT		16
#define KW_PAGEUP		33
#define KW_PAGEDOWN		34
#define KW_END			35
#define KW_HOME			36
#define KW_LEFT			37
#define KW_UP			38
#define KW_RIGHT		39
#define KW_DOWN			40
#define KW_DELETE		46
#define KW_INSERT		45
/////////////////////////////////////////////////////////////////////////////
// CCmdView

IMPLEMENT_DYNCREATE(CCmdView, CEditView)

CCmdView::CCmdView()
{
	m_sLastError = _T("");
	m_sDatasourcename = _T("");
	m_sUserid = _T("");
	m_sPassword = _T("");

	m_pApp = NULL;
	m_pDatabase = NULL;
	m_lstCommand.RemoveAll();
}

CCmdView::~CCmdView()
{
}


BEGIN_MESSAGE_MAP(CCmdView, CEditView)
	//{{AFX_MSG_MAP(CCmdView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	ON_WM_KEYDOWN()
	ON_WM_KEYUP()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCmdView drawing

void CCmdView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CCmdView diagnostics

#ifdef _DEBUG
void CCmdView::AssertValid() const
{
	CEditView::AssertValid();
}

void CCmdView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCmdView message handlers
BOOL CCmdView::cmd_open_database()
{
	CString sCtemp;

	m_pDatabase = new CDatabase();
	TRY{
		sCtemp = "DSN=";
		sCtemp += m_sDatasourcename;
		sCtemp += ";UID=";
		sCtemp += m_sUserid;
		sCtemp += ";PWD=";
		sCtemp += m_sPassword;
		sCtemp += ";";
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

void CCmdView::cmd_close_database()
{
	if( m_pDatabase ){
		if( m_pDatabase->IsOpen () )
			m_pDatabase->Close();
		delete m_pDatabase;
	}
	m_pDatabase = NULL;
}

void CCmdView::OnInitialUpdate() 
{
	CEditView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	m_pApp = (CServerApp *)AfxGetApp();
	ASSERT( m_pApp != NULL );
	m_pApp->m_pCmdView = this;

	m_nCmdstatus = CMD_LOG;
	m_bInsertflg = FALSE;

	int len = GetWindowTextLength();
	GetEditCtrl().SetSel(len,len);
	GetEditCtrl().ReplaceSel("log->");
}

void CCmdView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	return; // disable cmd

	if( m_bInsertflg ){
		if( nChar==KW_LEFT || nChar==KW_RIGHT ){
			CEditView::OnKeyDown(nChar, nRepCnt, nFlags);
			return;
		}
		if( nChar == KW_RETURN ){
			int nLen = GetWindowTextLength();
			GetEditCtrl().SetSel(nLen,nLen);
			m_bInsertflg = FALSE;
			return;
		}
	}

	if( nChar == KW_INSERT ){
		m_bInsertflg = TRUE;
	}
	
	if( nChar==KW_LEFT || nChar==KW_RIGHT || nChar==KW_DELETE )
		return;
	if( nChar==KW_PAGEUP || nChar==KW_PAGEDOWN || nChar==KW_END )
		return;
	if( nChar==KW_SHIFT || nChar==KW_HOME || nChar==KW_TAB )
		return;
	if( nChar == KW_UP || nChar == KW_DOWN ){
		int nLen = GetWindowTextLength();
		CString strText;
		GetWindowText( strText );
		int nPos = strText.ReverseFind( '>' );
		GetEditCtrl().SetSel(nPos+1,nLen);
		if( ! m_lstCommand.IsEmpty() ){
			m_lstCommand.GetTail();
			GetEditCtrl().ReplaceSel( m_lstCommand.GetTail() );
			m_lstCommand.AddHead( m_lstCommand.GetTail() );
			m_lstCommand.RemoveTail( );
		}
		return;
	}
	if( nChar == KW_BACKSPACE ){
		int nLen = GetWindowTextLength(); 
		CString strText,sCtemp;
		GetWindowText( strText );
		sCtemp = strText.Right(5);
		if( sCtemp=="log->" || sCtemp=="cmd->" 
			|| sCtemp=="msg->" ){
			GetEditCtrl().SetSel(nLen,nLen);
			GetEditCtrl().ReplaceSel(">");
			return;
		}
	}

	CEditView::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CCmdView::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	return; //disable cmd
	
	if( nChar == KW_RETURN ){
		cmd_proc_return(); 
	}

	CEditView::OnKeyUp(nChar, nRepCnt, nFlags);
}

void CCmdView::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	return;
}

void CCmdView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	return;
}

void CCmdView::OnRButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	return;
}

void CCmdView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	SetFocus();
	return;
}

void CCmdView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	return;
}

void CCmdView::OnRButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	return;
}

void CCmdView::cmd_proc_return()
{
	int nWndLen, nTextLen;
	CString sWndText;
	CString sStatement;
	CString sCommand;
	CString sLog, sCtemp;
	int nPos;
				
	nWndLen = GetWindowTextLength();
	GetEditCtrl().SetSel(nWndLen,nWndLen);
	GetWindowText( sWndText );
	sWndText.TrimRight();
	nTextLen = sWndText.GetLength();

	switch( m_nCmdstatus ){
	case CMD_LOG:
		sCtemp = "log->";
		break;
	case CMD_CMD:
		sCtemp = "cmd->";
		break;
	case CMD_MSG:
		sCtemp = "msg->";
		break;
	}
	nPos = sWndText.ReverseFind( '>' );
	if( sWndText.GetAt( nPos - 1 ) != '-' ){
		sLog = sCtemp;
		sLog += "unknown command.\r\n";
		sLog += sCtemp;
		GetEditCtrl().ReplaceSel( sLog );
		return;
	}
	if( (nTextLen-nPos-1) == 0 ){
		sLog = sCtemp;
		GetEditCtrl().ReplaceSel( sLog );
		return;
	}
	sStatement = sWndText.Mid( nPos+1,nTextLen-nPos-1 );
	
	if( m_lstCommand.GetCount() >= MAX_CMD_NUM )
		m_lstCommand.RemoveHead( );
	m_lstCommand.AddTail( sStatement );
	
	// global statement
	if( proc_global_statement(sCtemp, sStatement) ){
		return;
	}
	
	sStatement.Replace( "greater than",">" );
	switch( m_nCmdstatus ){
	case CMD_LOG:
		if( ! cmd_proc_log(sStatement) ){
			sLog = "log->unknown command";
			sLog += "\r\nlog->";
			GetEditCtrl().ReplaceSel( sLog );
			break;
		}
		if( cmd_open_database() ){
			sLog = "connect to ";
			sLog += m_sDatasourcename;
			sLog += " user ";
			sLog += m_sUserid;
			update_view( 0, "CMD", sLog );
			sLog = "log->open database completed";
			sLog += "\r\ncmd->";
			m_nCmdstatus = CMD_CMD;
		}
		else{
			sLog = "log->";
			sLog += m_sLastError;
			sLog += "\r\nlog->";
		}
		GetEditCtrl().ReplaceSel( sLog );
		break;

	case CMD_CMD:
		if( !sStatement.CompareNoCase("quit") ){ // quit
			cmd_close_database();
			sLog = "disconnect from database user ";
			sLog += m_sUserid;
			update_view(0, "CMD", sLog);
			sLog = "cmd->close database completed";
			sLog += "\r\nlog->";
			GetEditCtrl().ReplaceSel( sLog );
			m_nCmdstatus = CMD_LOG;
			break;
		}
		if( cmd_proc_statement( sStatement ) ){
			update_view(0, "CMD", sStatement);
			sLog = "cmd->command completed";
			sLog += "\r\ncmd->";
			GetEditCtrl().ReplaceSel( sLog );
		}
		else{
			sLog = "cmd->";
			sLog += m_sLastError;
			sLog += "\r\ncmd->";
			GetEditCtrl().ReplaceSel( sLog );
		}
		break;

	case CMD_MSG:
		if( !sStatement.CompareNoCase("quit") ){
			m_nCmdstatus = CMD_LOG;
			sLog = "log->";
		}
		else{
			sLog = "msg->";
		}
		GetEditCtrl().ReplaceSel( sLog );
		break;

	}
}

BOOL CCmdView::proc_global_statement(LPCTSTR pLog,LPCTSTR pStatement)
{
	CString sStatement;

	sStatement = pStatement;
	if( ! sStatement.CompareNoCase("cls") ){
		int nWndLen = GetWindowTextLength();
		GetEditCtrl().SetSel(0,nWndLen);
		GetEditCtrl().ReplaceSel( pLog );
		return TRUE;
	}
	
	return FALSE;
}

BOOL CCmdView::cmd_proc_log(LPCTSTR pStatement)
{
	CString sCtemp, stmp;
	int nPos, nLen;
	
	sCtemp = pStatement;
	
	sCtemp.MakeLower();
	nLen = sCtemp.GetLength();
	nPos = 0;
	nPos = sCtemp.Find( ' ', 0 );
	if( nPos == -1 ) return FALSE;

	stmp = sCtemp.Left( nPos );
	if( stmp != "connect" ) return FALSE;
	
	stmp = sCtemp.Right( nLen-nPos-1 );
	sCtemp = stmp;
	sCtemp.TrimLeft();
	nLen = sCtemp.GetLength();

	nPos = sCtemp.Find( ' ', 0 );
	if( nPos == -1 ) return FALSE;
	
	stmp = sCtemp.Left( nPos );
	if( stmp != "to" ) return FALSE;
	stmp = sCtemp.Right( nLen-nPos-1 );
	sCtemp = stmp;
	sCtemp.TrimLeft();
	nLen = sCtemp.GetLength();

	nPos = sCtemp.Find( ' ', 0 );
	if( nPos == -1 ){
		m_sDatasourcename = sCtemp;
		m_sUserid = "db2admin";
		m_sPassword = "db2admin";
		return TRUE;
	}
	else{
		stmp = sCtemp.Left( nPos );
		m_sDatasourcename = stmp;
		stmp = sCtemp.Right( nLen-nPos-1 );
		sCtemp = stmp;
		sCtemp.TrimLeft();
	}
	nLen = sCtemp.GetLength();

	nPos = sCtemp.Find( ' ', 0 );
	if( nPos == -1 ) return FALSE;
	
	stmp = sCtemp.Left( nPos );
	if( stmp != "user" ) return FALSE;
	stmp = sCtemp.Right( nLen-nPos-1 );
	sCtemp = stmp;
	sCtemp.TrimLeft();
	nLen = sCtemp.GetLength();

	nPos = sCtemp.Find( ' ', 0 );
	if( nPos == -1 ){
		m_sUserid = sCtemp;
		m_sPassword = "db2admin";
		return TRUE;
	}
	else{
		stmp = sCtemp.Left( nPos );
		m_sUserid = stmp;
		stmp = sCtemp.Right( nLen-nPos-1 );
		sCtemp = stmp;
		sCtemp.TrimLeft();
	}
	nLen = sCtemp.GetLength();

	nPos = sCtemp.Find( ' ', 0 );
	if( nPos == -1 ) return FALSE;
	stmp = sCtemp.Left( nPos );
	if( stmp != "using" ) return FALSE;

	stmp = sCtemp.Right( nLen-nPos-1 );
	sCtemp = stmp;
	sCtemp.TrimLeft();

	m_sPassword = sCtemp;
	
	return TRUE;
}


void CCmdView::update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg)
{
	m_pApp->m_pMsgView->update_view(nComport, pMsgtype, pMsg);
}

BOOL CCmdView::cmd_proc_statement(LPCTSTR pStatement)
{
	CString sCommand;
	CString sStatement;
	int nPos;
	
	sStatement = pStatement;
	nPos = sStatement.Find( ' ' );
	if( nPos == -1 ){
		m_sLastError = "unknown command";
		return FALSE;
	}
	sCommand = sStatement.Left(nPos);

	if( !sCommand.CompareNoCase("insert") ){
		TRY{
			m_pDatabase->ExecuteSQL(sStatement);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			return FALSE;
		}
		END_CATCH
	}
	else if( !sCommand.CompareNoCase("update") ){
		TRY{
			m_pDatabase->ExecuteSQL(sStatement);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			return FALSE;
		}
		END_CATCH
	}
	else if( !sCommand.CompareNoCase("delete") ){
		TRY{
			m_pDatabase->ExecuteSQL(sStatement);
		}
		CATCH(CDBException, e){
			m_sLastError = e->m_strError;
			return FALSE;
		}
		END_CATCH
	}
	else if( !sCommand.CompareNoCase("select") ){
		if( !cmd_proc_select(sStatement) )
			return FALSE;
	}
	else{
		m_sLastError = "unknow command";
		return FALSE;
	}

	return TRUE;
}

BOOL CCmdView::cmd_proc_select(LPCTSTR pStatement)
{
	CBulkSet Rs(m_pDatabase);
	
	TRY{
		Rs.Open(CRecordset::snapshot, pStatement,
			CRecordset::readOnly | CRecordset::useMultiRowFetch);
	}
	CATCH(CDBException, exc){
		m_sLastError = exc->m_strError;	
		return FALSE;
	}
	END_CATCH

	m_pApp->m_pDataView->AddLocalData( &Rs );
	Rs.Close();
	
	return TRUE;
}


