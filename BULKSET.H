// bulkset.h : header file
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) 1992-1998 Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#define MAX_TEXT_LEN 40 // This is about as much as will fit in UI

/////////////////////////////////////////////////////////////////////////////
// CBulkRecordsetMod recordset

class CRecordsetMod : public CRecordset
{
public:
	CRecordsetMod(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CRecordsetMod)

// Operations
public:
	virtual BOOL Open(UINT nOpenType = AFX_DB_USE_DEFAULT_TYPE,
		LPCTSTR lpszSQL = NULL, DWORD dwOptions = useMultiRowFetch);

	virtual BOOL RowsetUpdate(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
	virtual BOOL RowsetAdd(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);
	virtual BOOL RowsetDelete(WORD wRow, WORD wLockType = SQL_LOCK_NO_CHANGE);

// Implemenation
public:
	BOOL ValidateMod(WORD wRow, WORD wExpectedStatus);
};

/////////////////////////////////////////////////////////////////////////////
// CSnapshotBulkSet recordset

class CBulkSet : public CRecordsetMod
{
public:
	CBulkSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CBulkSet)

	virtual void Close();

// Attributes
	int m_nAllocatedFields;
	void** m_ppvData;    // allocate dynamically to nColumns later
	void** m_ppvLengths; // allocate dynamically to nColumns later

// Overridables
	virtual void DoBulkFieldExchange(CFieldExchange* pFX);
	virtual void CheckRowsetError(RETCODE nRetCode);
};

