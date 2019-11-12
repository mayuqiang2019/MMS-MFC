; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMMSThread
LastTemplate=CWinThread
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Server.h"
LastPage=0

ClassCount=18
Class1=CServerApp
Class2=CServerDoc
Class3=CServerView
Class4=CMainFrame
Class9=CAboutDlg

ResourceCount=4
Resource1=IDR_MAINFRAME
Class10=CCmdView
Class11=CMsgView
Class12=CDataView
Class13=CListenSocket
Class14=CClientSocket
Class15=CServerSocket
Class16=CAgentView
Resource2=IDD_ABOUTBOX (English (U.S.))
Resource3=IDR_MAINFRAME (English (U.S.))
Class17=CMMSView
Class18=CMMSThread
Resource4=IDD_ABOUTBOX

[CLS:CServerApp]
Type=0
HeaderFile=Server.h
ImplementationFile=Server.cpp
Filter=N

[CLS:CServerDoc]
Type=0
HeaderFile=ServerDoc.h
ImplementationFile=ServerDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC

[CLS:CServerView]
Type=0
HeaderFile=ServerView.h
ImplementationFile=ServerView.cpp
Filter=C
BaseClass=CTreeView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=Server.cpp
ImplementationFile=Server.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_EMPTY1_EMPTYA
Command2=ID_EMPTY1_EMPTYB
Command3=ID_APP_EXIT
Command4=ID_EMPTY2_EMPTYA
Command5=ID_EMPTY2_EMPTYB
Command6=ID_VIEW_STATUS_BAR
Command7=ID_APP_ABOUT
CommandCount=7

[CLS:CCmdView]
Type=0
HeaderFile=CmdView.h
ImplementationFile=CmdView.cpp
BaseClass=CEditView
Filter=C

[CLS:CMsgView]
Type=0
HeaderFile=MsgView.h
ImplementationFile=MsgView.cpp
BaseClass=CEditView
Filter=C
VirtualFilter=VWC

[CLS:CDataView]
Type=0
HeaderFile=DataView.h
ImplementationFile=DataView.cpp
BaseClass=CListView
Filter=C

[CLS:CListenSocket]
Type=0
HeaderFile=ListenSocket.h
ImplementationFile=ListenSocket.cpp
BaseClass=CSocket
Filter=N
VirtualFilter=uq

[CLS:CClientSocket]
Type=0
HeaderFile=ClientSocket.h
ImplementationFile=ClientSocket.cpp
BaseClass=CSocket
Filter=N
VirtualFilter=uq

[CLS:CServerSocket]
Type=0
HeaderFile=ServerSocket.h
ImplementationFile=ServerSocket.cpp
BaseClass=CSocket
Filter=N

[CLS:CAgentView]
Type=0
HeaderFile=AgentView.h
ImplementationFile=AgentView.cpp
BaseClass=CView
Filter=C
VirtualFilter=VWC

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_EMPTY1_EMPTYA
Command2=ID_EMPTY1_EMPTYB
Command3=ID_APP_EXIT
Command4=ID_EMPTY2_EMPTYA
Command5=ID_EMPTY2_EMPTYB
Command6=ID_VIEW_STATUS_BAR
Command7=ID_APP_ABOUT
CommandCount=7

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[CLS:CMMSView]
Type=0
HeaderFile=MMSView.h
ImplementationFile=MMSView.cpp
BaseClass=CEditView
Filter=C
VirtualFilter=VWC

[CLS:CMMSThread]
Type=0
HeaderFile=MMSThread.h
ImplementationFile=MMSThread.cpp
BaseClass=CWinThread
Filter=N

