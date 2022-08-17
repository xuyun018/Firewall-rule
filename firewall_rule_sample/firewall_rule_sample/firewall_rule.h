#ifndef FIREWALL_RULE_H
#define FIREWALL_RULE_H
//---------------------------------------------------------------------------
#include "COM_netfw.h"
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
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
	VARIANT_BOOL enabled);
BOOL firewall_rule_remove_application(const WCHAR *rulename);
//---------------------------------------------------------------------------
#endif
