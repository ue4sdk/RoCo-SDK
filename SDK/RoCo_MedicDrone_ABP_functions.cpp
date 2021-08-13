// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDrone_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MedicDrone_ABP.MedicDrone_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMedicDrone_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_ABP.MedicDrone_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MedicDrone_ABP.MedicDrone_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_18356EB047A5B59D71847482D6DDB991
// (FUNC_BlueprintEvent)

void UMedicDrone_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_18356EB047A5B59D71847482D6DDB991()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_ABP.MedicDrone_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_18356EB047A5B59D71847482D6DDB991");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDrone_ABP.MedicDrone_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_9D6773BE4D27EBC8CA99A199805639BC
// (FUNC_BlueprintEvent)

void UMedicDrone_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_9D6773BE4D27EBC8CA99A199805639BC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_ABP.MedicDrone_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_9D6773BE4D27EBC8CA99A199805639BC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDrone_ABP.MedicDrone_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_D8E035DC415C9AF78A1652B27D1F1D87
// (FUNC_BlueprintEvent)

void UMedicDrone_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_D8E035DC415C9AF78A1652B27D1F1D87()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_ABP.MedicDrone_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MedicDrone_ABP_AnimGraphNode_TransitionResult_D8E035DC415C9AF78A1652B27D1F1D87");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDrone_ABP.MedicDrone_ABP_C.ExecuteUbergraph_MedicDrone_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedicDrone_ABP_C::ExecuteUbergraph_MedicDrone_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_ABP.MedicDrone_ABP_C.ExecuteUbergraph_MedicDrone_ABP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
