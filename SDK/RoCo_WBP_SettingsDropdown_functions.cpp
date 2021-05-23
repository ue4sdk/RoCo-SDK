// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsDropdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetPreviewIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsDropdown_C::SetPreviewIndex(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetPreviewIndex"));

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


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsDropdown_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsDropdown_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsDropdown_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsDropdown_C::SetDesiredIndex(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex"));

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


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::GetDirtyIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex"));

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::Set_Text_To_Index(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsDropdown_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::Selection_Made(const struct FText& Text, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made"));

	struct
	{
		struct FText                   Text;
		int                            Index;
	} params;

	params.Text = Text;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsDropdown_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsDropdown_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnSettingsInfoValueChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bChangedExternally             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsDropdown_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnSettingsInfoValueChanged"));

	struct
	{
		bool                           bChangedExternally;
	} params;

	params.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.HoverPreview
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::HoverPreview(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.HoverPreview"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SelectionCanceled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsDropdown_C::SelectionCanceled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SelectionCanceled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsDropdown_C::ExecuteUbergraph_WBP_SettingsDropdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown"));

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
