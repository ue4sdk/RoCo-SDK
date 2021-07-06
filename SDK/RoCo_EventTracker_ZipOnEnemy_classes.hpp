#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_ZipOnEnemy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_ZipOnEnemy.EventTracker_ZipOnEnemy_C
// 0x0000 (0x0210 - 0x0210)
class UEventTracker_ZipOnEnemy_C : public UEventTrackerAbstract_InstigatedDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_ZipOnEnemy.EventTracker_ZipOnEnemy_C");
		return ptr;
	}


	void IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
