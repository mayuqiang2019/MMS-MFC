#if !defined(AFX_MMSVIEW_H__5A6D64FC_8424_4604_A6B6_92C22FC8937C__INCLUDED_)
#define AFX_MMSVIEW_H__5A6D64FC_8424_4604_A6B6_92C22FC8937C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MMSView.h : header file
//
#include "AXmsConstants.h"
#include "AXmsCtrl.h"
#include "MMSThread.h"

/////////////////////////////////////////////////////////////////////////////
// CMMSView view
class CServerApp;

class CMMSView : public CEditView
{
protected:
	CMMSView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CMMSView)

// Attributes
public:
	CServerApp *m_pApp;
	CString m_sLastError;
	int m_nViewid;
	int m_nFilenameid;
	DWORD m_dwTimer;
	CString m_sApplicationid;

// Operations
public:
	int cmd_read_all_msg( void );
	BOOL check_device_status( void );
	BOOL cmd_send_mms( char cType );
	void cmd_object_init( void );
	BOOL cmd_delete_all_msg( void );
	BOOL cmd_recv_mms( void );
	BOOL cmd_detect_signal( void );
	void update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg);
	BOOL cmd_device_init( int nView );
	IMmsMessage			*m_pMessage;
	IMmsSlide			*m_pSlide;
	IMmsProtocolMm1		*m_pConnection;
	ISmsProtocolGsm     *m_pGsm;

	OBJ_Device *m_pObjDevice;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMMSView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMMSView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CMMSView)
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MMSVIEW_H__5A6D64FC_8424_4604_A6B6_92C22FC8937C__INCLUDED_)
