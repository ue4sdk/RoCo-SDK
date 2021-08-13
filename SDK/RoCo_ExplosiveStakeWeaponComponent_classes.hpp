#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeWeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ExplosiveStakeWeaponComponent.ExplosiveStakeWeaponComponent_C
// 0x0000 (0x1450 - 0x1450)
class UExplosiveStakeWeaponComponent_C : public UGrenade_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass ExplosiveStakeWeaponComponent.ExplosiveStakeWeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
