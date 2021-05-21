// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Search_bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Social_Search_bar_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ShowVirtualKeyboard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::ShowVirtualKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ShowVirtualKeyboard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.Clear
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.DoSearch
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::DoSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.DoSearch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Search_bar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTextChange
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Social_Search_bar_C::OnSearchTextChange(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTextChange");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Search_bar_C::BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Social_Search_bar_C::BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Search_bar_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ExecuteUbergraph_WBP_Social_Search_bar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Search_bar_C::ExecuteUbergraph_WBP_Social_Search_bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ExecuteUbergraph_WBP_Social_Search_bar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Search_bar_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnHovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTermChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SearchTerm                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Social_Search_bar_C::OnSearchTermChange__DelegateSignature(const struct FText& SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTermChange__DelegateSignature");

	struct
	{
		struct FText                   SearchTerm;
	} params;

	params.SearchTerm = SearchTerm;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
