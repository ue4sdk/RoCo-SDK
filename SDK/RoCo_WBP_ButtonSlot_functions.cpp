// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ButtonSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnHoveredLogic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_C::OnHoveredLogic(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnHoveredLogic");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ButtonSlot_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnGamepadConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::OnGamepadConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnGamepadConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.DisableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldDisable                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_C::DisableButton(bool bShouldDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.DisableButton");

	struct
	{
		bool                           bShouldDisable;
	} params;

	params.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.CallButtonHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::CallButtonHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.CallButtonHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.CallButtonUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::CallButtonUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.CallButtonUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.SetIsActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_C::SetIsActiveState(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.SetIsActiveState");

	struct
	{
		bool                           bIsActive;
	} params;

	params.bIsActive = bIsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.ExecuteUbergraph_WBP_ButtonSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ButtonSlot_C::ExecuteUbergraph_WBP_ButtonSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.ExecuteUbergraph_WBP_ButtonSlot");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ButtonSlot_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ButtonSlot_C::OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
