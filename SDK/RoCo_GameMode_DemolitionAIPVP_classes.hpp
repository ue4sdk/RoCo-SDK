#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameMode_DemolitionAIPVP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameMode_DemolitionAIPVP.GameMode_DemolitionAIPVP_C
// 0x0000 (0x0FBC - 0x0FBC)
class AGameMode_DemolitionAIPVP_C : public AGameMode_Demolition_Modular_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GameMode_DemolitionAIPVP.GameMode_DemolitionAIPVP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
