#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SKL6_Level_2_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SKL6_Level_2_WeaponComponent.SKL6_Level_2_WeaponComponent_C
// 0x0000 (0x1310 - 0x1310)
class USKL6_Level_2_WeaponComponent_C : public USKL6_Level_1_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass SKL6_Level_2_WeaponComponent.SKL6_Level_2_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
