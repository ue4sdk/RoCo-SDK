#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Striker8x10_Level_1_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Striker8x10_Level_1_WeaponComponent.Striker8x10_Level_1_WeaponComponent_C
// 0x0000 (0x1310 - 0x1310)
class UStriker8x10_Level_1_WeaponComponent_C : public UStriker8x10_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Striker8x10_Level_1_WeaponComponent.Striker8x10_Level_1_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
