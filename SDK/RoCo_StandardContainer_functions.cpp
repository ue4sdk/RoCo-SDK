// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StandardContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandardContainer.StandardContainer_C.EvaluateHeaderVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UStandardContainer_C::EvaluateHeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.EvaluateHeaderVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StandardContainer.StandardContainer_C.EvaluateCloseButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UStandardContainer_C::EvaluateCloseButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.EvaluateCloseButtonVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StandardContainer.StandardContainer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStandardContainer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function StandardContainer.StandardContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UStandardContainer_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StandardContainer.StandardContainer_C.ExecuteUbergraph_StandardContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStandardContainer_C::ExecuteUbergraph_StandardContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.ExecuteUbergraph_StandardContainer");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function StandardContainer.StandardContainer_C.OnContainerClose__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStandardContainer_C::OnContainerClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.OnContainerClose__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
