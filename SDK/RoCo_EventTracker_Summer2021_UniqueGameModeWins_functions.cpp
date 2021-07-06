// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Summer2021_UniqueGameModeWins_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.IsWinningTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsWinningTeam                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_Summer2021_UniqueGameModeWins_C::IsWinningTeam(bool* IsWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.IsWinningTeam");

	struct
	{
		bool                           IsWinningTeam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsWinningTeam != nullptr)
		*IsWinningTeam = params.IsWinningTeam;
}


// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.GetJobItemId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            JobItemId                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Summer2021_UniqueGameModeWins_C::GetJobItemId(int* JobItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.GetJobItemId");

	struct
	{
		int                            JobItemId;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobItemId != nullptr)
		*JobItemId = params.JobItemId;
}


// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.Set Game Mode Slot if Empty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            LootTableItemId                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Was_Set                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_Summer2021_UniqueGameModeWins_C::Set_Game_Mode_Slot_if_Empty(int ItemId, int LootTableItemId, bool* Was_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.Set Game Mode Slot if Empty");

	struct
	{
		int                            ItemId;
		int                            LootTableItemId;
		bool                           Was_Set;
	} params;

	params.ItemId = ItemId;
	params.LootTableItemId = LootTableItemId;

	UObject::ProcessEvent(fn, &params);

	if (Was_Set != nullptr)
		*Was_Set = params.Was_Set;
}


// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_Summer2021_UniqueGameModeWins_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_Summer2021_UniqueGameModeWins_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.MatchHAsEnded_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_Summer2021_UniqueGameModeWins_C::MatchHAsEnded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.MatchHAsEnded_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.ExecuteUbergraph_EventTracker_Summer2021_UniqueGameModeWins
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Summer2021_UniqueGameModeWins_C::ExecuteUbergraph_EventTracker_Summer2021_UniqueGameModeWins(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Summer2021_UniqueGameModeWins.EventTracker_Summer2021_UniqueGameModeWins_C.ExecuteUbergraph_EventTracker_Summer2021_UniqueGameModeWins");

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
