// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PointOfInterestSelectionRule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.SelectPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class UKSPointOfInterest>> SelectedPOI                    (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UPointOfInterestSelectionRule_C::SelectPoints(TArray<TScriptInterface<class UKSPointOfInterest>>* SelectedPOI)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.SelectPoints");

	struct
	{
		TArray<TScriptInterface<class UKSPointOfInterest>> SelectedPOI;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SelectedPOI != nullptr)
		*SelectedPOI = params.SelectedPOI;
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.GetPOI
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<TScriptInterface<class UKSPointOfInterest>> POI                            (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UPointOfInterestSelectionRule_C::GetPOI(TArray<TScriptInterface<class UKSPointOfInterest>>* POI)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.GetPOI");

	struct
	{
		TArray<TScriptInterface<class UKSPointOfInterest>> POI;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (POI != nullptr)
		*POI = params.POI;
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.OrderPointsOfInterest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::OrderPointsOfInterest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.OrderPointsOfInterest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.TryToEnableOnSelect
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::TryToEnableOnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.TryToEnableOnSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.TryToStageOnSelect
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::TryToStageOnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.TryToStageOnSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Disable Selected POI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::Disable_Selected_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Disable Selected POI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Enable Selected POI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::Enable_Selected_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Enable Selected POI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Stage Selected POI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::Stage_Selected_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Stage Selected POI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Shuffle Points Of Interest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::Shuffle_Points_Of_Interest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Shuffle Points Of Interest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Restart Selection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointOfInterestSelectionRule_C::Restart_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.Restart Selection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointOfInterestSelectionRule_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.On Activated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPointOfInterestSelectionRule_C::On_Activated(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.On Activated");

	struct
	{
		class UActorComponent*         Component;
		bool                           bReset;
	} params;

	params.Component = Component;
	params.bReset = bReset;

	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.On Deactivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointOfInterestSelectionRule_C::On_Deactivated(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.On Deactivated");

	struct
	{
		class UActorComponent*         Component;
	} params;

	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
}


// Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.ExecuteUbergraph_PointOfInterestSelectionRule
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointOfInterestSelectionRule_C::ExecuteUbergraph_PointOfInterestSelectionRule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestSelectionRule.PointOfInterestSelectionRule_C.ExecuteUbergraph_PointOfInterestSelectionRule");

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
