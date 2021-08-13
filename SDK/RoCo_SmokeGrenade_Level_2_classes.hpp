#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SmokeGrenade_Level_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SmokeGrenade_Level_2.SmokeGrenade_Level_1_C
// 0x0000 (0x0B98 - 0x0B98)
class ASmokeGrenade_Level_1_C : public ASmokeGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SmokeGrenade_Level_2.SmokeGrenade_Level_1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
