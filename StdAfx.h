// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__173AB7E8_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)
#define AFX_STDAFX_H__173AB7E8_4038_11D8_9FC3_0010B5BCD154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxcview.h>
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes

#endif // _AFX_NO_DB_SUPPORT

#include <afxsock.h>		// MFC socket extensions

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__173AB7E8_4038_11D8_9FC3_0010B5BCD154__INCLUDED_)

#include "commctrl.h"

#define IN_DTTM		0
#define OUT_DTTM	1
#define UPDATE_DTTM 2

#define MAX_COM_OBJECT		8
#define MAX_CONCURRENT		1
#define MAX_MMS_CONTACTS	50
#define ID_CTL_COM00	2000

#define MAX_MSG_NUM		500
#define MAX_ERR_NUM		15
#define MAX_DETECT_SIGNAL	30 //30 Seconds
#define MAX_RECV_MSG		180 //3 Minutes
#define MAX_NOOFRETRY	1
#define MAX_NOOFRETRY_RECV  7
#define MAX_NOOFSHIFT	7

#define	ICON_CHG		101
#define	ICON_UNCHG		102
#define NEW_MSG			100

#define TMR_5SECONDS	5
#define TMR_10SECONDS	10
#define TMR_15SECONDS	15
#define TMR_20SECONDS	20
#define TMR_01MINUTE	60
#define TMR_90SECONDS	90
#define TMR_03MINUTES	180


#define DEV_USED			'1'
#define DEV_UNUSED			'2'
#define DEV_ERR				'3'
#define DEV_BLOCK			'4'
#define DEV_UNKNOWN			'9'
#define DEV_INIT			'0'
#define DEV_COMPLETED		'5'

#define COM_HOLD			'X'
#define COM_SEND			'Y'

#define CMD_UNUSED			'A'
#define CMD_START			'B'
#define CMD_ERROR			'C'

#define CMD_SEND_MOB		'F'
#define CMD_SEND_ADHOC		'G'
#define CMD_COMPLETE_MOB	'H'
#define CMD_COMPLETE_ADHOC	'I'
#define CMD_FAIL_MOB		'J'
#define CMD_FAIL_ADHOC		'K'
#define CMD_RECV			'L'
#define CMD_COMPLETE_RECV	'M'
#define CMD_FAIL_RECV		'N'
#define CMD_READ_ALL_MSG	'O'
#define CMD_COMPLETE_READ	'P'
#define CMD_FAIL_READ		'Q'

#define CMD_SHIFT_MOB		'X'
#define CMD_SHIFT_ADHOC		'Y'


#define GSM_START			's'
#define GSM_PROCEEDING_SEND	'p'
#define GSM_PROCEEDING_RECV	'q'
#define	GSM_COMPLETED		'c'
#define GSM_FAIL			'f'

#define OUT_NORMAL			'n'
#define OUT_ALARM			'a'
#define OUT_ADHOC			'b'
#define OUT_REGISTERCODE	'r'
#define OUT_SERVER			'v'

#define MAIN_BODY		FALSE
#define ADVENCE_PARTY	TRUE


typedef struct{
	int nComport;
	int nIconstatus;
	CString sIcontext;
	CString sModem;
	char cState;
	char cCmdstatus;
	char cGsmNetwork;
	int nErrorCount;
	int cGsmstatus;
	int nMax_Mms_Contacts;
	int nMms_Contacts;
	int nSignalStrength;
	int nBitErrorRate;
	long lMmsViewTimeout;

	int nTimeoutValue;
	int nTimeoutCount;
	
	CString sMMS_Folder;
	CString sTemp_Folder;
	CString sGSM_no;
	CString sAPN;
	CString sAPNAcc;
	CString sAPNPwd;
	CString sMMSC;
	CString sWAPGateway;
	CString sMMS_Subject;
	CString sMMS_Text;
	CString sMMS_Picture;
	CString sMMS_Video;

	HTREEITEM hImage;
	CCommCtrl *pCommCtrl;

	CTime tStart;
	CTime tEnd;

	int nDetectsignal;
	int nRecvmsg;
	int nMobid;
	int nAdhocid;
	int nAmsgid;
	CString sAmsgcode;
	CString sContactno[MAX_MMS_CONTACTS];
	CString sNRIC[MAX_MMS_CONTACTS];
	CString sPin[MAX_MMS_CONTACTS];
	int nWhichcontactno[MAX_MMS_CONTACTS];
	int nWhichbroadcast[MAX_MMS_CONTACTS];
	int nNoofretry;
	int nNoofshift;
	char cContactNetwork[MAX_MMS_CONTACTS];
	int nAdhocsno[MAX_MMS_CONTACTS];
	
	CString sRecvFrom;
	CString sRecvText;
	CString sRecvAttachment;
	int nMsgCount;

}	OBJ_Device;


