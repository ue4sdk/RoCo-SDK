#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TomahawkWithProjectile_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass TomahawkWithProjectile_WeaponComponent.TomahawkWithProjectile_WeaponComponent_C
// 0x0000 (0x1550 - 0x1550)
class UTomahawkWithProjectile_WeaponComponent_C : public UMasterMelee_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass TomahawkWithProjectile_WeaponComponent.TomahawkWithProjectile_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
