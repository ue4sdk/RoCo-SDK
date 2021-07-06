#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GiveChaosLauncherModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiveChaosLauncherModInst.GiveChaosLauncherModInst_C
// 0x0000 (0x04E8 - 0x04E8)
class UGiveChaosLauncherModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GiveChaosLauncherModInst.GiveChaosLauncherModInst_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
