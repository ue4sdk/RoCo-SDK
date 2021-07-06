#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeMelee_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosiveStakeMelee_Weapon.ExplosiveStakeMelee_Weapon_C
// 0x0000 (0x08E0 - 0x08E0)
class AExplosiveStakeMelee_Weapon_C : public AWeapon_Melee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplosiveStakeMelee_Weapon.ExplosiveStakeMelee_Weapon_C");
		return ptr;
	}


	bool CanReloadNowCommon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
