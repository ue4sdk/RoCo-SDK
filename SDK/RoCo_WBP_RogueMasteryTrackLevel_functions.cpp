// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryTrackLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.HideEdgeNavCallouts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TierNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackLevel_C::HideEdgeNavCallouts(int TierNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.HideEdgeNavCallouts");

	struct
	{
		int                            TierNumber;
	} params;

	params.TierNumber = TierNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.SetSelected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMasteryTrackLevel_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.SetSelected");

	struct
	{
		bool                           Selected;
	} params;

	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.UpdateGamepadPromptState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::UpdateGamepadPromptState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.UpdateGamepadPromptState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackLevel_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Set Tier Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            CurrentTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackLevel_C::Set_Tier_Data(const struct FActivityTier& ActivityTier, int CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Set Tier Data");

	struct
	{
		struct FActivityTier           ActivityTier;
		int                            CurrentTier;
	} params;

	params.ActivityTier = ActivityTier;
	params.CurrentTier = CurrentTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackLevel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackLevel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.ExecuteUbergraph_WBP_RogueMasteryTrackLevel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackLevel_C::ExecuteUbergraph_WBP_RogueMasteryTrackLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.ExecuteUbergraph_WBP_RogueMasteryTrackLevel");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           Activity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RogueMasteryTrackLevel_C::OnTrackLevelSelected__DelegateSignature(const struct FActivityTier& Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature");

	struct
	{
		struct FActivityTier           Activity;
	} params;

	params.Activity = Activity;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
