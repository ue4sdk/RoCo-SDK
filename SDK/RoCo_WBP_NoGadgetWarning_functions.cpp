// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NoGadgetWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleMedPackFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSItemUsageFailureType        FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NoGadgetWarning_C::HandleMedPackFailed(EKSItemUsageFailureType FailureType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleMedPackFailed"));

	struct
	{
		EKSItemUsageFailureType        FailureType;
	} params;

	params.FailureType = FailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleGrenadeFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSItemUsageFailureType        FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NoGadgetWarning_C::HandleGrenadeFailed(EKSItemUsageFailureType FailureType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.HandleGrenadeFailed"));

	struct
	{
		EKSItemUsageFailureType        FailureType;
	} params;

	params.FailureType = FailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NoGadgetWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NoGadgetWarning_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.ExecuteUbergraph_WBP_NoGadgetWarning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NoGadgetWarning_C::ExecuteUbergraph_WBP_NoGadgetWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NoGadgetWarning.WBP_NoGadgetWarning_C.ExecuteUbergraph_WBP_NoGadgetWarning"));

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
