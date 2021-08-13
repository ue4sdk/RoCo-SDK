#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EMPGrenade_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EMPGrenade_WeaponComponent.EMPGrenade_WeaponComponent_C
// 0x0000 (0x1450 - 0x1450)
class UEMPGrenade_WeaponComponent_C : public UMaster_GrenadeComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass EMPGrenade_WeaponComponent.EMPGrenade_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
