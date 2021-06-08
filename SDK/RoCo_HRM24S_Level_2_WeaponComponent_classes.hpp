#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HRM24S_Level_2_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HRM24S_Level_2_WeaponComponent.HRM24S_Level_2_WeaponComponent_C
// 0x0000 (0x1200 - 0x1200)
class UHRM24S_Level_2_WeaponComponent_C : public UHRM24S_Level_1_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass HRM24S_Level_2_WeaponComponent.HRM24S_Level_2_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
