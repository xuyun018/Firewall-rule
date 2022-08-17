#include <Windows.h>

#include <stdio.h>

#include "firewall_rule.h"

int wmain(int argc, WCHAR* argv[])
{
	WCHAR filename[1024];
	UINT filenamelength;

	filenamelength = GetModuleFileName(NULL, filename, sizeof(filename) / sizeof(WCHAR));

	firewall_rule_add_application(filename,
		L"Test Firewall rule",
		L"Test Firewall rule description",
		L"Test Firewall rule rouping",
		NULL,
		NULL, NULL,
		NULL, NULL,
		NET_FW_IP_VERSION_ANY,
		NET_FW_IP_PROTOCOL_ANY,
		NET_FW_RULE_DIR_IN,
		NET_FW_ACTION_ALLOW,
		VARIANT_TRUE);

	getchar();

	firewall_rule_remove_application(L"Test Firewall rule");

	return(0);
}