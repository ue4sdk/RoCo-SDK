#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PCM_Hero_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass PCM_Hero_ABP.PCM_Hero_ABP_C
// 0x217E0 (0x22890 - 0x10B0)
class UPCM_Hero_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_44;                              // 0x10B0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96;                         // 0x11C8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x1278(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_4;                        // 0x12B0(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_3;                        // 0x14B0(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x16B0(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_95;                         // 0x17A0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x1850(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                             // 0x1940(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_71;                         // 0x1980(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_70;                         // 0x1AE0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77;                          // 0x1C40(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76;                          // 0x1CC8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_94;                         // 0x1D50(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                             // 0x1E00(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                             // 0x1E40(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43;                              // 0x1F00(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_42;                              // 0x2018(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_30;                        // 0x2130(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_154;                          // 0x2200(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_29;                        // 0x2238(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_56;                          // 0x2308(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_153;                          // 0x23D0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16;                                    // 0x2408(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_152;                          // 0x2460(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41;                              // 0x2498(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_55;                          // 0x25B0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_40;                              // 0x2678(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_39;                              // 0x2790(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38;                              // 0x28A8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37;                              // 0x29C0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_28;                        // 0x2AD8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_54;                          // 0x2BA8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_151;                          // 0x2C70(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_53;                          // 0x2CA8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_93;                         // 0x2D70(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92;                         // 0x2E20(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15;                                    // 0x2ED0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_14;                                    // 0x2F28(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_52;                          // 0x2F80(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_150;                          // 0x3048(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_149;                          // 0x3080(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_91;                         // 0x30B8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_33;                   // 0x3168(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_33;                   // 0x3198(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_36;                              // 0x31C8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_32;                   // 0x32E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_4;                                   // 0x3310(0x01A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35;                              // 0x34B0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34;                              // 0x35C8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33;                              // 0x36E0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90;                         // 0x37F8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_32;                   // 0x38A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_31;                   // 0x38D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_89;                         // 0x3908(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_30;                   // 0x39B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_31;                   // 0x39E8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88;                         // 0x3A18(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x3AC8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                               // 0x3B00(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x3BA0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75;                          // 0x3BE0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x3C68(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                             // 0x3CA8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_StringMantlesTogether_461224144FFC5A148A9487A371F95429;// 0x3D68(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3D69(0x0003) MISSED OFFSET
	float                                              __CustomProperty_Max2StoryMantleHt_461224144FFC5A148A9487A371F95429;// 0x3D6C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              __CustomProperty_MaxMantleHt_461224144FFC5A148A9487A371F95429;// 0x3D70(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x3D74(0x0004) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_4;                              // 0x3D78(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                         // 0x3E28(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51;                          // 0x3EE8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_EnableLayeredHandAdditives_E3950B524F93AEA4F112E2B3A71E8E86;// 0x3FB0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_UseHuntingRifleHold_E3950B524F93AEA4F112E2B3A71E8E86;// 0x3FB1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_Enable_Zipline_Eng_Aims_E3950B524F93AEA4F112E2B3A71E8E86;// 0x3FB2(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x5];                                       // 0x3FB3(0x0005) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_LinkedAnimGraph_2;                          // 0x3FB8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_14;                        // 0x4068(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_13;                        // 0x4228(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_12;                        // 0x43E8(0x01C0) (CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               __CustomProperty_MeleeLowerBodyDirection_3741820D49F2DBC1518975A785322FAF;// 0x45A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bEnableMeleeLowerBody_3741820D49F2DBC1518975A785322FAF;// 0x45A9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bCanTransitionDirections_3741820D49F2DBC1518975A785322FAF;// 0x45AA(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_PrototypeLocomotionGraphEnable_3741820D49F2DBC1518975A785322FAF;// 0x45AB(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_MasterWeaponIsGrenade_3741820D49F2DBC1518975A785322FAF;// 0x45AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x45AD(0x0003) MISSED OFFSET
	float                                              __CustomProperty_CachedPivotAngle_3741820D49F2DBC1518975A785322FAF;// 0x45B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              __CustomProperty_Cached_Stop_Angle_3741820D49F2DBC1518975A785322FAF;// 0x45B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_Dodge_Rolling_BP_3741820D49F2DBC1518975A785322FAF;// 0x45B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x45B9(0x0003) MISSED OFFSET
	float                                              __CustomProperty_Cached_Angle_3741820D49F2DBC1518975A785322FAF;// 0x45BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_Starting_a_Pivot_3741820D49F2DBC1518975A785322FAF;// 0x45C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_StringMantlesTogether_3741820D49F2DBC1518975A785322FAF;// 0x45C1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x2];                                       // 0x45C2(0x0002) MISSED OFFSET
	float                                              __CustomProperty_MaxMantleHt_3741820D49F2DBC1518975A785322FAF;// 0x45C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_3;                              // 0x45C8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_87;                         // 0x4678(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_13;                                    // 0x4728(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_12;                                    // 0x4780(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32;                              // 0x47D8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_27;                        // 0x48F0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_148;                          // 0x49C0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_50;                          // 0x49F8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_147;                          // 0x4AC0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_30;                   // 0x4AF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31;                              // 0x4B28(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x4C40(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x4C78(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x4CB0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x4CE8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x4D20(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_69;                         // 0x4D58(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74;                          // 0x4EB8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86;                         // 0x4F40(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73;                          // 0x4FF0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_68;                         // 0x5078(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_67;                         // 0x51D8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72;                          // 0x5338(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_66;                         // 0x53C0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71;                          // 0x5520(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_65;                         // 0x55A8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70;                          // 0x5708(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                         // 0x5790(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x5850(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_64;                         // 0x5890(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69;                          // 0x59F0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68;                          // 0x5A78(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_63;                         // 0x5B00(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67;                          // 0x5C60(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66;                          // 0x5CE8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_62;                         // 0x5D70(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65;                          // 0x5ED0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85;                         // 0x5F58(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_61;                         // 0x6008(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_60;                         // 0x6168(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64;                          // 0x62C8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_59;                         // 0x6350(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_58;                         // 0x64B0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63;                          // 0x6610(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62;                          // 0x6698(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_57;                         // 0x6720(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84;                         // 0x6880(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_83;                         // 0x6930(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_82;                         // 0x69E0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                         // 0x6A90(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x6B50(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61;                          // 0x6B90(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x6C18(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60;                          // 0x6C58(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x6CE0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x6D20(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_30;                              // 0x6DE0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81;                         // 0x6EF8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80;                         // 0x6FA8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_49;                          // 0x7058(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_79;                         // 0x7120(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_11;                                    // 0x71D0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78;                         // 0x7228(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_29;                              // 0x72D8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77;                         // 0x73F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_48;                          // 0x74A0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76;                         // 0x7568(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_47;                          // 0x7618(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75;                         // 0x76E0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_10;                                    // 0x7790(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_146;                          // 0x77E8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_46;                          // 0x7820(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74;                         // 0x78E8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_73;                         // 0x7998(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_29;                   // 0x7A48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_28;                              // 0x7A78(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_29;                   // 0x7B90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_26;                        // 0x7BC0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_45;                          // 0x7C90(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_145;                          // 0x7D58(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_144;                          // 0x7D90(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_143;                          // 0x7DC8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_44;                          // 0x7E00(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27;                              // 0x7EC8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_28;                   // 0x7FE0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_28;                   // 0x8010(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_142;                          // 0x8040(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_26;                              // 0x8078(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72;                         // 0x8190(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_27;                   // 0x8240(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_26;                   // 0x8270(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71;                         // 0x82A0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25;                              // 0x8350(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_27;                   // 0x8468(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26;                   // 0x8498(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24;                              // 0x84C8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23;                              // 0x85E0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_25;                   // 0x86F8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_25;                   // 0x8728(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_11;                        // 0x8758(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_141;                          // 0x8918(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_25;                        // 0x8950(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_140;                          // 0x8A20(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_6;                   // 0x8A58(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_24;                        // 0x8B38(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_43;                          // 0x8C08(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70;                         // 0x8CD0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_56;                         // 0x8D80(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59;                          // 0x8EE0(0x0088) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x8];                                       // 0x8F68(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_3;                                   // 0x8F70(0x01A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_139;                          // 0x9110(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_42;                          // 0x9148(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_12;                                // 0x9210(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_41;                          // 0x93D0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_138;                          // 0x9498(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_137;                          // 0x94D0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6;                 // 0x9508(0x0198) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_40;                          // 0x96A0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_136;                          // 0x9768(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5;                 // 0x97A0(0x0198) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                         // 0x9938(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                 // 0x99F8(0x0198) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                 // 0x9B90(0x0198) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_10;                             // 0x9D28(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4;                                 // 0x9E00(0x0100) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3;                                 // 0x9F00(0x0100) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                 // 0xA000(0x0100) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                   // 0xA100(0x0100) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_39;                          // 0xA200(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_135;                          // 0xA2C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_134;                          // 0xA300(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_38;                          // 0xA338(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_24;                   // 0xA400(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_133;                          // 0xA430(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_132;                          // 0xA468(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_24;                   // 0xA4A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_37;                          // 0xA4D0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_69;                         // 0xA598(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_131;                          // 0xA648(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_36;                          // 0xA680(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_23;                   // 0xA748(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_130;                          // 0xA778(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_129;                          // 0xA7B0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_23;                   // 0xA7E8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_35;                          // 0xA818(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_34;                          // 0xA8E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_128;                          // 0xA9A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0xA9E0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0xAA18(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_55;                         // 0xAA50(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58;                          // 0xABB0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_54;                         // 0xAC38(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                          // 0xAD98(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68;                         // 0xAE20(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0xAED0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0xAF10(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_2;                        // 0xB000(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0xB200(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned;                          // 0xB2F0(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67;                         // 0xB4F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0xB5A0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0xB5E0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_33;                          // 0xB6A0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_5;                   // 0xB768(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_127;                          // 0xB848(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_126;                          // 0xB880(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4;                   // 0xB8B8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_23;                        // 0xB998(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_22;                        // 0xBA68(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_32;                          // 0xBB38(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_31;                          // 0xBC00(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_125;                          // 0xBCC8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_124;                          // 0xBD00(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_11;                                // 0xBD38(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_22;                   // 0xBEF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_22;                   // 0xBF28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_10;                                // 0xBF58(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_123;                          // 0xC118(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_122;                          // 0xC150(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22;                              // 0xC188(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                              // 0xC2A0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_121;                          // 0xC3B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9;                                     // 0xC3F0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_120;                          // 0xC448(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_30;                          // 0xC480(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_119;                          // 0xC548(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_118;                          // 0xC580(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_66;                         // 0xC5B8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0xC668(0x0198) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Mirror                          KSAnimGraphNode_Mirror;                                   // 0xC800(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_21;                   // 0xC920(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_21;                   // 0xC950(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_65;                         // 0xC980(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_117;                          // 0xCA30(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_116;                          // 0xCA68(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_29;                          // 0xCAA0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8;                                     // 0xCB68(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_21;                        // 0xCBC0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_20;                   // 0xCC90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_9;                                 // 0xCCC0(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_8;                                 // 0xCE80(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_7;                                 // 0xD040(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_6;                                 // 0xD200(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20;                        // 0xD3C0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_5;                                 // 0xD490(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_4;                                 // 0xD650(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_3;                                 // 0xD810(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64;                         // 0xD9D0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_20;                   // 0xDA80(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_115;                          // 0xDAB0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_28;                          // 0xDAE8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2;                                   // 0xDBB0(0x01A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                     // 0xDD50(0x01A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63;                         // 0xDEF0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_19;                   // 0xDFA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_19;                   // 0xDFD0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_18;                   // 0xE000(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_2;                                 // 0xE030(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil;                                   // 0xE1F0(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62;                         // 0xE3B0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17;                   // 0xE460(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_19;                        // 0xE490(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_27;                          // 0xE560(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_114;                          // 0xE628(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_53;                         // 0xE660(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                            // 0xE7C0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_26;                          // 0xE898(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                          // 0xE960(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25;                          // 0xE9E8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_113;                          // 0xEAB0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_112;                          // 0xEAE8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                         // 0xEB20(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_111;                          // 0xEBE0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_110;                          // 0xEC18(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24;                          // 0xEC50(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_61;                         // 0xED18(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23;                          // 0xEDC8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_16;                   // 0xEE90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_109;                          // 0xEEC0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18;                   // 0xEEF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_108;                          // 0xEF28(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17;                   // 0xEF60(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22;                          // 0xEF90(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15;                   // 0xF058(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_107;                          // 0xF088(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16;                   // 0xF0C0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_106;                          // 0xF0F0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_15;                   // 0xF128(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_105;                          // 0xF158(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_104;                          // 0xF190(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_21;                          // 0xF1C8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_103;                          // 0xF290(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_102;                          // 0xF2C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_101;                          // 0xF300(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_100;                          // 0xF338(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                         // 0xF370(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                          // 0xF430(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                          // 0xF4B8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                          // 0xF540(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_60;                         // 0xF5C8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59;                         // 0xF678(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58;                         // 0xF728(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                          // 0xF7D8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                          // 0xF860(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                          // 0xF8E8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_99;                           // 0xF970(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_20;                          // 0xF9A8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_98;                           // 0xFA70(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_52;                         // 0xFAA8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_51;                         // 0xFC08(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_50;                         // 0xFD68(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_49;                         // 0xFEC8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_48;                         // 0x10028(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_47;                         // 0x10188(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_18;                        // 0x102E8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57;                         // 0x103B8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_97;                           // 0x10468(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_96;                           // 0x104A0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95;                           // 0x104D8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17;                        // 0x10510(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94;                           // 0x105E0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93;                           // 0x10618(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                            // 0x10650(0x00D8) (CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bIsLobby_9FDD1A7146055937A755E6ACD99BC318;// 0x10728(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bIsServer_9FDD1A7146055937A755E6ACD99BC318;// 0x10729(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x6];                                       // 0x1072A(0x0006) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_2;                              // 0x10730(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_19;                          // 0x107E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_92;                           // 0x108A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_91;                           // 0x108E0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_90;                           // 0x10918(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56;                         // 0x10950(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89;                           // 0x10A00(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88;                           // 0x10A38(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7;                                     // 0x10A70(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87;                           // 0x10AC8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86;                           // 0x10B00(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85;                           // 0x10B38(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84;                           // 0x10B70(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55;                         // 0x10BA8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54;                         // 0x10C58(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_46;                         // 0x10D08(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                          // 0x10E68(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_45;                         // 0x10EF0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                          // 0x11050(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83;                           // 0x110D8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                          // 0x11110(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82;                           // 0x111D0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53;                         // 0x11208(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_81;                           // 0x112B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_16;                        // 0x112F0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80;                           // 0x113C0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                              // 0x113F8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_14;                   // 0x11510(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                              // 0x11540(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_79;                           // 0x11658(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_14;                   // 0x11690(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_18;                          // 0x116C0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_17;                          // 0x11788(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x11850(0x0198) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78;                           // 0x119E8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16;                          // 0x11A20(0x00C8) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x8];                                       // 0x11AE8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                        // 0x11AF0(0x05B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_13;                   // 0x120A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77;                           // 0x120D0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_13;                   // 0x12108(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD_2;                               // 0x12138(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76;                           // 0x121E8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_75;                           // 0x12220(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x12258(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x12290(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x122C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x12300(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x12338(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x12370(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x123A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x123E0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x12418(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x12450(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x12488(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x124C0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x124F8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x12530(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x12568(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x125A0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x125D8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_44;                         // 0x12610(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9;                              // 0x12770(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_52;                         // 0x12848(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8;                              // 0x128F8(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_51;                         // 0x129D0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7;                              // 0x12A80(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50;                         // 0x12B58(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_6;                              // 0x12C08(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_49;                         // 0x12CE0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_48;                         // 0x12D90(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                          // 0x12E40(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                          // 0x12EC8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                          // 0x12F50(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                          // 0x12FD8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_43;                         // 0x13060(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_42;                         // 0x131C0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_41;                         // 0x13320(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_40;                         // 0x13480(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5;                              // 0x135E0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_47;                         // 0x136B8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                              // 0x13768(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46;                         // 0x13840(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                              // 0x138F0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45;                         // 0x139C8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                              // 0x13A78(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_44;                         // 0x13B50(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x13C00(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_39;                         // 0x13CC0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_38;                         // 0x13E20(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_37;                         // 0x13F80(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                          // 0x140E0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                          // 0x14168(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                          // 0x141F0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x14278(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x14300(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x143C0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x14400(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_36;                         // 0x14488(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_35;                         // 0x145E8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x14748(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_34;                         // 0x147D0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x14930(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_33;                         // 0x149B8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43;                         // 0x14B18(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x14BC8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x14C50(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x14CD8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x14D60(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_32;                         // 0x14DE8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_31;                         // 0x14F48(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_30;                         // 0x150A8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_29;                         // 0x15208(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x15368(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                              // 0x15428(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_12;                   // 0x15540(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12;                   // 0x15570(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x155A0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x15628(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_8;                        // 0x156E8(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_11;                   // 0x15808(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_11;                   // 0x15838(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_7;                        // 0x15868(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10;                   // 0x15988(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_10;                   // 0x159B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x159E8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x15A28(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x15AB0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_28;                         // 0x15AF0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x15C50(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x15CD8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x15D18(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x15DA0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x15E28(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x15EB0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                              // 0x15F38(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9;                    // 0x16050(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                              // 0x16080(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x16198(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8;                    // 0x16258(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_6;                        // 0x16288(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_5;                        // 0x163A8(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_4;                        // 0x164C8(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                              // 0x165E8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7;                    // 0x16700(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                              // 0x16730(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                    // 0x16848(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_3;                        // 0x16878(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9;                    // 0x16998(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8;                    // 0x169C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7;                    // 0x169F8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                    // 0x16A28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_27;                         // 0x16A58(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_26;                         // 0x16BB8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_25;                         // 0x16D18(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_24;                         // 0x16E78(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x16FD8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_23;                         // 0x17018(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x17178(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x17200(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x17240(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42;                         // 0x17300(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74;                           // 0x173B0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                              // 0x173E8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_15;                          // 0x17500(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73;                           // 0x175C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41;                         // 0x17600(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72;                           // 0x176B0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_3;                   // 0x176E8(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x177C8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_22;                         // 0x17850(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_14;                          // 0x179B0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_2;                        // 0x17A78(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71;                           // 0x17B98(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x17BD0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x17C00(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40;                         // 0x17C30(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70;                           // 0x17CE0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                              // 0x17D18(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                              // 0x17E30(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x17F48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x17F78(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39;                         // 0x17FA8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp;                          // 0x18058(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                              // 0x18178(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x18290(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69;                           // 0x183A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x183E0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x184F8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68;                           // 0x18610(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38;                         // 0x18648(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13;                          // 0x186F8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_15;                        // 0x187C0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67;                           // 0x18890(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37;                         // 0x188C8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66;                           // 0x18978(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65;                           // 0x189B0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_14;                        // 0x189E8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64;                           // 0x18AB8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_36;                         // 0x18AF0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63;                           // 0x18BA0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_62;                           // 0x18BD8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61;                           // 0x18C10(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60;                           // 0x18C48(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_35;                         // 0x18C80(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_12;                          // 0x18D30(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_59;                           // 0x18DF8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_58;                           // 0x18E30(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57;                           // 0x18E68(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34;                         // 0x18EA0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_11;                          // 0x18F50(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56;                           // 0x19018(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55;                           // 0x19050(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_13;                        // 0x19088(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x19158(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x19270(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x192A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x192D0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x193E8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                          // 0x19500(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_54;                           // 0x195C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53;                           // 0x19600(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52;                           // 0x19638(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51;                           // 0x19670(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD;                                 // 0x196A8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50;                           // 0x19758(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                           // 0x19790(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33;                         // 0x19858(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_2;                   // 0x19908(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49;                           // 0x199E8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                     // 0x19A20(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x19A78(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32;                         // 0x19B00(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x19BB0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                           // 0x19C08(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48;                           // 0x19CD0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47;                           // 0x19D08(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x19D40(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_31;                         // 0x19D98(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x19E48(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_10;                        // 0x19F08(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_9;                         // 0x1A0C8(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_8;                         // 0x1A288(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46;                           // 0x1A448(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45;                           // 0x1A480(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44;                           // 0x1A4B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30;                         // 0x1A4F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_LinkedAnimGraph;                            // 0x1A5A0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43;                           // 0x1A650(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42;                           // 0x1A688(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x1A6C0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_7;                         // 0x1A718(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x1A8D8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1A9F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1AA20(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29;                         // 0x1AA50(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_21;                         // 0x1AB00(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x1AC60(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28;                         // 0x1ACE8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x1AD98(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1ADF0(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41;                           // 0x1AE48(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel;                         // 0x1AE80(0x0078) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                            // 0x1AEF8(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x1AFD0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_27;                         // 0x1B090(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26;                         // 0x1B140(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25;                         // 0x1B1F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x1B2A0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_20;                         // 0x1B328(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x1B488(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_19;                         // 0x1B510(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x1B670(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_18;                         // 0x1B6F8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x1B858(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_17;                         // 0x1B8E0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x1BA40(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_16;                         // 0x1BAC8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x1BC28(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_15;                         // 0x1BCB0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24;                         // 0x1BE10(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23;                         // 0x1BEC0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_12;                        // 0x1BF70(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40;                           // 0x1C040(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39;                           // 0x1C078(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x1C0B0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_6;                         // 0x1C188(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_5;                         // 0x1C348(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38;                           // 0x1C508(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37;                           // 0x1C540(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x1C578(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                        // 0x1C640(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36;                           // 0x1C710(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22;                         // 0x1C748(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                        // 0x1C7F8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35;                           // 0x1C8C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_34;                           // 0x1C900(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                         // 0x1C938(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21;                         // 0x1CA08(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20;                         // 0x1CAB8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19;                         // 0x1CB68(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_33;                           // 0x1CC18(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32;                           // 0x1CC50(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                         // 0x1CC88(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31;                           // 0x1CD58(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18;                         // 0x1CD90(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x1CE40(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30;                           // 0x1CF18(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x1CF50(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29;                           // 0x1D018(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17;                         // 0x1D050(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16;                         // 0x1D100(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15;                         // 0x1D1B0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x1D260(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_14;                         // 0x1D2E8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x1D448(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_13;                         // 0x1D4D0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1D630(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_12;                         // 0x1D6B8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x1D818(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_11;                         // 0x1D8A0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x1DA00(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_10;                         // 0x1DA88(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x1DBE8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_9;                          // 0x1DC70(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x1DDD0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                         // 0x1DE90(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28;                           // 0x1DF60(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14;                         // 0x1DF98(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                         // 0x1E048(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27;                           // 0x1E118(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x1E150(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                         // 0x1E218(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_26;                           // 0x1E2C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                         // 0x1E300(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                         // 0x1E3D0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_25;                           // 0x1E480(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                           // 0x1E4B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x1E4F0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x1E5C0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x1E5F8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1E630(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1E668(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8;                          // 0x1E6A0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x1E800(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x1E888(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7;                          // 0x1E8C8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1EA28(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x1EAB0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_6;                          // 0x1EAF0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1EC50(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1ECD8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x1ED18(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1EE78(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1EF00(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1EF40(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x1F000(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x1F0B0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x1F180(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                           // 0x1F248(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_4;                         // 0x1F280(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                           // 0x1F440(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_3;                         // 0x1F478(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                           // 0x1F638(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                           // 0x1F670(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                           // 0x1F6A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                           // 0x1F6E0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x1F718(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1F7C8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x1F850(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                           // 0x1F918(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x1F950(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1FA00(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1FB18(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1FB48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x1FB78(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1FCD8(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x1FD60(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x1FEC0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x1FF70(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x1FFA8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x1FFE0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x20018(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x20050(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x20088(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x20138(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x201C0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x20320(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x203D0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x20458(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x205B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x205F0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x20628(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x206F8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x207A8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x20858(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x20928(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x209F0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned;                             // 0x20AC8(0x0170) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x20C38(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_2;                         // 0x20CC0(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x20E80(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x20F60(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                           // 0x20F98(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x21158(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x21190(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x211C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x21200(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x21238(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x21270(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x212A8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance;                                // 0x212E0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x21390(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x21458(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x21508(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x21540(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x215F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x216A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x216C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x216F0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x21808(0x0108) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x21910(0x0040) (CPF_NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x21950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Movement_Direction;                                       // 0x21954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Aim_Pitch;                                                // 0x21958(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Aim_Yaw;                                                  // 0x2195C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Save_Last_Yaw;                                            // 0x21960(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_Value;                                               // 0x21964(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                Character;                                                // 0x21968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ADS_Rotator;                                              // 0x21970(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              _1P_Aim_Pitch;                                            // 0x2197C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              _1P_Aim_Yaw;                                              // 0x21980(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Step_Type;                                                // 0x21984(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Material_Type;                                            // 0x2198C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Shoe_Type;                                                // 0x21994(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Clothing_Type;                                            // 0x2199C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              _1p_Pitch_Offset;                                         // 0x219A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turning_the_Character;                                    // 0x219A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_Left;                                                // 0x219A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_Right;                                               // 0x219AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x1];                                       // 0x219AB(0x0001) MISSED OFFSET
	struct FName                                       Roll_Direction;                                           // 0x219AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x4];                                       // 0x219B4(0x0004) MISSED OFFSET
	class UAnimMontage*                                Cached_Dodge_Roll;                                        // 0x219B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Desired_Component_Yaw_Old;                                // 0x219C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_In_Place_Recovery_Speed;                             // 0x219C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              World_Space_Aim_Yaw;                                      // 0x219C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_In_Place_Active;                                     // 0x219CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x219CD(0x0003) MISSED OFFSET
	struct FRotator                                    Applied_Turn_In_Place_Rotator_Old;                        // 0x219D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    World_Turn_In_Place_Rotator_Old;                          // 0x219DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              MantleTimer;                                              // 0x219E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MantleTimerMax;                                           // 0x219EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Control_Rotation;                                         // 0x219F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x219FC(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Moving_A;                                           // 0x21A00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Moving_A;                                            // 0x21A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Pivot;                                                    // 0x21A10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Current_Direction_Pivot;                                  // 0x21A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               TurnWounded;                                              // 0x21A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TurnInPlaceMinThreshold_1;                                // 0x21A28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TurnValue;                                                // 0x21A2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Current_Stop_Moving_Crouch;                               // 0x21A30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           current_direction_Pivot_crouch;                           // 0x21A38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Pivot_crouch;                                             // 0x21A40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponADSSpeedModifier;                                   // 0x21A48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponWalkSpeedModifier;                                  // 0x21A4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentMaxSpeed;                                          // 0x21A50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               _3PADS;                                                   // 0x21A54(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x21A55(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           Current_Stop_Moving;                                      // 0x21A58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_moving_Crouch_B;                                    // 0x21A60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Moving_B;                                           // 0x21A68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_Angle;                                             // 0x21A70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x4];                                       // 0x21A74(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Start_moving_Crouch_A;                                    // 0x21A78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawInterpSpeed;                                        // 0x21A80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanResetAimYaw;                                          // 0x21A84(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x3];                                       // 0x21A85(0x0003) MISSED OFFSET
	float                                              AimYawInterpSpeedTarget;                                  // 0x21A88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x4];                                       // 0x21A8C(0x0004) MISSED OFFSET
	struct FTimerHandle                                AimYawResetTimer;                                         // 0x21A90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_Stop_Angle;                                        // 0x21A98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x4];                                       // 0x21A9C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Stop_Moving_B;                                            // 0x21AA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Moving_Crouch_A;                                     // 0x21AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Moving_Crouch_B;                                     // 0x21AB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              World_Height;                                             // 0x21AB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CharZatStart;                                             // 0x21ABC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMagThrow;                                               // 0x21AC0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0xF];                                       // 0x21AC0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Turn_in_place_Error_Tolerance;                            // 0x21AD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawCache;                                              // 0x21AD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsAdjustingAimYaw;                                       // 0x21AD8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Dodge_Rolling_BP;                                         // 0x21AD9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Left_PropB_Scale;                                         // 0x21ADA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Right_PropB_Scale;                                        // 0x21ADB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TabletScaleAlphaOLD;                                      // 0x21ADC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSWeaponComponent*                          Master_Weapon_Ref;                                        // 0x21AE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Randomized_Int;                                           // 0x21AE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x4];                                       // 0x21AEC(0x0004) MISSED OFFSET
	TArray<class UMaster_WeaponComponent_C*>           Back_Holster_Inventory;                                   // 0x21AF0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInteraction;                                             // 0x21B00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x3];                                       // 0x21B01(0x0003) MISSED OFFSET
	float                                              Weapon_Vs_World_Alpha;                                    // 0x21B04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               locoStartDir;                                             // 0x21B08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x7];                                       // 0x21B09(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Disable_Moving_A;                                   // 0x21B10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Disable_Moving_B;                                   // 0x21B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Disable_Moving;                                     // 0x21B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Disable_Moving_A;                                    // 0x21B28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Disable_Moving_B;                                    // 0x21B30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Current_Stop_Disable_Moving;                              // 0x21B38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           CurrentDisablePivot;                                      // 0x21B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           DisablePivot;                                             // 0x21B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawDelta;                                              // 0x21B50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x4];                                       // 0x21B54(0x0004) MISSED OFFSET
	class UAnimMontage*                                InteractionMontage;                                       // 0x21B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InitialDistanceFromJumpLand;                              // 0x21B60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               locoStopDir;                                              // 0x21B64(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x3];                                       // 0x21B65(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           Post_Pivot;                                               // 0x21B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Post_Pivot_Crouch;                                        // 0x21B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Post_Disable_Pivot;                                       // 0x21B78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Starting_a_Pivot;                                         // 0x21B80(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x3];                                       // 0x21B81(0x0003) MISSED OFFSET
	float                                              IKHandOffsetL;                                            // 0x21B84(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               Vault_Anim;                                               // 0x21B88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinMantleHt;                                              // 0x21B90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxMantleHt;                                              // 0x21B94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Min2StoryMantleHt;                                        // 0x21B98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Max2StoryMantleHt;                                        // 0x21B9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreIdleWeaponUnhide;                                  // 0x21BA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData25[0x7];                                       // 0x21BA1(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               Cached_Pickup_Sound;                                      // 0x21BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StringMantlesTogether;                                    // 0x21BB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData26[0x7];                                       // 0x21BB1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Moving_Melee_Lower_Body_A;                          // 0x21BB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Moving_Melee_Lower_Body_B;                          // 0x21BC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeLowerBodyStartTwist;                                 // 0x21BC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKHandOffsetR;                                            // 0x21BCC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKFootOffsetL;                                            // 0x21BD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKFootOffsetR;                                            // 0x21BD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKRootOffset;                                             // 0x21BD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableIKRootFix;                                          // 0x21BDC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsMartialArtistTarget;                                    // 0x21BDD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData27[0x2];                                       // 0x21BDE(0x0002) MISSED OFFSET
	struct FVector                                     LHand_MantlePoleVector;                                   // 0x21BE0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RHand_MantlePoleVector;                                   // 0x21BEC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableAimArray;                                          // 0x21BF8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CatchingWeapon;                                           // 0x21BF9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData28[0x2];                                       // 0x21BFA(0x0002) MISSED OFFSET
	struct FRotator                                    StoppedRootRotation;                                      // 0x21BFC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     StoppedRootLocation;                                      // 0x21C08(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RagdollToMontageTime;                                     // 0x21C14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               GetUpSequence;                                            // 0x21C18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                GetUpMontage;                                             // 0x21C20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData29[0x8];                                       // 0x21C28(0x0008) MISSED OFFSET
	struct FTransform                                  RagdollPelvisTransform;                                   // 0x21C30(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              RagdollPelvisTransformAlpha;                              // 0x21C60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableRagdollPelvisTransform;                             // 0x21C64(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData30[0x3];                                       // 0x21C65(0x0003) MISSED OFFSET
	float                                              MartialArtistChargeTime;                                  // 0x21C68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData31[0x4];                                       // 0x21C6C(0x0004) MISSED OFFSET
	class UAnimMontage*                                DownedMontage;                                            // 0x21C70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Walking_B;                                          // 0x21C78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Walking_A;                                          // 0x21C80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Disable_upper_body_lands;                                 // 0x21C88(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData32[0x7];                                       // 0x21C89(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Eng_Stand_A;                                        // 0x21C90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Eng_Stand_B;                                        // 0x21C98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Stand_A;                                         // 0x21CA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Stand_B;                                         // 0x21CA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Stand;                                           // 0x21CB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Eng_Crouch_A;                                       // 0x21CB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Eng_Crouch_B;                                       // 0x21CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Crouch_A;                                        // 0x21CC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Crouch_B;                                        // 0x21CD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Crouch;                                          // 0x21CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWantsToNoseDive;                                         // 0x21CE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanChangeNoseDiveState;                                  // 0x21CE1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFreeFallIntroComplete;                                   // 0x21CE2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData33[0x1];                                       // 0x21CE3(0x0001) MISSED OFFSET
	float                                              FreeFallDiveAlpha;                                        // 0x21CE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Turn_Eng;                                                 // 0x21CE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Turn_Eng_Crouch;                                          // 0x21CF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCrouchingTransitioned1P;                                 // 0x21CF8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableTurnInPlaceCounterRotate;                          // 0x21CF9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsStill_OLD;                                             // 0x21CFA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldSplitUpperBody_1;                                  // 0x21CFB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AdditiveLandsAlphaOLD;                                    // 0x21CFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsInPowerSlideBP;                                        // 0x21D00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData34[0x3];                                       // 0x21D01(0x0003) MISSED OFFSET
	float                                              ExitPowerSlideBlendTime;                                  // 0x21D04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    RootMantleWallFacing;                                     // 0x21D08(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsUsingBruteStrength;                                    // 0x21D14(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData35[0x3];                                       // 0x21D15(0x0003) MISSED OFFSET
	float                                              HitDirectionPrimary_Fwd;                                  // 0x21D18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitDirectionPrimary_Right;                                // 0x21D1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitDirectionSecondary_Fwd;                                // 0x21D20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitDirectionSecondary_Right;                              // 0x21D24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CachedPivotAngle;                                         // 0x21D28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 Melee_Recoil;                                             // 0x21D2C(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Melee_Recoil_Counter;                                     // 0x21D8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitReactionAlpha;                                         // 0x21D90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Any_Grip_Override_Active;                                 // 0x21D94(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Left_Hand_Grip_Override;                                  // 0x21D95(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Right_Hand_Grip_Override;                                 // 0x21D96(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData36[0x1];                                       // 0x21D97(0x0001) MISSED OFFSET
	struct FVector                                     EngClavOffset;                                            // 0x21D98(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsHitReacting;                                           // 0x21DA4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsServer;                                                // 0x21DA5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseCollar;                                               // 0x21DA6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData37[0x1];                                       // 0x21DA7(0x0001) MISSED OFFSET
	float                                              CollarDirection;                                          // 0x21DA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Use_EngHeadMod;                                           // 0x21DAC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Master_Weapon_Is_Grenade;                                 // 0x21DAD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData38[0x2];                                       // 0x21DAE(0x0002) MISSED OFFSET
	struct FVector                                     ADS_Hand_Position_L;                                      // 0x21DB0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ADS_Hand_Position_R;                                      // 0x21DBC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ADS_Hand_Rotation_L;                                      // 0x21DC8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ADS_Hand_Rotation_R;                                      // 0x21DD4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EADSRollControlsEnum                               ADS_Roll_Controls;                                        // 0x21DE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData39[0x3];                                       // 0x21DE1(0x0003) MISSED OFFSET
	float                                              ADS_Roll_Interp_speed;                                    // 0x21DE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADS_Bump_Looping_Speed;                                   // 0x21DE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADS_Bump_Interp_speed;                                    // 0x21DEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Stop_Max;                                                 // 0x21DF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Stop_Min;                                                 // 0x21DF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADS_Bump_Time;                                            // 0x21DF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ADS_Bump_Start;                                           // 0x21DFC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData40[0x3];                                       // 0x21DFD(0x0003) MISSED OFFSET
	float                                              Ads_Bump_Start_Time_Delay;                                // 0x21E00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Ads_Bump_Stop_Time_Delay;                                 // 0x21E04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ADS_Bump_Stop;                                            // 0x21E08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData41[0x7];                                       // 0x21E09(0x0007) MISSED OFFSET
	struct FTimerHandle                                ADS_Bump_start_Run_Timer;                                 // 0x21E10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTimerHandle                                ADS_Bump_stop_Run_Timer;                                  // 0x21E18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NonComOffset;                                             // 0x21E20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ChildPhysicsAssetEnable;                                  // 0x21E24(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SkinUseCharacterScale;                                    // 0x21E25(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData42[0x2];                                       // 0x21E26(0x0002) MISSED OFFSET
	struct FVector                                     CharacterScale;                                           // 0x21E28(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExitWoundedBlendOutTime;                                  // 0x21E34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Constant_2;                                               // 0x21E38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EngHeadAdditiveSecondaryActive;                           // 0x21E3C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseHuntingRifleHold;                                      // 0x21E3D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               PrototypeLocomotionGraphEnable;                           // 0x21E3E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Enable_Zipline_Eng_Aims;                                  // 0x21E3F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableLayeredHandAdditives;                               // 0x21E40(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableHand;                                              // 0x21E41(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseRightWristGadgetAdditive;                              // 0x21E42(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bActiveWeaponUsesCollar;                                  // 0x21E43(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableEngHeadAdditiveSecondary;                          // 0x21E44(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableEngHeadAdditivePrimary;                            // 0x21E45(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData43[0x2];                                       // 0x21E46(0x0002) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_4;                          // 0x21E48(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_4;                   // 0x21E50(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x21E54(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData44[0x6];                                       // 0x21E54(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_3;                          // 0x21E64(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_3;                   // 0x21E6C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x21E70(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData45[0x6];                                       // 0x21E70(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_2;                          // 0x21E80(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_2;                   // 0x21E88(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x21E8C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData46[0x6];                                       // 0x21E8C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName;                            // 0x21E9C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID;                     // 0x21EA4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x21EA8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData47[0x6];                                       // 0x21EA8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Temp_int_Variable;                                        // 0x21EB8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable;                                       // 0x21EBC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x21EC4(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData48[0x6];                                       // 0x21EC4(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_22;                         // 0x21ED4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_22;                  // 0x21EDC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x21EE0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData49[0x6];                                       // 0x21EE0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_23;                         // 0x21EF0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_23;                  // 0x21EF8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x21EFC(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData50[0x6];                                       // 0x21EFC(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_24;                         // 0x21F0C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_24;                  // 0x21F14(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x21F18(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData51[0x6];                                       // 0x21F18(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_5;                          // 0x21F28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_5;                   // 0x21F30(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_25;                         // 0x21F34(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_25;                  // 0x21F3C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x21F40(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData52[0x6];                                       // 0x21F40(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_2;                                     // 0x21F50(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_2;                                      // 0x21F58(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_26;                         // 0x21F5C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_26;                  // 0x21F64(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_10;                  // 0x21F68(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData53[0x6];                                       // 0x21F68(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_27;                         // 0x21F78(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_27;                  // 0x21F80(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_11;                  // 0x21F84(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData54[0x6];                                       // 0x21F84(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_12;                  // 0x21F94(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData55[0x6];                                       // 0x21F94(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_28;                         // 0x21FA4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_28;                  // 0x21FAC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_13;                  // 0x21FB0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData56[0x6];                                       // 0x21FB0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_29;                         // 0x21FC0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_29;                  // 0x21FC8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_14;                  // 0x21FCC(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData57[0x6];                                       // 0x21FCC(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_30;                         // 0x21FDC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_30;                  // 0x21FE4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_15;                  // 0x21FE8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData58[0x6];                                       // 0x21FE8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_3;                                     // 0x21FF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_3;                                      // 0x22000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_31;                         // 0x22004(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_31;                  // 0x2200C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_16;                  // 0x22010(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData59[0x6];                                       // 0x22010(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_32;                         // 0x22020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_32;                  // 0x22028(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_17;                  // 0x2202C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData60[0x6];                                       // 0x2202C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_33;                         // 0x2203C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_33;                  // 0x22044(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_18;                  // 0x22048(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData61[0x6];                                       // 0x22048(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_34;                         // 0x22058(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_34;                  // 0x22060(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_19;                  // 0x22064(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData62[0x6];                                       // 0x22064(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_35;                         // 0x22074(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_35;                  // 0x2207C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_20;                  // 0x22080(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData63[0x6];                                       // 0x22080(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_4;                                     // 0x22090(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x22098(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x2209C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_4;                                      // 0x220A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_36;                         // 0x220A4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_36;                  // 0x220AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_21;                  // 0x220B0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData64[0x6];                                       // 0x220B0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_37;                         // 0x220C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_37;                  // 0x220C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_38;                         // 0x220CC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_38;                  // 0x220D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_22;                  // 0x220D8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData65[0x6];                                       // 0x220D8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_23;                  // 0x220E8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData66[0x6];                                       // 0x220E8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_5;                                     // 0x220F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_5;                                      // 0x22100(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_6;                          // 0x22104(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_6;                   // 0x2210C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_39;                         // 0x22110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_39;                  // 0x22118(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_24;                  // 0x2211C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData67[0x6];                                       // 0x2211C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_40;                         // 0x2212C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_40;                  // 0x22134(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_25;                  // 0x22138(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData68[0x6];                                       // 0x22138(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_26;                  // 0x22148(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData69[0x6];                                       // 0x22148(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_6;                                     // 0x22158(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_6;                                      // 0x22160(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_41;                         // 0x22164(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_41;                  // 0x2216C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_27;                  // 0x22170(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData70[0x6];                                       // 0x22170(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_42;                         // 0x22180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_42;                  // 0x22188(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_28;                  // 0x2218C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData71[0x6];                                       // 0x2218C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_43;                         // 0x2219C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_43;                  // 0x221A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_29;                  // 0x221A8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData72[0x6];                                       // 0x221A8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_44;                         // 0x221B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_44;                  // 0x221C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_30;                  // 0x221C4(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData73[0x6];                                       // 0x221C4(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_45;                         // 0x221D4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_45;                  // 0x221DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_31;                  // 0x221E0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData74[0x6];                                       // 0x221E0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_7;                                     // 0x221F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_7;                                      // 0x221F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_46;                         // 0x221FC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_46;                  // 0x22204(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_32;                  // 0x22208(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData75[0x6];                                       // 0x22208(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_47;                         // 0x22218(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_47;                  // 0x22220(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_33;                  // 0x22224(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData76[0x6];                                       // 0x22224(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_48;                         // 0x22234(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_48;                  // 0x2223C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_49;                         // 0x22240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_49;                  // 0x22248(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_34;                  // 0x2224C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData77[0x6];                                       // 0x2224C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_7;                          // 0x2225C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_7;                   // 0x22264(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_35;                  // 0x22268(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData78[0x6];                                       // 0x22268(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x22278(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData79[0x3];                                       // 0x22279(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_50;                         // 0x2227C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_50;                  // 0x22284(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_36;                  // 0x22288(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData80[0x6];                                       // 0x22288(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x22298(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData81[0x7];                                       // 0x22299(0x0007) MISSED OFFSET
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x222A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x222A8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData82[0x3];                                       // 0x222A9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_Duration;                                    // 0x222AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   K2Node_Event_Direction;                                   // 0x222B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll;                               // 0x222B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x222BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x222C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_2;                             // 0x222C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_2;                            // 0x222C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_2;                              // 0x222CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_NewInteractState;                            // 0x222D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_NewInteractHeight;                           // 0x222D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_NewInteractTime;                             // 0x222DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x222E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData83[0x3];                                       // 0x222E1(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_OldInteractState;                            // 0x222E4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_2;                           // 0x222EC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData84[0x3];                                       // 0x222ED(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Event_PivotLocation;                               // 0x222F0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData85[0x4];                                       // 0x222FC(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              CallFunc_GetAncillaryMeshes_ReturnValue;                  // 0x22300(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>              CallFunc_GetAncillaryMeshes_ReturnValue_2;                // 0x22310(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CallFunc_Array_Get_Item;                                  // 0x22320(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CallFunc_Array_Get_Item_2;                                // 0x22328(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMasterWeapon_ABP_C*                         K2Node_DynamicCast_AsMaster_Weapon_ABP;                   // 0x22330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x22338(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData86[0x3];                                       // 0x22339(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_RootLocation;                          // 0x2233C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    K2Node_CustomEvent_RootRotation;                          // 0x22348(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x22354(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData87[0x3];                                       // 0x22355(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Event_StopLocation;                                // 0x22358(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_StartLocation;                               // 0x22364(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x22370(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData88[0x3];                                       // 0x22371(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_37;                  // 0x22374(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData89[0x6];                                       // 0x22371(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID;// 0x22384(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;     // 0x22388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_2;// 0x22390(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData90[0x4];                                       // 0x22394(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;   // 0x22398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_3;                           // 0x223A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_4;                           // 0x223A1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData91[0x2];                                       // 0x223A2(0x0002) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_3;// 0x223A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;   // 0x223A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_5;                           // 0x223B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData92[0x3];                                       // 0x223B1(0x0003) MISSED OFFSET
	float                                              Temp_float_Variable;                                      // 0x223B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_Event_OldDirection;                                // 0x223B8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_Event_NewDirection;                                // 0x223B9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData93[0x2];                                       // 0x223BA(0x0002) MISSED OFFSET
	float                                              K2Node_Event_InMantleHeight;                              // 0x223BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bInVault;                                    // 0x223C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData94[0x3];                                       // 0x223C1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_InVaultDrop;                                 // 0x223C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InUpDuration;                                // 0x223C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InAcrossDuration;                            // 0x223CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InDownDuration;                              // 0x223D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_InMantleName;                                // 0x223D4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x223DC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData95[0x3];                                       // 0x223DD(0x0003) MISSED OFFSET
	float                                              Temp_float_Variable_2;                                    // 0x223E0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Select_Default;                                    // 0x223E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_8;                          // 0x223E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_8;                   // 0x223F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x223F4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x223F8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData96[0x3];                                       // 0x223F9(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default_2;                                  // 0x223FC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_38;                  // 0x22400(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData97[0x6];                                       // 0x22400(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              K2Node_Select_Default_3;                                  // 0x22410(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Select_Default_4;                                  // 0x22414(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_9;                          // 0x22418(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_9;                   // 0x22420(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData98[0x4];                                       // 0x22424(0x0004) MISSED OFFSET
	class AMainCharacter_C*                            K2Node_DynamicCast_AsMain_Character;                      // 0x22428(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x22430(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData99[0x3];                                       // 0x22431(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_39;                  // 0x22434(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData100[0x6];                                      // 0x22431(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Temp_float_Variable_3;                                    // 0x22444(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_4;// 0x22448(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData101[0x4];                                      // 0x2244C(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;   // 0x22450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_7;                           // 0x22458(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData102[0x3];                                      // 0x22459(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_10;                         // 0x2245C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_10;                  // 0x22464(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_40;                  // 0x22468(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData103[0x6];                                      // 0x22468(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Temp_float_Variable_4;                                    // 0x22478(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_5;                                     // 0x2247C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData104[0x3];                                      // 0x2247D(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default_5;                                  // 0x22480(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_2;                      // 0x22484(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData105[0x3];                                      // 0x22485(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_41;                  // 0x22488(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData106[0x6];                                      // 0x22485(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_42;                  // 0x22498(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData107[0x6];                                      // 0x22498(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_43;                  // 0x224A8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData108[0x6];                                      // 0x224A8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_5;// 0x224B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData109[0x4];                                      // 0x224BC(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;   // 0x224C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_8;                           // 0x224C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData110[0x3];                                      // 0x224C9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_44;                  // 0x224CC(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData111[0x6];                                      // 0x224C9(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride;             // 0x224DC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride_2;           // 0x224DD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride_3;           // 0x224DE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData112[0x1];                                      // 0x224DF(0x0001) MISSED OFFSET
	struct FName                                       Temp_name_Variable_8;                                     // 0x224E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride;              // 0x224E8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData113[0x3];                                      // 0x224E9(0x0003) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_6;// 0x224EC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;   // 0x224F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_10;                          // 0x224F8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData114[0x7];                                      // 0x224F9(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsKSCharacter_Anim_Inst;               // 0x22500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x22508(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData115[0x7];                                      // 0x22509(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsKSCharacter_Anim_Inst_2;             // 0x22510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                            // 0x22518(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSPowerSlideEndReason                             K2Node_Event_EndReason;                                   // 0x22519(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2251A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData116[0x5];                                      // 0x2251B(0x0005) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsKSCharacter_Anim_Inst_3;             // 0x22520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_6;                            // 0x22528(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData117[0x3];                                      // 0x22529(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable_9;                                     // 0x2252C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_10;                                    // 0x22534(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_2;                            // 0x2253C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_CustomEvent_NewMoveDirection_2;                    // 0x2253D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_CustomEvent_NewMoveDirection;                      // 0x2253E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData118[0x1];                                      // 0x2253F(0x0001) MISSED OFFSET
	struct FName                                       Temp_name_Variable_11;                                    // 0x22540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Map_Find_Value;                                  // 0x22548(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECombatState                                       K2Node_Event_NewCombatState;                              // 0x22550(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bBlockCooldown;                              // 0x22551(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bForce;                                      // 0x22552(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData119[0x5];                                      // 0x22553(0x0005) MISSED OFFSET
	class UAnimMontage*                                K2Node_Event_ReviveMontage;                               // 0x22558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsInAir;                                    // 0x22560(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_3;                      // 0x22561(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData120[0x2];                                      // 0x22562(0x0002) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_7;// 0x22564(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7;   // 0x22568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSWeaponComponent*                          K2Node_Event_Weapon_2;                                    // 0x22570(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_14;                          // 0x22578(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData121[0x7];                                      // 0x22579(0x0007) MISSED OFFSET
	class UKSWeaponComponent*                          K2Node_Event_Weapon;                                      // 0x22580(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_12;                                    // 0x22588(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_CustomEvent_In_Character;                          // 0x22590(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_CustomEvent_Character;                             // 0x22598(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDamageEffect                               K2Node_CustomEvent_Response;                              // 0x225A0(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_8;                                      // 0x225F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation;      // 0x225F4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal;        // 0x22600(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource;     // 0x2260C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection;          // 0x22618(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData122[0x3];                                      // 0x22619(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_11;                         // 0x2261C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_11;                  // 0x22624(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_12;                         // 0x22628(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_12;                  // 0x22630(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_45;                  // 0x22634(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData123[0x6];                                      // 0x22634(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_2;            // 0x22644(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData124[0x3];                                      // 0x22645(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_46;                  // 0x22648(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData125[0x6];                                      // 0x22645(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_IsClosed_Variable_3;                            // 0x22658(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData126[0x7];                                      // 0x22659(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetDownedTransitionMontage_OutAnimMontage;       // 0x22660(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSTurnInPlaceAnimationVariant                     K2Node_Event_AnimationVariant;                            // 0x22668(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData127[0x3];                                      // 0x22669(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DelayTime;                                   // 0x2266C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_2;                           // 0x22670(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData128[0x3];                                      // 0x22671(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_13;                         // 0x22674(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_13;                  // 0x2267C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_4;                      // 0x22680(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_4;                            // 0x22681(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData129[0x2];                                      // 0x22682(0x0002) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_14;                         // 0x22684(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_14;                  // 0x2268C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_47;                  // 0x22690(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData130[0x6];                                      // 0x22690(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData131[0x50];                                     // 0x226A0(0x0050) UNKNOWN PROPERTY: K2Node_CustomEvent_Keywords
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_48;                  // 0x226F0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData132[0x6];                                      // 0x226F0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_15;                         // 0x22700(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_15;                  // 0x22708(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_49;                  // 0x2270C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData133[0x6];                                      // 0x2270C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable_13;                                    // 0x2271C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_9;                                      // 0x22724(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_16;                         // 0x22728(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_16;                  // 0x22730(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_50;                  // 0x22734(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData134[0x6];                                      // 0x22734(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_17;                         // 0x22744(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_17;                  // 0x2274C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_51;                  // 0x22750(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData135[0x6];                                      // 0x22750(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               CallFunc_UpdateCollarDisableLogic_PlayCollarForWepType;   // 0x22760(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData136[0x3];                                      // 0x22761(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_18;                         // 0x22764(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_18;                  // 0x2276C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_52;                  // 0x22770(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData137[0x6];                                      // 0x22770(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_3;            // 0x22780(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData138[0x3];                                      // 0x22781(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_19;                         // 0x22784(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_19;                  // 0x2278C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_4;            // 0x22790(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsSprinting;                           // 0x22791(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData139[0x2];                                      // 0x22792(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_53;                  // 0x22794(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData140[0x6];                                      // 0x22792(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_5;            // 0x227A4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData141[0x3];                                      // 0x227A5(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData142[0x50];                                     // 0x227A5(0x0050) UNKNOWN PROPERTY: CallFunc_GetAllSkinKeywords_InOutKeywords
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_54;                  // 0x227F8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData143[0x6];                                      // 0x227F8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_20;                         // 0x22808(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_20;                  // 0x22810(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_6;            // 0x22814(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_7;            // 0x22815(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData144[0x2];                                      // 0x22816(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_55;                  // 0x22818(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData145[0x6];                                      // 0x22816(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_8;            // 0x22828(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_9;            // 0x22829(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData146[0x2];                                      // 0x2282A(0x0002) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_8;// 0x2282C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8;   // 0x22830(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_16;                          // 0x22838(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData147[0x3];                                      // 0x22839(0x0003) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_9;// 0x2283C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_9;   // 0x22840(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_10;// 0x22848(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData148[0x4];                                      // 0x2284C(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_10;  // 0x22850(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_17;                          // 0x22858(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_18;                          // 0x22859(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData149[0x6];                                      // 0x2285A(0x0006) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Get_Roll_Animation_Set_Cached;                   // 0x22860(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_14;                                    // 0x22868(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_10;                                     // 0x22870(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride_4;           // 0x22874(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData150[0x3];                                      // 0x22875(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_21;                         // 0x22878(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_21;                  // 0x22880(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bSetIsShieldActive;                          // 0x22884(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData151[0xB];                                      // 0x22885(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass PCM_Hero_ABP.PCM_Hero_ABP_C");
		return ptr;
	}


	void OnMagThrow__DelegateSignature();
	void ZipLineTurnReset();
	void Update_Right_Hand_Gadget_Additive_Active(class UKSWeaponComponent* bpp__InWeaponComponent__pf);
	void Update_Eng_Head_Additive_Secondary_Active();
	void UpdateWeaponLimitedMovement(class UKSWeaponComponent* bpp__InWeaponComponent__pf);
	void UpdateSkinDependantVariables();
	void UpdateRagdollPelvis();
	void UpdateIKHandRuleset(class UKSWeaponComponent* bpp__InWeaponComponent__pf);
	void UpdateCustomPivot(bool bpp__bNewValue__pf);
	void UpdateCollarDisableLogic(const struct FGameplayTag& bpp__InWeaponType__pf, bool* bpp__PlayCollarForWepType__pf);
	void UnhideMag();
	void TurnInPlace(bool* bpp__TurnxOver__pfT);
	void TickHitReacts();
	void SwitchWeaponIK(class UKSWeaponComponent* bpp__WeaponRef__pf);
	void SwitchWeapon(class UKSWeaponComponent* bpp__WeaponRef__pf);
	void Stop_Turn_In_Place();
	void Start_Turn_In_Place();
	void StartRevivee();
	void Should_Update_Component_Rotation(float bpp__DeltaxTime__pfT, bool* bpp__ReturnxValue__pfT, float* bpp__NewxCompoentxYaw__pfTT);
	void Should_Turn_In_Place_Be_Active(bool* bpp__ReturnxValue__pfT);
	void ShoulderCharge();
	void Set_Turn_Value(float bpp__Yaw__pf);
	void Set_Skinned_Local_Parameters();
	void Set_Footstep_SFX_Switches(const struct FName& bpp__ShoexName__pfT, const struct FName& bpp__StepxName__pfT, const struct FName& bpp__MaterialxName__pfT, class AActor* bpp__Actor__pf, class AActor** bpp__ActorxReturn__pfT);
	void Set_Desired_Component_Yaw();
	void Set_Clothing_SFX_Switch(const struct FName& bpp__ClothingxType__pfT, class AActor** bpp__ActorxReturn__pfT);
	void Set_Aims();
	void Set_ADS_1p_Aims();
	void SetUpStopAnims(EKSMovementDirection bpp__NewMoveDirection__pf);
	void SetUpStartAnims(EKSMovementDirection bpp__NewMoveDirection__pf);
	void SetUpperBodyTurnInPlace(class UKSCharacterAnimInst* bpp__SubAnimInstance__pf);
	void SetTransitionAnims(class UAnimSequenceBase* bpp__StartMoving__pf, class UAnimSequenceBase* bpp__CurrentStopMovingA__pf, class UAnimSequenceBase* bpp__CurrentDirectionPivot__pf, class UAnimSequenceBase* bpp__StartMovingCrouch__pf, class UAnimSequenceBase* bpp__CurrentStopMovingCrouch__pf, class UAnimSequenceBase* bpp__CurrentDirectionPivotCrouch__pf, class UAnimSequenceBase* bpp__StartDisableMoving__pf, class UAnimSequenceBase* bpp__StopDisableMoving__pf, class UAnimSequenceBase* bpp__CurrentDisablePivot__pf);
	void SetStopAnim(EKSMovementDirection bpp__Direction__pf);
	void SetStartMeleeLowerBodyAnim(EKSMovementDirection bpp__Direction__pf);
	void SetStartAnim(EKSMovementDirection bpp__Direction__pf);
	void SetShieldActive(bool bpp__bSetIsShieldActive__pf);
	void SetPoseDrivenHitReactParams(const struct FVector& bpp__ImpactxNormal__pfT, float bpp__Damage__pf);
	void SetMovementDirection(EKSMovementDirection bpp__Direction__pf, EKSMovementDirection bpp__OldMoveDirection__pf);
	void SetMaxSpeedValues_2(class UKSWeaponAsset* bpp__WeaponAsset__pf);
	void SetHitReactParams(const struct FVector& bpp__RelativeImpactLocation__pf, EKSMovementDirection bpp__HitDirection__pf);
	void ReviveMesh(class UAnimMontage* bpp__ReviveMontage__pf, bool bpp__bIsInAir__pf);
	void RequestNewCombatState(ECombatState bpp__NewCombatState__pf, bool bpp__bBlockCooldown__pf, bool bpp__bForce__pf);
	void RemoveExpiredHitReact(const struct FHitReaction& bpp__ExpiredHitReact__pf);
	void On_Sprint_Changed(bool bpp__IsSprinting__pf);
	void OnShoulderChanged();
	void OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_68DE575241BD5D31439A859E850392A2(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_514BC3F642C5DBF803D5D38096ACEC0D(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_3837D4F445D630402E62E28D30CADB2F(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_143632A9488E9A82D17492B8710C0540(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_68DE575241BD5D31439A859E850392A2(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_514BC3F642C5DBF803D5D38096ACEC0D(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_3837D4F445D630402E62E28D30CADB2F(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_143632A9488E9A82D17492B8710C0540(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_68DE575241BD5D31439A859E850392A2(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_514BC3F642C5DBF803D5D38096ACEC0D(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_3837D4F445D630402E62E28D30CADB2F(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_143632A9488E9A82D17492B8710C0540(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_B5B16ACD4F176963194D6B8527E16FBB(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_68DE575241BD5D31439A859E850392A2(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_514BC3F642C5DBF803D5D38096ACEC0D(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_3837D4F445D630402E62E28D30CADB2F(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_1BE19CEA4A7E760561F3419034A02FE3(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_143632A9488E9A82D17492B8710C0540(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_68DE575241BD5D31439A859E850392A2(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_514BC3F642C5DBF803D5D38096ACEC0D(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_3837D4F445D630402E62E28D30CADB2F(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_143632A9488E9A82D17492B8710C0540(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void LocomotionStop(const struct FVector& bpp__StopLocation__pf);
	void LocomotionStart(const struct FVector& bpp__StartLocation__pf);
	void LocomotionPrePivot();
	void LocomotionPivotCheckpoint();
	void LocomotionPivot(const struct FVector& bpp__PivotLocation__pf);
	void LocalAccelerationToMovementDirection(const struct FVector& bpp__LocalxAcceleration__pfT, bool bpp__GetOppositeDirection__pf, EKSMovementDirection* bpp__AccelerationDirection__pf);
	void IsPlayerRagdoll();
	void Hit_React_Event_New(class AKSCharacter* bpp__Character__pf, const struct FDamageEffect& bpp__Response__pf);
	void HideMag();
	void Get_Roll_Directions(const struct FVector2D& bpp__RollDirectionInput__pf);
	void Get_Roll_Animation(class UAnimMontage** bpp__SetxCached__pfT);
	void Get_Footstep_SFX_Material(const struct FName& bpp__BoneName__pf, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT);
	void ExecuteUbergraph_PCM_Hero_ABP_86(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_58(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_56(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_54(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_6(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_42(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_39(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_35(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_29(int bpp__EntryPoint__pf);
	void EventStopSwimming();
	void EventStopSubmerge();
	void EventStartSwimming();
	void EventStartSubmerge();
	void EventStartInteraction(const struct FName& bpp__NewInteractState__pf, float bpp__NewInteractHeight__pf, float bpp__NewInteractTime__pf);
	void EventEndZipLine();
	void EventEndVault();
	void EventEndPowerSlide(EKSPowerSlideEndReason bpp__EndReason__pf);
	void EventEndInteraction(const struct FName& bpp__OldInteractState__pf);
	void EventEndAbilityMovement();
	void EventDoZipLine();
	void EventDoVault(float bpp__InMantleHeight__pf, bool bpp__bInVault__pf, float bpp__InVaultDrop__pf, float bpp__InUpDuration__pf, float bpp__InAcrossDuration__pf, float bpp__InDownDuration__pf, const struct FName& bpp__InMantleName__pf__const);
	void EventDoStun();
	void EventDoPowerSlide();
	void EventDoGoDown();
	void EventDoDodgeRoll(float bpp__Duration__pf, const struct FVector2D& bpp__Direction__pf);
	void EventDoAbilityMovement();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_172323EF48DCF7241EF95098F2D8AD87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_KSAnimGraphNode_OrientationWarp_131E912946E5081C735EBFAFB1693C8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_C14F007F4907BBAD8DC842954DC08D71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E8F5864A4FBC518801ABE9B4B8E01DB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E471C2EA41D54CD0DBC13F89A50DBDD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_CDEB775C48CEA154C12B5EA8A2F7E4B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_B60DB0C2476CE26BC38E85978156C863();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_A71A137D45979E49935FD59C46E68895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_9EC4576B4419196162338EB146564905();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_928BF07A47B3335F07F0FEBDA1AEEA49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7EE32840456D5D28C484B38772C5014A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7BBB0CF1484FBE80F68286A065D244A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_6C07F39748AE158DE081A1A83BB697E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5F88837142168D1B73A6A1B2A0AD3830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_3B9ACF614D7FA965A4FAE0ADBEB82AD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_33E027DF46DCE517828E04A253364A0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_223977B248EAF97F0D1CF197C85E2617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_RotationOffsetBlendSpace_81A7F7B4431EB312B3929286460A4731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_ModifyBone_DDFDCB904C3D3F2A3C011B8F9F9609D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_ModifyBone_17B61A5A4C26F6791298C29059178A3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EFBF9A054BC7B28D4BFC5FB791063D37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_E028EF2646CAABBA4677D6BE2F6ACEB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B8C63AC244919E63F441999AF88ED3E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_B37F5A5044B9338ED291FF9598922B35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_A84676B74AFF6C9E33195FB08136D345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_933D26B8456AE00A739D7C98D974D374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8E46CD0F459017238E79DC91DFAD4E63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2E22BB4C78E301E11713A2FA2A31A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8B2880AF4722F751AFF7C585B5EF7534();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_8550E2144C50DB8698BDCBBD4ED6D425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_81898CD14A88E1C843BD08BA90B663DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_815C9F154477C4703D8C4C88F2D59040();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_723417A547338353502AF28D5622C932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_452E05D448B4D66D1C47D39A3E386733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A82298444B1E8F93A73095B20F5AAD80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_78DB5DD5493257AE1EF92798F14C80A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_10BC24364F921197A28983919050AD47();
	void EndRevivee();
	void EmoteMontageLostAllGlobalWeight();
	void Do_Bind_Hit_React_Event_New(class AKSCharacter* bpp__InxCharacter__pfT);
	void DetermineAutoEquip();
	void Check_for_Skin_Dependant_Variables();
	void CancelDownedCosmetic();
	void CacheRootRagdollState(const struct FVector& bpp__RootLocation__pf, const struct FRotator& bpp__RootRotation__pf);
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
	void BlueprintInitializeAnimation();
	void AnimNotify_UpdateCrouchTransition1P();
	void AnimNotify_Unplant_Right_Hand();
	void AnimNotify_Unplant_Left_Hand();
	void AnimNotify_UnHide_Weapon();
	void AnimNotify_UnHide_Tablet();
	void AnimNotify_Unhide_Mag();
	void AnimNotify_UnHide_Gadget();
	void AnimNotify_RetrieveEnd();
	void AnimNotify_RetrieveBegin();
	void AnimNotify_Plant_Right_Hand();
	void AnimNotify_Plant_Left_Hand();
	void AnimNotify_MagThrow();
	void AnimNotify_InterruptStopExit();
	void AnimNotify_InterruptStartExit();
	void AnimNotify_Hide_Weapon();
	void AnimNotify_Hide_Tablet();
	void AnimNotify_Hide_Mag();
	void AnimNotify_Hide_Gadget();
	void AnimNotify_HackingEnd();
	void AnimNotify_HackingBegin();
	void AnimNotify_Fire_End();
	void AnimNotify_ExitCustomPivot();
	void AnimNotify_EndLocomotionStartExit();
	void AnimNotify_EndLocomotionStartEnter();
	void AnimNotify_EnableAims();
	void AnimNotify_DisableAims();
	void AnimNotify_CanStand();
	void AnimNotify_BeginLocomotionStartExit();
	void AnimNotify_BeginLocomotionStartEnter();
	void AnimNotify_AnimMirrorDelayEnd();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
	void AfterInteraction(const struct FName& bpp__NewxInteractxState__pfTT);
	void ADS_Bump_Stop_Reset();
	void ADS_Bump_Start_Reset();
	void ADSResetBumpnRollValues();
	void ADSBumpnRollEvaluation(float bpp__Tick__pf);
	void AdditiveRetrieveEnd();
	void AdditiveRetrieveBegin();
	void OnSprintChanged__DelegateSignature(bool bpp__IsSprinting__pf);
	void OnPlayHitFromPointDamage__DelegateSignature(class AKSCharacter* bpp__Character__pf, const struct FDamageEffect& bpp__Response__pf);
	void OnMontagePlayDelegate__DelegateSignature(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnFinishedAllPendingLoadsKeywords__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
