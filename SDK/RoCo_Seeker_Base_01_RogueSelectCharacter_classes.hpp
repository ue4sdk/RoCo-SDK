#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Seeker_Base_01_RogueSelectCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Seeker_Base_01_RogueSelectCharacter.Seeker_Base_01_RogueSelectCharacter_C
// 0x0008 (0x38A8 - 0x38A0)
class ASeeker_Base_01_RogueSelectCharacter_C : public ARogueSelectCharacter_C
{
public:
	class USpotLightComponent*                         LOB_Key1;                                                 // 0x38A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Seeker_Base_01_RogueSelectCharacter.Seeker_Base_01_RogueSelectCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
