// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SurrenderPoll_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AKSPlayerState*          Player                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool USurrenderPoll_C::CanPlayerProposeThisPoll(class AKSPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll");

	struct
	{
		class AKSPlayerState*          Player;
		bool                           ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollPassed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USurrenderPoll_C::OnPollPassed(class AKSGameState* GameState, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollPassed");

	struct
	{
		class AKSGameState*            GameState;
		int                            TeamNum;
	} params;

	params.GameState = GameState;
	params.TeamNum = TeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollFailed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USurrenderPoll_C::OnPollFailed(class AKSGameState* GameState, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollFailed");

	struct
	{
		class AKSGameState*            GameState;
		int                            TeamNum;
	} params;

	params.GameState = GameState;
	params.TeamNum = TeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TeamNum                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USurrenderPoll_C::OnPollStarted(class AKSGameState* GameState, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollStarted");

	struct
	{
		class AKSGameState*            GameState;
		int                            TeamNum;
	} params;

	params.GameState = GameState;
	params.TeamNum = TeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USurrenderPoll_C::ExecuteUbergraph_SurrenderPoll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll");

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
