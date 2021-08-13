#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EMPGrenade_DamageType_Level_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EMPGrenade_DamageType_Level_2.EMPGrenade_DamageType_Level_1_C
// 0x0000 (0x0140 - 0x0140)
class UEMPGrenade_DamageType_Level_1_C : public UKSDamageTypeEMP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EMPGrenade_DamageType_Level_2.EMPGrenade_DamageType_Level_1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
