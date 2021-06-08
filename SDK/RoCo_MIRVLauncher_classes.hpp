#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MIRVLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MIRVLauncher.MIRVLauncher_C
// 0x0000 (0x0868 - 0x0868)
class AMIRVLauncher_C : public AWeapon_Projectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MIRVLauncher.MIRVLauncher_C");
		return ptr;
	}


	bool CanReloadNowCommon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
