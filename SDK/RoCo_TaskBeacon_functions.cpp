// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TaskBeacon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TaskBeacon.TaskBeacon_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATaskBeacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TaskBeacon.TaskBeacon_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TaskBeacon.TaskBeacon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATaskBeacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TaskBeacon.TaskBeacon_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TaskBeacon.TaskBeacon_C.ExecuteUbergraph_TaskBeacon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATaskBeacon_C::ExecuteUbergraph_TaskBeacon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TaskBeacon.TaskBeacon_C.ExecuteUbergraph_TaskBeacon");

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
