// DataView.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "DataView.h"
#include "bulkset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDataView

IMPLEMENT_DYNCREATE(CDataView, CListView)

CDataView::CDataView()
{
	m_nRows = 0;
	m_pApp = NULL;
}

CDataView::~CDataView()
{
}


BEGIN_MESSAGE_MAP(CDataView, CListView)
	//{{AFX_MSG_MAP(CDataView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDataView drawing

void CDataView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CDataView diagnostics

#ifdef _DEBUG
void CDataView::AssertValid() const
{
	CListView::AssertValid();
}

void CDataView::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDataView message handlers

void CDataView::OnInitialUpdate() 
{
	CListView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	m_pApp = (CServerApp *)AfxGetApp();
	ASSERT( m_pApp != NULL );
	m_pApp->m_pDataView = this;
	
}

void CDataView::AddLocalData(CBulkSet *pRs)
{
	ASSERT(pRs->IsOpen());
	
	GetListCtrl().DeleteAllItems();
	while( GetListCtrl().DeleteColumn( 0 ) ){
	}
	GetListCtrl().UpdateWindow();

	CODBCFieldInfo Info;
	int nColumns = pRs->GetODBCFieldCount();
	int nNum;
	for (nNum=0; nNum<nColumns; nNum++){
		pRs->GetODBCFieldInfo(nNum, Info);
		GetListCtrl().InsertColumn(nNum, 
			Info.m_strName,LVCFMT_LEFT, 80);
	}
	
	m_nRows = 0;
	if( pRs->IsBOF() && pRs->IsEOF() ) 
		return;
	long* rgLength;
	LPSTR rgData;
	CString strData;

	pRs->MoveFirst();
	while( ! pRs->IsEOF() ){
		int nRowsFetched = pRs->GetRowsFetched();
		for (nNum = 0; nNum < nColumns; nNum++){
			rgData = (LPSTR)pRs->m_ppvData[nNum];
			rgLength = (long*)pRs->m_ppvLengths[nNum];
			for (int nRow=0; nRow<nRowsFetched ;nRow++){
				int nStatus = pRs->GetRowStatus(nRow + 1);
				if (nStatus == SQL_ROW_DELETED)	
					strData = _T("<DELETED>");
				else if (nStatus == SQL_ROW_NOROW)
					strData = _T("<NO_ROW>");
				else if (rgLength[nRow] == SQL_NULL_DATA)
					strData = _T("<NULL>");
				else
					strData = &rgData[nRow * MAX_TEXT_LEN];

				// Set the string (if first column must add)
				if (nNum == 0)
					GetListCtrl().InsertItem( (nRow+m_nRows), strData);
				else{
					GetListCtrl().SetItem( (nRow+m_nRows), nNum, LVIF_TEXT,
						strData, -1, 0, 0, 0);
				}
			}
		}
		m_nRows = m_nRows + nRowsFetched;
		pRs->MoveNext();
	} // end of while
}

BOOL CDataView::PreCreateWindow(CREATESTRUCT& cs) 
{
	// TODO: Add your specialized code here and/or call the base class
	BOOL bRet = CListView::PreCreateWindow(cs);
	cs.style = AFX_WS_DEFAULT_VIEW | WS_VSCROLL | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL | LVS_REPORT | ES_NOHIDESEL ;
	return bRet;
}

void CDataView::AddRemoteData(LPCTSTR pData)
{
	CString strCtemp,strData;
	int nColumns, nRows;
	int nColumn, nRow;
	int nNum, nGroups;
	int nStartPos = 0, nEndPos = 0;
	
	GetListCtrl().DeleteAllItems();
	while( GetListCtrl().DeleteColumn( 0 ) ){
	}
	GetListCtrl().UpdateWindow();

	strData = pData;
	int nLen = strData.GetLength();

	nEndPos = strData.Find( ' ' );
	strCtemp = strData.Left( nEndPos );
	nRows = atoi( strCtemp );
	m_nRows = nRows;

	nStartPos = nEndPos + 1;
	nEndPos = strData.Find( ' ', nStartPos );
	strCtemp = strData.Mid( nStartPos, nEndPos-nStartPos );
	nColumns = atoi( strCtemp );
	
	for(nColumn=0; nColumn<nColumns; nColumn++){
		nStartPos = nEndPos + 1;
		nEndPos = strData.Find( ' ', nStartPos );
		strCtemp = strData.Mid( nStartPos, nEndPos-nStartPos );
		if ( GetListCtrl().InsertColumn(nColumn, strCtemp,
			LVCFMT_LEFT, 80) != nColumn)
		{
			ASSERT(FALSE);
			return;
		}
	}
	
	nNum = nRows % 25 ;
	nGroups = ( nRows - nNum ) / 25 + 1;
	
	int nStartRow, nEndRow;
	for(nNum=0; nNum<nGroups; nNum++){
		for(nColumn=0; nColumn<nColumns; nColumn++){
			nStartRow = nNum * 25;
			nEndRow = ( nNum + 1 ) * 25;
			if( nEndRow > nRows ) nEndRow = nRows;
			for (nRow=nStartRow; nRow<nEndRow; nRow++){
				nStartPos = nEndPos + 1;
				if( nStartPos > nLen )	return;
				nEndPos = strData.Find( ' ', nStartPos );
				if( nEndPos == -1 )	nEndPos = nLen;
				strCtemp = strData.Mid( nStartPos, nEndPos-nStartPos );
				if (nColumn == 0)
					GetListCtrl().InsertItem( (nRow), strCtemp);
				else
					GetListCtrl().SetItem( (nRow), nColumn, LVIF_TEXT,
						strCtemp, -1, 0, 0, 0);
			}
		}
	}
}
