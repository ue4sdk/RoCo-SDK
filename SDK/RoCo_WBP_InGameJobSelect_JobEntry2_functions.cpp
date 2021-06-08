// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_JobEntry2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.SetBanStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EJobSelectionState             JobSelection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_JobEntry2_C::SetBanStates(EJobSelectionState JobSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.SetBanStates");

	struct
	{
		EJobSelectionState             JobSelection;
	} params;

	params.JobSelection = JobSelection;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.TryToPlayAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::TryToPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.TryToPlayAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.CanSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanSelect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_JobEntry2_C::CanSelect(bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.CanSelect");

	struct
	{
		bool                           CanSelect;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanSelect != nullptr)
		*CanSelect = params.CanSelect;
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.CreateDesatMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::CreateDesatMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.CreateDesatMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.Update Job Entry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_JobEntry2_C::Update_Job_Entry(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.Update Job Entry");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelect_JobEntry2_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.PopulateJobEntrySlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobDetails                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_JobEntry2_C::PopulateJobEntrySlot(class UJobSelectionEntryDetails* JobDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.PopulateJobEntrySlot");

	struct
	{
		class UJobSelectionEntryDetails* JobDetails;
	} params;

	params.JobDetails = JobDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.SetHoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::SetHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.SetHoverState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.SetUnhoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::SetUnhoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.SetUnhoverState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.ExecuteUbergraph_WBP_InGameJobSelect_JobEntry2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_JobEntry2_C::ExecuteUbergraph_WBP_InGameJobSelect_JobEntry2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.ExecuteUbergraph_WBP_InGameJobSelect_JobEntry2");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_JobEntry2_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_JobEntry2_C::OnHovered__DelegateSignature(class UJobSelectionEntryDetails* JobEntry, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnHovered__DelegateSignature");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		class UKSWidget*               Widget;
	} params;

	params.JobEntry = JobEntry;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_JobEntry2_C::OnClicked__DelegateSignature(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_JobEntry2.WBP_InGameJobSelect_JobEntry2_C.OnClicked__DelegateSignature");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
