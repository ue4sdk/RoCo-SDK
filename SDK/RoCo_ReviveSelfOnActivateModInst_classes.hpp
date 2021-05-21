#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReviveSelfOnActivateModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C
// 0x0070 (0x04F0 - 0x0480)
class UReviveSelfOnActivateModInst_C : public UKSModInst_ReviveSelfOnActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSFXCurveComponent*                         AppliedCurveComponent;                                    // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSSpecialEffect                            ImmunityPPEffect;                                         // 0x0490(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                Outro_Timer;                                              // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                BruteStrengthMontage;                                     // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C");
		return ptr;
	}


	void Get_outro_timer(class UAnimMontage* Montage, float* Outro_Duration_timer);
	bool StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance);
	bool ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority);
	void OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID);
	void OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID);
	void OnInterrupted_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID);
	void OnBlendOut_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID);
	void OnCompleted_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID);
	void VO_Revive_Activate();
	void StimPackDownedEndSFX();
	void StimPackActivateStandingSFX();
	void StimPackActivateDownedSFX();
	void SFX_Revive_Activate();
	void SFX_Revive_Complete();
	void StimPackReviveCompleteSFX();
	void PlayAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance);
	void ReceiveBeginPlay();
	void OnActivated(bool bActive);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void AdjustImmunityEffect(bool Active);
	void OnSetup();
	void Brute_Strength_Effect_Stop();
	void Play_Outro();
	void Brute_Strength_Effect_Play();
	void OnNewCharacter();
	void OnDeathStateChanged();
	void ExecuteUbergraph_ReviveSelfOnActivateModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
