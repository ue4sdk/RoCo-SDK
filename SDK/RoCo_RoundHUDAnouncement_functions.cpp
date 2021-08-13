// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RoundHUDAnouncement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RoundHUDAnouncement.RoundHUDAnouncement_C.TryTriggerRoundEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URoundHUDAnouncement_C::TryTriggerRoundEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.TryTriggerRoundEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.BindRoundEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URoundHUDAnouncement_C::BindRoundEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.BindRoundEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.GetTeamsFlippedMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_Parm, CPF_OutParm)

void URoundHUDAnouncement_C::GetTeamsFlippedMessage(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.GetTeamsFlippedMessage");

	struct
	{
		struct FText                   Message;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Message != nullptr)
		*Message = params.Message;
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.Round Over
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            Game_State                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            Round_Results                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void URoundHUDAnouncement_C::Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.Round Over");

	struct
	{
		class AKSGameState*            Game_State;
		struct FRoundResult            Round_Results;
	} params;

	params.Game_State = Game_State;
	params.Round_Results = Round_Results;

	UObject::ProcessEvent(fn, &params);
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.TeamSidesFlipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URoundHUDAnouncement_C::TeamSidesFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.TeamSidesFlipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.End Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Winning_Team_Number            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URoundHUDAnouncement_C::End_Match(int Winning_Team_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.End Match");

	struct
	{
		int                            Winning_Team_Number;
	} params;

	params.Winning_Team_Number = Winning_Team_Number;

	UObject::ProcessEvent(fn, &params);
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URoundHUDAnouncement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RoundHUDAnouncement.RoundHUDAnouncement_C.ExecuteUbergraph_RoundHUDAnouncement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URoundHUDAnouncement_C::ExecuteUbergraph_RoundHUDAnouncement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoundHUDAnouncement.RoundHUDAnouncement_C.ExecuteUbergraph_RoundHUDAnouncement");

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
