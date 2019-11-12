// ServerDoc.cpp : implementation of the CServerDoc class
//

#include "stdafx.h"
#include "Server.h"

#include "ServerDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CServerDoc

IMPLEMENT_DYNCREATE(CServerDoc, CDocument)

BEGIN_MESSAGE_MAP(CServerDoc, CDocument)
	//{{AFX_MSG_MAP(CServerDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	ON_UPDATE_COMMAND_UI(ID_MAINTIMER, OnUpdateTimer)
	ON_UPDATE_COMMAND_UI(ID_RECORDS, OnUpdateRecords)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CServerDoc construction/destruction

CServerDoc::CServerDoc()
{
	// TODO: add one-time construction code here

}

CServerDoc::~CServerDoc()
{
}

BOOL CServerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	CString strTitle;
	strTitle.LoadString(AFX_IDS_APP_TITLE);
	SetTitle( strTitle );
	
	m_pApp = (CServerApp *)AfxGetApp();
	ASSERT( m_pApp != NULL );
	m_pApp->m_pServerDoc = this;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CServerDoc serialization

void CServerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CServerDoc diagnostics

#ifdef _DEBUG
void CServerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CServerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CServerDoc commands
void CServerDoc::OnUpdateTimer(CCmdUI* pCmdUI)
{
	CString sCtemp;
	wsprintf(sCtemp.GetBuffer(35),"%s",m_pApp->m_pServerView->m_sCurrentTime );
	sCtemp.ReleaseBuffer();
	pCmdUI->SetText(sCtemp);
}

void CServerDoc::OnUpdateRecords(CCmdUI* pCmdUI)
{
	CString sCtemp;
//	wsprintf(sCtemp.GetBuffer(25),"Records : %d",
//		m_pApp->m_pDataView->m_nRows );
//	sCtemp.ReleaseBuffer();
//	pCmdUI->SetText(sCtemp);
}




BOOL CServerDoc::SaveModified() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDocument::SaveModified();
}
