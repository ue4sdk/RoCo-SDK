// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassLobbyDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.IsPanelSelectable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsSelectable                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BattlePassLobbyDisplay_C::IsPanelSelectable(bool* IsSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.IsPanelSelectable");

	struct
	{
		bool                           IsSelectable;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsSelectable != nullptr)
		*IsSelectable = params.IsSelectable;
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.NavigateConfirmPressed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BattlePassLobbyDisplay_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.NavigateConfirmPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Set Progress Fill Colors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPremium                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsFinished                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BattlePassLobbyDisplay_C::Set_Progress_Fill_Colors(bool IsPremium, bool IsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Set Progress Fill Colors");

	struct
	{
		bool                           IsPremium;
		bool                           IsFinished;
	} params;

	params.IsPremium = IsPremium;
	params.IsFinished = IsFinished;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Update Progress Bar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentTierXP                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NextTierXP                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLobbyDisplay_C::Update_Progress_Bar(int CurrentTierXP, int NextTierXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Update Progress Bar");

	struct
	{
		int                            CurrentTierXP;
		int                            NextTierXP;
	} params;

	params.CurrentTierXP = CurrentTierXP;
	params.NextTierXP = NextTierXP;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.DisplayActivity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::DisplayActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.DisplayActivity");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLobbyDisplay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.OnBattlePassActivityProgressInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     Activity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLobbyDisplay_C::OnBattlePassActivityProgressInitialized(class UKSActivityInstance* Activity, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.OnBattlePassActivityProgressInitialized");

	struct
	{
		class UKSActivityInstance*     Activity;
		int                            Count;
	} params;

	params.Activity = Activity;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassLobbyDisplay_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.ExecuteUbergraph_WBP_BattlePassLobbyDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLobbyDisplay_C::ExecuteUbergraph_WBP_BattlePassLobbyDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.ExecuteUbergraph_WBP_BattlePassLobbyDisplay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
