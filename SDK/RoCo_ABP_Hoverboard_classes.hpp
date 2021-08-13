#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ABP_Hoverboard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Hoverboard.ABP_Hoverboard_C
// 0x064B (0x16FB - 0x10B0)
class UABP_Hoverboard_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x10F8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1130(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1168(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x11A0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x1228(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1268(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x12F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1330(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x13B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x13F8(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1480(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x14C0(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1580(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x15B0(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x16C8(0x0030)
	bool                                               FreeFallStarted;                                          // 0x16F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               FreeFallEnded;                                            // 0x16F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HoverBoardScaleOut;                                       // 0x16FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Hoverboard.ABP_Hoverboard_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hoverboard_AnimGraphNode_TransitionResult_D4826CA5494C112736B7E08D6423DE75();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_ScaleHoverBoard();
	void ExecuteUbergraph_ABP_Hoverboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
