#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SimpleSprayCosmetic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SimpleSprayCosmetic.SimpleSprayCosmetic_C
// 0x0000 (0x02D0 - 0x02D0)
class USimpleSprayCosmetic_C : public UKSEmoteCosmeticComponent_Spray
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SimpleSprayCosmetic.SimpleSprayCosmetic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
