// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsBinding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Gamepad_Key                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FKey                    Combo_Key                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Dirtied                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsBinding_C::Set_Desired_Gamepad_Combo(const struct FKey& Gamepad_Key, const struct FKey& Combo_Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo");

	struct
	{
		struct FKey                    Gamepad_Key;
		struct FKey                    Combo_Key;
		bool                           Dirtied;
	} params;

	params.Gamepad_Key = Gamepad_Key;
	params.Combo_Key = Combo_Key;

	UObject::ProcessEvent(fn, &params);

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// EKSInputActionType             Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::Get_Dirty_Combo_Key(struct FKey* Key, EKSInputActionType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key");

	struct
	{
		struct FKey                    Key;
		EKSInputActionType             Type;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> Input_State                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> Input_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> Input_State;
	} params;

	params.Input_State = Input_State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsBinding_C::CanGamepadNavigate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsInfo_Binding* Binding_Settings_Info          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::DisableUnbindableKeybinds(class UKSSettingsInfo_Binding* Binding_Settings_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds");

	struct
	{
		class UKSSettingsInfo_Binding* Binding_Settings_Info;
	} params;

	params.Binding_Settings_Info = Binding_Settings_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsBinding_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Dirtied                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsBinding_C::Set_Desired_Gamepad_Key(const struct FKey& Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key");

	struct
	{
		struct FKey                    Key;
		bool                           Dirtied;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Dirtied                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsBinding_C::Set_Desired_Secondary_Key(const struct FKey& Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key");

	struct
	{
		struct FKey                    Key;
		bool                           Dirtied;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Dirtied                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsBinding_C::Set_Desired_Primary_Key(const struct FKey& Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key");

	struct
	{
		struct FKey                    Key;
		bool                           Dirtied;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// EKSInputActionType             Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::Get_Dirty_Gamepad_Key(struct FKey* Key, EKSInputActionType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key");

	struct
	{
		struct FKey                    Key;
		EKSInputActionType             Type;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// EKSInputActionType             Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::Get_Dirty_Secondary_Key(struct FKey* Key, EKSInputActionType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key");

	struct
	{
		struct FKey                    Key;
		EKSInputActionType             Type;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// EKSInputActionType             Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::Get_Dirty_Primary_Key(struct FKey* Key, EKSInputActionType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key");

	struct
	{
		struct FKey                    Key;
		EKSInputActionType             Type;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeysForBindingDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeyForGamepadBindingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeyForSecondaryBindingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeyForPrimaryBindingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Selected_Key                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             Selected_Key;
	} params;

	params.Selected_Key = Selected_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Selected_Key                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             Selected_Key;
	} params;

	params.Selected_Key = Selected_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Selected_Key                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             Selected_Key;
	} params;

	params.Selected_Key = Selected_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::StopCapturingCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::StartCapturingCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Combo_Key                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::Combo_Succeed(const struct FInputChord& Combo_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed");

	struct
	{
		struct FInputChord             Combo_Key;
	} params;

	params.Combo_Key = Combo_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsBinding_C::Combo_Failed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bGamepadAttached               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bMouseAttached                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsBinding_C::OnInputAttached(bool bGamepadAttached, bool bMouseAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached");

	struct
	{
		bool                           bGamepadAttached;
		bool                           bMouseAttached;
	} params;

	params.bGamepadAttached = bGamepadAttached;
	params.bMouseAttached = bMouseAttached;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnSettingsInfoValueChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bChangedExternally             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsBinding_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnSettingsInfoValueChanged");

	struct
	{
		bool                           bChangedExternally;
	} params;

	params.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsBinding_C::ExecuteUbergraph_WBP_SettingsBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding");

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
