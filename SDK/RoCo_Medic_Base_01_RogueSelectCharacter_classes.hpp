#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Medic_Base_01_RogueSelectCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Medic_Base_01_RogueSelectCharacter.Medic_Base_01_RogueSelectCharacter_C
// 0x0000 (0x3DE9 - 0x3DE9)
class AMedic_Base_01_RogueSelectCharacter_C : public ARogueSelectCharacter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Medic_Base_01_RogueSelectCharacter.Medic_Base_01_RogueSelectCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
