// bulkset.cpp : implementation file
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

#include "stdafx.h"
#include "bulkset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBulkRecordsetMod

IMPLEMENT_DYNAMIC(CRecordsetMod, CRecordset)

CRecordsetMod::CRecordsetMod(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CBulkRecordsetMod)
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


BOOL CRecordsetMod::Open(UINT nOpenType,
	LPCTSTR lpszSQL, DWORD dwOptions)
{
	ASSERT(dwOptions & useMultiRowFetch);
	return CRecordset::Open(nOpenType, lpszSQL, dwOptions);
}

BOOL CRecordsetMod::RowsetUpdate(WORD wRow, WORD wLockType)
{
	ASSERT(wRow >= 0 && wRow <= GetRowsetSize());

	RETCODE nRetCode;
	AFX_ODBC_CALL(::SQLSetPos(m_hstmt, wRow, SQL_UPDATE, wLockType));

	return ValidateMod(wRow, SQL_ROW_UPDATED);
}

BOOL CRecordsetMod::RowsetAdd(WORD wRow, WORD wLockType)
{
	// User may allocate an extra row buffer for the Add
	// (if user adds more than 1, must override)
	ASSERT(wRow >= 0 && wRow <= GetRowsetSize() + 1);

	RETCODE nRetCode;
	AFX_ODBC_CALL(::SQLSetPos(m_hstmt, wRow, SQL_ADD, wLockType));

	return ValidateMod(wRow, SQL_ROW_ADDED);
}

BOOL CRecordsetMod::RowsetDelete(WORD wRow, WORD wLockType)
{
	ASSERT(wRow >= 0 && wRow <= GetRowsetSize());

	RETCODE nRetCode;
	AFX_ODBC_CALL(::SQLSetPos(m_hstmt, wRow, SQL_DELETE, wLockType));

	return ValidateMod(wRow, SQL_ROW_DELETED);
}

BOOL CRecordsetMod::ValidateMod(WORD wRow, WORD wExpectedStatus)
{
	BOOL bReturn = TRUE;

	if (wRow != 0)
		bReturn = GetRowStatus(wRow) == wExpectedStatus;
	else
	{
		for (WORD wNum = 1; wNum <= GetRowsetSize(); wNum++)
		{
			// If any row status not expected, then validate fails
			if (GetRowStatus(wNum) != wExpectedStatus)
				bReturn = FALSE;
		}
	}

	return bReturn;
}

/////////////////////////////////////////////////////////////////////////////
// CSnapshotBulkSet

IMPLEMENT_DYNAMIC(CBulkSet, CRecordsetMod)

CBulkSet::CBulkSet(CDatabase* pdb)
	: CRecordsetMod(pdb)
{
	m_nDefaultType = dynaset;
	m_nAllocatedFields = 0;

	m_ppvData = NULL;
	m_ppvLengths = NULL;
}

void CBulkSet::Close()
{
	CRecordset::Close();

	delete [] m_ppvData;
	delete [] m_ppvLengths;
}

void CBulkSet::DoBulkFieldExchange(CFieldExchange* pFX)
{
	// Allocate the buffer
	if (pFX->m_nOperation == CFieldExchange::AllocMultiRowBuffer &&
		m_nAllocatedFields == 0)
	{
		// get the field count
		m_ppvData = new void*[GetODBCFieldCount()];
		memset(m_ppvData, 0, sizeof(void*) * GetODBCFieldCount());
		m_ppvLengths = new void*[GetODBCFieldCount()];
		memset(m_ppvLengths, 0, sizeof(void*) * GetODBCFieldCount());

		m_nAllocatedFields = GetODBCFieldCount();
		m_nFields = m_nAllocatedFields;
	}

	// Should never get to here without field buffer allocation
	ASSERT(m_nAllocatedFields != 0);

	pFX->SetFieldType(CFieldExchange::outputColumn);
	for (int nNum = 0; nNum < GetODBCFieldCount(); nNum++)
	{
		RFX_Text_Bulk(pFX, _T("Dummy"), (LPSTR*)&m_ppvData[nNum],
			(long**)&m_ppvLengths[nNum], MAX_TEXT_LEN);
	}
}

void CBulkSet::CheckRowsetError(RETCODE nRetCode)
{
	// Always IGNORE data truncated warnings, as the code
	// purposely truncates text to 40 chars...

	if (nRetCode == SQL_SUCCESS_WITH_INFO)
	{
		CDBException e(nRetCode);
		// Build the error string but don't send nuisance output to TRACE window
		e.BuildErrorString(m_pDatabase, m_hstmt, FALSE);

		if (e.m_strStateNativeOrigin.Find(_T("State:01004")) >= 0)
		{
			// Do nothing here for this app
		}
		else if (e.m_strStateNativeOrigin.Find(_T("State:01S01")) >= 0)
		{
			e.Empty();
			TRACE0("Error: fetching row from server.\n");
			ThrowDBException(AFX_SQL_ERROR_ROW_FETCH);
		}
		else
		{
#ifdef _DEBUG
			// Not a truncation or row fetch warning so send debug output
			if (afxTraceFlags & traceDatabase)
			{
				TRACE0("Warning: ODBC Success With Info, ");
				e.TraceErrorMessage(e.m_strError);
				e.TraceErrorMessage(e.m_strStateNativeOrigin);
			}
#endif // _DEBUG
		}
	}
	else if (!Check(nRetCode))
		ThrowDBException(nRetCode);
}

