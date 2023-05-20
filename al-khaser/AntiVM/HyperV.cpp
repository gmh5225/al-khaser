#include "pch.h"
#include "HyperV.h"


BOOL check_hyperv_driver_objects()
{
	auto driverList = enumerate_object_directory(L"\\Driver");
	if (driverList == nullptr)
	{
		return FALSE;
	}
	for (wchar_t* driver : *driverList)
	{
		if (StrCmpCW(driver, L"VMBusHID") == 0)
		{
			printf("check_hyperv_driver_objects: VMBusHID\n");
			return TRUE;
		}
		if (StrCmpCW(driver, L"vmbus") == 0)
		{
			printf("check_hyperv_driver_objects: vmbus\n");
			return TRUE;
		}
		if (StrCmpCW(driver, L"vmgid") == 0)
		{
			printf("check_hyperv_driver_objects: vmgid\n");
			return TRUE;
		}
		if (StrCmpCW(driver, L"IndirectKmd") == 0)
		{
			printf("check_hyperv_driver_objects: IndirectKmd\n");
			return TRUE;
		}
		if (StrCmpCW(driver, L"HyperVideo") == 0)
		{
			printf("check_hyperv_driver_objects: HyperVideo\n");
			return TRUE;
		}
		if (StrCmpCW(driver, L"hyperkbd") == 0)
		{
			printf("check_hyperv_driver_objects: hyperkbd\n");
			return TRUE;
		}
	}
	return FALSE;
}


BOOL check_hyperv_global_objects()
{
	auto globalObjs = enumerate_object_directory(L"\\GLOBAL??");
	if (globalObjs == nullptr)
	{
		return FALSE;
	}
	for (wchar_t* globalObj : *globalObjs)
	{
		if (StrStrW(globalObj, L"VMBUS#") != NULL)
		{
			printf("check_hyperv_global_objects: VMBUS#\n");
			return TRUE;
		}
		if (StrCmpCW(globalObj, L"VDRVROOT") == 0)
		{
			printf("check_hyperv_global_objects: VDRVROOT\n");
			return TRUE;
		}
		if (StrCmpCW(globalObj, L"VmGenerationCounter") == 0)
		{
			printf("check_hyperv_global_objects: VmGenerationCounter\n");
			return TRUE;
		}
		if (StrCmpCW(globalObj, L"VmGid") == 0)
		{
			printf("check_hyperv_global_objects: VmGid\n");
			return TRUE;
		}
	}
	return FALSE;
}


