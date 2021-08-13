// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WayPointSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WayPointSet.WayPointSet_C.SetUpDefensePointSpline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  self2                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWayPointSet_C::SetUpDefensePointSpline(class AActor* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WayPointSet.WayPointSet_C.SetUpDefensePointSpline");

	struct
	{
		class AActor*                  self2;
	} params;

	params.self2 = self2;

	UObject::ProcessEvent(fn, &params);
}


// Function WayPointSet.WayPointSet_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWayPointSet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WayPointSet.WayPointSet_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WayPointSet.WayPointSet_C.CleanupSplines
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWayPointSet_C::CleanupSplines()
{
	static auto fn = UObject::FindObject<UFunction>("Function WayPointSet.WayPointSet_C.CleanupSplines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WayPointSet.WayPointSet_C.UpdateWayPointVisuals
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWayPointSet_C::UpdateWayPointVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WayPointSet.WayPointSet_C.UpdateWayPointVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WayPointSet.WayPointSet_C.ExecuteUbergraph_WayPointSet
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWayPointSet_C::ExecuteUbergraph_WayPointSet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WayPointSet.WayPointSet_C.ExecuteUbergraph_WayPointSet");

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
