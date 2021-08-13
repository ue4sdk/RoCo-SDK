#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EvadeShotAtModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EvadeShotAtModInst.EvadeShotAtModInst_C
// 0x0018 (0x01D8 - 0x01C0)
class UEvadeShotAtModInst_C : public UKSModInst_OnShotAt
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class UKSPlayerModInstance*>                ActiveInstances;                                          // 0x01C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EvadeShotAtModInst.EvadeShotAtModInst_C");
		return ptr;
	}


	void MatchingDamageTaken(class AActor* InActor, float DamageAmount, class UDamageType* DamageTypeCDO, class AController* EventInstigator, class AActor* DamageCauser);
	void ReviveCompleted(class AKSCharacter* Reviver, class AKSCharacter* Revivee);
	void NearMiss(class AKSCharacterBase* NearlyMissedCharacter);
	void ShotAtTimerComplete();
	void ExecuteUbergraph_EvadeShotAtModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
