// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreItemRotator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PercentRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreItemRotator_C::SetPercentTimeRemaining(float PercentRemaining)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining"));

	struct
	{
		float                          PercentRemaining;
	} params;

	params.PercentRemaining = PercentRemaining;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumElements                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreItemRotator_C::SetRotatorSize(int NumElements)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize"));

	struct
	{
		int                            NumElements;
	} params;

	params.NumElements = NumElements;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreItemRotator_C::SetActiveIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
