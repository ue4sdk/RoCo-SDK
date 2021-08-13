#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ANotifyState_MeleeRecoil_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANotifyState_MeleeRecoil.ANotifyState_MeleeRecoil_C
// 0x0060 (0x0090 - 0x0030)
class UANotifyState_MeleeRecoil_C : public UAnimNotifyState
{
public:
	struct FRecoilInfo                                 Melee_Swing_Recoil;                                       // 0x0030(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ANotifyState_MeleeRecoil.ANotifyState_MeleeRecoil_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
