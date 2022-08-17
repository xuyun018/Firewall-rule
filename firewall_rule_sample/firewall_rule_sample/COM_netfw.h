#ifndef COM_netfw_H
#define COM_netfw_H
//---------------------------------------------------------------------------
#include "COM_Base.h"

#include <netfw.h>
//---------------------------------------------------------------------------
// MIDL_INTERFACE("AF230D27-BABA-4E42-ACED-F524F22CFCE2")
typedef struct INetFwRuleVtbl
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

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		LPVOID This,
		/* [in] */ REFIID riid,
		/* [size_is][in] */ LPOLESTR *rgszNames,
		/* [range][in] */ UINT cNames,
		/* [in] */ LCID lcid,
		/* [size_is][out] */ DISPID *rgDispId);

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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Name)(
		LPVOID This,
		/* [retval][out] */ BSTR *name);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Name)(
		LPVOID This,
		/* [in] */ BSTR name);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Description)(
		LPVOID This,
		/* [retval][out] */ BSTR *desc);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Description)(
		LPVOID This,
		/* [in] */ BSTR desc);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_ApplicationName)(
		LPVOID This,
		/* [retval][out] */ BSTR *imageFileName);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_ApplicationName)(
		LPVOID This,
		/* [in] */ BSTR imageFileName);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_ServiceName)(
		LPVOID This,
		/* [retval][out] */ BSTR *serviceName);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_ServiceName)(
		LPVOID This,
		/* [in] */ BSTR serviceName);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Protocol)(
		LPVOID This,
		/* [retval][out] */ LONG *protocol);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Protocol)(
		LPVOID This,
		/* [in] */ LONG protocol);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_LocalPorts)(
		LPVOID This,
		/* [retval][out] */ BSTR *portNumbers);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_LocalPorts)(
		LPVOID This,
		/* [in] */ BSTR portNumbers);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_RemotePorts)(
		LPVOID This,
		/* [retval][out] */ BSTR *portNumbers);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_RemotePorts)(
		LPVOID This,
		/* [in] */ BSTR portNumbers);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_LocalAddresses)(
		LPVOID This,
		/* [retval][out] */ BSTR *localAddrs);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_LocalAddresses)(
		LPVOID This,
		/* [in] */ BSTR localAddrs);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_RemoteAddresses)(
		LPVOID This,
		/* [retval][out] */ BSTR *remoteAddrs);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_RemoteAddresses)(
		LPVOID This,
		/* [in] */ BSTR remoteAddrs);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_IcmpTypesAndCodes)(
		LPVOID This,
		/* [retval][out] */ BSTR *icmpTypesAndCodes);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_IcmpTypesAndCodes)(
		LPVOID This,
		/* [in] */ BSTR icmpTypesAndCodes);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Direction)(
		LPVOID This,
		/* [retval][out] */ NET_FW_RULE_DIRECTION *dir);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Direction)(
		LPVOID This,
		/* [in] */ NET_FW_RULE_DIRECTION dir);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Interfaces)(
		LPVOID This,
		/* [retval][out] */ VARIANT *interfaces);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Interfaces)(
		LPVOID This,
		/* [in] */ VARIANT interfaces);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_InterfaceTypes)(
		LPVOID This,
		/* [retval][out] */ BSTR *interfaceTypes);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_InterfaceTypes)(
		LPVOID This,
		/* [in] */ BSTR interfaceTypes);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Enabled)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Enabled)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL enabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Grouping)(
		LPVOID This,
		/* [retval][out] */ BSTR *context);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Grouping)(
		LPVOID This,
		/* [in] */ BSTR context);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Profiles)(
		LPVOID This,
		/* [retval][out] */ long *profileTypesBitmask);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Profiles)(
		LPVOID This,
		/* [in] */ long profileTypesBitmask);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_EdgeTraversal)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_EdgeTraversal)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL enabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Action)(
		LPVOID This,
		/* [retval][out] */ NET_FW_ACTION *action);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Action)(
		LPVOID This,
		/* [in] */ NET_FW_ACTION action);

	END_INTERFACE
} INetFwRuleVtbl;

interface IXYNetFwRule
{
	CONST_VTBL struct INetFwRuleVtbl *lpVtbl;
};

