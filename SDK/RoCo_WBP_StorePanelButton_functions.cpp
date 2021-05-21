// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StorePanelButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StorePanelButton.WBP_StorePanelButton_C.SetTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StorePanelButton_C::SetTint(const struct FLinearColor& BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.SetTint");

	struct
	{
		struct FLinearColor            BaseColor;
	} params;

	params.BaseColor = BaseColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoveredLogic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StorePanelButton_C::OnHoveredLogic(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoveredLogic");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_StorePanelButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnGamepadConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnGamepadConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.DisableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldDisable                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StorePanelButton_C::DisableButton(bool bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.DisableButton");

	struct
	{
		bool                           bShouldDisable;
	} params;

	params.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StorePanelButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.ExecuteUbergraph_WBP_StorePanelButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StorePanelButton_C::ExecuteUbergraph_WBP_StorePanelButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.ExecuteUbergraph_WBP_StorePanelButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StorePanelButton_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StorePanelButton_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
