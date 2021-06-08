#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WingPackCosmeticComponentBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WingPackCosmeticComponentBase.WingPackCosmeticComponentBase_C
// 0x0000 (0x0200 - 0x0200)
class UWingPackCosmeticComponentBase_C : public UKSWingSuitCosmeticComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WingPackCosmeticComponentBase.WingPackCosmeticComponentBase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
