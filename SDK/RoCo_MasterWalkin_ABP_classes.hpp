#pragma once

// Rogue Company (0.60) SDK

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
// 0x0F36 (0x1FD6 - 0x10A0)
class UMasterWalkin_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10A8(0x0038)
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                        // 0x10E0(0x05A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1680(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x16A8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x16D0(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1778(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1838(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x1868(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1898(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1940(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1968(0x0110)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1A78(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1B38(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1B68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1B90(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1BC0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1BF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1C20(0x0080)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x1CA0(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1DF8(0x0038)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1E30(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1E68(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1F20(0x0050)
	bool                                               ChildPhysicsAssetEnable;                                  // 0x1F70(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1F71(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x1F71(0x0050) UNKNOWN PROPERTY: NewVar_1
	struct FVector                                     CharacterScale;                                           // 0x1FC8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SkinUseCharacterScale;                                    // 0x1FD4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               StartPlaying;                                             // 0x1FD5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

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
	void Phase_Change(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void OnCinematicSubLevelEnabled_Event(const struct FString& CinematicSubLevelName);
	void ExecuteUbergraph_MasterWalkin_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
