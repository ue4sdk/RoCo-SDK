#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Collateral_CameraShake_Hipfire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Collateral_CameraShake_Hipfire.Collateral_CameraShake_Hipfire_C
// 0x0000 (0x0160 - 0x0160)
class UCollateral_CameraShake_Hipfire_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Collateral_CameraShake_Hipfire.Collateral_CameraShake_Hipfire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
