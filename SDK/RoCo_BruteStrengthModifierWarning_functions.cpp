// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BruteStrengthModifierWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBruteStrengthModifierWarning_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBruteStrengthModifierWarning_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBruteStrengthModifierWarning_C::OnFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.OnFade");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.ExecuteUbergraph_BruteStrengthModifierWarning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBruteStrengthModifierWarning_C::ExecuteUbergraph_BruteStrengthModifierWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BruteStrengthModifierWarning.BruteStrengthModifierWarning_C.ExecuteUbergraph_BruteStrengthModifierWarning");

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
