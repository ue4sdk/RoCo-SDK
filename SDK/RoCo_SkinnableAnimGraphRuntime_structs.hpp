#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_SelectiveAkAudioEventCommon_classes.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_AimOffsetSkinned
// 0x0028 (0x01B8 - 0x0190)
struct FAnimNode_AimOffsetSkinned : public FAnimNode_RotationOffsetBlendSpace
{
	struct FName                                       SkinKeyword;                                              // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             TargetBlendSpace;                                         // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                             DefaultBlendSpace;                                        // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendPoseNodeSkinned
// 0x0030 (0x00D0 - 0x00A0)
struct FAnimNode_BlendPoseNodeSkinned : public FAnimNode_PoseBlendNode
{
	struct FName                                       SkinKeyword;                                              // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPoseAsset*                                  TargetPose;                                               // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUsePoseAssetPinAsFallback;                               // 0x00B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UPoseAsset*                                  FallbackPose;                                             // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendSpacePlayerSkinned
// 0x0110 (0x01F8 - 0x00E8)
struct FAnimNode_BlendSpacePlayerSkinned : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   Source;                                                   // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SkinKeyword;                                              // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendFromSourceTime;                                      // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendToSourceTime;                                        // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0110(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0120(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x0150(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             TargetBlendSpace;                                         // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                             LastTargetBlendSpace;                                     // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLastHadTargetBlendSpace;                                 // 0x0190(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x0194(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RemainingBlendTime;                                       // 0x0198(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x01A0(0x0040) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bResetSourceOnActivation;                                 // 0x01E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x17];                                      // 0x01E1(0x0017) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BSpaceEvalSkinned
// 0x0110 (0x0200 - 0x00F0)
struct FAnimNode_BSpaceEvalSkinned : public FAnimNode_BlendSpaceEvaluator
{
	struct FPoseLink                                   Source;                                                   // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SkinKeyword;                                              // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendFromSourceTime;                                      // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendToSourceTime;                                        // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0110(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0128(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x0158(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             TargetBlendSpace;                                         // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                             LastTargetBlendSpace;                                     // 0x0190(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLastHadTargetBlendSpace;                                 // 0x0198(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x019C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RemainingBlendTime;                                       // 0x01A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x01A8(0x0040) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bResetSourceOnActivation;                                 // 0x01E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x17];                                      // 0x01E9(0x0017) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqEvalSkinned
// 0x0118 (0x0168 - 0x0050)
struct FAnimNode_SeqEvalSkinned : public FAnimNode_SequenceEvaluator
{
	struct FPoseLink                                   Source;                                                   // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SkinKeyword;                                              // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendFromSourceTime;                                      // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendToSourceTime;                                        // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0088(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x00B8(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           TargetSequence;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           LastTargetSequence;                                       // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseSequencePinAsFallback;                                // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLastHadTargetSequence;                                   // 0x00F9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x00FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RemainingBlendTime;                                       // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x0108(0x0040) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bResetSourceOnActivation;                                 // 0x0148(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           FallbackSequence;                                         // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0158(0x0010) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqCurveEvalSkinned
// 0x0010 (0x0178 - 0x0168)
struct FAnimNode_SeqCurveEvalSkinned : public FAnimNode_SeqEvalSkinned
{
	struct FName                                       CurveName;                                                // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinned
// 0x0120 (0x0158 - 0x0038)
struct FAnimNode_SequenceSkinned : public FAnimNode_AssetPlayerBase
{
	struct FPoseLink                                   Source;                                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SkinKeyword;                                              // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLoopAnimation;                                           // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PlayRateBasis;                                            // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartPosition;                                            // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendFromSourceTime;                                      // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendToSourceTime;                                        // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0080(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x00B0(0x0030) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           CurrentSequence;                                          // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           LastSequence;                                             // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLastHadSequence;                                         // 0x00F0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x00F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RemainingBlendTime;                                       // 0x00F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x0100(0x0040) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bResetSourceOnActivation;                                 // 0x0140(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0141(0x0017) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinnedCurvePlay
// 0x0008 (0x0160 - 0x0158)
struct FAnimNode_SequenceSkinnedCurvePlay : public FAnimNode_SequenceSkinned
{
	struct FName                                       CurveName;                                                // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SkinnableAnimGraphRuntime.SkinnedAnimInstanceProxy
// 0x0050 (0x0730 - 0x06E0)
struct FSkinnedAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x06E0(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
