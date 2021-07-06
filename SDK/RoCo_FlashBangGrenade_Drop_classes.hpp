#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashBangGrenade_Drop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlashBangGrenade_Drop.FlashBangGrenade_Drop_C
// 0x0000 (0x0848 - 0x0848)
class AFlashBangGrenade_Drop_C : public AKSGadgetAssetDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FlashBangGrenade_Drop.FlashBangGrenade_Drop_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
