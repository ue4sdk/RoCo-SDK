// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KOTHKSHUDAnnouncementComoponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.GetTicketCountsToMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSTeamState*            ForTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TMap<int, struct FText>        NewParam                       (CPF_Parm, CPF_OutParm)

void UKOTHKSHUDAnnouncementComoponent_C::GetTicketCountsToMessage(class AKSTeamState* ForTeam, TMap<int, struct FText>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.GetTicketCountsToMessage");

	struct
	{
		class AKSTeamState*            ForTeam;
		TMap<int, struct FText>        NewParam;
	} params;

	params.ForTeam = ForTeam;

	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnTeamRevivesChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::OnTeamRevivesChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnTeamRevivesChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnTeamAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            AddedTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::OnTeamAdded(class AKSTeamState* AddedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnTeamAdded");

	struct
	{
		class AKSTeamState*            AddedTeam;
	} params;

	params.AddedTeam = AddedTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.BindTeamEvents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHKSHUDAnnouncementComoponent_C::BindTeamEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.BindTeamEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.GetTeamsFlippedMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutMessage                     (CPF_Parm, CPF_OutParm)

void UKOTHKSHUDAnnouncementComoponent_C::GetTeamsFlippedMessage(struct FText* OutMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.GetTeamsFlippedMessage");

	struct
	{
		struct FText                   OutMessage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutMessage != nullptr)
		*OutMessage = params.OutMessage;
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Try To Trigger Current Rounds State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHKSHUDAnnouncementComoponent_C::Try_To_Trigger_Current_Rounds_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Try To Trigger Current Rounds State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Update Unlock Announcements
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHKSHUDAnnouncementComoponent_C::Update_Unlock_Announcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Update Unlock Announcements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ObjectiveTaken
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::ObjectiveTaken(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ObjectiveTaken");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ObjectiveStartCapture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::ObjectiveStartCapture(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ObjectiveStartCapture");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ObjectiveUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHKSHUDAnnouncementComoponent_C::ObjectiveUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ObjectiveUnlocked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnObjectiveUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::OnObjectiveUpdate(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnObjectiveUpdate");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Round Over
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            Game_State                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            Round_Results                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UKOTHKSHUDAnnouncementComoponent_C::Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Round Over");

	struct
	{
		class AKSGameState*            Game_State;
		struct FRoundResult            Round_Results;
	} params;

	params.Game_State = Game_State;
	params.Round_Results = Round_Results;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Round Setup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UKOTHKSHUDAnnouncementComoponent_C::Round_Setup(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Round Setup");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Round Start
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UKOTHKSHUDAnnouncementComoponent_C::Round_Start(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.Round Start");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.TeamSidesFlipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHKSHUDAnnouncementComoponent_C::TeamSidesFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.TeamSidesFlipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnPhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UKOTHKSHUDAnnouncementComoponent_C::OnPhaseChanged(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.OnPhaseChanged");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKOTHKSHUDAnnouncementComoponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.End Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winning_Team_Number            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::End_Match(int Winning_Team_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.End Match");

	struct
	{
		int                            Winning_Team_Number;
	} params;

	params.Winning_Team_Number = Winning_Team_Number;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ExecuteUbergraph_KOTHKSHUDAnnouncementComoponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHKSHUDAnnouncementComoponent_C::ExecuteUbergraph_KOTHKSHUDAnnouncementComoponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C.ExecuteUbergraph_KOTHKSHUDAnnouncementComoponent");

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
