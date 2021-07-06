#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_HardCarry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_HardCarry.EventTracker_HardCarry_C
// 0x0010 (0x0220 - 0x0210)
class UEventTracker_HardCarry_C : public UEventTrackerAbstract_InstigatedDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              EnemiesKilled;                                            // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetKills;                                              // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_HardCarry.EventTracker_HardCarry_C");
		return ptr;
	}


	void IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void ExecuteUbergraph_EventTracker_HardCarry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
