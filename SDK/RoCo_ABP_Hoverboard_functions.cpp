// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ABP_Hoverboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Hoverboard.ABP_Hoverboard_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Hoverboard_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hoverboard.ABP_Hoverboard_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Hoverboard.ABP_Hoverboard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hoverboard_AnimGraphNode_TransitionResult_D4826CA5494C112736B7E08D6423DE75
// (FUNC_BlueprintEvent)

void UABP_Hoverboard_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hoverboard_AnimGraphNode_TransitionResult_D4826CA5494C112736B7E08D6423DE75()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hoverboard.ABP_Hoverboard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hoverboard_AnimGraphNode_TransitionResult_D4826CA5494C112736B7E08D6423DE75");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ABP_Hoverboard.ABP_Hoverboard_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Hoverboard_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hoverboard.ABP_Hoverboard_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function ABP_Hoverboard.ABP_Hoverboard_C.AnimNotify_ScaleHoverBoard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Hoverboard_C::AnimNotify_ScaleHoverBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hoverboard.ABP_Hoverboard_C.AnimNotify_ScaleHoverBoard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ABP_Hoverboard.ABP_Hoverboard_C.ExecuteUbergraph_ABP_Hoverboard
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Hoverboard_C::ExecuteUbergraph_ABP_Hoverboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Hoverboard.ABP_Hoverboard_C.ExecuteUbergraph_ABP_Hoverboard");

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
