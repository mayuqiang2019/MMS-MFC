#if !defined(AFX_MMSTHREAD_H__EBCD08FA_EE7D_485D_9E6B_52D216EECEB0__INCLUDED_)
#define AFX_MMSTHREAD_H__EBCD08FA_EE7D_485D_9E6B_52D216EECEB0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MMSThread.h : header file
//

class CMMSView;


/////////////////////////////////////////////////////////////////////////////
// CMMSThread thread

class CMMSThread : public CWinThread
{
	DECLARE_DYNCREATE(CMMSThread)
public:
	CMMSThread(CWnd* pWnd, OBJ_Device *pObjDevice);

protected:
	CMMSThread();           // protected constructor used by dynamic creation

// Attributes
public:
	CMMSView *m_pView;
	OBJ_Device *m_pObjDevice;

// Operations
public:
	BOOL cmd_recv_mms( void );
	BOOL cmd_send_mms(char cType);
	virtual ~CMMSThread();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMMSThread)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
protected:
	
	// Generated message map functions
	//{{AFX_MSG(CMMSThread)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MMSTHREAD_H__EBCD08FA_EE7D_485D_9E6B_52D216EECEB0__INCLUDED_)