// MIDL_INTERFACE("9C4C6277-5027-441E-AFAE-CA1F542DA009")
typedef struct INetFwRulesVtbl
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

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		LPVOID This,
		/* [in] */ REFIID riid,
		/* [size_is][in] */ LPOLESTR *rgszNames,
		/* [range][in] */ UINT cNames,
		/* [in] */ LCID lcid,
		/* [size_is][out] */ DISPID *rgDispId);

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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Count)(
		LPVOID This,
		/* [retval][out] */ long *count);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *Add)(
		LPVOID This,
		/* [in] */ IXYNetFwRule *rule);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *Remove)(
		LPVOID This,
		/* [in] */ BSTR name);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *Item)(
		LPVOID This,
		/* [in] */ BSTR name,
		/* [retval][out] */ IXYNetFwRule **rule);

	/* [restricted][propget][id] */ HRESULT(STDMETHODCALLTYPE *get__NewEnum)(
		LPVOID This,
		/* [retval][out] */ IXYUnknown **newEnum);

	END_INTERFACE
} INetFwRulesVtbl;

interface IXYNetFwRules
{
	CONST_VTBL struct INetFwRulesVtbl *lpVtbl;
};

// MIDL_INTERFACE("98325047-C671-4174-8D81-DEFCD3F03186")
typedef struct INetFwPolicy2Vtbl
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

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		LPVOID This,
		/* [in] */ REFIID riid,
		/* [size_is][in] */ LPOLESTR *rgszNames,
		/* [range][in] */ UINT cNames,
		/* [in] */ LCID lcid,
		/* [size_is][out] */ DISPID *rgDispId);

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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_CurrentProfileTypes)(
		LPVOID This,
		/* [retval][out] */ long *profileTypesBitmask);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_FirewallEnabled)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_FirewallEnabled)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ VARIANT_BOOL enabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_ExcludedInterfaces)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ VARIANT *interfaces);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_ExcludedInterfaces)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ VARIANT interfaces);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_BlockAllInboundTraffic)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ VARIANT_BOOL *Block);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_BlockAllInboundTraffic)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ VARIANT_BOOL Block);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_NotificationsDisabled)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ VARIANT_BOOL *disabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_NotificationsDisabled)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ VARIANT_BOOL disabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_UnicastResponsesToMulticastBroadcastDisabled)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ VARIANT_BOOL *disabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_UnicastResponsesToMulticastBroadcastDisabled)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ VARIANT_BOOL disabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Rules)(
		LPVOID This,
		/* [retval][out] */ IXYNetFwRules **rules);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_ServiceRestriction)(
		LPVOID This,
		/* [retval][out] */ INetFwServiceRestriction **ServiceRestriction);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *EnableRuleGroup)(
		LPVOID This,
		/* [in] */ long profileTypesBitmask,
		/* [in] */ BSTR group,
		/* [in] */ VARIANT_BOOL enable);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *IsRuleGroupEnabled)(
		LPVOID This,
		/* [in] */ long profileTypesBitmask,
		/* [in] */ BSTR group,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *RestoreLocalFirewallDefaults)(
		LPVOID This);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_DefaultInboundAction)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ NET_FW_ACTION *action);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_DefaultInboundAction)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ NET_FW_ACTION action);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_DefaultOutboundAction)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [retval][out] */ NET_FW_ACTION *action);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_DefaultOutboundAction)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE2 profileType,
		/* [in] */ NET_FW_ACTION action);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_IsRuleGroupCurrentlyEnabled)(
		LPVOID This,
		/* [in] */ BSTR group,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_LocalPolicyModifyState)(
		LPVOID This,
		/* [retval][out] */ NET_FW_MODIFY_STATE *modifyState);

	END_INTERFACE
} INetFwPolicy2Vtbl;

interface IXYNetFwPolicy2
{
	CONST_VTBL struct INetFwPolicy2Vtbl *lpVtbl;
};

typedef struct INetFwRemoteAdminSettingsVtbl
{
	BEGIN_INTERFACE

	HRESULT(STDMETHODCALLTYPE *QueryInterface)(
		__RPC__in LPVOID This,
		/* [in] */ __RPC__in REFIID riid,
		/* [annotation][iid_is][out] */
		void **ppvObject);

	ULONG(STDMETHODCALLTYPE *AddRef)(
		LPVOID This);

	ULONG(STDMETHODCALLTYPE *Release)(
		LPVOID This);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ __RPC__out UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		LPVOID This,
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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_IpVersion)(
		LPVOID This,
		/* [retval][out] */ NET_FW_IP_VERSION *ipVersion);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_IpVersion)(
		LPVOID This,
		/* [in] */ NET_FW_IP_VERSION ipVersion);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Scope)(
		LPVOID This,
		/* [retval][out] */ NET_FW_SCOPE *scope);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Scope)(
		LPVOID This,
		/* [in] */ NET_FW_SCOPE scope);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_RemoteAddresses)(
		LPVOID This,
		/* [retval][out] */ BSTR *remoteAddrs);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_RemoteAddresses)(
		LPVOID This,
		/* [in] */ BSTR remoteAddrs);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Enabled)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_Enabled)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL enabled);

	END_INTERFACE
} INetFwRemoteAdminSettingsVtbl;

