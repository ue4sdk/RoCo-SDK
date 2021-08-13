#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_BattlePass3_EMPGrenadeHits_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_BattlePass3_EMPGrenadeHits.EventTracker_BattlePass3_EMPGrenadeHits_C
// 0x000C (0x0214 - 0x0208)
class UEventTracker_BattlePass3_EMPGrenadeHits_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                GunItemId;                                                // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_BattlePass3_EMPGrenadeHits.EventTracker_BattlePass3_EMPGrenadeHits_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void HandlePlayerHitByEMP(const struct FCombatEventInfo& DamageInfo);
	void ExecuteUbergraph_EventTracker_BattlePass3_EMPGrenadeHits(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
