#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterLobby_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C
// 0x13C9 (0x2469 - 0x10A0)
class UMasterLobby_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10A8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x10E0(0x0080)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x1160(0x0158)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x12B8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x12F0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x13A8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x13D0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x13F8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x14C0(0x0080)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                 // 0x1540(0x00F8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                   // 0x1638(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x1730(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x17F0(0x0030)
	bool                                               __CustomProperty_bIsLobby_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1820(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               __CustomProperty_bIsServer_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1821(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x1822(0x0006) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance;                                // 0x1828(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x18D0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1920(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x19C8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x19F0(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1A18(0x0110)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1B28(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1BE8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x1C18(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1C48(0x00A8)
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                        // 0x1CF0(0x05A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2290(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x22B8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x22E0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x23A0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x23D0(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x2400(0x0050)
	float                                              R_Prop_Lock_Alpha;                                        // 0x2450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              L_Prop_Lock_Alpha;                                        // 0x2454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsServer;                                                // 0x2458(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SkinUseCharacterScale;                                    // 0x2459(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x245A(0x0002) MISSED OFFSET
	struct FVector                                     CharacterScale;                                           // 0x245C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ChildPhysicsAssetEnable;                                  // 0x2468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Lobby_Unlock_LProp();
	void AnimNotify_Lobby_Unlock_RProp();
	void AnimNotify_Lobby_Lock_LProp();
	void AnimNotify_Lobby_Lock_RProp();
	void BlueprintInitializeAnimation();
	void Set_Skinned_Local_Parameters();
	void UpdateTurnInPlace(float DeltaSeconds);
	void ExecuteUbergraph_MasterLobby_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
