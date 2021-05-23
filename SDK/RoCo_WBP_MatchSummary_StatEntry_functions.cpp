// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_MatchSummary_StatEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   StatValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_MatchSummary_StatEntry_C::SetStatText(const struct FText& StatName, const struct FText& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText"));

	struct
	{
		struct FText                   StatName;
		struct FText                   StatValue;
	} params;

	params.StatName = StatName;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_MatchSummary_StatEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MatchSummary_StatEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchSummary_StatEntry_C::ExecuteUbergraph_WBP_MatchSummary_StatEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry"));

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
