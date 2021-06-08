// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_InterstitialScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.TryToBindSelectionState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_InterstitialScreen_C::TryToBindSelectionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.TryToBindSelectionState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.GetSelectionStatusHelper
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESelectionActivityState        ExpectedState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           TeamActive                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           PlayerActive                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_InterstitialScreen_C::GetSelectionStatusHelper(ESelectionActivityState ExpectedState, bool* TeamActive, bool* PlayerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.GetSelectionStatusHelper");

	struct
	{
		ESelectionActivityState        ExpectedState;
		bool                           TeamActive;
		bool                           PlayerActive;
	} params;

	params.ExpectedState = ExpectedState;

	UObject::ProcessEvent(fn, &params);

	if (TeamActive != nullptr)
		*TeamActive = params.TeamActive;
	if (PlayerActive != nullptr)
		*PlayerActive = params.PlayerActive;
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ChooseDraftingText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_InterstitialScreen_C::ChooseDraftingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ChooseDraftingText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ChooseBanningText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_InterstitialScreen_C::ChooseBanningText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ChooseBanningText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.IsSomeoneBanning
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelect_InterstitialScreen_C::IsSomeoneBanning()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.IsSomeoneBanning");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_InterstitialScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.HandlePhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentPhaseName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_InterstitialScreen_C::HandlePhaseChanged(const struct FName& CurrentPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.HandlePhaseChanged");

	struct
	{
		struct FName                   CurrentPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.CurrentPhaseName = CurrentPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.HandleIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_InterstitialScreen_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.HandleIntroFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.IntroInterstitial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_InterstitialScreen_C::IntroInterstitial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.IntroInterstitial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ActivityStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionComponent* JobSelectionComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_InterstitialScreen_C::ActivityStatusChanged(class UKSJobSelectionComponent* JobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ActivityStatusChanged");

	struct
	{
		class UKSJobSelectionComponent* JobSelectionComponent;
	} params;

	params.JobSelectionComponent = JobSelectionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.EnemyActivittyStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionComponent* JobSelectionComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_InterstitialScreen_C::EnemyActivittyStatusChanged(class UKSJobSelectionComponent* JobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.EnemyActivittyStatusChanged");

	struct
	{
		class UKSJobSelectionComponent* JobSelectionComponent;
	} params;

	params.JobSelectionComponent = JobSelectionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.OwningTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_InterstitialScreen_C::OwningTeamChanged(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.OwningTeamChanged");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ExecuteUbergraph_WBP_InGameJobSelect_InterstitialScreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_InterstitialScreen_C::ExecuteUbergraph_WBP_InGameJobSelect_InterstitialScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_InterstitialScreen.WBP_InGameJobSelect_InterstitialScreen_C.ExecuteUbergraph_WBP_InGameJobSelect_InterstitialScreen");

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
