#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameState_TeamSlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameState_TeamSlayer.GameState_TeamSlayer_C
// 0x0010 (0x19F0 - 0x19E0)
class AGameState_TeamSlayer_C : public AKSGameState_Modular
{
public:
	class UBP_KSObjectiveComponent_C*                  KSObjectiveComponent;                                     // 0x19E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x19E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GameState_TeamSlayer.GameState_TeamSlayer_C");
		return ptr;
	}


	class UKSHUDComponent_Objective* GetKSObjectiveComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
