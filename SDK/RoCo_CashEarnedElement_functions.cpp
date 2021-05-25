// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CashEarnedElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent     ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UCashEarnedElement_C::ShowRewardEarned(const struct FKSScoreChangeEvent& ScoreEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.ShowRewardEarned");

	struct
	{
		struct FKSScoreChangeEvent     ScoreEvent;
	} params;

	params.ScoreEvent = ScoreEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function CashEarnedElement.CashEarnedElement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCashEarnedElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCashEarnedElement_C::HandleShowValueAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.HandleShowValueAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCashEarnedElement_C::HandleHideValueAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.HandleHideValueAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashEarnedElement_C::ExecuteUbergraph_CashEarnedElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashEarnedElement.CashEarnedElement_C.ExecuteUbergraph_CashEarnedElement");

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
