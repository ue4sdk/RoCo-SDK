#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterShoulderLauncher_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MasterShoulderLauncher_WeaponComponent.MasterShoulderLauncher_WeaponComponent_C
// 0x0000 (0x1200 - 0x1200)
class UMasterShoulderLauncher_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass MasterShoulderLauncher_WeaponComponent.MasterShoulderLauncher_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
