// ServerView.h : interface of the CServerView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERVERVIEW_H__173AB7EE_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_SERVERVIEW_H__173AB7EE_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CServerApp;
class CCommCtrl;

class CServerView : public CTreeView
{
protected: // create from serialization only
	CServerView();
	DECLARE_DYNCREATE(CServerView)

// Attributes
public:
	CServerApp *m_pApp;
	char m_pcid[3];
	CString m_sUsername;
	CString m_sPcname;
	CString m_sApplicationid;
	CImageList *m_plstImage;
	CDatabase *m_pDatabase;
	CString m_sLastError;
	DWORD m_dwTimer;
	CString m_sCurrentTime;
	CString m_sMMS_Folder;
	CString m_sTemp_Folder;
	
	int m_lstMobid;
	int m_lstAdhocid;
	int m_lstDevice;
	int g_tCount;
	int m_nAvailableDevice;
	int m_nWorkingDevice;
	int m_nFilenameid;
	CString m_sAdmin;

	
	CServerDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServerView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	void device_shift(OBJ_Device *pObjDevice);
	int cmd_get_filenameid( void );
	void device_cmd_start( OBJ_Device *pObjDevice );
	int check_working_device( void );
	BOOL check_incoming_msg( void );
	BOOL device_complete_status( void );
	BOOL check_adhoc_log( int nAdhoc_id );
	int check_adhoc_timetable( void );
	int check_available_device( void );
	void cmd_icon_change( void );
	BOOL check_register_status( int nMob_id );
	int get_workstation_time( void );
	BOOL cmd_init_app( void );
	int get_system_time( void );
	char check_GSM_network(LPCTSTR pPhoneno);
	void update_audit_trace( int nMode );
	OBJ_Device * get_com_device( char cNetwork, int nContacts );
	
	int check_mobbroadcast_timetable( void );
	BOOL update_station_register( int nMode );
	void update_view(int nComport, LPCTSTR pMsgtype, LPCTSTR pMsg);
	BOOL cmd_open_database( void );
	void cmd_close_database( void );
	BOOL cmd_init_view( void );
	void DoEvents( void );
	OBJ_Device * get_com_table( int nPort );

	void SetWndStyle(long lStyleMask, BOOL bSetBits);
	virtual ~CServerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CServerView)
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_EVENTSINK_MAP()
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ServerView.cpp
inline CServerDoc* CServerView::GetDocument()
   { return (CServerDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVERVIEW_H__173AB7EE_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
