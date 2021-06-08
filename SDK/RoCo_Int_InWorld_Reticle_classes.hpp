#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Int_InWorld_Reticle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Int_InWorld_Reticle.Int_InWorld_Reticle_C
// 0x0000 (0x0028 - 0x0028)
class UInt_InWorld_Reticle_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Int_InWorld_Reticle.Int_InWorld_Reticle_C");
		return ptr;
	}


	void OnWeaponSet(class UKSWeaponComponent* bpp__WeaponComponent__pf);
	void OnPossession(class APlayerState* bpp__PlayerState__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
