#if !defined(AFX_DATAVIEW_H__173AB7F7_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_DATAVIEW_H__173AB7F7_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DataView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDataView view
class CServerApp;
class CBulkSet;

class CDataView : public CListView
{
protected:
	CDataView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CDataView)

// Attributes
public:
	int m_nRows;
	CServerApp *m_pApp;

// Operations
public:

	void AddLocalData(CBulkSet *pRs);
	void AddRemoteData( LPCTSTR pData );
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDataView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CDataView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CDataView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATAVIEW_H__173AB7F7_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
