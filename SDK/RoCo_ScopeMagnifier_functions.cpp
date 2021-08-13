// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScopeMagnifier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScopeMagnifier.ScopeMagnifier_C.OnPlayerHealthChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        CharacterBase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::OnPlayerHealthChanged(class AKSCharacterBase* CharacterBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.OnPlayerHealthChanged");

	struct
	{
		class AKSCharacterBase*        CharacterBase;
	} params;

	params.CharacterBase = CharacterBase;

	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.OnAimStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSCharacterAimMode            AimState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::OnAimStateChanged(EKSCharacterAimMode AimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.OnAimStateChanged");

	struct
	{
		EKSCharacterAimMode            AimState;
	} params;

	params.AimState = AimState;

	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.DetermineScope
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FOV                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::DetermineScope(float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.DetermineScope");

	struct
	{
		float                          FOV;
	} params;

	params.FOV = FOV;

	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.HandleInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.HandleInputModeChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputMode;
	} params;

	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.SetPromptImage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScopeMagnifier_C::SetPromptImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.SetPromptImage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.Get_PostPromptText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UScopeMagnifier_C::Get_PostPromptText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.Get_PostPromptText_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScopeMagnifier.ScopeMagnifier_C.Get_PrePromptText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UScopeMagnifier_C::Get_PrePromptText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.Get_PrePromptText_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScopeMagnifier.ScopeMagnifier_C.SplitPrompt
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PreText                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 PosText                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::SplitPrompt(struct FString* PreText, struct FString* PosText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.SplitPrompt");

	struct
	{
		struct FString                 PreText;
		struct FString                 PosText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PreText != nullptr)
		*PreText = params.PreText;
	if (PosText != nullptr)
		*PosText = params.PosText;
}


// Function ScopeMagnifier.ScopeMagnifier_C.PostSetWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UScopeMagnifier_C::PostSetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.PostSetWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.PreClearWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UScopeMagnifier_C::PreClearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.PreClearWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScopeMagnifier_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScopeMagnifier.ScopeMagnifier_C.ExecuteUbergraph_ScopeMagnifier
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScopeMagnifier_C::ExecuteUbergraph_ScopeMagnifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.ExecuteUbergraph_ScopeMagnifier");

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
