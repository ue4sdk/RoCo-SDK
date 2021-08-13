#pragma once

// Rogue Company (0.6X) SDK

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
// 0x09A1 (0x0D91 - 0x03F0)
class UMaster_Melee_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0438(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0470(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x04A8(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x04D0(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0630(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x0670(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x0698(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x07F8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x0838(0x00C0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x08F8(0x0160)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0A58(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x0A80(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0BE0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0C20(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0CE0(0x00B0)
	bool                                               Is_Holstered;                                             // 0x0D90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

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
