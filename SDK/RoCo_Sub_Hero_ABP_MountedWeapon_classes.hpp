#pragma once

// Rogue Company (0.60) SDK

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
// 0x04F8 (0x15A8 - 0x10B0)
class USub_Hero_ABP_MountedWeapon_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B8(0x0040)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x10F8(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1258(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x12E0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1320(0x00C0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                           // 0x13E0(0x01C0)
	class AKSCharacter*                                Character;                                                // 0x15A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
