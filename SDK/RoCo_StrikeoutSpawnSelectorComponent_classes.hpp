#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StrikeoutSpawnSelectorComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StrikeoutSpawnSelectorComponent.StrikeoutSpawnSelectorComponent_C
// 0x0000 (0x0174 - 0x0174)
class UStrikeoutSpawnSelectorComponent_C : public UBaseSpawnSelectorComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass StrikeoutSpawnSelectorComponent.StrikeoutSpawnSelectorComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
