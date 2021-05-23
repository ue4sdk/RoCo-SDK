#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Wingman_StrikeoutSpawnSelectorComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wingman_StrikeoutSpawnSelectorComponent.Wingman_StrikeoutSpawnSelectorComponent_C
// 0x0000 (0x0174 - 0x0174)
class UWingman_StrikeoutSpawnSelectorComponent_C : public UStrikeoutSpawnSelectorComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Wingman_StrikeoutSpawnSelectorComponent.Wingman_StrikeoutSpawnSelectorComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
