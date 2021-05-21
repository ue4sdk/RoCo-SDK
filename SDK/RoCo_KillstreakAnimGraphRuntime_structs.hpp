#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_KillstreakAnimGraphRuntime_enums.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_CoreUObject_classes.hpp"
#include "RoCo_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakAnimGraphRuntime.RecoilParams
// 0x0010
struct FRecoilParams
{
	struct FVector                                     PhaseOffset;                                              // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ERecoilStart>                          X;                                                        // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TEnumAsByte<ERecoilStart>                          Y;                                                        // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TEnumAsByte<ERecoilStart>                          Z;                                                        // 0x000E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilInfo
// 0x0060
struct FRecoilInfo
{
	float                                              TimeDurationPos;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeDurationRot;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRecoilParams                               RotParams;                                                // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LocAmplitude;                                             // 0x0030(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LocFrequency;                                             // 0x003C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRecoilParams                               LocParams;                                                // 0x0048(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                              // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                  // 0x005C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mirrored;                                                 // 0x005D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilProfile
// 0x01EC
struct FRecoilProfile
{
	struct FRecoilInfo                                 PelvisRecoil;                                             // 0x0000(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 SpineRecoil;                                              // 0x0060(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 NeckRecoil;                                               // 0x00C0(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 HandRecoil;                                               // 0x0120(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 RightClavicleRecoil;                                      // 0x0180(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Spine1RecoilAlpha;                                        // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Spine2RecoilAlpha;                                        // 0x01E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Spine3RecoilAlpha;                                        // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorPair
// 0x002C
struct FBoneMirrorPair
{
	struct FBoneReference                              BoneOne;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FBoneReference                              BoneTwo;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RotationFlipAxis;                                         // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorConfig
// 0x0020
struct FBoneMirrorConfig
{
	TArray<struct FBoneReference>                      UnpairedMirrorBones;                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBoneMirrorPair>                     PairedMirrorBones;                                        // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Mirror
// 0x0048 (0x0118 - 0x00D0)
struct FKSAnimNode_Mirror : public FAnimNode_SkeletalControlBase
{
	struct FBoneMirrorConfig                           BoneMirrorConfig;                                         // 0x00D0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	EPoseMirrorPlane                                   MirrorPlane;                                              // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAlternateMirroring;                                      // 0x00F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET
	struct FBoneMirrorConfig                           MirrorConfigCache;                                        // 0x00F8(0x0020) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimOrientationWarpDefinition
// 0x0038
struct FAnimOrientationWarpDefinition
{
	TEnumAsByte<EAxis>                                 YawRotationAxis;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseBoneSpaceForSpineWarp;                                 // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              OrientationAlpha;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      SpineBones;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBoneReference                              IkFootRoot;                                               // 0x0018(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IkFootBones;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_OrientationWarp
// 0x0048 (0x0118 - 0x00D0)
struct FKSAnimNode_OrientationWarp : public FAnimNode_SkeletalControlBase
{
	float                                              Angle;                                                    // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OrientationAlphaOverride;                                 // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAnimOrientationWarpDefinition              WarpSettings;                                             // 0x00D8(0x0038) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseOrientationAlphaOverride;                             // 0x0110(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Recoil
// 0x00E8 (0x01B8 - 0x00D0)
struct FKSAnimNode_Recoil : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              m_BoneToRecoil;                                           // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               m_bBoneSpaceRecoil;                                       // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              RotTimeToGo;                                              // 0x00E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PosTimeToGo;                                              // 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 m_Recoil;                                                 // 0x00EC(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               m_bApplyControl;                                          // 0x014C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              m_fBlendInTime;                                           // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_fBlendInRemainingTime;                                  // 0x0154(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     m_vBlendLoc;                                              // 0x0158(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    m_rBlendRot;                                              // 0x0164(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    RotOffset;                                                // 0x0170(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x017C(0x000C) MISSED OFFSET
	struct FVector                                     LocOffset;                                                // 0x0188(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0194(0x000C) MISSED OFFSET
	int                                                m_nFireImpulseCounter;                                    // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERecoilAllowMirror                                 m_eMirrorPermissions;                                     // 0x01A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPoseMirrorPlane                                   m_eMirrorPlane;                                           // 0x01A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x01A6(0x0002) MISSED OFFSET
	struct FVector                                     m_vRotationFlipAxis;                                      // 0x01A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_nInternalFireImpulseCounter;                            // 0x01B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimSpeedWarpDefinition
// 0x0048
struct FAnimSpeedWarpDefinition
{
	struct FBoneReference                              IkFootRootBone;                                           // 0x0000(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IkFootBones;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBoneReference                              PelvisBone;                                               // 0x0020(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              PelvisAdjustmentAlpha;                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PelvisAdjustmentMaxIterations;                            // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PelvisAdjustmentStiffness;                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PelvisAdjustmentDamping;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       DisableSpeedWarpCurveName;                                // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_SpeedWarp
// 0x0058 (0x0128 - 0x00D0)
struct FKSAnimNode_SpeedWarp : public FAnimNode_SkeletalControlBase
{
	float                                              SpeedScaling;                                             // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SpeedWarpForwardAxis;                                     // 0x00D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAnimSpeedWarpDefinition                    SpeedWarpSettings;                                        // 0x00E0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
