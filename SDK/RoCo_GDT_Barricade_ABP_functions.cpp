// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GDT_Barricade_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UGDT_Barricade_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_59F197FD4E563328886783B0C79B07EB
// (FUNC_BlueprintEvent)

void UGDT_Barricade_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_59F197FD4E563328886783B0C79B07EB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_59F197FD4E563328886783B0C79B07EB");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_3826CDAA4329537438E3139DD691BF2A
// (FUNC_BlueprintEvent)

void UGDT_Barricade_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_3826CDAA4329537438E3139DD691BF2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_Barricade_ABP_AnimGraphNode_TransitionResult_3826CDAA4329537438E3139DD691BF2A");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGDT_Barricade_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.ExecuteUbergraph_GDT_Barricade_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGDT_Barricade_ABP_C::ExecuteUbergraph_GDT_Barricade_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_Barricade_ABP.GDT_Barricade_ABP_C.ExecuteUbergraph_GDT_Barricade_ABP");

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
