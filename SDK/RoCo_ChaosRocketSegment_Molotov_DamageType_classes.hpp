#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosRocketSegment_Molotov_DamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChaosRocketSegment_Molotov_DamageType.ChaosRocketSegment_Molotov_DamageType_C
// 0x0000 (0x0140 - 0x0140)
class UChaosRocketSegment_Molotov_DamageType_C : public UMasterFire_DamageType_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ChaosRocketSegment_Molotov_DamageType.ChaosRocketSegment_Molotov_DamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
