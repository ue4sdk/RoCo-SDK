#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AKSAnimNotifyState_EmoteProp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AKSAnimNotifyState_EmoteProp.AKSAnimNotifyState_EmoteProp_C
// 0x0000 (0x0098 - 0x0098)
class UAKSAnimNotifyState_EmoteProp_C : public UKSAnimNotifyState_EmoteProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AKSAnimNotifyState_EmoteProp.AKSAnimNotifyState_EmoteProp_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	void OnStaticMeshComponentInitialized(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UStaticMeshComponent* SpawnedStaticMeshComponent);
	void OnSkeletalMeshComponentInitialized(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class USkeletalMeshComponent* SpawnedSkeletalMeshComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
