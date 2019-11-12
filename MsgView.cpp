// MsgView.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "MsgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMsgView

IMPLEMENT_DYNCREATE(CMsgView, CEditView)

CMsgView::CMsgView()
{
}

CMsgView::~CMsgView()
{
}


BEGIN_MESSAGE_MAP(CMsgView, CEditView)
	//{{AFX_MSG_MAP(CMsgView)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMsgView drawing

void CMsgView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CMsgView diagnostics

#ifdef _DEBUG
void CMsgView::AssertValid() const
{
	CEditView::AssertValid();
}

void CMsgView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMsgView message handlers

BOOL CMsgView::PreCreateWindow(CREATESTRUCT& cs) 
{
	BOOL bRet = CEditView::PreCreateWindow(cs);
	cs.style = AFX_WS_DEFAULT_VIEW | WS_VSCROLL | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL | ES_MULTILINE | ES_NOHIDESEL | ES_READONLY;
	return bRet;
}

void CMsgView::OnInitialUpdate() 
{
	CEditView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	m_pApp = (CServerApp *)AfxGetApp();
	ASSERT( m_pApp != NULL );
	m_pApp->m_pMsgView = this;
	
	m_hCritical = CreateEvent(NULL,FALSE,TRUE,NULL);
	SetEvent( m_hCritical );

	SetTimer( 10, 1000, NULL );
}

void CMsgView::update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg)
{
	static int nTextlines = 0;
	static int nChars = 0;
	CString sCtemp,sMsgtype,sMsg;
	DWORD dwRetval;

	sMsgtype = pMsgtype;
	sMsg = pMsg;
	CTime tCurrenttime = CTime::GetCurrentTime();
	CString sLog = tCurrenttime.Format("MMS%Y%m%d.LOG");
	
	dwRetval = WaitForSingleObject(m_hCritical,5000); // 5 seconds timeout
	if( dwRetval == WAIT_TIMEOUT ){
		sMsgtype = "ERR (WaitForSingleObject timeout)";
	}	
	
	if( nComport == 0 )
		sCtemp.Format( "%s  <SPF> %s -> %s\r\n",tCurrenttime.Format("%H:%M:%S"),
			sMsgtype, sMsg);
	else
		sCtemp.Format( "%s  <COM%.2d> %s -> %s\r\n",tCurrenttime.Format("%H:%M:%S"),
			nComport, sMsgtype, sMsg);
	
	FILE *pLog;
	pLog = fopen(sLog,"a");
	fprintf(pLog,"%s",sCtemp);
	fclose(pLog);
	
	int nLen = GetWindowTextLength();
	nTextlines = nTextlines + 1;
	if( nTextlines == MAX_MSG_NUM/2 )
		nChars = nLen;
	if( nTextlines == MAX_MSG_NUM ){
		nTextlines = MAX_MSG_NUM/2;
		GetEditCtrl().SetSel( 0, nChars );
		GetEditCtrl().ReplaceSel("");
		nLen = GetWindowTextLength();
		nChars = nLen;
	}
	GetEditCtrl().SetSel(nLen,nLen);
	GetEditCtrl().ReplaceSel(sCtemp);
	
	SetEvent(m_hCritical);

}

void CMsgView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	KillTimer( nIDEvent );

	SetTimer( nIDEvent, 1000, NULL );
	CEditView::OnTimer(nIDEvent);
}
