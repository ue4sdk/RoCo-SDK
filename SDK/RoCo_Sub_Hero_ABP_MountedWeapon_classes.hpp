#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sub_Hero_ABP_MountedWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C
// 0x0B38 (0x1BE8 - 0x10B0)
class USub_Hero_ABP_MountedWeapon_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B8(0x0040)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x10F8(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1258(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x12E0(0x00B0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x1390(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x14F0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1578(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x15B8(0x00C0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_2;                         // 0x1678(0x01C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1838(0x00B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                           // 0x18E8(0x01C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1AA8(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1B70(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1BA8(0x0038)
	class AKSCharacter*                                Character;                                                // 0x1BE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_F46D9F994AFD701F3540A7A6C3C3AE29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_1149DF16425BF36771ECBFAB5883FCFD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
