#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SemtexGrenade_StuckDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SemtexGrenade_StuckDamageType.SemtexGrenade_StuckDamageType_C
// 0x0000 (0x0138 - 0x0138)
class USemtexGrenade_StuckDamageType_C : public UKSDamageTypeStuck
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SemtexGrenade_StuckDamageType.SemtexGrenade_StuckDamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
