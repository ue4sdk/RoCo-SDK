// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StandardButtonInner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FName                   Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowPromptOnFocus              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StandardButtonInner_C::SetDefaultValues(float Height, float Width, const struct FText& ButtonText, const struct FName& Action, bool ShowPromptOnFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues");

	struct
	{
		float                          Height;
		float                          Width;
		struct FText                   ButtonText;
		struct FName                   Action;
		bool                           ShowPromptOnFocus;
	} params;

	params.Height = Height;
	params.Width = Width;
	params.ButtonText = ButtonText;
	params.Action = Action;
	params.ShowPromptOnFocus = ShowPromptOnFocus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InHeight                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetHeight(float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight");

	struct
	{
		float                          InHeight;
	} params;

	params.InHeight = InHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasGamepadAction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StandardButtonInner_C::HasGamepadAction(bool* HasGamepadAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction");

	struct
	{
		bool                           HasGamepadAction;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasGamepadAction != nullptr)
		*HasGamepadAction = params.HasGamepadAction;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetGamepadPromptForAction(const struct FName& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction");

	struct
	{
		struct FName                   Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::SetDefaultDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWidth                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetWidth(float InWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth");

	struct
	{
		float                          InWidth;
	} params;

	params.InWidth = InWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_StandardButtonInner_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText");

	struct
	{
		struct FText                   ButtonText;
	} params;

	params.ButtonText = ButtonText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_StandardButtonInner_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StandardButtonInner_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonInner_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::ExecuteUbergraph_WBP_StandardButtonInner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature");

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
