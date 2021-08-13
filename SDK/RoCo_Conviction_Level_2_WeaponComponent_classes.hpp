#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Conviction_Level_2_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Conviction_Level_2_WeaponComponent.Conviction_Level_2_WeaponComponent_C
// 0x0000 (0x1210 - 0x1210)
class UConviction_Level_2_WeaponComponent_C : public UConviction_Level_1_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Conviction_Level_2_WeaponComponent.Conviction_Level_2_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
