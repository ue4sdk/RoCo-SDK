#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChaosLauncher.ChaosLauncher_C
// 0x0000 (0x0878 - 0x0878)
class AChaosLauncher_C : public AWeapon_Projectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ChaosLauncher.ChaosLauncher_C");
		return ptr;
	}


	struct FName GetProjectileInfoKey();
	bool CanReloadNowCommon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
