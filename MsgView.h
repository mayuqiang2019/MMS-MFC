#if !defined(AFX_MSGVIEW_H__173AB7F6_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_MSGVIEW_H__173AB7F6_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MsgView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMsgView view
class CServerApp;

class CMsgView : public CEditView
{
protected:
	CMsgView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CMsgView)

// Attributes
public:
	CServerApp *m_pApp;
	CString m_sLastError;
	HANDLE m_hCritical;
	
// Operations
public:
	void update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMsgView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CMsgView)
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MSGVIEW_H__173AB7F6_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
