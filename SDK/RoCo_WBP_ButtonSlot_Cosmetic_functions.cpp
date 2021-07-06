// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ButtonSlot_Cosmetic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_Cosmetic_C::SetIsLocked(bool IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsLocked");

	struct
	{
		bool                           IsLocked;
	} params;

	params.IsLocked = IsLocked;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ReverseHoverNoZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::ReverseHoverNoZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ReverseHoverNoZoom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PlayHoverNoZoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::PlayHoverNoZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PlayHoverNoZoom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::RestoreDefaultColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            New_Base_Color                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            New_Highlight_Color            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ButtonSlot_Cosmetic_C::OverrideColor(const struct FLinearColor& New_Base_Color, const struct FLinearColor& New_Highlight_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor");

	struct
	{
		struct FLinearColor            New_Base_Color;
		struct FLinearColor            New_Highlight_Color;
	} params;

	params.New_Base_Color = New_Base_Color;
	params.New_Highlight_Color = New_Highlight_Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Set Tint
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            HighlightColor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ButtonSlot_Cosmetic_C::Set_Tint(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Set Tint");

	struct
	{
		struct FLinearColor            BaseColor;
		struct FLinearColor            HighlightColor;
	} params;

	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_Cosmetic_C::OnHoveredLogic(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ButtonSlot_Cosmetic_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldDisable                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_Cosmetic_C::DisableButton(bool bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton");

	struct
	{
		bool                           bShouldDisable;
	} params;

	params.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_Cosmetic_C::SetIsActiveState(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState");

	struct
	{
		bool                           bIsActive;
	} params;

	params.bIsActive = bIsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_Cosmetic_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ButtonSlot_Cosmetic_C::ExecuteUbergraph_WBP_ButtonSlot_Cosmetic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_Cosmetic_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_Cosmetic_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
