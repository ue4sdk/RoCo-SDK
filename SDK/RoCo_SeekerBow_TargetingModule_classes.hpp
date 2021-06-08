#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SeekerBow_TargetingModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeekerBow_TargetingModule.SeekerBow_TargetingModule_C
// 0x0000 (0x03A0 - 0x03A0)
class USeekerBow_TargetingModule_C : public UKSProjectileTargetingModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SeekerBow_TargetingModule.SeekerBow_TargetingModule_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
