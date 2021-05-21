// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_OutlineContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OutlineContainer.OutlineContainer_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOutlineContainer_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OutlineContainer.OutlineContainer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOutlineContainer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutlineContainer_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutlineContainer_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.Do Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutlineContainer_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.Do Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.Do Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutlineContainer_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.Do Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOutlineContainer_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOutlineContainer_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOutlineContainer_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.ExecuteUbergraph_OutlineContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOutlineContainer_C::ExecuteUbergraph_OutlineContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.ExecuteUbergraph_OutlineContainer");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function OutlineContainer.OutlineContainer_C.Gamepad Confirm__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutlineContainer_C::Gamepad_Confirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutlineContainer.OutlineContainer_C.Gamepad Confirm__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
