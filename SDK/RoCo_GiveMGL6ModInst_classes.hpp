#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GiveMGL6ModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiveMGL6ModInst.GiveMGL6ModInst_C
// 0x0000 (0x04E8 - 0x04E8)
class UGiveMGL6ModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GiveMGL6ModInst.GiveMGL6ModInst_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
