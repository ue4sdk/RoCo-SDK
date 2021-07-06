#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Evasive_OnAbilityOrGadgetUsed_ModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C
// 0x0034 (0x01D4 - 0x01A0)
class UEvasive_OnAbilityOrGadgetUsed_ModInst_C : public UKSModInst_OnGenericEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                SpeedBuffTimer;                                           // 0x01A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UKSPlayerModInstance*>                ActiveInstances;                                          // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<struct FGameplayTag>                        ValidWeaponTypes;                                         // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	int                                                StopLoopingEscalateSFX;                                   // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C");
		return ptr;
	}


	void SpeedBuffTimedOut();
	void SpeedBuffEnd(bool bEndingEarly);
	void TriggerSpeedBuff();
	void Escalate_SFXStop();
	void Escalate_SFXPlay(bool bAudioActive);
	void OnNewCharacter();
	void OnWeaponFired(class AKSWeapon* Weapon);
	void OnAbilityUsed();
	void BroadcastEscalateSFXPlay(bool bIsAudioActive);
	void BroadcastEscalateSFXStop();
	void ExecuteUbergraph_Evasive_OnAbilityOrGadgetUsed_ModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
