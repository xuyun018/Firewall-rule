#ifndef COM_Base_H
#define COM_Base_H
//---------------------------------------------------------------------------
#include <comdef.h>
//---------------------------------------------------------------------------
// 00000000-0000-0000-C000-000000000046
typedef struct IUnknownVtbl
{
	BEGIN_INTERFACE

	HRESULT(STDMETHODCALLTYPE *QueryInterface)(
		LPVOID This,
		/* [in] */ REFIID riid,
		/* [annotation][iid_is][out] */
		void **ppvObject);

	ULONG(STDMETHODCALLTYPE *AddRef)(
		LPVOID This);

	ULONG(STDMETHODCALLTYPE *Release)(
		LPVOID This);

	END_INTERFACE
} IUnknownVtbl;

interface IXYUnknown
{
	CONST_VTBL struct IUnknownVtbl *lpVtbl;
};

// 00020400-0000-0000-C000-000000000046
typedef struct IDispatchVtbl
{
	BEGIN_INTERFACE

	HRESULT(STDMETHODCALLTYPE *QueryInterface)(
		__RPC__in LPVOID This,
		/* [in] */ __RPC__in REFIID riid,
		/* [annotation][iid_is][out] */
		void **ppvObject);

	ULONG(STDMETHODCALLTYPE *AddRef)(
		__RPC__in LPVOID This);

	ULONG(STDMETHODCALLTYPE *Release)(
		__RPC__in LPVOID This);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		__RPC__in LPVOID This,
		/* [out] */ __RPC__out UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		__RPC__in LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		__RPC__in LPVOID This,
		/* [in] */ __RPC__in REFIID riid,
		/* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
		/* [range][in] */ __RPC__in_range(0, 16384) UINT cNames,
		/* [in] */ LCID lcid,
		/* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);

	/* [local] */ HRESULT(STDMETHODCALLTYPE *Invoke)(
		LPVOID This,
		/* [annotation][in] */
		DISPID dispIdMember,
		/* [annotation][in] */
		REFIID riid,
		/* [annotation][in] */
		LCID lcid,
		/* [annotation][in] */
		WORD wFlags,
		/* [annotation][out][in] */
		DISPPARAMS *pDispParams,
		/* [annotation][out] */
		VARIANT *pVarResult,
		/* [annotation][out] */
		EXCEPINFO *pExcepInfo,
		/* [annotation][out] */
		UINT *puArgErr);

	END_INTERFACE
} IDispatchVtbl;

interface IXYDispatch
{
	CONST_VTBL struct IDispatchVtbl *lpVtbl;
};
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#endif