#pragma once

// Rogue Company (0.59) SDK

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
// 0x1460 (0x2500 - 0x10A0)
class USub_Hero_ABP_Face_C : public UKSFaceAnimInst
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x10A0(0x0030) MISSED OFFSET
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x10D0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x1150(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1218(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x1298(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_5;                           // 0x1360(0x0168) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_4;                           // 0x14C8(0x0168) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_3;                           // 0x1630(0x0168) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_2;                           // 0x1798(0x0168) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned;                             // 0x1900(0x0168) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5;                        // 0x1A68(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                        // 0x1AB8(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                        // 0x1B08(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x1B58(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x1BA8(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x1BF8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1CB0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1CE8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x1DA0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1E20(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1EE8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD;                                 // 0x1F90(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2038(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendPoseNodeSkinned              AnimGraphNode_BlendPoseSkinned;                           // 0x20E0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x21B0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x2270(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x22A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x22D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x2300(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x23A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x23D8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x2498(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x24C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	EKSEmotion                                         emotionTest;                                              // 0x24F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsServer;                                                // 0x24F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsLobby;                                                 // 0x24FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x24FB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C"));
		return ptr;
	}


	void ExecuteUbergraph_Sub_Hero_ABP_Face(int bpp__EntryPoint__pf);
	void AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
