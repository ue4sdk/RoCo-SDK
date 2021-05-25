// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TouchButtonGeneric_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.TriggerInputAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InInputEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TouchButtonGeneric_C::TriggerInputAction(TEnumAsByte<EInputEvent> InInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.TriggerInputAction");

	struct
	{
		TEnumAsByte<EInputEvent>       InInputEvent;
	} params;

	params.InInputEvent = InInputEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TouchButtonGeneric_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TouchButtonGeneric_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_TouchButtonGeneric_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_TouchButtonGeneric_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.ExecuteUbergraph_WBP_TouchButtonGeneric
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TouchButtonGeneric_C::ExecuteUbergraph_WBP_TouchButtonGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.ExecuteUbergraph_WBP_TouchButtonGeneric");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.OnButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TouchButtonGeneric_C::OnButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.OnButtonPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
