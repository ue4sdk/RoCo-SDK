#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AbilityWeaponTargeting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AbilityWeaponTargeting.AbilityWeaponTargeting_C
// 0x0000 (0x03F0 - 0x03F0)
class UAbilityWeaponTargeting_C : public USimpleGrenadeTargeting_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AbilityWeaponTargeting.AbilityWeaponTargeting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
