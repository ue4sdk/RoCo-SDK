#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_TwoShots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Spring2021_TwoShots.EventTracker_Spring2021_TwoShots_C
// 0x0019 (0x0209 - 0x01F0)
class UEventTracker_Spring2021_TwoShots_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FKSDamageHistory>                    DamageHistory;                                            // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               Success;                                                  // 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Spring2021_TwoShots.EventTracker_Spring2021_TwoShots_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void OwnedPawnInstigateDamage_Event(const struct FCombatEventInfo& DamageInfo);
	void ExecuteUbergraph_EventTracker_Spring2021_TwoShots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
