// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ButtonStacked_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldDisable                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonStacked_C::SetVisuallyDisabled(bool ShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled");

	struct
	{
		bool                           ShouldDisable;
	} params;

	params.ShouldDisable = ShouldDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::SetInitialDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonStacked_C::OnHoveredLogic(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ButtonStacked_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldDisable                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonStacked_C::DisableButton(bool bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton");

	struct
	{
		bool                           bShouldDisable;
	} params;

	params.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonStacked_C::SetIsActiveState(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState");

	struct
	{
		bool                           bIsActive;
	} params;

	params.bIsActive = bIsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonStacked_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ButtonStacked_C::ExecuteUbergraph_WBP_ButtonStacked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::OnBtnStackedReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::OnBtnStackedUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonStacked_C::OnBtnStackedHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonStacked_C::OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
