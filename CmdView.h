#if !defined(AFX_CMDVIEW_H__173AB7F5_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_CMDVIEW_H__173AB7F5_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CmdView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCmdView view
class CServerApp;

class CCmdView : public CEditView
{
protected:
	CCmdView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CCmdView)

// Attributes
public:
	CServerApp *m_pApp;
	CDatabase *m_pDatabase;
	CStringList m_lstCommand;
	int m_nCmdstatus;
	BOOL m_bInsertflg;

	CString m_sLastError;
	CString m_sDatasourcename;
	CString m_sPassword;
	CString m_sUserid;
// Operations
public:
	BOOL cmd_open_database(void);
	void cmd_close_database(void);
	BOOL cmd_proc_select(LPCTSTR pStatement);
	BOOL cmd_proc_statement( LPCTSTR pStatement );
	void update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg);
	BOOL cmd_proc_log( LPCTSTR pStatement );
	BOOL proc_global_statement(LPCTSTR pLog, LPCTSTR pStatement );
	void cmd_proc_return( void );
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCmdView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CCmdView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CCmdView)
		// NOTE - the ClassWizard will add and remove member functions here.
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CMDVIEW_H__173AB7F5_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
