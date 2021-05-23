// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PipProgressWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.SetPipsState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CompletedPips                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalPips                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PipProgressWidget_C::SetPipsState(int CompletedPips, int TotalPips)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.SetPipsState"));

	struct
	{
		int                            CompletedPips;
		int                            TotalPips;
	} params;

	params.CompletedPips = CompletedPips;
	params.TotalPips = TotalPips;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.GetPips
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_PipProgressEntry_C*> PipEntries                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_PipProgressWidget_C::GetPips(TArray<class UWBP_PipProgressEntry_C*>* PipEntries)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.GetPips"));

	struct
	{
		TArray<class UWBP_PipProgressEntry_C*> PipEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PipEntries != nullptr)
		*PipEntries = params.PipEntries;
}


// Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.SetPipColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            FillColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PipProgressWidget_C::SetPipColors(const struct FLinearColor& BaseColor, const struct FLinearColor& FillColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.SetPipColors"));

	struct
	{
		struct FLinearColor            BaseColor;
		struct FLinearColor            FillColor;
	} params;

	params.BaseColor = BaseColor;
	params.FillColor = FillColor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
