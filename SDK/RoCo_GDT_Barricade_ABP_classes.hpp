#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GDT_Barricade_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass GDT_Barricade_ABP.GDT_Barricade_ABP_C
// 0x079A (0x0A0A - 0x0270)
class UGDT_Barricade_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x02B8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x02F0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0328(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0360(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0398(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0420(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0460(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x04E8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0528(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x05B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x05F0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0678(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x06B8(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0778(0x0118)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0890(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x08C0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x08F0(0x0118)
	bool                                               DeployedWhenCrouched;                                     // 0x0A08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               GlassShattered;                                           // 0x0A09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass GDT_Barricade_ABP.GDT_Barricade_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_59F197FD4E563328886783B0C79B07EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_3826CDAA4329537438E3139DD691BF2A();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_GDT_Barricade_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
