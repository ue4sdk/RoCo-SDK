// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Checkbox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Checkbox.Checkbox_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UCheckbox_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.SetCheckedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Checked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCheckbox_C::SetCheckedState(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.SetCheckedState"));

	struct
	{
		bool                           Checked;
	} params;

	params.Checked = Checked;

	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCheckbox_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.GamepadConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCheckbox_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCheckbox_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.ExecuteUbergraph_Checkbox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCheckbox_C::ExecuteUbergraph_Checkbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.ExecuteUbergraph_Checkbox"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Checkbox.Checkbox_C.OnCheckChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Checked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCheckbox_C::OnCheckChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Checkbox.Checkbox_C.OnCheckChanged__DelegateSignature"));

	struct
	{
		bool                           Checked;
	} params;

	params.Checked = Checked;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
