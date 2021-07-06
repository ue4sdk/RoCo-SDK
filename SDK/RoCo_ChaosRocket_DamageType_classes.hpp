#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosRocket_DamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChaosRocket_DamageType.ChaosRocket_DamageType_C
// 0x0000 (0x0138 - 0x0138)
class UChaosRocket_DamageType_C : public UGrenade_DamageType_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ChaosRocket_DamageType.ChaosRocket_DamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
