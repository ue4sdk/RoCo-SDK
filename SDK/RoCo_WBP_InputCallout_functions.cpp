// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InputCallout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputCallout.WBP_InputCallout_C.PropogateDefaultSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputCallout_C::PropogateDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.PropogateDefaultSettings"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSettingsDataFactory*  KSSettingsDataFactory          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPGAME_INPUT_STATE> InputType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKey                    PrimaryButton                  (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// struct FKey                    SecondaryButton                (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::GetActionKeys(class UKSSettingsDataFactory* KSSettingsDataFactory, const struct FName& Name, TEnumAsByte<EPGAME_INPUT_STATE> InputType, struct FKey* PrimaryButton, struct FKey* SecondaryButton)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys"));

	struct
	{
		class UKSSettingsDataFactory*  KSSettingsDataFactory;
		struct FName                   Name;
		TEnumAsByte<EPGAME_INPUT_STATE> InputType;
		struct FKey                    PrimaryButton;
		struct FKey                    SecondaryButton;
	} params;

	params.KSSettingsDataFactory = KSSettingsDataFactory;
	params.Name = Name;
	params.InputType = InputType;

	UObject::ProcessEvent(fn, &params);

	if (PrimaryButton != nullptr)
		*PrimaryButton = params.PrimaryButton;
	if (SecondaryButton != nullptr)
		*SecondaryButton = params.SecondaryButton;
}


// Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputCallout_C::UpdateComboIndicator()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputCallout_C::IsValidActionNameForCurrentInput(const struct FName& Name, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput"));

	struct
	{
		struct FName                   Name;
		bool                           Valid;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputCallout_C::ResetHoldProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HoldProgress                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::SetHoldProgress(float HoldProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress"));

	struct
	{
		float                          HoldProgress;
	} params;

	params.HoldProgress = HoldProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::SetSecondaryKey(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey"));

	struct
	{
		struct FKey                    Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::SetPrimaryKey(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey"));

	struct
	{
		struct FKey                    Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   KeyBindName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::OnKeyBindSettingChanged(const struct FName& KeyBindName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged"));

	struct
	{
		struct FName                   KeyBindName;
	} params;

	params.KeyBindName = KeyBindName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.ModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.ModeChange"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetActionName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   KeyBoardAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   GamepadAction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   MobileAction                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::SetActionName(const struct FName& KeyBoardAction, const struct FName& GamepadAction, const struct FName& MobileAction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.SetActionName"));

	struct
	{
		struct FName                   KeyBoardAction;
		struct FName                   GamepadAction;
		struct FName                   MobileAction;
	} params;

	params.KeyBoardAction = KeyBoardAction;
	params.GamepadAction = GamepadAction;
	params.MobileAction = MobileAction;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::RemoveActionName(const struct FName& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName"));

	struct
	{
		struct FName                   Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputCallout_C::ClearAllActionName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputCallout_C::ExecuteUbergraph_WBP_InputCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout"));

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
