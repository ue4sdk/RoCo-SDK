#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SmokeGrenadeDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SmokeGrenadeDrop.SmokeGrenadeDrop_C
// 0x0000 (0x0848 - 0x0848)
class ASmokeGrenadeDrop_C : public AKSGadgetAssetDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SmokeGrenadeDrop.SmokeGrenadeDrop_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
