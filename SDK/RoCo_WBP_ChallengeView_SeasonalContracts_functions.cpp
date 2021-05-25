// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeView_SeasonalContracts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshSequenceWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_SeasonalContracts_C::RefreshSequenceWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshSequenceWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.GetWeeklySequenceWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_ChallengeEntry_Seasonal_C*> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_SeasonalContracts_C::GetWeeklySequenceWidgets(TArray<class UWBP_ChallengeEntry_Seasonal_C*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.GetWeeklySequenceWidgets");

	struct
	{
		TArray<class UWBP_ChallengeEntry_Seasonal_C*> Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshTimeRemaining
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_SeasonalContracts_C::RefreshTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshTimeRemaining");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_SeasonalContracts_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeView_SeasonalContracts_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnChallengesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_SeasonalContracts_C::OnChallengesUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnChallengesUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeView_SeasonalContracts_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.Handle On Week Gamepad Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ChallengeEntry_Seasonal_C* Hovered_Widget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_SeasonalContracts_C::Handle_On_Week_Gamepad_Hovered(class UWBP_ChallengeEntry_Seasonal_C* Hovered_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.Handle On Week Gamepad Hovered");

	struct
	{
		class UWBP_ChallengeEntry_Seasonal_C* Hovered_Widget;
	} params;

	params.Hovered_Widget = Hovered_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_SeasonalContracts_C::ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts");

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
