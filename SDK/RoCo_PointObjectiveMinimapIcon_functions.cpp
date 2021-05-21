// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PointObjectiveMinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.IsKOTHGameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsKOTHGameState                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPointObjectiveMinimapIcon_C::IsKOTHGameState(bool* IsKOTHGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.IsKOTHGameState");

	struct
	{
		bool                           IsKOTHGameState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsKOTHGameState != nullptr)
		*IsKOTHGameState = params.IsKOTHGameState;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UPointObjectiveMinimapIcon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPointObjectiveMinimapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update From Objective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMinimapIcon_C::Update_From_Objective(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Update From Objective");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPointObjectiveMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.UpdateMeetsHeightThreshold
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHeight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bDepth                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPointObjectiveMinimapIcon_C::UpdateMeetsHeightThreshold(bool bHeight, bool bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.UpdateMeetsHeightThreshold");

	struct
	{
		bool                           bHeight;
		bool                           bDepth;
	} params;

	params.bHeight = bHeight;
	params.bDepth = bDepth;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ExecuteUbergraph_PointObjectiveMinimapIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMinimapIcon_C::ExecuteUbergraph_PointObjectiveMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C.ExecuteUbergraph_PointObjectiveMinimapIcon");

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
