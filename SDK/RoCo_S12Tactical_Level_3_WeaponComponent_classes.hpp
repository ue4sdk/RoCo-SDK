#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_S12Tactical_Level_3_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass S12Tactical_Level_3_WeaponComponent.S12Tactical_Level_3_WeaponComponent_C
// 0x0000 (0x1300 - 0x1300)
class US12Tactical_Level_3_WeaponComponent_C : public US12Tactical_Level_2_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass S12Tactical_Level_3_WeaponComponent.S12Tactical_Level_3_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
