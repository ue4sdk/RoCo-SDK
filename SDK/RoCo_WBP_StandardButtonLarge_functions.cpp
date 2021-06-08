// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StandardButtonLarge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Disabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StandardButtonLarge_C::SetDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled");

	struct
	{
		bool                           Disabled;
	} params;

	params.Disabled = Disabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   FontName                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::GetFontStyleNameByType(struct FName* FontName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType");

	struct
	{
		struct FName                   FontName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FontName != nullptr)
		*FontName = params.FontName;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InHeight                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetHeight(float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight");

	struct
	{
		float                          InHeight;
	} params;

	params.InHeight = InHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasValidKeyPrompt              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKey                    GamepadKey                     (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey");

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


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Prompt                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::Set_Key_Prompt(const struct FKey& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt");

	struct
	{
		struct FKey                    Prompt;
	} params;

	params.Prompt = Prompt;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetGamepadPromptForAction(const struct FName& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction");

	struct
	{
		struct FName                   Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::SetDefaultDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWidth                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetWidth(float InWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth");

	struct
	{
		float                          InWidth;
	} params;

	params.InWidth = InWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_StandardButtonLarge_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText");

	struct
	{
		struct FText                   ButtonText;
	} params;

	params.ButtonText = ButtonText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_StandardButtonLarge_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StandardButtonLarge_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StandardButtonLarge_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::ExecuteUbergraph_WBP_StandardButtonLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature");

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
