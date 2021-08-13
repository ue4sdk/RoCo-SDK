#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Tablet_Animinstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C
// 0x0682 (0x09E2 - 0x0360)
class UTablet_Animinstance_C : public UKSTabletAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x03A8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x03E0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0418(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0450(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0488(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0510(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0550(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x05D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0618(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x06A0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x06E0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0768(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x07A8(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0868(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0980(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x09B0(0x0030)
	bool                                               Is_Fully_Opened;                                          // 0x09E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Fully_Closed;                                          // 0x09E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	bool CheckFullyClosed();
	bool CheckFullyOpened();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195();
	void AnimNotify_BecomeFullyOpened();
	void AnimNotify_EndFullyOpened();
	void AnimNotify_BecomeFullyClosed();
	void AnimNotify_EndFullyClosed();
	void ExecuteUbergraph_Tablet_Animinstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
