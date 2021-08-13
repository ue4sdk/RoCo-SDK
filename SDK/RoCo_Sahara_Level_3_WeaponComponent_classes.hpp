#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sahara_Level_3_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sahara_Level_3_WeaponComponent.Sahara_Level_3_WeaponComponent_C
// 0x0000 (0x1210 - 0x1210)
class USahara_Level_3_WeaponComponent_C : public USahara_Level_2_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Sahara_Level_3_WeaponComponent.Sahara_Level_3_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
