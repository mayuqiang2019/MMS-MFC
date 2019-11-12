// ServerDoc.h : interface of the CServerDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERVERDOC_H__173AB7EC_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_SERVERDOC_H__173AB7EC_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CServerApp;

class CServerDoc : public CDocument
{
protected: // create from serialization only
	CServerDoc();
	DECLARE_DYNCREATE(CServerDoc)

// Attributes
public:
	CServerApp *m_pApp;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServerDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	protected:
	virtual BOOL SaveModified();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CServerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CServerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	afx_msg void OnUpdateTimer(CCmdUI* pCmdUI);
	afx_msg void OnUpdateRecords(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVERDOC_H__173AB7EC_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
