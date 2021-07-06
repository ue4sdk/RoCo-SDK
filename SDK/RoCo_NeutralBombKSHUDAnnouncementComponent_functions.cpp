// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NeutralBombKSHUDAnnouncementComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveReset
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectiveReset(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveReset");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveDisarmed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectiveDisarmed(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveDisarmed");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveHeld
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectiveHeld(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveHeld");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveDropped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectiveDropped(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveDropped");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveArmed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectiveArmed(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveArmed");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectivePickedup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectivePickedup(const TScriptInterface<class UKSObjective>& Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectivePickedup");

	struct
	{
		TScriptInterface<class UKSObjective> Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.CheckForDemoPlant
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DemolitionPlanted              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNeutralBombKSHUDAnnouncementComponent_C::CheckForDemoPlant(bool* DemolitionPlanted)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.CheckForDemoPlant");

	struct
	{
		bool                           DemolitionPlanted;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DemolitionPlanted != nullptr)
		*DemolitionPlanted = params.DemolitionPlanted;
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.SendTicketWarning
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TicketCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::SendTicketWarning(int TicketCount, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.SendTicketWarning");

	struct
	{
		int                            TicketCount;
		int                            TeamNum;
	} params;

	params.TicketCount = TicketCount;
	params.TeamNum = TeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.SendLastStand
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::SendLastStand(int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.SendLastStand");

	struct
	{
		int                            TeamNum;
	} params;

	params.TeamNum = TeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.GetTeamsFlippedMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutMessage                     (CPF_Parm, CPF_OutParm)

void UNeutralBombKSHUDAnnouncementComponent_C::GetTeamsFlippedMessage(struct FText* OutMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.GetTeamsFlippedMessage");

	struct
	{
		struct FText                   OutMessage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutMessage != nullptr)
		*OutMessage = params.OutMessage;
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Try To Trigger Current Rounds State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::Try_To_Trigger_Current_Rounds_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Try To Trigger Current Rounds State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Versus Countdown Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::Versus_Countdown_Update(class AKSPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Versus Countdown Update");

	struct
	{
		class AKSPlayerState*          Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Update Round Announcements
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::Update_Round_Announcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Update Round Announcements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Attacking Team Eliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::Attacking_Team_Eliminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Attacking Team Eliminated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     Bomb_State                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombStateChanged(const struct FKSNeutralBombState& Bomb_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombStateChanged");

	struct
	{
		struct FKSNeutralBombState     Bomb_State;
	} params;

	params.Bomb_State = Bomb_State;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombPlanted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombPlanted()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombPlanted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombReset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombSpawned");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombDropped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombDropped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          BombHolderState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BombHolderTeamNum              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombPickedUp(class AKSPlayerState* BombHolderState, int BombHolderTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombPickedUp");

	struct
	{
		class AKSPlayerState*          BombHolderState;
		int                            BombHolderTeamNum;
	} params;

	params.BombHolderState = BombHolderState;
	params.BombHolderTeamNum = BombHolderTeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombDisarmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombDisarmed(int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombDisarmed");

	struct
	{
		int                            TeamNum;
	} params;

	params.TeamNum = TeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombArming
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombArming()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombArming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombDisarming
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::OnBombDisarming()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnBombDisarming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Round Over
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            Game_State                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            Round_Results                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UNeutralBombKSHUDAnnouncementComponent_C::Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Round Over");

	struct
	{
		class AKSGameState*            Game_State;
		struct FRoundResult            Round_Results;
	} params;

	params.Game_State = Game_State;
	params.Round_Results = Round_Results;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Round Setup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UNeutralBombKSHUDAnnouncementComponent_C::Round_Setup(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Round Setup");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Round Start
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UNeutralBombKSHUDAnnouncementComponent_C::Round_Start(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.Round Start");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.TeamSidesFlipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::TeamSidesFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.TeamSidesFlipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.On Phase Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::On_Phase_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.On Phase Change");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNeutralBombKSHUDAnnouncementComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.End Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winning_Team_Number            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::End_Match(int Winning_Team_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.End Match");

	struct
	{
		int                            Winning_Team_Number;
	} params;

	params.Winning_Team_Number = Winning_Team_Number;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnTicketCountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::OnTicketCountChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnTicketCountChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveSpawned
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UNeutralBombKSHUDAnnouncementComponent_C::OnObjectiveSpawned(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.OnObjectiveSpawned");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ExecuteUbergraph_NeutralBombKSHUDAnnouncementComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNeutralBombKSHUDAnnouncementComponent_C::ExecuteUbergraph_NeutralBombKSHUDAnnouncementComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C.ExecuteUbergraph_NeutralBombKSHUDAnnouncementComponent");

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
