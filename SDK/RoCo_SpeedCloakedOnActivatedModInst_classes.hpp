#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SpeedCloakedOnActivatedModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpeedCloakedOnActivatedModInst.SpeedCloakedOnActivatedModInst_C
// 0x00E1 (0x0549 - 0x0468)
class USpeedCloakedOnActivatedModInst_C : public UKSModInst_Activated
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSFXCurveComponent*                         AppliedCurveComponent;                                    // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FKSParticleSystemAttachment>         ParticleSystemAttachments;                                // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>            ParticleSystemComponents;                                 // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               CleanseRevealsOnActivation;                               // 0x0498(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSSpecialEffect                            PostProcessEffect;                                        // 0x04A8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FKSSpecialEffect                            ParticleSystemEffect;                                     // 0x04F8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	EKSRevealPriority                                  RemoveRevealPriority;                                     // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SpeedCloakedOnActivatedModInst.SpeedCloakedOnActivatedModInst_C");
		return ptr;
	}


	void ReevaluateRevealOfMe();
	void RemoveRevealsOfMe();
	void ReceiveBeginPlay();
	void OnActivation();
	void OnEndActivation();
	void OnEndActivationWarning();
	void QuickandQuietStateChange(bool LocallyViewed);
	void OnNewCharacter();
	void ReevaluateAudio();
	void ExecuteUbergraph_SpeedCloakedOnActivatedModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
