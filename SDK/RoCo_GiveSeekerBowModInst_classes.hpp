#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GiveSeekerBowModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiveSeekerBowModInst.GiveSeekerBowModInst_C
// 0x0000 (0x04F0 - 0x04F0)
class UGiveSeekerBowModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GiveSeekerBowModInst.GiveSeekerBowModInst_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
