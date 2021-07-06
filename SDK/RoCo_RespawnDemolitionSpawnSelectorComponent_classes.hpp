#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RespawnDemolitionSpawnSelectorComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RespawnDemolitionSpawnSelectorComponent.RespawnDemolitionSpawnSelectorComponent_C
// 0x0000 (0x0174 - 0x0174)
class URespawnDemolitionSpawnSelectorComponent_C : public UBaseSpawnSelectorComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RespawnDemolitionSpawnSelectorComponent.RespawnDemolitionSpawnSelectorComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
