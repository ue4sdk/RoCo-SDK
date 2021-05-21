// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScoreboardTeamSection_Lobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UScoreboardPlayerStats_Lobby_C*> PlayerEntries                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_Lobby_C::GetPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* PlayerEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays");

	struct
	{
		TArray<class UScoreboardPlayerStats_Lobby_C*> PlayerEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FPlayerEntryStats       playerStats                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UScoreboardPlayerStats_Lobby_C* PlayerEntry                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_Lobby_C::CreatePlayerEntry(int Index, const struct FPlayerEntryStats& playerStats, class UScoreboardPlayerStats_Lobby_C** PlayerEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry");

	struct
	{
		int                            Index;
		struct FPlayerEntryStats       playerStats;
		class UScoreboardPlayerStats_Lobby_C* PlayerEntry;
	} params;

	params.Index = Index;
	params.playerStats = playerStats;

	UObject::ProcessEvent(fn, &params);

	if (PlayerEntry != nullptr)
		*PlayerEntry = params.PlayerEntry;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVictorious                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardTeamSection_Lobby_C::SetIsVictorious(bool IsVictorious)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious");

	struct
	{
		bool                           IsVictorious;
	} params;

	params.IsVictorious = IsVictorious;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPlayerEntryStats> PlayerEntries                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           DescOrder                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardTeamSection_Lobby_C::SortPlayers(bool DescOrder, TArray<struct FPlayerEntryStats>* PlayerEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers");

	struct
	{
		TArray<struct FPlayerEntryStats> PlayerEntries;
		bool                           DescOrder;
	} params;

	params.DescOrder = DescOrder;

	UObject::ProcessEvent(fn, &params);

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPlayerEntryStats> PlayerEntries                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_Lobby_C::CreatePlayerEntries(TArray<struct FPlayerEntryStats>* PlayerEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries");

	struct
	{
		TArray<struct FPlayerEntryStats> PlayerEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            PlayerTeamNum                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_Lobby_C::FindPlayerTeam(int* PlayerTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam");

	struct
	{
		int                            PlayerTeamNum;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerTeamNum != nullptr)
		*PlayerTeamNum = params.PlayerTeamNum;
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::PopulatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardTeamSection_Lobby_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_Lobby_C::ExecuteUbergraph_ScoreboardTeamSection_Lobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_Lobby_C::OnPlayersChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
