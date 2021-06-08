#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SeekerBow_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SeekerBow_ABP.SeekerBow_ABP_C
// 0x0E80 (0x1210 - 0x0390)
class USeekerBow_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0398(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x03D0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0400(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5;                             // 0x0430(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_6;                          // 0x0450(0x0158)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x05A8(0x00B8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4;                             // 0x0660(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x0680(0x0158)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x07D8(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x07F8(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0950(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x0988(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x09A8(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0B00(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x0B38(0x00B8)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x0BF0(0x0158)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0D48(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x0D68(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0EC0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0EF8(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0FB0(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1058(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x10A8(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x11B8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x11E0(0x0028)
	bool                                               Is_in_Lobby_Viewer;                                       // 0x1208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Holstered;                                             // 0x1209(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	ECombatState                                       CombatState;                                              // 0x120A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x1];                                       // 0x120B(0x0001) MISSED OFFSET
	float                                              ArrowHide;                                                // 0x120C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass SeekerBow_ABP.SeekerBow_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetCombatState(ECombatState CombatState);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetWeaponState(class UKSWeaponComponent* OwningWeaponComponent, EWeaponStateNew OldState, EWeaponStateNew NewState);
	void AnimNotify_ArrowHide();
	void AnimNotify_ArrowUnHide();
	void ExecuteUbergraph_SeekerBow_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
