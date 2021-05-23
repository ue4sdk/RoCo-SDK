// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsEntryList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsEntryList_C::SetDesiredIndex(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex"));

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


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsEntryList_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsEntryList_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsEntryList_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsEntryList_C::GetDirtyIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex"));

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsEntryList_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SettingsEntryList_C::Selection_Made(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made"));

	struct
	{
		int                            Index;
		struct FText                   Text;
	} params;

	params.Index = Index;
	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsEntryList_C::ExecuteUbergraph_WBP_SettingsEntryList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsEntryList_C::OnSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
