// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Dropdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dropdown.Dropdown_C.IsSelecting
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsSelecting                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdown_C::IsSelecting(bool* IsSelecting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.IsSelecting");

	struct
	{
		bool                           IsSelecting;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsSelecting != nullptr)
		*IsSelecting = params.IsSelecting;
}


// Function Dropdown.Dropdown_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDropdown_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Dropdown.Dropdown_C.AppendOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           OptionsToAppend                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UDropdown_C::AppendOptions(TArray<struct FText>* OptionsToAppend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.AppendOptions");

	struct
	{
		TArray<struct FText>           OptionsToAppend;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OptionsToAppend != nullptr)
		*OptionsToAppend = params.OptionsToAppend;
}


// Function Dropdown.Dropdown_C.ForceClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::ForceClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ForceClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.ForceToggle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::ForceToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ForceToggle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.ForceOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::ForceOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ForceOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.InitializeDropdownList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UDropdown_C::InitializeDropdownList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.InitializeDropdownList");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdown_C::SetSelectedOptionByIndex(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SetSelectedOptionByIndex");

	struct
	{
		int                            Index;
		bool                           Success;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.SetSelectedOptionByText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdown_C::SetSelectedOptionByText(const struct FText& Text, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SetSelectedOptionByText");

	struct
	{
		struct FText                   Text;
		bool                           Success;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.RemoveOptionByIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdown_C::RemoveOptionByIndex(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.RemoveOptionByIndex");

	struct
	{
		int                            Index;
		bool                           Success;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.RemoveOptionByText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdown_C::RemoveOptionByText(const struct FText& Option, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.RemoveOptionByText");

	struct
	{
		struct FText                   Option;
		bool                           Success;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.GetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Selection                      (CPF_Parm, CPF_OutParm)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::GetSelectedOption(struct FText* Selection, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GetSelectedOption");

	struct
	{
		struct FText                   Selection;
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Selection != nullptr)
		*Selection = params.Selection;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function Dropdown.Dropdown_C.GetOptionCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::GetOptionCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GetOptionCount");

	struct
	{
		int                            Count;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Count != nullptr)
		*Count = params.Count;
}


// Function Dropdown.Dropdown_C.FindIndexForOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::FindIndexForOption(const struct FText& Option, bool* Success, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.FindIndexForOption");

	struct
	{
		struct FText                   Option;
		bool                           Success;
		int                            Index;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function Dropdown.Dropdown_C.FindOptionByIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Option                         (CPF_Parm, CPF_OutParm)

void UDropdown_C::FindOptionByIndex(int Index, bool* Success, struct FText* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.FindOptionByIndex");

	struct
	{
		int                            Index;
		bool                           Success;
		struct FText                   Option;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
	if (Option != nullptr)
		*Option = params.Option;
}


// Function Dropdown.Dropdown_C.ClearSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ClearSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.ClearOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ClearOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.AddOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OptionText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UDropdown_C::AddOption(const struct FText& OptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.AddOption");

	struct
	{
		struct FText                   OptionText;
	} params;

	params.OptionText = OptionText;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.SelectionMade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UDropdown_C::SelectionMade(int Index, const struct FText& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SelectionMade");

	struct
	{
		int                            Index;
		struct FText                   Selection;
	} params;

	params.Index = Index;
	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.SelectionCancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::SelectionCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SelectionCancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDropdown_C::BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	struct
	{
		bool                           bIsOpen;
	} params;

	params.bIsOpen = bIsOpen;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentHoverIndex              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::HandleSetCurrentHoverIndex(int CurrentHoverIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex");

	struct
	{
		int                            CurrentHoverIndex;
	} params;

	params.CurrentHoverIndex = CurrentHoverIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropdown_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropdown_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.On Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::On_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.On Selected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.HoverPreview
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::HoverPreview(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.HoverPreview");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::ExecuteUbergraph_Dropdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.OnSelectionCanceled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropdown_C::OnSelectionCanceled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.OnSelectionCanceled__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.OnHoverPreview__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::OnHoverPreview__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.OnHoverPreview__DelegateSignature");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectionText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectionIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropdown_C::OnSelectionChanged__DelegateSignature(const struct FText& SelectionText, int SelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   SelectionText;
		int                            SelectionIndex;
	} params;

	params.SelectionText = SelectionText;
	params.SelectionIndex = SelectionIndex;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
