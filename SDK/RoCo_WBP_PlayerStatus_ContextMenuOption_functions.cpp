// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerStatus_ContextMenuOption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerStatus_ContextMenuOption_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.IsActiveForNavigation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerStatus_ContextMenuOption_C::IsActiveForNavigation(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.IsActiveForNavigation");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Update Callout Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::Update_Callout_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Update Callout Visibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::SocialPlayerContextMenuOptionClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::SocialPlayerContextMenuOptionHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerStatus_ContextMenuOption_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SetActiveInMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerStatus_ContextMenuOption_C::SetActiveInMenu(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SetActiveInMenu");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenuOption_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenuOption_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerStatus_ContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerStatus_ContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenuOption_C::ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.OnContextOptionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerStatusOption> Context_Option                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenuOption_C::OnContextOptionSelected__DelegateSignature(TEnumAsByte<EPlayerStatusOption> Context_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.OnContextOptionSelected__DelegateSignature");

	struct
	{
		TEnumAsByte<EPlayerStatusOption> Context_Option;
	} params;

	params.Context_Option = Context_Option;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
