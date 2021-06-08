#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Master_Melee_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Master_Melee_ABP.Master_Melee_ABP_C
// 0x0921 (0x0CB1 - 0x0390)
class UMaster_Melee_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0398(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x03D0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0400(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x0430(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x0450(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x05A8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x05E0(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x0600(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0758(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x0790(0x00B8)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x0848(0x0158)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x09A0(0x0020)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x09C0(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0B18(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0B50(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0C08(0x00A8)
	bool                                               Is_Holstered;                                             // 0x0CB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass Master_Melee_ABP.Master_Melee_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void Set_Weapon_State(EWeaponStateNew Weapon_State);
	void InitSetWeaponState(EWeaponStateNew NewWeaponState);
	void ExecuteUbergraph_Master_Melee_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
