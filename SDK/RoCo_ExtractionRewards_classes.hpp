#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExtractionRewards_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExtractionRewards.ExtractionRewards_C
// 0x0010 (0x0038 - 0x0028)
class UExtractionRewards_C : public UKSRewardsCalculator
{
public:
	int                                                Points_Per_Round;                                         // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Points_Per_Kill;                                          // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Points_Per_Objective;                                     // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Win_Bonus;                                                // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExtractionRewards.ExtractionRewards_C");
		return ptr;
	}


	float GetRewardXpPerMin();
	float GetWinBonusMultiplier();
	void GetStatsOrdering(TArray<EPlayerStatType>* StatsOrdering);
	bool GetRewardsFromStat(const struct FPlayerMatchStatInfo& PlayerStatInfo, float* OutExpRewardValue);
	float GetBaseExpValue();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
