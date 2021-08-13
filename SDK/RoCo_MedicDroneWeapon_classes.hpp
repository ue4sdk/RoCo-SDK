#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDroneWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MedicDroneWeapon.MedicDroneWeapon_C
// 0x0000 (0x07C0 - 0x07C0)
class AMedicDroneWeapon_C : public AKSWeapon_ReviveDroneDirect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MedicDroneWeapon.MedicDroneWeapon_C");
		return ptr;
	}


	bool CanStartReloadNow();
	void GetDesiredSpawnLocationAndRotation(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool AllowDodgeRollRightNow();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
