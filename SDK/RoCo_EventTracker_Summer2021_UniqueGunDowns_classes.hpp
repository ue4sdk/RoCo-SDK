#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Summer2021_UniqueGunDowns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Summer2021_UniqueGunDowns.EventTracker_Summer2021_UniqueGunDowns_C
// 0x000C (0x0214 - 0x0208)
class UEventTracker_Summer2021_UniqueGunDowns_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                GunItemId;                                                // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Summer2021_UniqueGunDowns.EventTracker_Summer2021_UniqueGunDowns_C");
		return ptr;
	}


	void IsWinningTeam(bool* IsWinningTeam);
	void GetJobItemId(int* JobItemId);
	void Set_Gun_Slot_if_Empty(int ItemId, int LootTableItemId, bool* Was_Set);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void OwnedPawnInstigateDamage(const struct FCombatEventInfo& DamageInfo);
	void ExecuteUbergraph_EventTracker_Summer2021_UniqueGunDowns(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
