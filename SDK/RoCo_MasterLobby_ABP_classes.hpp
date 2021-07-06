#pragma once

// Rogue Company (0.60) SDK

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
// 0x14C9 (0x2579 - 0x10B0)
class UMasterLobby_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x10F8(0x0088)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x1180(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x12E0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1320(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x13E0(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x1410(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1440(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1510(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                 // 0x1598(0x0100)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                   // 0x1698(0x0100)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x1798(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x1860(0x0038)
	bool                                               __CustomProperty_bIsLobby_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1898(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               __CustomProperty_bIsServer_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1899(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x189A(0x0006) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance;                                // 0x18A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x1950(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x19A8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1A58(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1A88(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1AB8(0x0118)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1BD0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1C98(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x1CD0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1D08(0x00B0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1DB8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                        // 0x1DC0(0x05B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2370(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x23A0(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x23D0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x2498(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x24D0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x2508(0x0058)
	float                                              R_Prop_Lock_Alpha;                                        // 0x2560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              L_Prop_Lock_Alpha;                                        // 0x2564(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsServer;                                                // 0x2568(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SkinUseCharacterScale;                                    // 0x2569(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x256A(0x0002) MISSED OFFSET
	struct FVector                                     CharacterScale;                                           // 0x256C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ChildPhysicsAssetEnable;                                  // 0x2578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

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
