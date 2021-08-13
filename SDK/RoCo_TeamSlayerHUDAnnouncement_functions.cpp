// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TeamSlayerHUDAnnouncement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleIntraScoreChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::HandleIntraScoreChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleIntraScoreChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.UpdateTimeLimitMilestones
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSlayerHUDAnnouncement_C::UpdateTimeLimitMilestones()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.UpdateTimeLimitMilestones");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.Versus Countdown Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSlayerHUDAnnouncement_C::Versus_Countdown_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.Versus Countdown Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.IsLastAlive
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsLastAlive                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTeamSlayerHUDAnnouncement_C::IsLastAlive(class AKSPlayerState* KSPlayerState, bool* IsLastAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.IsLastAlive");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
		bool                           IsLastAlive;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);

	if (IsLastAlive != nullptr)
		*IsLastAlive = params.IsLastAlive;
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleTeamMemberEliminated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::HandleTeamMemberEliminated(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleTeamMemberEliminated");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.Check if Player Is Next to Respawn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            KSTeamState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::Check_if_Player_Is_Next_to_Respawn(class AKSTeamState* KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.Check if Player Is Next to Respawn");

	struct
	{
		class AKSTeamState*            KSTeamState;
	} params;

	params.KSTeamState = KSTeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleTeamStateReady
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::HandleTeamStateReady(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleTeamStateReady");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleMatchPhaseChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UTeamSlayerHUDAnnouncement_C::HandleMatchPhaseChanged(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.HandleMatchPhaseChanged");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamSlayerHUDAnnouncement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.IncomingRespawnQueueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::IncomingRespawnQueueChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.IncomingRespawnQueueChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.ExecuteUbergraph_TeamSlayerHUDAnnouncement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSlayerHUDAnnouncement_C::ExecuteUbergraph_TeamSlayerHUDAnnouncement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C.ExecuteUbergraph_TeamSlayerHUDAnnouncement");

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
