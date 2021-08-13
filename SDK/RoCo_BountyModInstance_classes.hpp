#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BountyModInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BountyModInstance.BountyModInstance_C
// 0x0040 (0x04A0 - 0x0460)
class UBountyModInstance_C : public UKSModInst_Activated
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AKSCharacterBase*                            SelectedBountyCharacter;                                  // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BonusTargetPoints;                                        // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class UMaterialInterface*                          ActivationPostProcess;                                    // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    ActivationDynMat;                                         // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxEffectDistance;                                        // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PostProcessActive;                                        // 0x048C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	float                                              PostProcessDuration;                                      // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentEffectDistance;                                    // 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Reveal_Timer;                                             // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BountyModInstance.BountyModInstance_C");
		return ptr;
	}


	void GetBountyCharacterDistance(class AKSCharacterBase** KSCharacter);
	void GetBountyCharacterMoney(class AKSCharacterBase** Character);
	bool ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority);
	void GetBountyCharacter(class AKSCharacterBase** KSCharacter);
	bool CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType);
	void OnNotifyEnd_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID);
	void OnNotifyBegin_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID);
	void OnInterrupted_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID);
	void OnBlendOut_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID);
	void OnCompleted_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID);
	void Play_Bounty_Killed_Sound();
	void Play_Ability_End_Sound();
	void PlayAbilityPressedSFX();
	void PlayTargetFinderSnapSFX();
	void ReceiveBeginPlay();
	void BountyTargetKilled(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter);
	void ModSetup();
	void ModActivated(bool bActive);
	void PlayPostProcess();
	void ReceiveTick(float DeltaSeconds);
	void OnEndActivationWarning();
	void Play_Revealer_Sound();
	void Play_Revealed_Sound(class AKSCharacterBase* RevealedChar, float Delay);
	void Play_Activate_Sound();
	void ExecuteUbergraph_BountyModInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
