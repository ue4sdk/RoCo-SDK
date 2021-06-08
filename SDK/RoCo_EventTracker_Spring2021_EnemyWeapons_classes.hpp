#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_EnemyWeapons_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Spring2021_EnemyWeapons.EventTracker_Spring2021_EnemyWeapons_C
// 0x000C (0x01FC - 0x01F0)
class UEventTracker_Spring2021_EnemyWeapons_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              DamageCount;                                              // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Spring2021_EnemyWeapons.EventTracker_Spring2021_EnemyWeapons_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHasEnded_Event();
	void OwnedPawnInstigateDamage(const struct FCombatEventInfo& DamageInfo);
	void ExecuteUbergraph_EventTracker_Spring2021_EnemyWeapons(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
