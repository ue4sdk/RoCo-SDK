#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RogueScreenLobbyCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RogueScreenLobbyCharacter.RogueScreenLobbyCharacter_C
// 0x0000 (0x3892 - 0x3892)
class ARogueScreenLobbyCharacter_C : public ALocalPlayerLobbyCharacter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RogueScreenLobbyCharacter.RogueScreenLobbyCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
