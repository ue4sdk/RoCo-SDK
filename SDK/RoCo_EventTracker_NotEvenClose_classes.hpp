#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_NotEvenClose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_NotEvenClose.EventTracker_NotEvenClose_C
// 0x0000 (0x01F8 - 0x01F8)
class UEventTracker_NotEvenClose_C : public UEventTrackerAbstract_InstigatedDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_NotEvenClose.EventTracker_NotEvenClose_C");
		return ptr;
	}


	void IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
