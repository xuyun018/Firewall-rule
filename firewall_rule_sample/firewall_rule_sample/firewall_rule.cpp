#include "firewall_rule.h"
//---------------------------------------------------------------------------
BOOL firewall_rule_add_application(const WCHAR *applicationname,
	const WCHAR *rulename,
	const WCHAR *ruledescription,
	const WCHAR *rulegrouping,
	const WCHAR *ruleservicename,
	const WCHAR *rulelocalports, const WCHAR *rulelocaladdresses,
	const WCHAR *ruleremoteports, const WCHAR *ruleremoteaddresses,
	NET_FW_IP_VERSION ipversion,
	NET_FW_IP_PROTOCOL ipprotocol,
	NET_FW_RULE_DIRECTION direction,
	NET_FW_ACTION action,
	VARIANT_BOOL enabled)
{
	HRESULT hres0;
	HRESULT hres1;
	IXYNetFwPolicy2 *pinfp2 = NULL;
	IXYNetFwRules *pinfrs = NULL;
	IXYNetFwRule *pinfr = NULL;
	long lProfileBitmask;
	//
	BSTR bstrRuleName = NULL;
	BSTR bstrRuleDescription = NULL;
	BSTR bstrRuleGrouping = NULL;
	BSTR bstrRuleServiceName = NULL;
	BSTR bstrRuleApplicationName = NULL;
	BSTR bstrRuleLocalPorts = NULL;
	BSTR bstrRuleLocalAddresses = NULL;
	BSTR bstrRuleRemotePorts = NULL;
	BSTR bstrRuleRemoteAddresses = NULL;
	BSTR bstrInterfaceTypes = NULL;
	//
	BOOL result = FALSE;

	hres0 = CoInitializeEx(0, COINIT_APARTMENTTHREADED);
	// Ignore RPC_E_CHANGED_MODE; this just means that COM has already been
	// initialized with a different mode. Since we don't care what the mode is,
	// we'll just use the existing mode.
	if (hres0 == RPC_E_CHANGED_MODE || SUCCEEDED(hres0))
	{
		pinfp2 = NULL;
		hres1 = CoCreateInstance(
			__uuidof(NetFwPolicy2),
			NULL,
			CLSCTX_INPROC_SERVER,
			__uuidof(INetFwPolicy2), (LPVOID *)&pinfp2);
		if (SUCCEEDED(hres1) && pinfp2 != NULL)
		{
			// Retrieve INetFwRules
			pinfrs = NULL;
			hres1 = pinfp2->lpVtbl->get_Rules((LPVOID)pinfp2, &pinfrs);
			if (SUCCEEDED(hres1) && pinfrs != NULL)
			{
				// Retrieve Current Profiles bitmask
				hres1 = pinfp2->lpVtbl->get_CurrentProfileTypes((LPVOID)pinfp2, &lProfileBitmask);
				if (SUCCEEDED(hres1))
				{
					// When possible we avoid adding firewall rules to the Public profile.
					// If Public is currently active and it is not the only active profile, we remove it from the bitmask
					if ((lProfileBitmask & NET_FW_PROFILE2_PUBLIC) &&
						(lProfileBitmask != NET_FW_PROFILE2_PUBLIC))
					{
						lProfileBitmask ^= NET_FW_PROFILE2_PUBLIC;
					}

					//lProfileBitmask |= NET_FW_PROFILE2_PUBLIC;

					NET_FW_IP_VERSION_V4;
				}

				// Create a new Firewall Rule object.
				pinfr = NULL;
				hres1 = CoCreateInstance(
					__uuidof(NetFwRule),
					NULL,
					CLSCTX_INPROC_SERVER,
					__uuidof(INetFwRule),
					(void**)&pinfr);
				if (SUCCEEDED(hres1) && pinfr != NULL)
				{
					bstrRuleName = SysAllocString(rulename);
					if (ruledescription != NULL)
					{
						bstrRuleDescription = SysAllocString(ruledescription);
					}
					if (rulegrouping != NULL)
					{
						bstrRuleGrouping = SysAllocString(rulegrouping);
					}
					bstrRuleApplicationName = SysAllocString(applicationname);
					if (ruleservicename != NULL)
					{
						bstrRuleServiceName = SysAllocString(ruleservicename);
					}
					if (rulelocalports != NULL)
					{
						bstrRuleLocalPorts = SysAllocString(rulelocalports);
					}
					if (rulelocaladdresses != NULL)
					{
						bstrRuleLocalAddresses = SysAllocString(rulelocaladdresses);
					}
					if (ruleremoteports != NULL)
					{
						bstrRuleRemotePorts = SysAllocString(ruleremoteports);
					}
					if (ruleremoteaddresses != NULL)
					{
						bstrRuleRemoteAddresses = SysAllocString(ruleremoteaddresses);
					}
					//bstrInterfaceTypes = SysAllocString(L"All");

					// Populate the Firewall Rule Name
					if (SUCCEEDED(pinfr->lpVtbl->put_Name((LPVOID)pinfr, bstrRuleName)))
					{
						// Populate the Firewall Rule Application Name
						if (SUCCEEDED(pinfr->lpVtbl->put_ApplicationName((LPVOID)pinfr, bstrRuleApplicationName)))
						{
							if (bstrRuleDescription != NULL)
							{
								// Populate the Firewall Rule Description
								if (SUCCEEDED(pinfr->lpVtbl->put_Description((LPVOID)pinfr, bstrRuleDescription)))
								{
								}
							}

							if (bstrRuleGrouping != NULL)
							{
								// Populate the Firewall Rule Group
								if (SUCCEEDED(pinfr->lpVtbl->put_Grouping((LPVOID)pinfr, bstrRuleGrouping)))
								{
								}
							}

							if (bstrRuleServiceName != NULL)
							{
								// Populate the Firewall Rule ServiceName
								if (SUCCEEDED(pinfr->lpVtbl->put_ServiceName((LPVOID)pinfr, bstrRuleServiceName)))
								{
								}
							}

							// Populate the Firewall Rule Protocol
							if (SUCCEEDED(pinfr->lpVtbl->put_Protocol((LPVOID)pinfr, ipprotocol)))
							{
							}

							if (bstrRuleLocalPorts != NULL)
							{
								// Populate the Firewall Rule Local Ports
								if (SUCCEEDED(pinfr->lpVtbl->put_LocalPorts((LPVOID)pinfr, bstrRuleLocalPorts)))
								{
								}
							}

							if (bstrRuleLocalAddresses != NULL)
							{
								// Populate the Firewall Rule Local Addresses
								if (SUCCEEDED(pinfr->lpVtbl->put_LocalAddresses((LPVOID)pinfr, bstrRuleLocalAddresses)))
								{
								}
							}

							if (bstrRuleRemotePorts != NULL)
							{
								// Populate the Firewall Rule Remote Ports
								if (SUCCEEDED(pinfr->lpVtbl->put_RemotePorts((LPVOID)pinfr, bstrRuleRemotePorts)))
								{
								}
							}

							if (bstrRuleRemoteAddresses != NULL)
							{
								// Populate the Firewall Rule Remote Addresses
								if (SUCCEEDED(pinfr->lpVtbl->put_RemoteAddresses((LPVOID)pinfr, bstrRuleRemoteAddresses)))
								{
								}
							}

							// Populate the Firewall Rule Direction
							if (SUCCEEDED(pinfr->lpVtbl->put_Direction((LPVOID)pinfr, direction)))
							{
							}

							// Populate the Firewall Rule Action
							if (SUCCEEDED(pinfr->lpVtbl->put_Action((LPVOID)pinfr, action)))
							{
							}

							if (bstrInterfaceTypes != NULL)
							{
								// Populate the Firewall Rule put_InterfaceTypes
								if (SUCCEEDED(pinfr->lpVtbl->put_InterfaceTypes((LPVOID)pinfr, bstrInterfaceTypes)))
								{
								}
							}

							// Populate the Firewall Rule Enabled
							if (SUCCEEDED(pinfr->lpVtbl->put_Enabled((LPVOID)pinfr, enabled)))
							{
							}

							// Populate the Firewall Rule Profiles
							if (SUCCEEDED(pinfr->lpVtbl->put_Profiles((LPVOID)pinfr, lProfileBitmask)))
							{
							}

							// Add the Firewall Rule
							if (SUCCEEDED(pinfrs->lpVtbl->Add((LPVOID)pinfrs, pinfr)))
							{
								result = TRUE;
							}
						}
					}

					if (bstrRuleName != NULL)
					{
						SysFreeString(bstrRuleName);
					}
					if (bstrRuleDescription != NULL)
					{
						SysFreeString(bstrRuleDescription);
					}
					if (bstrRuleGrouping != NULL)
					{
						SysFreeString(bstrRuleGrouping);
					}
					if (bstrRuleServiceName != NULL)
					{
						SysFreeString(bstrRuleServiceName);
					}
					if (bstrRuleApplicationName != NULL)
					{
						SysFreeString(bstrRuleApplicationName);
					}
					if (bstrRuleLocalPorts != NULL)
					{
						SysFreeString(bstrRuleLocalPorts);
					}
					if (bstrRuleLocalAddresses != NULL)
					{
						SysFreeString(bstrRuleLocalAddresses);
					}
					if (bstrRuleRemotePorts != NULL)
					{
						SysFreeString(bstrRuleRemotePorts);
					}
					if (bstrRuleRemoteAddresses != NULL)
					{
						SysFreeString(bstrRuleRemoteAddresses);
					}
					if (bstrInterfaceTypes != NULL)
					{
						SysFreeString(bstrInterfaceTypes);
					}
				}

				if (pinfr != NULL)
				{
					pinfr->lpVtbl->Release((LPVOID)pinfr);
				}
			}

			if (pinfrs != NULL)
			{
				pinfrs->lpVtbl->Release((LPVOID)pinfrs);
			}
		}

		if (pinfp2 != NULL)
		{
			pinfp2->lpVtbl->Release((LPVOID)pinfp2);
		}

		if (hres0 != RPC_E_CHANGED_MODE)
		{
			CoUninitialize();
		}
	}

	return(result);
}
BOOL firewall_rule_remove_application(const WCHAR *rulename)
{
	HRESULT hres0;
	HRESULT hres1;
	IXYNetFwPolicy2 *pinfp2 = NULL;
	IXYNetFwRules *pinfrs = NULL;
	//
	BSTR bstrRuleName = NULL;
	//
	BOOL result = FALSE;

	hres0 = CoInitializeEx(0, COINIT_APARTMENTTHREADED);
	// Ignore RPC_E_CHANGED_MODE; this just means that COM has already been
	// initialized with a different mode. Since we don't care what the mode is,
	// we'll just use the existing mode.
	if (hres0 == RPC_E_CHANGED_MODE || SUCCEEDED(hres0))
	{
		pinfp2 = NULL;
		hres1 = CoCreateInstance(
			__uuidof(NetFwPolicy2),
			NULL,
			CLSCTX_INPROC_SERVER,
			__uuidof(INetFwPolicy2), (LPVOID *)&pinfp2);
		if (SUCCEEDED(hres1) && pinfp2 != NULL)
		{
			// Retrieve INetFwRules
			pinfrs = NULL;
			hres1 = pinfp2->lpVtbl->get_Rules((LPVOID)pinfp2, &pinfrs);
			if (SUCCEEDED(hres1) && pinfrs != NULL)
			{
				bstrRuleName = SysAllocString(rulename);

				if (SUCCEEDED(pinfrs->lpVtbl->Remove((LPVOID)pinfrs, bstrRuleName)))
				{
					result = TRUE;
				}

				if (bstrRuleName != NULL)
				{
					SysFreeString(bstrRuleName);
				}
			}

			if (pinfrs != NULL)
			{
				pinfrs->lpVtbl->Release((LPVOID)pinfrs);
			}
		}

		if (pinfp2 != NULL)
		{
			pinfp2->lpVtbl->Release((LPVOID)pinfp2);
		}

		if (hres0 != RPC_E_CHANGED_MODE)
		{
			CoUninitialize();
		}
	}

	return(result);
}
//---------------------------------------------------------------------------