// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GDT_APS_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GDT_APS_ABP.GDT_APS_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UGDT_APS_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_APS_ABP.GDT_APS_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function GDT_APS_ABP.GDT_APS_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_APS_ABP_AnimGraphNode_TransitionResult_1F94496F45A41337989F9A95C0B2938A
// (FUNC_BlueprintEvent)

void UGDT_APS_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_APS_ABP_AnimGraphNode_TransitionResult_1F94496F45A41337989F9A95C0B2938A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_APS_ABP.GDT_APS_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GDT_APS_ABP_AnimGraphNode_TransitionResult_1F94496F45A41337989F9A95C0B2938A");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GDT_APS_ABP.GDT_APS_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGDT_APS_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_APS_ABP.GDT_APS_ABP_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function GDT_APS_ABP.GDT_APS_ABP_C.ExecuteUbergraph_GDT_APS_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGDT_APS_ABP_C::ExecuteUbergraph_GDT_APS_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GDT_APS_ABP.GDT_APS_ABP_C.ExecuteUbergraph_GDT_APS_ABP");

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
