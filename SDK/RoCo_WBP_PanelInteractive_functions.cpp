// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PanelInteractive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnHoveredLogic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelInteractive_C::OnHoveredLogic(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnHoveredLogic");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.SetContentPadding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMargin                 ContentPadding                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelInteractive_C::SetContentPadding(const struct FMargin& ContentPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.SetContentPadding");

	struct
	{
		struct FMargin                 ContentPadding;
	} params;

	params.ContentPadding = ContentPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.SetPanelColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PanelColor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PanelInteractive_C::SetPanelColor(const struct FLinearColor& PanelColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.SetPanelColor");

	struct
	{
		struct FLinearColor            PanelColor;
	} params;

	params.PanelColor = PanelColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelInteractive_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnGamepadConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnGamepadConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.CustomEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.DisableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldDisable                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelInteractive_C::DisableButton(bool bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.DisableButton");

	struct
	{
		bool                           bShouldDisable;
	} params;

	params.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.CallButtonHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.CallButtonHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.CallButtonUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.CallButtonUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.ExecuteUbergraph_WBP_PanelInteractive
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PanelInteractive_C::ExecuteUbergraph_WBP_PanelInteractive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.ExecuteUbergraph_WBP_PanelInteractive");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelInteractive_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PanelInteractive_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
