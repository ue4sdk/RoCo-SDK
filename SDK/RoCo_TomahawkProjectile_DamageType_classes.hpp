#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TomahawkProjectile_DamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TomahawkProjectile_DamageType.TomahawkProjectile_DamageType_C
// 0x0000 (0x0138 - 0x0138)
class UTomahawkProjectile_DamageType_C : public UMasterMelee_DamageType_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TomahawkProjectile_DamageType.TomahawkProjectile_DamageType_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
