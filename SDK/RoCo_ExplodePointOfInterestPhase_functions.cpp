// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplodePointOfInterestPhase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveSpawned
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveSpawned(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveSpawned");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveDropped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveDropped(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveDropped");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.Handle Pending Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> Game_Objective                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UExplodePointOfInterestPhase_C::Handle_Pending_Reset(const TScriptInterface<class UKSObjective>& Game_Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.Handle Pending Reset");

	struct
	{
		TScriptInterface<class UKSObjective> Game_Objective;
	} params;

	params.Game_Objective = Game_Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveHeld
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveHeld(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveHeld");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.Reenable Points Of Interest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExplodePointOfInterestPhase_C::Reenable_Points_Of_Interest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.Reenable Points Of Interest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveArming
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveArming(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveArming");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveArmed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveArmed(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveArmed");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveExploded
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveExploded(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveExploded");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveDisarmed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExplodePointOfInterestPhase_C::OnObjectiveDisarmed(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnObjectiveDisarmed");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.Handle Pending Explode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UExplodePointOfInterestPhase_C::Handle_Pending_Explode(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.Handle Pending Explode");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnTeamEliminated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodePointOfInterestPhase_C::OnTeamEliminated(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnTeamEliminated");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.DeclareTeamWinner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EExtractionTeamType            Filter                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodePointOfInterestPhase_C::DeclareTeamWinner(EExtractionTeamType Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.DeclareTeamWinner");

	struct
	{
		EExtractionTeamType            Filter;
	} params;

	params.Filter = Filter;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.HandleOvertimeResult
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UExplodePointOfInterestPhase_C::HandleOvertimeResult(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.HandleOvertimeResult");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.PhaseTimerExpired
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodePointOfInterestPhase_C::PhaseTimerExpired(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.PhaseTimerExpired");

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.HandlePhaseStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExplodePointOfInterestPhase_C::HandlePhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.HandlePhaseStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnPhaseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodePointOfInterestPhase_C::OnPhaseComplete(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.OnPhaseComplete");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.ExecuteUbergraph_ExplodePointOfInterestPhase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplodePointOfInterestPhase_C::ExecuteUbergraph_ExplodePointOfInterestPhase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C.ExecuteUbergraph_ExplodePointOfInterestPhase");

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
