#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTrackerAbstract_InstigatedDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C
// 0x0008 (0x01F8 - 0x01F0)
class UEventTrackerAbstract_InstigatedDamage_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C");
		return ptr;
	}


	void ProcessValidCombatEvent(struct FCombatEventInfo* ValidEventInfo, int* TriggerCount);
	void IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid);
	void EventHandleCombatEvent(const struct FCombatEventInfo& DamageInfo);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void ExecuteUbergraph_EventTrackerAbstract_InstigatedDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
