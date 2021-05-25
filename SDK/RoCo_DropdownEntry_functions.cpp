// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DropdownEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DropdownEntry.DropdownEntry_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDropdownEntry_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DropdownEntry.DropdownEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropdownEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropdownEntry_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropdownEntry_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdownEntry_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.ChangeSelectionState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdownEntry_C::ChangeSelectionState(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.ChangeSelectionState");

	struct
	{
		bool                           Selected;
	} params;

	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.ExecuteUbergraph_DropdownEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdownEntry_C::ExecuteUbergraph_DropdownEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.ExecuteUbergraph_DropdownEntry");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.OnOptionHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdownEntry_C::OnOptionHovered__DelegateSignature(class UWidget* Widget, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.OnOptionHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
		int                            Index;
	} params;

	params.Widget = Widget;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function DropdownEntry.DropdownEntry_C.OnOptionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UDropdownEntry_C::OnOptionSelected__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.OnOptionSelected__DelegateSignature");

	struct
	{
		int                            Index;
		struct FText                   Text;
	} params;

	params.Index = Index;
	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
