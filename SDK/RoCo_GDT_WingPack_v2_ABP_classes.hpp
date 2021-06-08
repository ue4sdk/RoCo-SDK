#pragma once

// Rogue Company (0.60) SDK

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
// 0x0FAC (0x204C - 0x10A0)
class UGDT_WingPack_v2_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10A8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x10E0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x1110(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x1140(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x1170(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x11A0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x11D0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1200(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1230(0x0080)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0x12B0(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1440(0x00A8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x14E8(0x0190)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1678(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x16F8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1730(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x17B0(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x17E8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x1868(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x18A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1920(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1958(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x19D8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1A10(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1AC8(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1BD8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1C00(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1C28(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1CD0(0x0110)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1DE0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1EA0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1ED0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1F00(0x00A8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1FA8(0x0080)
	float                                              PropellerSpeed;                                           // 0x2028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxPropellerSpeed;                                        // 0x202C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PropellerShutoffTime;                                     // 0x2030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    PropellerRotatorL;                                        // 0x2034(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    PropellerRotatorR;                                        // 0x2040(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

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
