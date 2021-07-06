#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosLauncherWeaponTargeting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChaosLauncherWeaponTargeting.ChaosLauncherWeaponTargeting_C
// 0x0000 (0x03F0 - 0x03F0)
class UChaosLauncherWeaponTargeting_C : public UKSClusterGrenadeTargetingModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ChaosLauncherWeaponTargeting.ChaosLauncherWeaponTargeting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
