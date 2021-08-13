#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterWalkin_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MasterWalkin_ABP.MasterWalkin_ABP_C
// 0x1004 (0x20B4 - 0x10B0)
class UMasterWalkin_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B8(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x10F8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                        // 0x1100(0x05B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x16B0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x16E0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1710(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x17C0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1888(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x18C0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x18F8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x19A8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x19D8(0x0118)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1AF0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1BB8(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1BF0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1C20(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1C58(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1C90(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1CC8(0x0088)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x1D50(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1EB0(0x0040)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1EF0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1F30(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1FF0(0x0058)
	bool                                               ChildPhysicsAssetEnable;                                  // 0x2048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2049(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x2049(0x0050) UNKNOWN PROPERTY: NewVar_1
	struct FVector                                     CharacterScale;                                           // 0x20A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SkinUseCharacterScale;                                    // 0x20AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               StartPlaying;                                             // 0x20AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x20AE(0x0002) MISSED OFFSET
	float                                              WalkInStartTime;                                          // 0x20B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass MasterWalkin_ABP.MasterWalkin_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void Update_Skin_Dependent_Variables();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Set_Skin_Parameters();
	void BlueprintInitializeAnimation();
	void Phase_Change(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void OnCinematicSubLevelEnabled_Event(const struct FString& CinematicSubLevelName);
	void ExecuteUbergraph_MasterWalkin_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
