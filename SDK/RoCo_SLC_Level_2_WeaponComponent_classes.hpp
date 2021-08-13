#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SLC_Level_2_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SLC_Level_2_WeaponComponent.SLC_Level_2_WeaponComponent_C
// 0x0000 (0x1210 - 0x1210)
class USLC_Level_2_WeaponComponent_C : public USLC_Level_1_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass SLC_Level_2_WeaponComponent.SLC_Level_2_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
