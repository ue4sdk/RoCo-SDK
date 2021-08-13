#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Molotov_Level_2_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Molotov_Level_2_Child.Molotov_Level_2_Child_C
// 0x0000 (0x0DC9 - 0x0DC9)
class AMolotov_Level_2_Child_C : public AMolotov_Level_1_Child_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Molotov_Level_2_Child.Molotov_Level_2_Child_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
