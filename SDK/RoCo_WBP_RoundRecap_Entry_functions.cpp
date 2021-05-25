// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RoundRecap_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.SetVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RoundRecap_Entry_C::SetVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.SetVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.RoundDataSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RoundRecap_Entry_C::RoundDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.RoundDataSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.ExecuteUbergraph_WBP_RoundRecap_Entry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RoundRecap_Entry_C::ExecuteUbergraph_WBP_RoundRecap_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.ExecuteUbergraph_WBP_RoundRecap_Entry");

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
