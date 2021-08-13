// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GDT_WingPack_v2_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UGDT_WingPack_v2_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_408ABC6A44DB3A7A634BD88CCB7E44D4
// (FUNC_BlueprintEvent)

void UGDT_WingPack_v2_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_408ABC6A44DB3A7A634BD88CCB7E44D4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_408ABC6A44DB3A7A634BD88CCB7E44D4");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_289701924F3255D796519FA2BA33E8DE
// (FUNC_BlueprintEvent)

void UGDT_WingPack_v2_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_289701924F3255D796519FA2BA33E8DE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_289701924F3255D796519FA2BA33E8DE");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_E28ACEE94CB48A1BD1007C90023B2A4A
// (FUNC_BlueprintEvent)

void UGDT_WingPack_v2_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_E28ACEE94CB48A1BD1007C90023B2A4A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_WingPack_v2_ABP_AnimGraphNode_TransitionResult_E28ACEE94CB48A1BD1007C90023B2A4A");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGDT_WingPack_v2_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.ExecuteUbergraph_GDT_WingPack_v2_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGDT_WingPack_v2_ABP_C::ExecuteUbergraph_GDT_WingPack_v2_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_WingPack_v2_ABP.GDT_WingPack_v2_ABP_C.ExecuteUbergraph_GDT_WingPack_v2_ABP");

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
