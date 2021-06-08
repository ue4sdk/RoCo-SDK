// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LerpingCashText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LerpingCashText.WBP_LerpingCashText_C.UpdateTextDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTargetValue                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LerpingCashText_C::UpdateTextDisplay(float NewTargetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LerpingCashText.WBP_LerpingCashText_C.UpdateTextDisplay");

	struct
	{
		float                          NewTargetValue;
	} params;

	params.NewTargetValue = NewTargetValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LerpingCashText.WBP_LerpingCashText_C.UpdateCashBalance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CashValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LerpingCashText_C::UpdateCashBalance(int CashValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LerpingCashText.WBP_LerpingCashText_C.UpdateCashBalance");

	struct
	{
		int                            CashValue;
	} params;

	params.CashValue = CashValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LerpingCashText.WBP_LerpingCashText_C.DisplayForValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LerpingCashText_C::DisplayForValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LerpingCashText.WBP_LerpingCashText_C.DisplayForValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LerpingCashText.WBP_LerpingCashText_C.ExecuteUbergraph_WBP_LerpingCashText
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LerpingCashText_C::ExecuteUbergraph_WBP_LerpingCashText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LerpingCashText.WBP_LerpingCashText_C.ExecuteUbergraph_WBP_LerpingCashText");

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
