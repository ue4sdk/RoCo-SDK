#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sub_Hero_ABP_Face_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C
// 0x1570 (0x2620 - 0x10B0)
class USub_Hero_ABP_Face_C : public UKSFaceAnimInst
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x10F0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x1178(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1248(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x12D0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_5;                           // 0x13A0(0x0170) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_4;                           // 0x1510(0x0170) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_3;                           // 0x1680(0x0170) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_2;                           // 0x17F0(0x0170) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned;                             // 0x1960(0x0170) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5;                        // 0x1AD0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                        // 0x1B28(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                        // 0x1B80(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x1BD8(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x1C30(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x1C88(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1D48(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1D88(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x1E48(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1ED0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1FA0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD;                                 // 0x2050(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2100(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendPoseNodeSkinned              AnimGraphNode_BlendPoseSkinned;                           // 0x21B0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x2288(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x2350(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x2388(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x23C0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x23F8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x24A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x24E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x25A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x25E0(0x0038) (CPF_NativeAccessSpecifierPublic)
	EKSEmotion                                         emotionTest;                                              // 0x2618(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsServer;                                                // 0x2619(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsLobby;                                                 // 0x261A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x261B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C");
		return ptr;
	}


	void ExecuteUbergraph_Sub_Hero_ABP_Face(int bpp__EntryPoint__pf);
	void AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
