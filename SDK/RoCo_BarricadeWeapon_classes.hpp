#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarricadeWeapon.BarricadeWeapon_C
// 0x0000 (0x0930 - 0x0930)
class ABarricadeWeapon_C : public AKSWeapon_Build
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BarricadeWeapon.BarricadeWeapon_C");
		return ptr;
	}


	void GetDesiredBuildLocationAndRotation(struct FVector* OutLocation, struct FRotator* OutRotation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
