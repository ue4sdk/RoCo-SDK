// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WaypointBeacon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaypointBeacon.WaypointBeacon_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWaypointBeacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WaypointBeacon.WaypointBeacon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWaypointBeacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WaypointBeacon.WaypointBeacon_C.SetupBeaconDisplay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWaypointBeacon_C::SetupBeaconDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.SetupBeaconDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WaypointBeacon.WaypointBeacon_C.ExecuteUbergraph_WaypointBeacon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWaypointBeacon_C::ExecuteUbergraph_WaypointBeacon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.ExecuteUbergraph_WaypointBeacon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
