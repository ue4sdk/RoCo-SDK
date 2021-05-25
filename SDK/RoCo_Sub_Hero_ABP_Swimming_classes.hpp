#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sub_Hero_ABP_Swimming_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Sub_Hero_ABP_Swimming.Sub_Hero_ABP_Swimming_C
// 0x42A0 (0x5340 - 0x10A0)
class USub_Hero_ABP_Swimming_C : public UKSSwimmingAnimInst
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x10A0(0x0030) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                        // 0x10D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                        // 0x1100(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                        // 0x1130(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                        // 0x1160(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                        // 0x1190(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                        // 0x11C0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                        // 0x11F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x1220(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x1250(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x1280(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x12B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x12E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x1310(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x1340(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x1370(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x13A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x13D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x1400(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x1430(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x1460(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x1490(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x14C0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x14F0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x1520(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x1550(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x1580(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x15B0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x15E0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x1610(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x1640(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x1670(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x16A0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x16D0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x1700(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x1730(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1760(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1790(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_13;                         // 0x17C0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1918(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x1998(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_12;                         // 0x19D0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_11;                         // 0x1B28(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_10;                         // 0x1C80(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_9;                          // 0x1DD8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x1F30(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                           // 0x1FB0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x2058(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x20D8(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                             // 0x2158(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x2200(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                         // 0x2280(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x2328(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8;                          // 0x2360(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7;                          // 0x24B8(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_6;                        // 0x2610(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x2808(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x28F0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x2970(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x2A18(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x2AC0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x2B40(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x2B78(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x2BC8(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x2C18(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x2CC0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_5;                        // 0x2CF8(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_4;                        // 0x2EF0(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x30E8(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x31D0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x3278(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x3360(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_6;                          // 0x3398(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x34F0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x3648(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x37A0(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_3;                        // 0x38F8(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x3AF0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x3B70(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x3BF0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x3C70(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x3CF0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x3DA8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x3E50(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x3F38(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_2;                        // 0x3F70(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned;                          // 0x4168(0x01F8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x4360(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x4448(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x44F0(0x00E8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x45D8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x4610(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x4768(0x0158) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x48C0(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                               // 0x4940(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x49C0(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x4A68(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x4AA0(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x4B58(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x4BD8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x4C10(0x00B8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x4CC8(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x4D70(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x4E18(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x4E40(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x4E68(0x0110) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x4F78(0x00A8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                           // 0x5020(0x01B8) (CPF_NativeAccessSpecifierPublic)
	float                                              MaxMantleHt;                                              // 0x51D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Max2StoryMantleHt;                                        // 0x51DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StringMantlesTogether;                                    // 0x51E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x51E1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Swim_Moving;                                        // 0x51E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Swim_Moving_B;                                      // 0x51F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Start_Swim_Moving_A;                                      // 0x51F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_Angle;                                             // 0x5200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x5204(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Stop_Swim_Moving_A;                                       // 0x5208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Swim_Moving_B;                                       // 0x5210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Stop_Swim_Moving;                                         // 0x5218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_Stop_Angle;                                        // 0x5220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               locoStartDir;                                             // 0x5224(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               locoStopDir;                                              // 0x5225(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x5226(0x0002) MISSED OFFSET
	int                                                TurnVal;                                                  // 0x5228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Transition_Downed;                                        // 0x522C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Transition_Pivot;                                         // 0x522D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsFallingToWater;                                         // 0x522E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x1];                                       // 0x522F(0x0001) MISSED OFFSET
	struct FVector                                     Replace_with_code;                                        // 0x5230(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x523C(0x0004) MISSED OFFSET
	class AKSCharacter*                                Character;                                                // 0x5240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Transition_State_Lock;                                    // 0x5248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x5249(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x524A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x1];                                       // 0x524B(0x0001) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll;                               // 0x524C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x5250(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x5254(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_2;                             // 0x5258(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_2;                            // 0x525C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_2;                              // 0x5260(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_3;                             // 0x5264(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_3;                            // 0x5268(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_3;                              // 0x526C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x5270(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x5271(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRotator_Roll_4;                             // 0x5274(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_4;                            // 0x5278(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_4;                              // 0x527C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Select_Default;                                    // 0x5280(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_X;                                   // 0x528C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Y;                                   // 0x5290(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Z;                                   // 0x5294(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Select_Default_2;                                  // 0x5298(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_5;                             // 0x52A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_5;                            // 0x52A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_5;                              // 0x52AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_X_2;                                 // 0x52B0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Y_2;                                 // 0x52B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Z_2;                                 // 0x52B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Roll_6;                             // 0x52BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Pitch_6;                            // 0x52C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakRotator_Yaw_6;                              // 0x52C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x52C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x52C9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Select_Default_3;                                  // 0x52CC(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Select_Default_4;                                  // 0x52D8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_X_3;                                 // 0x52E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Y_3;                                 // 0x52E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Z_3;                                 // 0x52EC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x52F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_StartLocation;                               // 0x52F4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_StopLocation;                                // 0x5300(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSTurnInPlaceAnimationVariant                     K2Node_Event_AnimationVariant;                            // 0x530C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x530D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DelayTime;                                   // 0x5310(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x5314(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x5315(0x0003) MISSED OFFSET
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x5318(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x5320(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x5321(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_Event_PivotLocation;                               // 0x5324(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bShouldLock;                                 // 0x5330(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0xF];                                       // 0x5331(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Sub_Hero_ABP_Swimming.Sub_Hero_ABP_Swimming_C");
		return ptr;
	}


	void SwimNotifyTransitionStateLock(bool bpp__bShouldLock__pf);
	void SwimNotifyTransitionEnd();
	void LocomotionStop(const struct FVector& bpp__StopLocation__pf);
	void LocomotionStart(const struct FVector& bpp__StartLocation__pf);
	void LocomotionPivot(const struct FVector& bpp__PivotLocation__pf);
	void EventStopSwimming();
	void EventStartSwimming();
	void EventDoGoDown();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_EDD270D34439CCC54F7076BF79F86501();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_E3E49F7F454B47E501D44EA073EE26EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_CE2D32B1481E672703161D88E16C4293();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C5D70A1F49036F86E187EE8C571CB2DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C49A16B641148CF5EAC0AF962C213E99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C3BF42E04C99D31FBCA4D3AFC7973064();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C383F92B49670B60382C5A9FC1940F6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_C2D7D736421F594024F7C2AF55FCC2EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_BD5472394057FF2F92436AB44DC691B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_BA9EF61A495651544A5BA4AFFA755093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_B223D50A4F3B4C41684F9E8177A8F7A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_AFB0DB7640628CC60CE90A88F7D7B406();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_9B29AAAF44C7BC37AE81E2A03FB98EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_938C84254015E9783201E49BF3DF9465();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_6365BFCC4C7591A5B093198C5CA9FF8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_5B8DBD004F9A9F51037D04B9CB4BB5D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_412E9E2342DC09D338E7689E4AE3F409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_35CE07414E66C5731CDC05BDE1C3FF54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_2208B5994E350E2087383187EF43E431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_131305F54923CBAAD2ECACAF3945B3DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_10CC17F94E9FC40609685BA8E8696FD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_0A8F60B345D2BCC08EA3789A0068E76B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_069CC5CC44770AEB005A73A9D24ABCB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_TransitionResult_01DF78A64F399D3147CEBFB5A62CE2E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpaceSkinned_D851DFDC483F78D4EAA22B93237B96A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpaceSkinned_7A7AB61949D5571EC30570B52C4D42BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpaceSkinned_41A40DD044D9659BD6A16D80547254CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpacePlayer_C4FB8F814F606919DFCCC893012E97E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpacePlayer_853E42D84AFC62678C3DDC898DF2A596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendSpacePlayer_2C181114494B887D79B62E9850F50428();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendListByInt_DAF14B4B4B8333FABBF358A49999E8D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_Swimming_AnimGraphNode_BlendListByInt_9E589FC04A148FF3686CC28EC92AE41E();
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
	void BlueprintInitializeAnimation();
	void AnimNotify_UnLockTransitions();
	void AnimNotify_PivotTransitionEnd();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
