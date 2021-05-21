#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WeaponMenuInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponMenuInterface.WeaponMenuInterface_C
// 0x0000 (0x0028 - 0x0028)
class UWeaponMenuInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WeaponMenuInterface.WeaponMenuInterface_C");
		return ptr;
	}


	void Close(bool Should_Cancel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
