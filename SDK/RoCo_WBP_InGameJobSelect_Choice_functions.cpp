// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_Choice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.Update Portrait
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::Update_Portrait()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.Update Portrait");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.SetBanStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FJobSelectionChoice     Choice_Data                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InGameJobSelect_Choice_C::SetBanStates(const struct FJobSelectionChoice& Choice_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.SetBanStates");

	struct
	{
		struct FJobSelectionChoice     Choice_Data;
	} params;

	params.Choice_Data = Choice_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.TryToPlayAnim
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::TryToPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.TryToPlayAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.CanSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanSelect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_Choice_C::CanSelect(bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.CanSelect");

	struct
	{
		bool                           CanSelect;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanSelect != nullptr)
		*CanSelect = params.CanSelect;
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.Update Appearance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::Update_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.Update Appearance");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelect_Choice_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.SetHoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::SetHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.SetHoverState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.SetUnhoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::SetUnhoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.SetUnhoverState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.ChoiceOrJobChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::ChoiceOrJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.ChoiceOrJobChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.CombinedHover
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::CombinedHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.CombinedHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.CombinedUnhover
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Choice_C::CombinedUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.CombinedUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.ExecuteUbergraph_WBP_InGameJobSelect_Choice
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Choice_C::ExecuteUbergraph_WBP_InGameJobSelect_Choice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.ExecuteUbergraph_WBP_InGameJobSelect_Choice");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionChoiceWidget* ChoiceWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Choice_C::OnUnhovered__DelegateSignature(class UKSJobSelectionChoiceWidget* ChoiceWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UKSJobSelectionChoiceWidget* ChoiceWidget;
	} params;

	params.ChoiceWidget = ChoiceWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionChoiceWidget* ChoiceWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Choice_C::OnHovered__DelegateSignature(class UKSJobSelectionChoiceWidget* ChoiceWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnHovered__DelegateSignature");

	struct
	{
		class UKSJobSelectionChoiceWidget* ChoiceWidget;
	} params;

	params.ChoiceWidget = ChoiceWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionChoiceWidget* ChoiceWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Choice_C::OnClicked__DelegateSignature(class UKSJobSelectionChoiceWidget* ChoiceWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Choice.WBP_InGameJobSelect_Choice_C.OnClicked__DelegateSignature");

	struct
	{
		class UKSJobSelectionChoiceWidget* ChoiceWidget;
	} params;

	params.ChoiceWidget = ChoiceWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
