#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStake_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosiveStake_Weapon.ExplosiveStake_Weapon_C
// 0x0000 (0x08A8 - 0x08A8)
class AExplosiveStake_Weapon_C : public AWeapon_Grenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplosiveStake_Weapon.ExplosiveStake_Weapon_C");
		return ptr;
	}


	bool CanReloadNowCommon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
