// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SeasonalChallengePanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SeasonalChallengePanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Refresh Player Challenges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SeasonalChallengePanel_C::Refresh_Player_Challenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Refresh Player Challenges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Click Action
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SeasonalChallengePanel_C::Click_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Click Action");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.BndEvt__WBP_ChallengeEntry_CardHorizontal_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SeasonalChallengePanel_C::BndEvt__WBP_ChallengeEntry_CardHorizontal_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.BndEvt__WBP_ChallengeEntry_CardHorizontal_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SeasonalChallengePanel_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.ExecuteUbergraph_WBP_SeasonalChallengePanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SeasonalChallengePanel_C::ExecuteUbergraph_WBP_SeasonalChallengePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.ExecuteUbergraph_WBP_SeasonalChallengePanel");

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
