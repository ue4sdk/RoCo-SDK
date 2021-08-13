// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Scoreboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Scoreboard.Scoreboard_C.Set Gamepad Focus Group
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Focused                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboard_C::Set_Gamepad_Focus_Group(bool Focused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Set Gamepad Focus Group");

	struct
	{
		bool                           Focused;
	} params;

	params.Focused = Focused;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.UnhoverPlayerEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::UnhoverPlayerEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UnhoverPlayerEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.HandleInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboard_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.HandleInputModeChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.GetLocalPlayerJobInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           JobFound                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboard_C::GetLocalPlayerJobInfo(bool* JobFound, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetLocalPlayerJobInfo");

	struct
	{
		bool                           JobFound;
		class UKSJobItem*              JobItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobFound != nullptr)
		*JobFound = params.JobFound;
	if (JobItem != nullptr)
		*JobItem = params.JobItem;
}


// Function Scoreboard.Scoreboard_C.UpdateRogueInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::UpdateRogueInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateRogueInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.GetPlayerData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> OutPlayerData                  (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UScoreboard_C::GetPlayerData(TArray<class UKSPersistentPlayerData*>* OutPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetPlayerData");

	struct
	{
		TArray<class UKSPersistentPlayerData*> OutPlayerData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutPlayerData != nullptr)
		*OutPlayerData = params.OutPlayerData;
}


// Function Scoreboard.Scoreboard_C.GetPlayersForTeamSection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UScoreboardTeamSection_C* TeamSection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UScoreboardPlayerEntry_C*> PlayerButtons                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UScoreboard_C::GetPlayersForTeamSection(class UScoreboardTeamSection_C* TeamSection, TArray<class UScoreboardPlayerEntry_C*>* PlayerButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetPlayersForTeamSection");

	struct
	{
		class UScoreboardTeamSection_C* TeamSection;
		TArray<class UScoreboardPlayerEntry_C*> PlayerButtons;
	} params;

	params.TeamSection = TeamSection;

	UObject::ProcessEvent(fn, &params);

	if (PlayerButtons != nullptr)
		*PlayerButtons = params.PlayerButtons;
}


// Function Scoreboard.Scoreboard_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UScoreboard_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Scoreboard.Scoreboard_C.GetPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           PrioritizeAllyTeam             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<class UScoreboardPlayerEntry_C*> Players                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UScoreboard_C::GetPlayers(bool PrioritizeAllyTeam, TArray<class UScoreboardPlayerEntry_C*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.GetPlayers");

	struct
	{
		bool                           PrioritizeAllyTeam;
		TArray<class UScoreboardPlayerEntry_C*> Players;
	} params;

	params.PrioritizeAllyTeam = PrioritizeAllyTeam;

	UObject::ProcessEvent(fn, &params);

	if (Players != nullptr)
		*Players = params.Players;
}


// Function Scoreboard.Scoreboard_C.UpdateTeamColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::UpdateTeamColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateTeamColors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.SortKSPlayerStatesByMoney
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> InKSPlayerData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           DescOrder                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<class UKSPersistentPlayerData*> OutKSPlayerData                (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UScoreboard_C::SortKSPlayerStatesByMoney(bool DescOrder, TArray<class UKSPersistentPlayerData*>* InKSPlayerData, TArray<class UKSPersistentPlayerData*>* OutKSPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.SortKSPlayerStatesByMoney");

	struct
	{
		TArray<class UKSPersistentPlayerData*> InKSPlayerData;
		bool                           DescOrder;
		TArray<class UKSPersistentPlayerData*> OutKSPlayerData;
	} params;

	params.DescOrder = DescOrder;

	UObject::ProcessEvent(fn, &params);

	if (InKSPlayerData != nullptr)
		*InKSPlayerData = params.InKSPlayerData;
	if (OutKSPlayerData != nullptr)
		*OutKSPlayerData = params.OutKSPlayerData;
}


// Function Scoreboard.Scoreboard_C.Get KSPlayer Data
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> KSPlayerData                   (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UScoreboard_C::Get_KSPlayer_Data(TArray<class UKSPersistentPlayerData*>* KSPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Get KSPlayer Data");

	struct
	{
		TArray<class UKSPersistentPlayerData*> KSPlayerData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (KSPlayerData != nullptr)
		*KSPlayerData = params.KSPlayerData;
}


// Function Scoreboard.Scoreboard_C.ComparePlayerScore
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerStateA                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          PlayerStateB                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           After                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboard_C::ComparePlayerScore(class AKSPlayerState* PlayerStateA, class AKSPlayerState* PlayerStateB, bool* After)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ComparePlayerScore");

	struct
	{
		class AKSPlayerState*          PlayerStateA;
		class AKSPlayerState*          PlayerStateB;
		bool                           After;
	} params;

	params.PlayerStateA = PlayerStateA;
	params.PlayerStateB = PlayerStateB;

	UObject::ProcessEvent(fn, &params);

	if (After != nullptr)
		*After = params.After;
}


// Function Scoreboard.Scoreboard_C.UpdateScores
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::UpdateScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateScores");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.OnLoaded_4848F73A412C50823EB015A4F7EF3736
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboard_C::OnLoaded_4848F73A412C50823EB015A4F7EF3736(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnLoaded_4848F73A412C50823EB015A4F7EF3736");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.UpdateScoreboard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::UpdateScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.UpdateScoreboard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.HandleOnScoreboardEntryAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::HandleOnScoreboardEntryAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.HandleOnScoreboardEntryAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboard_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboard_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.LoadAndPopulateFirstPassive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>  Asset                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UScoreboard_C::LoadAndPopulateFirstPassive(TSoftObjectPtr<class UObject> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.LoadAndPopulateFirstPassive");

	struct
	{
		TSoftObjectPtr<class UObject>  Asset;
	} params;

	params.Asset = Asset;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.ExecuteUbergraph_Scoreboard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboard_C::ExecuteUbergraph_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ExecuteUbergraph_Scoreboard");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.OnScoreboardEntryAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::OnScoreboardEntryAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OnScoreboardEntryAdded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.ScoreboardTabPress__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::ScoreboardTabPress__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ScoreboardTabPress__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.Closed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Closed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Scoreboard.Scoreboard_C.Opened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboard_C::Opened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.Opened__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
