#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sub_Hero_ABP_Zipline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Sub_Hero_ABP_Zipline.Sub_Hero_ABP_Zipline_C
// 0x4DB0 (0x5E60 - 0x10B0)
class USub_Hero_ABP_Zipline_C : public UKSCharacterAnimInst
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x10F0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x1128(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x1160(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x1198(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x11D0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x1208(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x1240(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x1278(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x12B0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x12E8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x1320(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x1358(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x1390(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x13C8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_8;                        // 0x1408(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x1608(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x16F8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1738(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x17C0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_7;                        // 0x1870(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x1A70(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x1B60(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_6;                        // 0x1BA0(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x1DA0(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_5;                        // 0x1E90(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x2090(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x2180(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_4;                        // 0x2240(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x2440(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_3;                        // 0x2530(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x2730(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x2820(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_2;                        // 0x2860(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x2A60(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x2B50(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x2B90(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x2C50(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x2CD8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x2D18(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x2DD8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x2E88(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x2EC0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x2EF8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x3058(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x30E0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned;                          // 0x3120(0x0200) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x3320(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x3480(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x3550(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x35D8(0x00F0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x36C8(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x3708(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x3868(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x38F0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x3930(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x39F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x3AA0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                           // 0x3B68(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                              // 0x3BA0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_8;                         // 0x3C78(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_7;                         // 0x3E38(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                           // 0x3FF8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x4030(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                              // 0x40E0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_6;                         // 0x41B8(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_5;                         // 0x4378(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x4538(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x4570(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x45A8(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x4668(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                              // 0x46A0(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_4;                         // 0x4778(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_3;                         // 0x4938(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x4AF8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x4B30(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x4BF8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x4CA8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x4CE0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x4D18(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x4DF0(0x0088) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x4E78(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x4FD8(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x5088(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x5138(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x51E8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x52B8(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x5388(0x00D0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x5458(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x5520(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x5558(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x5590(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x55C8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x5690(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x56C8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x5700(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x5738(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x5770(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x57A8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x5908(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x5940(0x00D8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_2;                         // 0x5A18(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                           // 0x5BD8(0x01C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x5D98(0x0038) (CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                Character;                                                // 0x5DD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Zipline_Lower_Wheel_Rotator;                              // 0x5DD8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Zipline_Upper_Wheel_Rotator;                              // 0x5DE4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Wheel_Speed;                                              // 0x5DF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Enable_Zipline_Eng_Aims;                                  // 0x5DF4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseHuntingRifleHold;                                      // 0x5DF5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableLayeredHandAdditives;                               // 0x5DF6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsServer;                                                // 0x5DF7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable;                                      // 0x5DF8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_2;                                    // 0x5DFC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x5E00(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x5E01(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default;                                    // 0x5E04(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x5E08(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x5E09(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll;                               // 0x5E0C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x5E10(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x5E14(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_3;                                    // 0x5E18(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_4;                                    // 0x5E1C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x5E20(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x5E21(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default_2;                                  // 0x5E24(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_2;                             // 0x5E28(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_2;                            // 0x5E2C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_2;                              // 0x5E30(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_5;                                    // 0x5E34(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_6;                                    // 0x5E38(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x5E3C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x5E3D(0x0003) MISSED OFFSET
	float                                              K2Node_Select_Default_3;                                  // 0x5E40(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_7;                                    // 0x5E44(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Temp_float_Variable_8;                                    // 0x5E48(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Select_Default_4;                                  // 0x5E4C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x5E50(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x5E58(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x5E59(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Sub_Hero_ABP_Zipline.Sub_Hero_ABP_Zipline_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_DDE3AA1946C4264B5A59E0B1BADCBADC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_C466D65B43CBA420AD19559201CBC6E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_A9C2028F4E6ACB4C8205B0B4CF71E524();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TwoWayBlend_242462904500E0B6D930E19E4DB0C6D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_D9C5B0034C9C28AA4A0434BA01E27E73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_9854070744879ACC1CD53694030A7170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_903296E34EA19E86900F3EA82F7C9767();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_50A1C84E4CE59ADEEDDB11A96397537E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_1E1D89A741DF2E43F644BCA5EE070A99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_1D7ECD4D4AEE6A3C1A8DB19194D6362A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_TransitionResult_09A602084B5A102876EB09BB3031974C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpaceSkinned_5F46B98C4B1D30DBFEFD828DAC1F7AFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpaceSkinned_577EE3674D6488AD1BA5B5BA5E8F3A50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpacePlayer_BB5718EA470B95B8C71CAEAD9061FD51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_BlendSpacePlayer_63FADFCC4369E5CA43AEB6BE83BB21A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_D6326F614B64DD28D034169EC440A648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_AD8EED6E4023B5E4F83568BEDCA26828();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_A46F832B4EAD1C4FD29A9DB467609956();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Zipline_AnimGraphNode_AimOffsetSkinned_96E5A41842E6730E958EB182B8341A1C();
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
