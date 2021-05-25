#pragma once

// Rogue Company (0.59) SDK

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
// 0x05FA (0x090A - 0x0310)
class UTablet_Animinstance_C : public UKSTabletAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0318(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0350(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0380(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x03B0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x03E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0410(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0490(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x04C8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0548(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0580(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0600(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0638(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x06B8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x06F0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x07A8(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x08B8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x08E0(0x0028)
	bool                                               Is_Fully_Opened;                                          // 0x0908(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Fully_Closed;                                          // 0x0909(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

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
