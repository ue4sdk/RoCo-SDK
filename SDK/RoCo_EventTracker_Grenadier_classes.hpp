#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Grenadier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Grenadier.EventTracker_Grenadier_C
// 0x0004 (0x0214 - 0x0210)
class UEventTracker_Grenadier_C : public UEventTrackerAbstract_InstigatedDamage_C
{
public:
	float                                              Accumulator;                                              // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Grenadier.EventTracker_Grenadier_C");
		return ptr;
	}


	void ProcessValidCombatEvent(struct FCombatEventInfo* ValidEventInfo, int* TriggerCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
