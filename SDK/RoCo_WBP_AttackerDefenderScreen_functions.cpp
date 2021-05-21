// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AttackerDefenderScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandleShowAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::HandleShowAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandleShowAnimationFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ShowScreenAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::ShowScreenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ShowScreenAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandleTeamAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AttackerDefenderScreen_C::HandleTeamAdded(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandleTeamAdded");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetTeamRole
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::SetTeamRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetTeamRole");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandleAttackingTeamUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AttackerDefenderScreen_C::HandleAttackingTeamUpdated(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandleAttackingTeamUpdated");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetRounds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::SetRounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetRounds");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ResetPreRoundScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::ResetPreRoundScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ResetPreRoundScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.Get Pre Round Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   PreRoundText                   (CPF_Parm, CPF_OutParm)

void UWBP_AttackerDefenderScreen_C::Get_Pre_Round_Text(struct FText* PreRoundText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.Get Pre Round Text");

	struct
	{
		struct FText                   PreRoundText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PreRoundText != nullptr)
		*PreRoundText = params.PreRoundText;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.IsAttackerRole
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAttacker                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AttackerDefenderScreen_C::IsAttackerRole(bool* IsAttacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.IsAttackerRole");

	struct
	{
		bool                           IsAttacker;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsAttacker != nullptr)
		*IsAttacker = params.IsAttacker;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandlePhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AttackerDefenderScreen_C::HandlePhaseChanged(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandlePhaseChanged");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.PreRoundAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::PreRoundAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.PreRoundAnimComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AttackerDefenderScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ExecuteUbergraph_WBP_AttackerDefenderScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AttackerDefenderScreen_C::ExecuteUbergraph_WBP_AttackerDefenderScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ExecuteUbergraph_WBP_AttackerDefenderScreen");

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
