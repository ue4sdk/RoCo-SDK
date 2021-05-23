#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashBangGrenadeDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlashBangGrenadeDamageType.FlashBangGrenadeDamageType_C
// 0x0000 (0x0140 - 0x0140)
class UFlashBangGrenadeDamageType_C : public UKSDamageTypeFlashBang
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FlashBangGrenadeDamageType.FlashBangGrenadeDamageType_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
