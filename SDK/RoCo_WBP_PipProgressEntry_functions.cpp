// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PipProgressEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PipProgressEntry.WBP_PipProgressEntry_C.SetPipColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            FillColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PipProgressEntry_C::SetPipColors(const struct FLinearColor& BaseColor, const struct FLinearColor& FillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PipProgressEntry.WBP_PipProgressEntry_C.SetPipColors");

	struct
	{
		struct FLinearColor            BaseColor;
		struct FLinearColor            FillColor;
	} params;

	params.BaseColor = BaseColor;
	params.FillColor = FillColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PipProgressEntry.WBP_PipProgressEntry_C.SetPip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PipProgressEntry_C::SetPip(bool IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PipProgressEntry.WBP_PipProgressEntry_C.SetPip");

	struct
	{
		bool                           IsOn;
	} params;

	params.IsOn = IsOn;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
