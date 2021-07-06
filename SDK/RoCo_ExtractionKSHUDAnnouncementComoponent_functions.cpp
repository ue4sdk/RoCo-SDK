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

// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnObjectiveArming
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExtractionKSHUDAnnouncementComoponent_C::OnObjectiveArming(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnObjectiveArming");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnObjectiveArmed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UExtractionKSHUDAnnouncementComoponent_C::OnObjectiveArmed(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnObjectiveArmed");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnRoundStart
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UExtractionKSHUDAnnouncementComoponent_C::OnRoundStart(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnRoundStart");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnTeamSidesFlipped
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExtractionKSHUDAnnouncementComoponent_C::OnTeamSidesFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnTeamSidesFlipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnWinnerSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WinningTeamNumber              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExtractionKSHUDAnnouncementComoponent_C::OnWinnerSet(int WinningTeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnWinnerSet");

	struct
	{
		int                            WinningTeamNumber;
	} params;

	params.WinningTeamNumber = WinningTeamNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnRoundOver
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UExtractionKSHUDAnnouncementComoponent_C::OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C.OnRoundOver");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
