// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Lightbomb_HitDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Lightbomb_HitDisplay.WBP_Lightbomb_HitDisplay_C.SetHitCountVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLightbomb                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Lightbomb_HitDisplay_C::SetHitCountVisible(bool IsLightbomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lightbomb_HitDisplay.WBP_Lightbomb_HitDisplay_C.SetHitCountVisible");

	struct
	{
		bool                           IsLightbomb;
	} params;

	params.IsLightbomb = IsLightbomb;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Lightbomb_HitDisplay.WBP_Lightbomb_HitDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Lightbomb_HitDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lightbomb_HitDisplay.WBP_Lightbomb_HitDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Lightbomb_HitDisplay.WBP_Lightbomb_HitDisplay_C.ExecuteUbergraph_WBP_Lightbomb_HitDisplay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Lightbomb_HitDisplay_C::ExecuteUbergraph_WBP_Lightbomb_HitDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lightbomb_HitDisplay.WBP_Lightbomb_HitDisplay_C.ExecuteUbergraph_WBP_Lightbomb_HitDisplay");

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
