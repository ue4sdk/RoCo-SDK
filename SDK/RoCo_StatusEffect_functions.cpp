// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StatusEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffect.StatusEffect_C.StopHideTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusEffect_C::StopHideTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.StopHideTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.StartHideTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusEffect_C::StartHideTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.StartHideTimer");

	struct
	{
		float                          Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatusEffect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStatusEffect_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStatusEffect_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.RevealStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Revealed                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Permanent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusEffect_C::RevealStatus(bool Revealed, bool Permanent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.RevealStatus");

	struct
	{
		bool                           Revealed;
		bool                           Permanent;
	} params;

	params.Revealed = Revealed;
	params.Permanent = Permanent;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.OnStuck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusEffect_C::OnStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.OnStuck");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.HideTimeExpired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusEffect_C::HideTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.HideTimeExpired");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.UpdateRevealStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsRevealed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusEffect_C::UpdateRevealStatus(bool IsRevealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.UpdateRevealStatus");

	struct
	{
		bool                           IsRevealed;
	} params;

	params.IsRevealed = IsRevealed;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.HandleRootChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Rooted                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusEffect_C::HandleRootChanged(bool Rooted)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.HandleRootChanged");

	struct
	{
		bool                           Rooted;
	} params;

	params.Rooted = Rooted;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.UpdatePlayerRevealedUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShow                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusEffect_C::UpdatePlayerRevealedUI(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.UpdatePlayerRevealedUI");

	struct
	{
		bool                           bShow;
	} params;

	params.bShow = bShow;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusEffect_C::ExecuteUbergraph_StatusEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffect.StatusEffect_C.ExecuteUbergraph_StatusEffect");

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
