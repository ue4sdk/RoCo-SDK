#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Helena_Base_01_RogueSelectCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Helena_Base_01_RogueSelectCharacter.Helena_Base_01_RogueSelectCharacter_C
// 0x0010 (0x3E40 - 0x3E30)
class AHelena_Base_01_RogueSelectCharacter_C : public ARogueSelectCharacter_C
{
public:
	class USpotLightComponent*                         LOB_Fill_ExtraSpot7;                                      // 0x3E30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         LOB_Fill_ExtraSpot;                                       // 0x3E38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Helena_Base_01_RogueSelectCharacter.Helena_Base_01_RogueSelectCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
