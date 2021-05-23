// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AppliedEvents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AppliedEvents.WBP_AppliedEvents_C.PopulateActiveEvents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AppliedEvents_C::PopulateActiveEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AppliedEvents.WBP_AppliedEvents_C.PopulateActiveEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AppliedEvents.WBP_AppliedEvents_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AppliedEvents_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AppliedEvents.WBP_AppliedEvents_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AppliedEvents.WBP_AppliedEvents_C.ExecuteUbergraph_WBP_AppliedEvents
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AppliedEvents_C::ExecuteUbergraph_WBP_AppliedEvents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AppliedEvents.WBP_AppliedEvents_C.ExecuteUbergraph_WBP_AppliedEvents"));

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
