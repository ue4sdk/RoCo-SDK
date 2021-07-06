#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosLauncherProjectile_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ChaosLauncherProjectile_ABP.ChaosLauncherProjectile_ABP_C
// 0x0290 (0x0500 - 0x0270)
class UChaosLauncherProjectile_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x02B8(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0310(0x0088)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x0398(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0478(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ChaosLauncherProjectile_ABP.ChaosLauncherProjectile_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ChaosLauncherProjectile_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
