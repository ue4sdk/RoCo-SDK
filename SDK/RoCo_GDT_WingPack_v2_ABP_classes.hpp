#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GDT_WingPack_v2_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C
// 0x10B4 (0x2164 - 0x10B0)
class UGDT_WingPack_v2_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x10F8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x1130(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x1168(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x11A0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x11D8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1210(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1248(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1280(0x0088)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0x1308(0x0198)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x14A0(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x1550(0x0198)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x16E8(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x1770(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x17B0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x1838(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1878(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x1900(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1940(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x19C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1A08(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1A90(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1AD0(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1B90(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1CA8(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1CD8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1D08(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1DB8(0x0118)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1ED0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1F98(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1FD0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x2008(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x20B8(0x0088)
	float                                              PropellerSpeed;                                           // 0x2140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxPropellerSpeed;                                        // 0x2144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PropellerShutoffTime;                                     // 0x2148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    PropellerRotatorL;                                        // 0x214C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    PropellerRotatorR;                                        // 0x2158(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_408ABC6A44DB3A7A634BD88CCB7E44D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_289701924F3255D796519FA2BA33E8DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_E28ACEE94CB48A1BD1007C90023B2A4A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_GDT_WingPack_v2_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
