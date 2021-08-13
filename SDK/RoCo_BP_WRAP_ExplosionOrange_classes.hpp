#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_WRAP_ExplosionOrange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WRAP_ExplosionOrange.BP_WRAP_ExplosionOrange_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_WRAP_ExplosionOrange_C : public UKSWeaponAttachmentCosmeticInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WRAP_ExplosionOrange.BP_WRAP_ExplosionOrange_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
