// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "reposproperties.h"

// Dispatch interfaces referenced by this interface
#include "ReposProperty.h"


/////////////////////////////////////////////////////////////////////////////
// CReposProperties properties

/////////////////////////////////////////////////////////////////////////////
// CReposProperties operations

long CReposProperties::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CReposProperty CReposProperties::GetItem(const VARIANT& sItem)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		&sItem);
	return CReposProperty(pDispatch);
}

VARIANT CReposProperties::GetType()
{
	VARIANT result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}