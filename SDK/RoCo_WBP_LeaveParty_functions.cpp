// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LeaveParty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_LeaveParty_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> CurrentInputState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LeaveParty_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> CurrentInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> CurrentInputState;
	} params;

	params.CurrentInputState = CurrentInputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::SocialLeavePartyHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::SocialLeavePartyClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LeaveParty_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::HandlePartyUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::CallLeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LeaveParty_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LeaveParty_C::ExecuteUbergraph_WBP_LeaveParty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LeaveParty_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
