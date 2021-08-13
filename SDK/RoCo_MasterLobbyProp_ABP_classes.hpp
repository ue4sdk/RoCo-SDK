#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterLobbyProp_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MasterLobbyProp_ABP.MasterLobbyProp_ABP_C
// 0x0E49 (0x1239 - 0x03F0)
class UMasterLobbyProp_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03F8(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6;                             // 0x0438(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_6;                          // 0x0460(0x0160)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5;                             // 0x05C0(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x05E8(0x0160)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_3;                           // 0x0748(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x07F8(0x00B0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                           // 0x08A8(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4;                             // 0x0958(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x0980(0x0160)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x0AE0(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x0B08(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0C68(0x00B0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                             // 0x0D18(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x0DC8(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x0DF0(0x0160)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0F50(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x0F78(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x10D8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1118(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x11D8(0x0058)
	bool                                               Enable_RoguePose;                                         // 0x1230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Enable_WalkinPose;                                        // 0x1231(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x1232(0x0002) MISSED OFFSET
	float                                              WalkInStartTime;                                          // 0x1234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DeferredEnableWalkInPose;                                 // 0x1238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass MasterLobbyProp_ABP.MasterLobbyProp_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MasterLobbyProp_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
