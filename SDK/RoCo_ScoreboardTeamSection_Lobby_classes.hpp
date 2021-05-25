#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScoreboardTeamSection_Lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C
// 0x00B0 (0x0590 - 0x04E0)
class UScoreboardTeamSection_Lobby_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                PlayerEntries;                                            // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScoreboardPlayerStats_Lobby_C*              ScoreboardPlayerStats_Lobby;                              // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  teamScore;                                                // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    TeamScoreContainer;                                       // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TeamScoreGradient;                                        // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     TeamScoreWrapper;                                         // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PanelDefault_C*                         WBP_PanelDefault;                                         // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  WinText;                                                  // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTeamStats                                  TeamStruct;                                               // 0x0528(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	TArray<struct FPlayerEntryStats>                   playerStats;                                              // 0x0548(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UPUMG_PlayerDataFactory*                     PlayerDataFactory;                                        // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TArray<class UScoreboardPlayerStats_Lobby_C*>      Players;                                                  // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<struct FPlayerEntryStats>                   TeamPlayerStats;                                          // 0x0570(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayersChanged;                                         // 0x0580(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C");
		return ptr;
	}


	void GetPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* PlayerEntries);
	void CreatePlayerEntry(int Index, const struct FPlayerEntryStats& playerStats, class UScoreboardPlayerStats_Lobby_C** PlayerEntry);
	void SetIsVictorious(bool IsVictorious);
	void SortPlayers(bool DescOrder, TArray<struct FPlayerEntryStats>* PlayerEntries);
	void CreatePlayerEntries(TArray<struct FPlayerEntryStats>* PlayerEntries);
	void FindPlayerTeam(int* PlayerTeamNum);
	void PopulatePlayer();
	void Construct();
	void SetColor();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ScoreboardTeamSection_Lobby(int EntryPoint);
	void OnPlayersChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
