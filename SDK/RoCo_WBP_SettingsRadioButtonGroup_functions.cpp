// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsRadioButtonGroup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsRadioButtonGroup_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsRadioButtonGroup_C::Set_Selection_To_Index(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsRadioButtonGroup_C::Get_Dirty_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsRadioButtonGroup_C::Set_Desired_Index(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index");

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


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsRadioButtonGroup_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_SettingsRadio_C*    Radio_Button                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsRadioButtonGroup_C::On_Radio_Button_Clicked(class UWBP_SettingsRadio_C* Radio_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked");

	struct
	{
		class UWBP_SettingsRadio_C*    Radio_Button;
	} params;

	params.Radio_Button = Radio_Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bChangedExternally             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsRadioButtonGroup_C::On_Setting_Value_Changed(bool bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed");

	struct
	{
		bool                           bChangedExternally;
	} params;

	params.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsRadioButtonGroup_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsRadioButtonGroup_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsRadioButtonGroup_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsRadioButtonGroup_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsRadioButtonGroup_C::ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup");

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
