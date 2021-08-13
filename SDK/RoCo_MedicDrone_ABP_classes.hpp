#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDrone_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MedicDrone_ABP.MedicDrone_ABP_C
// 0x079A (0x0A0A - 0x0270)
class UMedicDrone_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x02B8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x02F0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0328(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0360(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0398(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x03D0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0408(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x0440(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x04C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0508(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x0590(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x05D0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0658(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0698(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0720(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0760(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x07E8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0828(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x08B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x08F0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x09B0(0x0058)
	bool                                               bIsHealing;                                               // 0x0A08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsUnHolstered;                                           // 0x0A09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass MedicDrone_ABP.MedicDrone_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_18356EB047A5B59D71847482D6DDB991();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_9D6773BE4D27EBC8CA99A199805639BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_D8E035DC415C9AF78A1652B27D1F1D87();
	void ExecuteUbergraph_MedicDrone_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
