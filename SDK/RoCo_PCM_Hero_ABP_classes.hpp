#pragma once

// Rogue Company (0.59) SDK

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
// 0x1FCC0 (0x20D60 - 0x10A0)
class UPCM_Hero_ABP_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x10A0(0x0108) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x11A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x11D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x1208(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x1238(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x1268(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_72;                         // 0x1298(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77;                          // 0x13F0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_93;                         // 0x1470(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76;                          // 0x1518(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_71;                         // 0x1598(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_70;                         // 0x16F0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75;                          // 0x1848(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_69;                         // 0x18C8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74;                          // 0x1A20(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_68;                         // 0x1AA0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73;                          // 0x1BF8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                         // 0x1C78(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                             // 0x1D30(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_67;                         // 0x1D68(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72;                          // 0x1EC0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71;                          // 0x1F40(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_66;                         // 0x1FC0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70;                          // 0x2118(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69;                          // 0x2198(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_65;                         // 0x2218(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68;                          // 0x2370(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92;                         // 0x23F0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_64;                         // 0x2498(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_63;                         // 0x25F0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67;                          // 0x2748(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_62;                         // 0x27C8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_61;                         // 0x2920(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66;                          // 0x2A78(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65;                          // 0x2AF8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_60;                         // 0x2B78(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_91;                         // 0x2CD0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90;                         // 0x2D78(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_89;                         // 0x2E20(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                         // 0x2EC8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                             // 0x2F80(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64;                          // 0x2FB8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x3038(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63;                          // 0x3070(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x30F0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                             // 0x3128(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_4;                                   // 0x31E0(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_33;                   // 0x3370(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43;                              // 0x3398(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88;                         // 0x34A8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x3550(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_4;                        // 0x3580(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_3;                        // 0x3778(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x3970(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_87;                         // 0x3A58(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x3B00(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x3BE8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_59;                         // 0x3C20(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_58;                         // 0x3D78(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62;                          // 0x3ED0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61;                          // 0x3F50(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86;                         // 0x3FD0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x4078(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                             // 0x40B0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_42;                              // 0x4168(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41;                              // 0x4278(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_30;                        // 0x4388(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_153;                          // 0x4450(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_29;                        // 0x4480(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_55;                          // 0x4548(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_152;                          // 0x4608(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16;                                    // 0x4638(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_151;                          // 0x4688(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_40;                              // 0x46B8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_54;                          // 0x47C8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_39;                              // 0x4888(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38;                              // 0x4998(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37;                              // 0x4AA8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_36;                              // 0x4BB8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_28;                        // 0x4CC8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_53;                          // 0x4D90(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_150;                          // 0x4E50(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_52;                          // 0x4E80(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85;                         // 0x4F40(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84;                         // 0x4FE8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15;                                    // 0x5090(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_14;                                    // 0x50E0(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51;                          // 0x5130(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_149;                          // 0x51F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_148;                          // 0x5220(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_83;                         // 0x5250(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_82;                         // 0x52F8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_33;                   // 0x53A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35;                              // 0x53C8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_32;                   // 0x54D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81;                         // 0x5500(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34;                              // 0x55A8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33;                              // 0x56B8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32;                              // 0x57C8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80;                         // 0x58D8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_32;                   // 0x5980(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_31;                   // 0x59A8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_79;                         // 0x59D0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_30;                   // 0x5A78(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_31;                   // 0x5AA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78;                         // 0x5AC8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x5B70(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                               // 0x5BA0(0x0098) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x5C38(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60;                          // 0x5C70(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x5CF0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x5D28(0x00B8) (CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_StringMantlesTogether_461224144FFC5A148A9487A371F95429;// 0x5DE0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x5DE1(0x0003) MISSED OFFSET
	float                                              __CustomProperty_Max2StoryMantleHt_461224144FFC5A148A9487A371F95429;// 0x5DE4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              __CustomProperty_MaxMantleHt_461224144FFC5A148A9487A371F95429;// 0x5DE8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x5DEC(0x0004) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_4;                              // 0x5DF0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                         // 0x5E98(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_50;                          // 0x5F50(0x00C0) (CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_EnableLayeredHandAdditives_E3950B524F93AEA4F112E2B3A71E8E86;// 0x6010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_UseHuntingRifleHold_E3950B524F93AEA4F112E2B3A71E8E86;// 0x6011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_Enable_Zipline_Eng_Aims_E3950B524F93AEA4F112E2B3A71E8E86;// 0x6012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x5];                                       // 0x6013(0x0005) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_3;                              // 0x6018(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_14;                        // 0x60C0(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_13;                        // 0x6278(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_12;                        // 0x6430(0x01B8) (CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               __CustomProperty_MeleeLowerBodyDirection_3741820D49F2DBC1518975A785322FAF;// 0x65E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bEnableMeleeLowerBody_3741820D49F2DBC1518975A785322FAF;// 0x65E9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bCanTransitionDirections_3741820D49F2DBC1518975A785322FAF;// 0x65EA(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_PrototypeLocomotionGraphEnable_3741820D49F2DBC1518975A785322FAF;// 0x65EB(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_MasterWeaponIsGrenade_3741820D49F2DBC1518975A785322FAF;// 0x65EC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x65ED(0x0003) MISSED OFFSET
	float                                              __CustomProperty_CachedPivotAngle_3741820D49F2DBC1518975A785322FAF;// 0x65F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              __CustomProperty_Cached_Stop_Angle_3741820D49F2DBC1518975A785322FAF;// 0x65F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_Dodge_Rolling_BP_3741820D49F2DBC1518975A785322FAF;// 0x65F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x65F9(0x0003) MISSED OFFSET
	float                                              __CustomProperty_Cached_Angle_3741820D49F2DBC1518975A785322FAF;// 0x65FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_Starting_a_Pivot_3741820D49F2DBC1518975A785322FAF;// 0x6600(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_StringMantlesTogether_3741820D49F2DBC1518975A785322FAF;// 0x6601(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x2];                                       // 0x6602(0x0002) MISSED OFFSET
	float                                              __CustomProperty_MaxMantleHt_3741820D49F2DBC1518975A785322FAF;// 0x6604(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_2;                              // 0x6608(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77;                         // 0x66B0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_13;                                    // 0x6758(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_12;                                    // 0x67A8(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31;                              // 0x67F8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_27;                        // 0x6908(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_147;                          // 0x69D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_49;                          // 0x6A00(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_146;                          // 0x6AC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_30;                   // 0x6AF0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_30;                              // 0x6B18(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76;                         // 0x6C28(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_11;                                    // 0x6CD0(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75;                         // 0x6D20(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_145;                          // 0x6DC8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_48;                          // 0x6DF8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_47;                          // 0x6EB8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74;                         // 0x6F78(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x7020(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x7050(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_57;                         // 0x7080(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59;                          // 0x71D8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_56;                         // 0x7258(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58;                          // 0x73B0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_73;                         // 0x7430(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x74D8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x7510(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_2;                        // 0x75F8(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x77F0(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned;                          // 0x78D8(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72;                         // 0x7AD0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x7B78(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x7BB0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_29;                              // 0x7C68(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71;                         // 0x7D78(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_46;                          // 0x7E20(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70;                         // 0x7EE0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_45;                          // 0x7F88(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_69;                         // 0x8048(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_10;                                    // 0x80F0(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_144;                          // 0x8140(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_44;                          // 0x8170(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68;                         // 0x8230(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67;                         // 0x82D8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_29;                   // 0x8380(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_28;                              // 0x83A8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_29;                   // 0x84B8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_26;                        // 0x84E0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_43;                          // 0x85A8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_143;                          // 0x8668(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_142;                          // 0x8698(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9;                                     // 0x86C8(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8;                                     // 0x8718(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27;                              // 0x8768(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_28;                   // 0x8878(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_28;                   // 0x88A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_141;                          // 0x88C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_26;                              // 0x88F8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_66;                         // 0x8A08(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_27;                   // 0x8AB0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_26;                   // 0x8AD8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_65;                         // 0x8B00(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25;                              // 0x8BA8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_27;                   // 0x8CB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26;                   // 0x8CE0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24;                              // 0x8D08(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23;                              // 0x8E18(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_25;                   // 0x8F28(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_25;                   // 0x8F50(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_11;                        // 0x8F78(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_140;                          // 0x9130(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_25;                        // 0x9160(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_139;                          // 0x9228(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_6;                   // 0x9258(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_24;                        // 0x9330(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_42;                          // 0x93F8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64;                         // 0x94B8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_55;                         // 0x9560(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                          // 0x96B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x8];                                       // 0x9738(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_3;                                   // 0x9740(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_138;                          // 0x98D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_41;                          // 0x9900(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_12;                                // 0x99C0(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_40;                          // 0x9B78(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_137;                          // 0x9C38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_136;                          // 0x9C68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6;                 // 0x9C98(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_39;                          // 0x9E28(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_135;                          // 0x9EE8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5;                 // 0x9F18(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                         // 0xA0A8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                 // 0xA160(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                 // 0xA2F0(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_10;                             // 0xA480(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4;                                 // 0xA550(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3;                                 // 0xA648(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                 // 0xA740(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                   // 0xA838(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_38;                          // 0xA930(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_134;                          // 0xA9F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_133;                          // 0xAA20(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_37;                          // 0xAA50(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_24;                   // 0xAB10(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_132;                          // 0xAB38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_131;                          // 0xAB68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_24;                   // 0xAB98(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_36;                          // 0xABC0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_35;                          // 0xAC80(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_130;                          // 0xAD40(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_34;                          // 0xAD70(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_23;                   // 0xAE30(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_129;                          // 0xAE58(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_128;                          // 0xAE88(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_23;                   // 0xAEB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_33;                          // 0xAEE0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_32;                          // 0xAFA0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_127;                          // 0xB060(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22;                              // 0xB090(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_31;                          // 0xB1A0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_5;                   // 0xB260(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_126;                          // 0xB338(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_125;                          // 0xB368(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4;                   // 0xB398(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_23;                        // 0xB470(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_22;                        // 0xB538(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_30;                          // 0xB600(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_29;                          // 0xB6C0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_124;                          // 0xB780(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_123;                          // 0xB7B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_11;                                // 0xB7E0(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_22;                   // 0xB998(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_22;                   // 0xB9C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_10;                                // 0xB9E8(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_122;                          // 0xBBA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_121;                          // 0xBBD0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                              // 0xBC00(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                              // 0xBD10(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_120;                          // 0xBE20(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7;                                     // 0xBE50(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_119;                          // 0xBEA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_28;                          // 0xBED0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_118;                          // 0xBF90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_117;                          // 0xBFC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63;                         // 0xBFF0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0xC098(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Mirror                          KSAnimGraphNode_Mirror;                                   // 0xC228(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_21;                   // 0xC340(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_21;                   // 0xC368(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62;                         // 0xC390(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_116;                          // 0xC438(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_115;                          // 0xC468(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_27;                          // 0xC498(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                     // 0xC558(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_21;                        // 0xC5A8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_20;                   // 0xC670(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_9;                                 // 0xC698(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_8;                                 // 0xC850(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_7;                                 // 0xCA08(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_6;                                 // 0xCBC0(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20;                        // 0xCD78(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_5;                                 // 0xCE40(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_4;                                 // 0xCFF8(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_3;                                 // 0xD1B0(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_61;                         // 0xD368(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_20;                   // 0xD410(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_114;                          // 0xD438(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_26;                          // 0xD468(0x00C0) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x8];                                       // 0xD528(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2;                                   // 0xD530(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                     // 0xD6C0(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_60;                         // 0xD850(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_19;                   // 0xD8F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_19;                   // 0xD920(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_18;                   // 0xD948(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_2;                                 // 0xD970(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil;                                   // 0xDB28(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59;                         // 0xDCE0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17;                   // 0xDD88(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_19;                        // 0xDDB0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25;                          // 0xDE78(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_113;                          // 0xDF38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_54;                         // 0xDF68(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                            // 0xE0C0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24;                          // 0xE190(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                          // 0xE250(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23;                          // 0xE2D0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_112;                          // 0xE390(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_111;                          // 0xE3C0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                         // 0xE3F0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_110;                          // 0xE4A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_109;                          // 0xE4D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22;                          // 0xE508(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58;                         // 0xE5C8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_21;                          // 0xE670(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_16;                   // 0xE730(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_108;                          // 0xE758(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18;                   // 0xE788(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_107;                          // 0xE7B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17;                   // 0xE7E0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_20;                          // 0xE808(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15;                   // 0xE8C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_106;                          // 0xE8F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16;                   // 0xE920(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_105;                          // 0xE948(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_15;                   // 0xE978(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_104;                          // 0xE9A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_103;                          // 0xE9D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_19;                          // 0xEA00(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_102;                          // 0xEAC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_101;                          // 0xEAF0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_100;                          // 0xEB20(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_99;                           // 0xEB50(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                         // 0xEB80(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                          // 0xEC38(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                          // 0xECB8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                          // 0xED38(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57;                         // 0xEDB8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56;                         // 0xEE60(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55;                         // 0xEF08(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                          // 0xEFB0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                          // 0xF030(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                          // 0xF0B0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_98;                           // 0xF130(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_18;                          // 0xF160(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_97;                           // 0xF220(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_53;                         // 0xF250(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_52;                         // 0xF3A8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_51;                         // 0xF500(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_50;                         // 0xF658(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_49;                         // 0xF7B0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_48;                         // 0xF908(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_18;                        // 0xFA60(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54;                         // 0xFB28(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_96;                           // 0xFBD0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95;                           // 0xFC00(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94;                           // 0xFC30(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17;                        // 0xFC60(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93;                           // 0xFD28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_92;                           // 0xFD58(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                            // 0xFD88(0x00D0) (CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bIsLobby_9FDD1A7146055937A755E6ACD99BC318;// 0xFE58(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               __CustomProperty_bIsServer_9FDD1A7146055937A755E6ACD99BC318;// 0xFE59(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x6];                                       // 0xFE5A(0x0006) MISSED OFFSET
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance;                                // 0xFE60(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_17;                          // 0xFF08(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_91;                           // 0xFFC8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_90;                           // 0xFFF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89;                           // 0x10028(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53;                         // 0x10058(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88;                           // 0x10100(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87;                           // 0x10130(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x10160(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86;                           // 0x101B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85;                           // 0x101E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84;                           // 0x10210(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83;                           // 0x10240(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_52;                         // 0x10270(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_51;                         // 0x10318(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_47;                         // 0x103C0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                          // 0x10518(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_46;                         // 0x10598(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                          // 0x106F0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82;                           // 0x10770(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                          // 0x107A0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_81;                           // 0x10858(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50;                         // 0x10888(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80;                           // 0x10930(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_16;                        // 0x10960(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_79;                           // 0x10A28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                              // 0x10A58(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_14;                   // 0x10B68(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                              // 0x10B90(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78;                           // 0x10CA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_14;                   // 0x10CD0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16;                          // 0x10CF8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_15;                          // 0x10DB8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x10E78(0x0190) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77;                           // 0x11008(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_14;                          // 0x11038(0x00C0) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x8];                                       // 0x110F8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                        // 0x11100(0x05A0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_13;                   // 0x116A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76;                           // 0x116C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_13;                   // 0x116F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD_2;                               // 0x11720(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_75;                           // 0x117C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74;                           // 0x117F8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x11828(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x11858(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x11888(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x118B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x118E8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x11918(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x11948(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x11978(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x119A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x119D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x11A08(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x11A38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x11A68(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x11A98(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x11AC8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x11AF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x11B28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_45;                         // 0x11B58(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9;                              // 0x11CB0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_49;                         // 0x11D80(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8;                              // 0x11E28(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_48;                         // 0x11EF8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7;                              // 0x11FA0(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_47;                         // 0x12070(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_6;                              // 0x12118(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46;                         // 0x121E8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45;                         // 0x12290(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                          // 0x12338(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                          // 0x123B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                          // 0x12438(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                          // 0x124B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_44;                         // 0x12538(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_43;                         // 0x12690(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_42;                         // 0x127E8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_41;                         // 0x12940(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5;                              // 0x12A98(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_44;                         // 0x12B68(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                              // 0x12C10(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43;                         // 0x12CE0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                              // 0x12D88(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42;                         // 0x12E58(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                              // 0x12F00(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41;                         // 0x12FD0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x13078(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_40;                         // 0x13130(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_39;                         // 0x13288(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_38;                         // 0x133E0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                          // 0x13538(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                          // 0x135B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                          // 0x13638(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x136B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x13738(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x137F0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x13828(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_37;                         // 0x138A8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_36;                         // 0x13A00(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x13B58(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_35;                         // 0x13BD8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x13D30(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_34;                         // 0x13DB0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40;                         // 0x13F08(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x13FB0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x14030(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x140B0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x14130(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_33;                         // 0x141B0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_32;                         // 0x14308(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_31;                         // 0x14460(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_30;                         // 0x145B8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x14710(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                              // 0x147C8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_12;                   // 0x148D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12;                   // 0x14900(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x14928(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x149A8(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_8;                        // 0x14A60(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_11;                   // 0x14B78(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_11;                   // 0x14BA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_7;                        // 0x14BC8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10;                   // 0x14CE0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_10;                   // 0x14D08(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x14D30(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x14D68(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x14DE8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_29;                         // 0x14E20(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x14F78(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x14FF8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x15030(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x150B0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x15130(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x151B0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                              // 0x15230(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9;                    // 0x15340(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                              // 0x15368(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x15478(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8;                    // 0x15530(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_6;                        // 0x15558(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_5;                        // 0x15670(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_4;                        // 0x15788(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                              // 0x158A0(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7;                    // 0x159B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                              // 0x159D8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                    // 0x15AE8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_3;                        // 0x15B10(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9;                    // 0x15C28(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8;                    // 0x15C50(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7;                    // 0x15C78(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                    // 0x15CA0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_28;                         // 0x15CC8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_27;                         // 0x15E20(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_26;                         // 0x15F78(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_25;                         // 0x160D0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x16228(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_24;                         // 0x16260(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x163B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x16438(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x16470(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39;                         // 0x16528(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73;                           // 0x165D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                              // 0x16600(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13;                          // 0x16710(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72;                           // 0x167D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38;                         // 0x16800(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71;                           // 0x168A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_3;                   // 0x168D8(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x169B0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_23;                         // 0x16A30(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_12;                          // 0x16B88(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_2;                        // 0x16C48(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70;                           // 0x16D60(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x16D90(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x16DB8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37;                         // 0x16DE0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69;                           // 0x16E88(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                              // 0x16EB8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                              // 0x16FC8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x170D8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x17100(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_36;                         // 0x17128(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp;                          // 0x171D0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x172E8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x173F8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68;                           // 0x17508(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x17538(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x17648(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67;                           // 0x17758(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_35;                         // 0x17788(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_11;                          // 0x17830(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_15;                        // 0x178F0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66;                           // 0x179B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34;                         // 0x179E8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65;                           // 0x17A90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64;                           // 0x17AC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_14;                        // 0x17AF0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63;                           // 0x17BB8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33;                         // 0x17BE8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_62;                           // 0x17C90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61;                           // 0x17CC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60;                           // 0x17CF0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_59;                           // 0x17D20(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32;                         // 0x17D50(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                          // 0x17DF8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_58;                           // 0x17EB8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57;                           // 0x17EE8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56;                           // 0x17F18(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_31;                         // 0x17F48(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                           // 0x17FF0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55;                           // 0x180B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_54;                           // 0x180E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_13;                        // 0x18110(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x181D8(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x182E8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x18310(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x18338(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x18448(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                           // 0x18558(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53;                           // 0x18618(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52;                           // 0x18648(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51;                           // 0x18678(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50;                           // 0x186A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendByLOD                        AnimGraphNode_BlendByLOD;                                 // 0x186D8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49;                           // 0x18780(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x187B0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30;                         // 0x18870(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_2;                   // 0x18918(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48;                           // 0x189F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x18A20(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x18A70(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29;                         // 0x18AF0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x18B98(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x18BE8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47;                           // 0x18CA8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46;                           // 0x18CD8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x18D08(0x0100) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28;                         // 0x18E08(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x18EB0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_10;                        // 0x18F68(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_9;                         // 0x19120(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_8;                         // 0x192D8(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45;                           // 0x19490(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44;                           // 0x194C0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43;                           // 0x194F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_27;                         // 0x19520(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_LinkedAnimGraph;                            // 0x195C8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42;                           // 0x19670(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41;                           // 0x196A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x196D0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_7;                         // 0x19708(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x198C0(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x199D0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x199F8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26;                         // 0x19A20(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_22;                         // 0x19AC8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x19C20(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25;                         // 0x19CA0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x19D48(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x19D98(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40;                           // 0x19DE8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendBoneByChannel                AnimGraphNode_BlendBoneByChannel;                         // 0x19E18(0x0070) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                            // 0x19E88(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x19F58(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24;                         // 0x1A010(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23;                         // 0x1A0B8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22;                         // 0x1A160(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x1A208(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_21;                         // 0x1A288(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x1A3E0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_20;                         // 0x1A460(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x1A5B8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_19;                         // 0x1A638(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x1A790(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_18;                         // 0x1A810(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x1A968(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_17;                         // 0x1A9E8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x1AB40(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_16;                         // 0x1ABC0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21;                         // 0x1AD18(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20;                         // 0x1ADC0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_12;                        // 0x1AE68(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39;                           // 0x1AF30(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38;                           // 0x1AF60(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x1AF90(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_6;                         // 0x1B060(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_5;                         // 0x1B218(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37;                           // 0x1B3D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36;                           // 0x1B400(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x1B430(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                        // 0x1B4F0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35;                           // 0x1B5B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19;                         // 0x1B5E8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                        // 0x1B690(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_34;                           // 0x1B758(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_33;                           // 0x1B788(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                         // 0x1B7B8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18;                         // 0x1B880(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17;                         // 0x1B928(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16;                         // 0x1B9D0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32;                           // 0x1BA78(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31;                           // 0x1BAA8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                         // 0x1BAD8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30;                           // 0x1BBA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15;                         // 0x1BBD0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x1BC78(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29;                           // 0x1BD48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x1BD78(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28;                           // 0x1BE38(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14;                         // 0x1BE68(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                         // 0x1BF10(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                         // 0x1BFB8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x1C060(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_15;                         // 0x1C0E0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x1C238(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_14;                         // 0x1C2B8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1C410(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_13;                         // 0x1C490(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x1C5E8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_12;                         // 0x1C668(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x1C7C0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_11;                         // 0x1C840(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x1C998(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_10;                         // 0x1CA18(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x1CB70(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                         // 0x1CC28(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27;                           // 0x1CCF0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x1CD20(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                         // 0x1CDC8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_26;                           // 0x1CE90(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x1CEC0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x1CF80(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_25;                           // 0x1D028(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                         // 0x1D058(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x1D120(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                           // 0x1D1C8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                           // 0x1D1F8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x1D228(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x1D2F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1D320(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1D350(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_9;                          // 0x1D380(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x1D4D8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x1D558(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8;                          // 0x1D590(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1D6E8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x1D768(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7;                          // 0x1D7A0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1D8F8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1D978(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_6;                          // 0x1D9B0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1DB08(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1DB88(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1DBC0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x1DC78(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x1DD20(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1DDE8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                           // 0x1DEA8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_4;                         // 0x1DED8(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                           // 0x1E090(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_3;                         // 0x1E0C0(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                           // 0x1E278(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                           // 0x1E2A8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                           // 0x1E2D8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                           // 0x1E308(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x1E338(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1E3E0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x1E460(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x1E5B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x1E5E8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1E690(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1E7A0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1E7C8(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x1E7F0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1E948(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x1E9C8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x1EB20(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x1EBC8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x1EBF8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x1EC28(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x1EC58(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x1EC88(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x1ECB8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1ED60(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x1EDE0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1EF38(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1EFE0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x1F060(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x1F1B8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x1F1E8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x1F218(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1F2E0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1F388(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1F430(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1F4F8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x1F5B8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned;                             // 0x1F688(0x0168) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1F7F0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_2;                         // 0x1F870(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x1FA28(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x1FB00(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                           // 0x1FB30(0x01B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x1FCE8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x1FD18(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x1FD48(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1FD78(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x1FDA8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1FDD8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1FE08(0x0030) (CPF_NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x1FE38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Movement_Direction;                                       // 0x1FE3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Aim_Pitch;                                                // 0x1FE40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Aim_Yaw;                                                  // 0x1FE44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Save_Last_Yaw;                                            // 0x1FE48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_Value;                                               // 0x1FE4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                Character;                                                // 0x1FE50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ADS_Rotator;                                              // 0x1FE58(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              _1P_Aim_Pitch;                                            // 0x1FE64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              _1P_Aim_Yaw;                                              // 0x1FE68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Step_Type;                                                // 0x1FE6C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Material_Type;                                            // 0x1FE74(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Shoe_Type;                                                // 0x1FE7C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Clothing_Type;                                            // 0x1FE84(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              _1p_Pitch_Offset;                                         // 0x1FE8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turning_the_Character;                                    // 0x1FE90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_Left;                                                // 0x1FE91(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_Right;                                               // 0x1FE92(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x1];                                       // 0x1FE93(0x0001) MISSED OFFSET
	struct FName                                       Roll_Direction;                                           // 0x1FE94(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x1FE9C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Cached_Dodge_Roll;                                        // 0x1FEA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Desired_Component_Yaw_Old;                                // 0x1FEA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_In_Place_Recovery_Speed;                             // 0x1FEAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              World_Space_Aim_Yaw;                                      // 0x1FEB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_In_Place_Active;                                     // 0x1FEB4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1FEB5(0x0003) MISSED OFFSET
	struct FRotator                                    Applied_Turn_In_Place_Rotator_Old;                        // 0x1FEB8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    World_Turn_In_Place_Rotator_Old;                          // 0x1FEC4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              MantleTimer;                                              // 0x1FED0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MantleTimerMax;                                           // 0x1FED4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Control_Rotation;                                         // 0x1FED8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1FEE4(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Moving_A;                                           // 0x1FEE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Moving_A;                                            // 0x1FEF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Pivot;                                                    // 0x1FEF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Current_Direction_Pivot;                                  // 0x1FF00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               TurnWounded;                                              // 0x1FF08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TurnInPlaceMinThreshold_1;                                // 0x1FF10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TurnValue;                                                // 0x1FF14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Current_Stop_Moving_Crouch;                               // 0x1FF18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           current_direction_Pivot_crouch;                           // 0x1FF20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Pivot_crouch;                                             // 0x1FF28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponADSSpeedModifier;                                   // 0x1FF30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponWalkSpeedModifier;                                  // 0x1FF34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentMaxSpeed;                                          // 0x1FF38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               _3PADS;                                                   // 0x1FF3C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1FF3D(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           Current_Stop_Moving;                                      // 0x1FF40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_moving_Crouch_B;                                    // 0x1FF48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Moving_B;                                           // 0x1FF50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_Angle;                                             // 0x1FF58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1FF5C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Start_moving_Crouch_A;                                    // 0x1FF60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawInterpSpeed;                                        // 0x1FF68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanResetAimYaw;                                          // 0x1FF6C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1FF6D(0x0003) MISSED OFFSET
	float                                              AimYawInterpSpeedTarget;                                  // 0x1FF70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1FF74(0x0004) MISSED OFFSET
	struct FTimerHandle                                AimYawResetTimer;                                         // 0x1FF78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_Stop_Angle;                                        // 0x1FF80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1FF84(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Stop_Moving_B;                                            // 0x1FF88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Moving_Crouch_A;                                     // 0x1FF90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Moving_Crouch_B;                                     // 0x1FF98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              World_Height;                                             // 0x1FFA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CharZatStart;                                             // 0x1FFA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMagThrow;                                               // 0x1FFA8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_in_place_Error_Tolerance;                            // 0x1FFB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawCache;                                              // 0x1FFBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsAdjustingAimYaw;                                       // 0x1FFC0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Dodge_Rolling_BP;                                         // 0x1FFC1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Left_PropB_Scale;                                         // 0x1FFC2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Right_PropB_Scale;                                        // 0x1FFC3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TabletScaleAlphaOLD;                                      // 0x1FFC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSWeaponComponent*                          Master_Weapon_Ref;                                        // 0x1FFC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Randomized_Int;                                           // 0x1FFD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x4];                                       // 0x1FFD4(0x0004) MISSED OFFSET
	TArray<class UMaster_WeaponComponent_C*>           Back_Holster_Inventory;                                   // 0x1FFD8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInteraction;                                             // 0x1FFE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1FFE9(0x0003) MISSED OFFSET
	float                                              Weapon_Vs_World_Alpha;                                    // 0x1FFEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               locoStartDir;                                             // 0x1FFF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x7];                                       // 0x1FFF1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Disable_Moving_A;                                   // 0x1FFF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Disable_Moving_B;                                   // 0x20000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Disable_Moving;                                     // 0x20008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Disable_Moving_A;                                    // 0x20010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Disable_Moving_B;                                    // 0x20018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Current_Stop_Disable_Moving;                              // 0x20020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           CurrentDisablePivot;                                      // 0x20028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           DisablePivot;                                             // 0x20030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawDelta;                                              // 0x20038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x4];                                       // 0x2003C(0x0004) MISSED OFFSET
	class UAnimMontage*                                InteractionMontage;                                       // 0x20040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InitialDistanceFromJumpLand;                              // 0x20048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               locoStopDir;                                              // 0x2004C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2004D(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           Post_Pivot;                                               // 0x20050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Post_Pivot_Crouch;                                        // 0x20058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Post_Disable_Pivot;                                       // 0x20060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Starting_a_Pivot;                                         // 0x20068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData25[0x3];                                       // 0x20069(0x0003) MISSED OFFSET
	float                                              IKHandOffsetL;                                            // 0x2006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               Vault_Anim;                                               // 0x20070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinMantleHt;                                              // 0x20078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxMantleHt;                                              // 0x2007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Min2StoryMantleHt;                                        // 0x20080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Max2StoryMantleHt;                                        // 0x20084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreIdleWeaponUnhide;                                  // 0x20088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData26[0x7];                                       // 0x20089(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               Cached_Pickup_Sound;                                      // 0x20090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StringMantlesTogether;                                    // 0x20098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData27[0x7];                                       // 0x20099(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Moving_Melee_Lower_Body_A;                          // 0x200A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Moving_Melee_Lower_Body_B;                          // 0x200A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeLowerBodyStartTwist;                                 // 0x200B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKHandOffsetR;                                            // 0x200B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKFootOffsetL;                                            // 0x200B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKFootOffsetR;                                            // 0x200BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IKRootOffset;                                             // 0x200C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableIKRootFix;                                          // 0x200C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsMartialArtistTarget;                                    // 0x200C5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData28[0x2];                                       // 0x200C6(0x0002) MISSED OFFSET
	struct FVector                                     LHand_MantlePoleVector;                                   // 0x200C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RHand_MantlePoleVector;                                   // 0x200D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableAimArray;                                          // 0x200E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CatchingWeapon;                                           // 0x200E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData29[0x2];                                       // 0x200E2(0x0002) MISSED OFFSET
	struct FRotator                                    StoppedRootRotation;                                      // 0x200E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     StoppedRootLocation;                                      // 0x200F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RagdollToMontageTime;                                     // 0x200FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               GetUpSequence;                                            // 0x20100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                GetUpMontage;                                             // 0x20108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  RagdollPelvisTransform;                                   // 0x20110(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              RagdollPelvisTransformAlpha;                              // 0x20140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableRagdollPelvisTransform;                             // 0x20144(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData30[0x3];                                       // 0x20145(0x0003) MISSED OFFSET
	float                                              MartialArtistChargeTime;                                  // 0x20148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData31[0x4];                                       // 0x2014C(0x0004) MISSED OFFSET
	class UAnimMontage*                                DownedMontage;                                            // 0x20150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Walking_B;                                          // 0x20158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Walking_A;                                          // 0x20160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Disable_upper_body_lands;                                 // 0x20168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData32[0x7];                                       // 0x20169(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Eng_Stand_A;                                        // 0x20170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Eng_Stand_B;                                        // 0x20178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Stand_A;                                         // 0x20180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Stand_B;                                         // 0x20188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Stand;                                           // 0x20190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Eng_Crouch_A;                                       // 0x20198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Eng_Crouch_B;                                       // 0x201A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Crouch_A;                                        // 0x201A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Crouch_B;                                        // 0x201B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Eng_Crouch;                                          // 0x201B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWantsToNoseDive;                                         // 0x201C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanChangeNoseDiveState;                                  // 0x201C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFreeFallIntroComplete;                                   // 0x201C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData33[0x1];                                       // 0x201C3(0x0001) MISSED OFFSET
	float                                              FreeFallDiveAlpha;                                        // 0x201C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Turn_Eng;                                                 // 0x201C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Turn_Eng_Crouch;                                          // 0x201D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCrouchingTransitioned1P;                                 // 0x201D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableTurnInPlaceCounterRotate;                          // 0x201D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsStill_OLD;                                             // 0x201DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldSplitUpperBody_1;                                  // 0x201DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AdditiveLandsAlphaOLD;                                    // 0x201DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsInPowerSlideBP;                                        // 0x201E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData34[0x3];                                       // 0x201E1(0x0003) MISSED OFFSET
	float                                              ExitPowerSlideBlendTime;                                  // 0x201E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    RootMantleWallFacing;                                     // 0x201E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsUsingBruteStrength;                                    // 0x201F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData35[0x3];                                       // 0x201F5(0x0003) MISSED OFFSET
	float                                              HitDirectionPrimary_Fwd;                                  // 0x201F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitDirectionPrimary_Right;                                // 0x201FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitDirectionSecondary_Fwd;                                // 0x20200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitDirectionSecondary_Right;                              // 0x20204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CachedPivotAngle;                                         // 0x20208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 Melee_Recoil;                                             // 0x2020C(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Melee_Recoil_Counter;                                     // 0x2026C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitReactionAlpha;                                         // 0x20270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Any_Grip_Override_Active;                                 // 0x20274(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Left_Hand_Grip_Override;                                  // 0x20275(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Right_Hand_Grip_Override;                                 // 0x20276(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData36[0x1];                                       // 0x20277(0x0001) MISSED OFFSET
	struct FVector                                     EngClavOffset;                                            // 0x20278(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECameraShoulder                                    CurrentShoulderBP;                                        // 0x20284(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsHitReacting;                                           // 0x20285(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsServer;                                                // 0x20286(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseCollar;                                               // 0x20287(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollarDirection;                                          // 0x20288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Use_EngHeadMod;                                           // 0x2028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Master_Weapon_Is_Grenade;                                 // 0x2028D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData37[0x2];                                       // 0x2028E(0x0002) MISSED OFFSET
	struct FVector                                     ADS_Hand_Position_L;                                      // 0x20290(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ADS_Hand_Position_R;                                      // 0x2029C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ADS_Hand_Rotation_L;                                      // 0x202A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    ADS_Hand_Rotation_R;                                      // 0x202B4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EADSRollControlsEnum                               ADS_Roll_Controls;                                        // 0x202C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData38[0x3];                                       // 0x202C1(0x0003) MISSED OFFSET
	float                                              ADS_Roll_Interp_speed;                                    // 0x202C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADS_Bump_Looping_Speed;                                   // 0x202C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADS_Bump_Interp_speed;                                    // 0x202CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Stop_Max;                                                 // 0x202D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Stop_Min;                                                 // 0x202D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADS_Bump_Time;                                            // 0x202D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ADS_Bump_Start;                                           // 0x202DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData39[0x3];                                       // 0x202DD(0x0003) MISSED OFFSET
	float                                              Ads_Bump_Start_Time_Delay;                                // 0x202E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Ads_Bump_Stop_Time_Delay;                                 // 0x202E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ADS_Bump_Stop;                                            // 0x202E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData40[0x7];                                       // 0x202E9(0x0007) MISSED OFFSET
	struct FTimerHandle                                ADS_Bump_start_Run_Timer;                                 // 0x202F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTimerHandle                                ADS_Bump_stop_Run_Timer;                                  // 0x202F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NonComOffset;                                             // 0x20300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ChildPhysicsAssetEnable;                                  // 0x20304(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SkinUseCharacterScale;                                    // 0x20305(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData41[0x2];                                       // 0x20306(0x0002) MISSED OFFSET
	struct FVector                                     CharacterScale;                                           // 0x20308(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseRightHandGadgetOverride;                               // 0x20314(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData42[0x3];                                       // 0x20315(0x0003) MISSED OFFSET
	float                                              ExitWoundedBlendOutTime;                                  // 0x20318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Constant_2;                                               // 0x2031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EngHeadAdditiveSecondaryActive;                           // 0x20320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseHuntingRifleHold;                                      // 0x20321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               PrototypeLocomotionGraphEnable;                           // 0x20322(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Enable_Zipline_Eng_Aims;                                  // 0x20323(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableLayeredHandAdditives;                               // 0x20324(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableHand;                                              // 0x20325(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseRightWristGadgetAdditive;                              // 0x20326(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bActiveWeaponUsesCollar;                                  // 0x20327(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_3;                          // 0x20328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_3;                   // 0x20330(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x20334(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_2;                          // 0x20344(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_2;                   // 0x2034C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x20350(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName;                            // 0x20360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID;                     // 0x20368(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x2036C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable;                                        // 0x2037C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable;                                       // 0x20380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_22;                         // 0x20388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_22;                  // 0x20390(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x20394(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_23;                         // 0x203A4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_23;                  // 0x203AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x203B0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_24;                         // 0x203C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_24;                  // 0x203C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x203CC(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_25;                         // 0x203DC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_25;                  // 0x203E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x203E8(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_4;                          // 0x203F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_4;                   // 0x20400(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_2;                                     // 0x20404(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_2;                                      // 0x2040C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_26;                         // 0x20410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_26;                  // 0x20418(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x2041C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_27;                         // 0x2042C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_27;                  // 0x20434(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x20438(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_10;                  // 0x20448(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_28;                         // 0x20458(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_28;                  // 0x20460(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_11;                  // 0x20464(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_29;                         // 0x20474(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_29;                  // 0x2047C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_12;                  // 0x20480(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_30;                         // 0x20490(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_30;                  // 0x20498(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_13;                  // 0x2049C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_3;                                     // 0x204AC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_3;                                      // 0x204B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_31;                         // 0x204B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_31;                  // 0x204C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_32;                         // 0x204C4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_32;                  // 0x204CC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_14;                  // 0x204D0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_15;                  // 0x204E0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_33;                         // 0x204F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_33;                  // 0x204F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_16;                  // 0x204FC(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_34;                         // 0x2050C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_34;                  // 0x20514(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_17;                  // 0x20518(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_35;                         // 0x20528(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_35;                  // 0x20530(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_5;                          // 0x20534(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_5;                   // 0x2053C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_18;                  // 0x20540(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_4;                                     // 0x20550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_4;                                      // 0x20558(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_36;                         // 0x2055C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_36;                  // 0x20564(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x20568(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x2056C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_19;                  // 0x20570(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_37;                         // 0x20580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_37;                  // 0x20588(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_20;                  // 0x2058C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_38;                         // 0x2059C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_38;                  // 0x205A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_21;                  // 0x205A8(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_39;                         // 0x205B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_39;                  // 0x205C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_22;                  // 0x205C4(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_40;                         // 0x205D4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_40;                  // 0x205DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_23;                  // 0x205E0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_24;                  // 0x205F0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_5;                                     // 0x20600(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_5;                                      // 0x20608(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_6;                                     // 0x2060C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_41;                         // 0x20614(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_41;                  // 0x2061C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_25;                  // 0x20620(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_6;                                      // 0x20630(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_42;                         // 0x20634(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_42;                  // 0x2063C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_26;                  // 0x20640(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_43;                         // 0x20650(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_43;                  // 0x20658(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_27;                  // 0x2065C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_6;                          // 0x2066C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_6;                   // 0x20674(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_44;                         // 0x20678(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_44;                  // 0x20680(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_28;                  // 0x20684(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_45;                         // 0x20694(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_45;                  // 0x2069C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_29;                  // 0x206A0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_7;                                     // 0x206B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_7;                                      // 0x206B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_46;                         // 0x206BC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_46;                  // 0x206C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_30;                  // 0x206C8(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_47;                         // 0x206D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_47;                  // 0x206E0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_31;                  // 0x206E4(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_48;                         // 0x206F4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_48;                  // 0x206FC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_32;                  // 0x20700(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_49;                         // 0x20710(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_49;                  // 0x20718(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_33;                  // 0x2071C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_50;                         // 0x2072C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_50;                  // 0x20734(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_34;                  // 0x20738(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x20748(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x20749(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2074A(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_35;                  // 0x2074C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData44[0x4];                                       // 0x2075C(0x0004) MISSED OFFSET
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x20760(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x20768(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData45[0x3];                                       // 0x20769(0x0003) MISSED OFFSET
	float                                              K2Node_Event_Duration;                                    // 0x2076C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   K2Node_Event_Direction;                                   // 0x20770(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll;                               // 0x20778(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x2077C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x20780(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_2;                             // 0x20784(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_2;                            // 0x20788(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_2;                              // 0x2078C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_NewInteractState;                            // 0x20790(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_NewInteractHeight;                           // 0x20798(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_NewInteractTime;                             // 0x2079C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x207A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData46[0x3];                                       // 0x207A1(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_OldInteractState;                            // 0x207A4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess_2;                           // 0x207AC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData47[0x3];                                       // 0x207AD(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Event_PivotLocation;                               // 0x207B0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData48[0x4];                                       // 0x207BC(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              CallFunc_GetAncillaryMeshes_ReturnValue;                  // 0x207C0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>              CallFunc_GetAncillaryMeshes_ReturnValue_2;                // 0x207D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CallFunc_Array_Get_Item;                                  // 0x207E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CallFunc_Array_Get_Item_2;                                // 0x207E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMasterWeapon_ABP_C*                         K2Node_DynamicCast_AsMaster_Weapon_ABP;                   // 0x207F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x207F8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData49[0x3];                                       // 0x207F9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_RootLocation;                          // 0x207FC(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    K2Node_CustomEvent_RootRotation;                          // 0x20808(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_StopLocation;                                // 0x20814(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_StartLocation;                               // 0x20820(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_7;                          // 0x2082C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_7;                   // 0x20834(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID;// 0x20838(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData50[0x4];                                       // 0x2083C(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;     // 0x20840(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_2;// 0x20848(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData51[0x4];                                       // 0x2084C(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;   // 0x20850(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_3;                           // 0x20858(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_4;                           // 0x20859(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData52[0x2];                                       // 0x2085A(0x0002) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_3;// 0x2085C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;   // 0x20860(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_5;                           // 0x20868(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x20869(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_Event_OldDirection;                                // 0x2086A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_Event_NewDirection;                                // 0x2086B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InMantleHeight;                              // 0x2086C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bInVault;                                    // 0x20870(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData53[0x3];                                       // 0x20871(0x0003) MISSED OFFSET
	float                                              K2Node_Event_InVaultDrop;                                 // 0x20874(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InUpDuration;                                // 0x20878(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InAcrossDuration;                            // 0x2087C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_InDownDuration;                              // 0x20880(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_InMantleName;                                // 0x20884(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x2088C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2088D(0x0003) MISSED OFFSET
	float                                              Temp_float_Variable;                                      // 0x20890(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_36;                  // 0x20894(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x208A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x208A8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData55[0x3];                                       // 0x208A9(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default;                                    // 0x208AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_2;                                    // 0x208B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_8;                          // 0x208B4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_8;                   // 0x208BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_37;                  // 0x208C0(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class AMainCharacter_C*                            K2Node_DynamicCast_AsMain_Character;                      // 0x208D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x208D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x208D9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData56[0x2];                                       // 0x208DA(0x0002) MISSED OFFSET
	float                                              K2Node_Select_Default_2;                                  // 0x208DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_4;// 0x208E0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData57[0x4];                                       // 0x208E4(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;   // 0x208E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Select_Default_3;                                  // 0x208F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_7;                           // 0x208F4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData58[0x3];                                       // 0x208F5(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default_4;                                  // 0x208F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_9;                          // 0x208FC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_9;                   // 0x20904(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_10;                         // 0x20908(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_10;                  // 0x20910(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_38;                  // 0x20914(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_3;                                    // 0x20924(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_2;                      // 0x20928(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData59[0x3];                                       // 0x20929(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_39;                  // 0x2092C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_40;                  // 0x2093C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_4;                                    // 0x2094C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_5;// 0x20950(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData60[0x4];                                       // 0x20954(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;   // 0x20958(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_8;                           // 0x20960(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_5;                                     // 0x20961(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData61[0x2];                                       // 0x20962(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_41;                  // 0x20964(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Select_Default_5;                                  // 0x20974(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride;             // 0x20978(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride_2;           // 0x20979(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride_3;           // 0x2097A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData62[0x1];                                       // 0x2097B(0x0001) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_42;                  // 0x2097C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride;              // 0x2098C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData63[0x3];                                       // 0x2098D(0x0003) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_6;// 0x20990(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData64[0x4];                                       // 0x20994(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;   // 0x20998(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_10;                          // 0x209A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData65[0x7];                                       // 0x209A1(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsKSCharacter_Anim_Inst;               // 0x209A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x209B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData66[0x7];                                       // 0x209B1(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsKSCharacter_Anim_Inst_2;             // 0x209B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                            // 0x209C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSPowerSlideEndReason                             K2Node_Event_EndReason;                                   // 0x209C1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x209C2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData67[0x5];                                       // 0x209C3(0x0005) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsKSCharacter_Anim_Inst_3;             // 0x209C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_6;                            // 0x209D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData68[0x3];                                       // 0x209D1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_43;                  // 0x209D4(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_8;                                     // 0x209E4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_2;                            // 0x209EC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_CustomEvent_NewMoveDirection_2;                    // 0x209ED(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               K2Node_CustomEvent_NewMoveDirection;                      // 0x209EE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData69[0x1];                                       // 0x209EF(0x0001) MISSED OFFSET
	struct FName                                       Temp_name_Variable_9;                                     // 0x209F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Map_Find_Value;                                  // 0x209F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECombatState                                       K2Node_Event_NewCombatState;                              // 0x20A00(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bBlockCooldown;                              // 0x20A01(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bForce;                                      // 0x20A02(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData70[0x5];                                       // 0x20A03(0x0005) MISSED OFFSET
	class UAnimMontage*                                K2Node_Event_ReviveMontage;                               // 0x20A08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsInAir;                                    // 0x20A10(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_3;                      // 0x20A11(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData71[0x2];                                       // 0x20A12(0x0002) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_7;// 0x20A14(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7;   // 0x20A18(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSWeaponComponent*                          K2Node_Event_Weapon_2;                                    // 0x20A20(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_14;                          // 0x20A28(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData72[0x7];                                       // 0x20A29(0x0007) MISSED OFFSET
	class UKSWeaponComponent*                          K2Node_Event_Weapon;                                      // 0x20A30(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_10;                                    // 0x20A38(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_CustomEvent_In_Character;                          // 0x20A40(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_CustomEvent_Character;                             // 0x20A48(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDamageEffect                               K2Node_CustomEvent_Response;                              // 0x20A50(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_11;                                    // 0x20AA0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation;      // 0x20AA8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal;        // 0x20AB4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource;     // 0x20AC0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection;          // 0x20ACC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData73[0x3];                                       // 0x20ACD(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable_12;                                    // 0x20AD0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_8;                                      // 0x20AD8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_11;                         // 0x20ADC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_11;                  // 0x20AE4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_44;                  // 0x20AE8(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_2;            // 0x20AF8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_3;                            // 0x20AF9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData74[0x6];                                       // 0x20AFA(0x0006) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetDownedTransitionMontage_OutAnimMontage;       // 0x20B00(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSTurnInPlaceAnimationVariant                     K2Node_Event_AnimationVariant;                            // 0x20B08(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData75[0x3];                                       // 0x20B09(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DelayTime;                                   // 0x20B0C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_2;                           // 0x20B10(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData76[0x3];                                       // 0x20B11(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_12;                         // 0x20B14(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_12;                  // 0x20B1C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_45;                  // 0x20B20(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_4;                      // 0x20B30(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_4;                            // 0x20B31(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData77[0x2];                                       // 0x20B32(0x0002) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_13;                         // 0x20B34(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_13;                  // 0x20B3C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_46;                  // 0x20B40(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData78[0x50];                                      // 0x20B50(0x0050) UNKNOWN PROPERTY: K2Node_CustomEvent_Keywords
	struct FName                                       K2Node_CustomEvent_NotifyName_14;                         // 0x20BA0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_14;                  // 0x20BA8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_15;                         // 0x20BAC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_15;                  // 0x20BB4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_47;                  // 0x20BB8(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_3;                           // 0x20BC8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData79[0x3];                                       // 0x20BC9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_48;                  // 0x20BCC(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_13;                                    // 0x20BDC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable_9;                                      // 0x20BE4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_16;                         // 0x20BE8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_16;                  // 0x20BF0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_49;                  // 0x20BF4(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_UpdateCollarDisableLogic_PlayCollarForWepType;   // 0x20C04(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData80[0x3];                                       // 0x20C05(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_17;                         // 0x20C08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_17;                  // 0x20C10(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_50;                  // 0x20C14(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_3;            // 0x20C24(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData81[0x3];                                       // 0x20C25(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_18;                         // 0x20C28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_18;                  // 0x20C30(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_51;                  // 0x20C34(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_4;            // 0x20C44(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsSprinting;                           // 0x20C45(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData82[0x2];                                       // 0x20C46(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_52;                  // 0x20C48(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_5;            // 0x20C58(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData83[0x7];                                       // 0x20C59(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData84[0x50];                                      // 0x20C59(0x0050) UNKNOWN PROPERTY: CallFunc_GetAllSkinKeywords_InOutKeywords
	struct FName                                       K2Node_CustomEvent_NotifyName_19;                         // 0x20CB0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_19;                  // 0x20CB8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_53;                  // 0x20CBC(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_6;            // 0x20CCC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_7;            // 0x20CCD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData85[0x2];                                       // 0x20CCE(0x0002) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_20;                         // 0x20CD0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_20;                  // 0x20CD8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_54;                  // 0x20CDC(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_8;            // 0x20CEC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimMontage_bHasOverride_9;            // 0x20CED(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData86[0x2];                                       // 0x20CEE(0x0002) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_8;// 0x20CF0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData87[0x4];                                       // 0x20CF4(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8;   // 0x20CF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_16;                          // 0x20D00(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData88[0x3];                                       // 0x20D01(0x0003) MISSED OFFSET
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_9;// 0x20D04(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_9;   // 0x20D08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_10;// 0x20D10(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData89[0x4];                                       // 0x20D14(0x0004) MISSED OFFSET
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_10;  // 0x20D18(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_17;                          // 0x20D20(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_18;                          // 0x20D21(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData90[0x6];                                       // 0x20D22(0x0006) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Get_Roll_Animation_Set_Cached;                   // 0x20D28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_14;                                    // 0x20D30(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetSkinnedAnimSequence_bHasOverride_4;           // 0x20D38(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData91[0x3];                                       // 0x20D39(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable_10;                                     // 0x20D3C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_21;                         // 0x20D40(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_21;                  // 0x20D48(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_55;                  // 0x20D4C(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData92[0x4];                                       // 0x20D5C(0x0004) MISSED OFFSET

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
	void ExecuteUbergraph_PCM_Hero_ABP_84(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_55(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_53(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_52(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_37(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_36(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_32(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_24(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PCM_Hero_ABP_1(int bpp__EntryPoint__pf);
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_723417A547338353502AF28D5622C932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_452E05D448B4D66D1C47D39A3E386733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_37906F5F492BB9398CB5C894999E8B65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_299A235045F7CAFDDC18FFBABC71DFF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1CDEF52142A60BC67A453693093D4120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_1888317840C6DA4D8814B18BC7223E23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendByLOD_BF890DE54BACD0C3904012BE70422665();
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
	void Anim_MIrror_Delay_End_BP();
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
