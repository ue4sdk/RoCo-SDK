#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KOTH_SpawnSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KOTH_SpawnSelector.KOTH_SpawnSelector_C
// 0x0000 (0x0174 - 0x0174)
class UKOTH_SpawnSelector_C : public UWingman_StrikeoutSpawnSelectorComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KOTH_SpawnSelector.KOTH_SpawnSelector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
