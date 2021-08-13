#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Weapon_InstantFire_SubMachineGuns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_InstantFire_SubMachineGuns.Weapon_InstantFire_SubMachineGuns_C
// 0x0000 (0x0874 - 0x0874)
class AWeapon_InstantFire_SubMachineGuns_C : public AWeapon_InstantFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Weapon_InstantFire_SubMachineGuns.Weapon_InstantFire_SubMachineGuns_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
