// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RadialStreaksCurveComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialStreaksCurveComponent.RadialStreaksCurveComponent_C.UpdateScalarTrack
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TrackValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialStreaksCurveComponent_C::UpdateScalarTrack(const struct FName& TrackName, float TrackValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialStreaksCurveComponent.RadialStreaksCurveComponent_C.UpdateScalarTrack");

	struct
	{
		struct FName                   TrackName;
		float                          TrackValue;
	} params;

	params.TrackName = TrackName;
	params.TrackValue = TrackValue;

	UObject::ProcessEvent(fn, &params);
}


// Function RadialStreaksCurveComponent.RadialStreaksCurveComponent_C.ExecuteUbergraph_RadialStreaksCurveComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialStreaksCurveComponent_C::ExecuteUbergraph_RadialStreaksCurveComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialStreaksCurveComponent.RadialStreaksCurveComponent_C.ExecuteUbergraph_RadialStreaksCurveComponent");

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
