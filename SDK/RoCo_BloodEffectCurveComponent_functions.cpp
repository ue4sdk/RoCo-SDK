// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BloodEffectCurveComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TrackValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBloodEffectCurveComponent_C::UpdateScalarTrack(const struct FName& TrackName, float TrackValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack");

	struct
	{
		struct FName                   TrackName;
		float                          TrackValue;
	} params;

	params.TrackName = TrackName;
	params.TrackValue = TrackValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBloodEffectCurveComponent_C::ExecuteUbergraph_BloodEffectCurveComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent");

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
