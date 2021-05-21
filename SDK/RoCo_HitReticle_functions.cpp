// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HitReticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitReticle.HitReticle_C.OnHitAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitReticle_C::OnHitAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.OnHitAnimationFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HitReticle.HitReticle_C.ResetHitReticle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Headshot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Lethal                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Down                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Shielded                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHitReticle_C::ResetHitReticle(bool Headshot, bool Lethal, bool Down, bool Shielded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.ResetHitReticle");

	struct
	{
		bool                           Headshot;
		bool                           Lethal;
		bool                           Down;
		bool                           Shielded;
	} params;

	params.Headshot = Headshot;
	params.Lethal = Lethal;
	params.Down = Down;
	params.Shielded = Shielded;

	UObject::ProcessEvent(fn, &params);
}


// Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitReticle_C::ExecuteUbergraph_HitReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReticle.HitReticle_C.ExecuteUbergraph_HitReticle");

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
