// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Tablet_Animinstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tablet_Animinstance.Tablet_Animinstance_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UTablet_Animinstance_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyClosed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTablet_Animinstance_C::CheckFullyClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyClosed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyOpened
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTablet_Animinstance_C::CheckFullyOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyOpened");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B
// (FUNC_BlueprintEvent)

void UTablet_Animinstance_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195
// (FUNC_BlueprintEvent)

void UTablet_Animinstance_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTablet_Animinstance_C::AnimNotify_BecomeFullyOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTablet_Animinstance_C::AnimNotify_EndFullyOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTablet_Animinstance_C::AnimNotify_BecomeFullyClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTablet_Animinstance_C::AnimNotify_EndFullyClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tablet_Animinstance.Tablet_Animinstance_C.ExecuteUbergraph_Tablet_Animinstance
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTablet_Animinstance_C::ExecuteUbergraph_Tablet_Animinstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tablet_Animinstance.Tablet_Animinstance_C.ExecuteUbergraph_Tablet_Animinstance");

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
