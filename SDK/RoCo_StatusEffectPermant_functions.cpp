// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StatusEffectPermant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffectPermant.StatusEffectPermant_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStatusEffectPermant_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffectPermant.StatusEffectPermant_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffectPermant.StatusEffectPermant_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatusEffectPermant_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffectPermant.StatusEffectPermant_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffectPermant.StatusEffectPermant_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UStatusEffectPermant_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffectPermant.StatusEffectPermant_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSpectating                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusEffectPermant_C::CustomEvent_2(bool IsSpectating)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_2"));

	struct
	{
		bool                           IsSpectating;
	} params;

	params.IsSpectating = IsSpectating;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OldViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  NewViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusEffectPermant_C::CustomEvent_1(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffectPermant.StatusEffectPermant_C.CustomEvent_1"));

	struct
	{
		class AKSPlayerController*     Controller;
		class AActor*                  OldViewTarget;
		class AActor*                  NewViewTarget;
	} params;

	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffectPermant.StatusEffectPermant_C.ExecuteUbergraph_StatusEffectPermant
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusEffectPermant_C::ExecuteUbergraph_StatusEffectPermant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffectPermant.StatusEffectPermant_C.ExecuteUbergraph_StatusEffectPermant"));

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
