#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GDT_APS_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass GDT_APS_ABP.GDT_APS_ABP_C
// 0x0693 (0x0903 - 0x0270)
class UGDT_APS_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x02B8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x02F0(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0328(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x03B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x03F0(0x0088)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x0478(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0550(0x0088)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x05D8(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x06B0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0738(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0778(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0800(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0840(0x00C0)
	bool                                               Fire1;                                                    // 0x0900(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Fire2;                                                    // 0x0901(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bShouldOpen;                                              // 0x0902(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass GDT_APS_ABP.GDT_APS_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_APS_ABP_AnimGraphNode_TransitionResult_1F94496F45A41337989F9A95C0B2938A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_GDT_APS_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
