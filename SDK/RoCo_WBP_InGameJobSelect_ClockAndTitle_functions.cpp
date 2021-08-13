// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_ClockAndTitle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.ShouldUpdateDisplayTimer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Should_Update                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Is_Urgent                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_ClockAndTitle_C::ShouldUpdateDisplayTimer(bool* Should_Update, bool* Is_Urgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.ShouldUpdateDisplayTimer");

	struct
	{
		bool                           Should_Update;
		bool                           Is_Urgent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Should_Update != nullptr)
		*Should_Update = params.Should_Update;
	if (Is_Urgent != nullptr)
		*Is_Urgent = params.Is_Urgent;
}


// Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.GetTimerDisplayText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   Timer_Text                     (CPF_Parm, CPF_OutParm)

void UWBP_InGameJobSelect_ClockAndTitle_C::GetTimerDisplayText(struct FText* Timer_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.GetTimerDisplayText");

	struct
	{
		struct FText                   Timer_Text;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Timer_Text != nullptr)
		*Timer_Text = params.Timer_Text;
}


// Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.DisplayTextChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_ClockAndTitle_C::DisplayTextChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.DisplayTextChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.DisplayTimerChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_ClockAndTitle_C::DisplayTimerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.DisplayTimerChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.ExecuteUbergraph_WBP_InGameJobSelect_ClockAndTitle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_ClockAndTitle_C::ExecuteUbergraph_WBP_InGameJobSelect_ClockAndTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_ClockAndTitle.WBP_InGameJobSelect_ClockAndTitle_C.ExecuteUbergraph_WBP_InGameJobSelect_ClockAndTitle");

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
