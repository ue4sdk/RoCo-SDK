#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NeutralBombZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C
// 0x0020 (0x0490 - 0x0470)
class ANeutralBombZone_C : public AKSNeutralBombZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               Z_Axis;                                                   // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    ZoneMaterial;                                             // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSCharacterBase*                            BombHolderWhenArming;                                     // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UpdateZoneMaterial();
	void RoundSetup(const struct FRoundInitState& RoundInitState);
	void TeamUpdated();
	void Activated(bool bActive);
	void BombStateChanged(const struct FKSNeutralBombState& BombState);
	void On_Objective_State_Changed(const TScriptInterface<class UKSObjective>& GameObjective);
	void ExecuteUbergraph_NeutralBombZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
