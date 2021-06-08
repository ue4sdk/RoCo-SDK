// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ReportMenuCommentField_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ReportMenuCommentField_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ReportMenuCommentField_C::ClearText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Return_Value                   (CPF_Parm, CPF_OutParm)

void UWBP_ReportMenuCommentField_C::GetText(struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText");

	struct
	{
		struct FText                   Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ReportMenuCommentField_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ReportMenuCommentField_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReportMenuCommentField_C::ExecuteUbergraph_WBP_ReportMenuCommentField(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField");

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
