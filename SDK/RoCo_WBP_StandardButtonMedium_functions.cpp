// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StandardButtonMedium_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasValidKeyPrompt              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKey                    GamepadKey                     (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey");

	struct
	{
		bool                           HasValidKeyPrompt;
		struct FKey                    GamepadKey;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = params.HasValidKeyPrompt;
	if (GamepadKey != nullptr)
		*GamepadKey = params.GamepadKey;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    GamepadButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::SetKeyPrompt(const struct FKey& GamepadButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt");

	struct
	{
		struct FKey                    GamepadButton;
	} params;

	params.GamepadButton = GamepadButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::SetDefaultDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWidth                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::SetWidth(float InWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth");

	struct
	{
		float                          InWidth;
	} params;

	params.InWidth = InWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_StandardButtonMedium_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText");

	struct
	{
		struct FText                   ButtonText;
	} params;

	params.ButtonText = ButtonText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_StandardButtonMedium_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StandardButtonMedium_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonMedium_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::ExecuteUbergraph_WBP_StandardButtonMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
