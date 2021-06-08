#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DefaultDestroyableHazardComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultDestroyableHazardComponent.DefaultDestroyableHazardComponent_C
// 0x0000 (0x00D0 - 0x00D0)
class UDefaultDestroyableHazardComponent_C : public UKSDestroyableHazardComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DefaultDestroyableHazardComponent.DefaultDestroyableHazardComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
