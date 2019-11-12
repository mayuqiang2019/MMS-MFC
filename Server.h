// Server.h : main header file for the SERVER application
//

#if !defined(AFX_SERVER_H__173AB7E6_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_SERVER_H__173AB7E6_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "ServerDoc.h"	// Added by ClassView
#include "ServerView.h"	// Added by ClassView
#include "MsgView.h"	// Added by ClassView
#include "MMSView.h"	// Added by ClassView

/////////////////////////////////////////////////////////////////////////////
// CServerApp:
// See Server.cpp for the implementation of this class
//

class CServerApp : public CWinApp
{
public:
	BOOL cmd_init_app( void );
	void cmd_close_database( void );
	BOOL cmd_open_database( void );
	CString m_LastError;
	CDatabase *m_pDatabase;

	CMsgView *m_pMsgView;
	CServerView *m_pServerView;
	CServerDoc *m_pServerDoc;
	CMMSView *m_pMMSView[MAX_COM_OBJECT];

	CPtrList m_lstObjDevice;

	CServerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CServerApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVER_H__173AB7E6_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
