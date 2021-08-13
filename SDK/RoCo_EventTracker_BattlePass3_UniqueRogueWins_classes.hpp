#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_BattlePass3_UniqueRogueWins_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_BattlePass3_UniqueRogueWins.EventTracker_BattlePass3_UniqueRogueWins_C
// 0x0028 (0x0230 - 0x0208)
class UEventTracker_BattlePass3_UniqueRogueWins_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<int>                                        ItemIds;                                                  // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<int>                                        LootTableItemIds;                                         // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_BattlePass3_UniqueRogueWins.EventTracker_BattlePass3_UniqueRogueWins_C");
		return ptr;
	}


	void GetJobItemId(int* JobItemId);
	void IsWinningTeam(bool* IsWinningTeam);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHasEnded_Event();
	void ExecuteUbergraph_EventTracker_BattlePass3_UniqueRogueWins(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
