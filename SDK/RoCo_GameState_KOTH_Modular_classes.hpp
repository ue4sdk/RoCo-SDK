#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameState_KOTH_Modular_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameState_KOTH_Modular.GameState_KOTH_Modular_C
// 0x0020 (0x1A00 - 0x19E0)
class AGameState_KOTH_Modular_C : public AKSGameState_Modular
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x19E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBP_KSObjectiveComponent_C*                  KSObjectiveComponent;                                     // 0x19E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x19F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentPointTime;                                         // 0x19F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SimulatedCurrentPointTime;                                // 0x19FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GameState_KOTH_Modular.GameState_KOTH_Modular_C");
		return ptr;
	}


	void OnRep_CurrentPointTime();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ApplyTimerForActive(const struct FTimerHandle& CurrentPointTimer);
	void ExecuteUbergraph_GameState_KOTH_Modular(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