interface IXYNetFwRemoteAdminSettings
{
	CONST_VTBL struct INetFwRemoteAdminSettingsVtbl *lpVtbl;
};

typedef struct INetFwProfileVtbl
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

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ UINT *pctinfo);

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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Type)(
		LPVOID This,
		/* [retval][out] */ NET_FW_PROFILE_TYPE *type);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_FirewallEnabled)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *enabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_FirewallEnabled)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL enabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_ExceptionsNotAllowed)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *notAllowed);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_ExceptionsNotAllowed)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL notAllowed);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_NotificationsDisabled)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *disabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_NotificationsDisabled)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL disabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_UnicastResponsesToMulticastBroadcastDisabled)(
		LPVOID This,
		/* [retval][out] */ VARIANT_BOOL *disabled);

	/* [propput][id] */ HRESULT(STDMETHODCALLTYPE *put_UnicastResponsesToMulticastBroadcastDisabled)(
		LPVOID This,
		/* [in] */ VARIANT_BOOL disabled);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_RemoteAdminSettings)(
		LPVOID This,
		/* [retval][out] */ INetFwRemoteAdminSettings **remoteAdminSettings);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_IcmpSettings)(
		LPVOID This,
		/* [retval][out] */ INetFwIcmpSettings **icmpSettings);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_GloballyOpenPorts)(
		LPVOID This,
		/* [retval][out] */ INetFwOpenPorts **openPorts);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_Services)(
		LPVOID This,
		/* [retval][out] */ INetFwServices **services);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_AuthorizedApplications)(
		LPVOID This,
		/* [retval][out] */ INetFwAuthorizedApplications **apps);

	END_INTERFACE
} INetFwProfileVtbl;

interface IXYNetFwProfile
{
	CONST_VTBL struct INetFwProfileVtbl *lpVtbl;
};

typedef struct INetFwPolicyVtbl
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

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		LPVOID This,
		/* [in] */ REFIID riid,
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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_CurrentProfile)(
		LPVOID This,
		/* [retval][out] */ INetFwProfile **profile);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *GetProfileByType)(
		LPVOID This,
		/* [in] */ NET_FW_PROFILE_TYPE profileType,
		/* [retval][out] */ INetFwProfile **profile);

	END_INTERFACE
} INetFwPolicyVtbl;

interface IXYNetFwPolicy
{
	CONST_VTBL struct INetFwPolicyVtbl *lpVtbl;
};

typedef struct INetFwMgrVtbl
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

	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount)(
		LPVOID This,
		/* [out] */ UINT *pctinfo);

	HRESULT(STDMETHODCALLTYPE *GetTypeInfo)(
		LPVOID This,
		/* [in] */ UINT iTInfo,
		/* [in] */ LCID lcid,
		/* [out] */ ITypeInfo **ppTInfo);

	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames)(
		LPVOID This,
		/* [in] */ REFIID riid,
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

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_LocalPolicy)(
		LPVOID This,
		/* [retval][out] */ INetFwPolicy **localPolicy);

	/* [propget][id] */ HRESULT(STDMETHODCALLTYPE *get_CurrentProfileType)(
		LPVOID This,
		/* [retval][out] */ NET_FW_PROFILE_TYPE *profileType);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *RestoreDefaults)(
		LPVOID This);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *IsPortAllowed)(
		LPVOID This,
		/* [in] */ BSTR imageFileName,
		/* [in] */ NET_FW_IP_VERSION ipVersion,
		/* [in] */ LONG portNumber,
		/* [in] */ BSTR localAddress,
		/* [in] */ NET_FW_IP_PROTOCOL ipProtocol,
		/* [out] */ VARIANT *allowed,
		/* [out] */ VARIANT *restricted);

	/* [id] */ HRESULT(STDMETHODCALLTYPE *IsIcmpTypeAllowed)(
		LPVOID This,
		/* [in] */ NET_FW_IP_VERSION ipVersion,
		/* [in] */ BSTR localAddress,
		/* [in] */ BYTE type,
		/* [out] */ VARIANT *allowed,
		/* [out] */ VARIANT *restricted);

	END_INTERFACE
} INetFwMgrVtbl;

interface IXYNetFwMgr
{
	CONST_VTBL struct INetFwMgrVtbl *lpVtbl;
};
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#endif