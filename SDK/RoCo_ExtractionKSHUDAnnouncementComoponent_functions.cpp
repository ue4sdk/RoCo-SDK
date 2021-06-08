// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExtractionKSHUDAnnouncementComoponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.GetTeamsFlippedMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutMessage                     (CPF_Parm, CPF_OutParm)

void UExtractionKSHUDAnnouncementComoponent_C::GetTeamsFlippedMessage(struct FText* OutMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.GetTeamsFlippedMessage");

	struct
	{
		struct FText                   OutMessage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutMessage != nullptr)
		*OutMessage = params.OutMessage;
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Try To Trigger Current Rounds State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::Try_To_Trigger_Current_Rounds_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Try To Trigger Current Rounds State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Versus Countdown Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::Versus_Countdown_Update(class AKSPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Versus Countdown Update");

	struct
	{
		class AKSPlayerState*          Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Update Unlock Announcements
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::Update_Unlock_Announcements()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Update Unlock Announcements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Attacking Team Eliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::Attacking_Team_Eliminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Attacking Team Eliminated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Computer Hacked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSExtractionComputer*   Computer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::Computer_Hacked(class AKSExtractionComputer* Computer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Computer Hacked");

	struct
	{
		class AKSExtractionComputer*   Computer;
	} params;

	params.Computer = Computer;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ComputerHackStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSExtractionComputer*   Computer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::ComputerHackStart(class AKSExtractionComputer* Computer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ComputerHackStart");

	struct
	{
		class AKSExtractionComputer*   Computer;
	} params;

	params.Computer = Computer;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ComputersUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::ComputersUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ComputersUnlocked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnTeamMemberEliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::OnTeamMemberEliminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnTeamMemberEliminated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Round Over
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            Game_State                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            Round_Results                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UExtractionKSHUDAnnouncementComoponent_C::Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Round Over");

	struct
	{
		class AKSGameState*            Game_State;
		struct FRoundResult            Round_Results;
	} params;

	params.Game_State = Game_State;
	params.Round_Results = Round_Results;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Round Setup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UExtractionKSHUDAnnouncementComoponent_C::Round_Setup(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Round Setup");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Round Start
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UExtractionKSHUDAnnouncementComoponent_C::Round_Start(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.Round Start");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.TeamSidesFlipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::TeamSidesFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.TeamSidesFlipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.End Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winning_Team_Number            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::End_Match(int Winning_Team_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.End Match");

	struct
	{
		int                            Winning_Team_Number;
	} params;

	params.Winning_Team_Number = Winning_Team_Number;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ExecuteUbergraph_ExtractionKSHUDAnnouncementComoponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::ExecuteUbergraph_ExtractionKSHUDAnnouncementComoponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.ExecuteUbergraph_ExtractionKSHUDAnnouncementComoponent");

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
