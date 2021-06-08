#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeWeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BarricadeWeaponComponent.BarricadeWeaponComponent_C
// 0x0000 (0x1540 - 0x1540)
class UBarricadeWeaponComponent_C : public UMasterBuild_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass BarricadeWeaponComponent.BarricadeWeaponComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_BarricadeWeaponComponent(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
