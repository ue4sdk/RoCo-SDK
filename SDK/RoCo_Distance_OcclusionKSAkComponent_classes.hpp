#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Distance_OcclusionKSAkComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Distance_OcclusionKSAkComponent.Distance_OcclusionKSAkComponent_C
// 0x0000 (0x0490 - 0x0490)
class UDistance_OcclusionKSAkComponent_C : public UKSAkAmbientComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Distance_OcclusionKSAkComponent.Distance_OcclusionKSAkComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
