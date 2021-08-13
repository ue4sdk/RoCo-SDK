#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Mamba_WeaponComponent_Level2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mamba_WeaponComponent_Level2.Mamba_WeaponComponent_Level2_C
// 0x0000 (0x1210 - 0x1210)
class UMamba_WeaponComponent_Level2_C : public UMamba_WeaponComponent_Level1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Mamba_WeaponComponent_Level2.Mamba_WeaponComponent_Level2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
