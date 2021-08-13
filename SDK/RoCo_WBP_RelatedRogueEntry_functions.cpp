// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RelatedRogueEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.DisplayJob
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RelatedRogueEntry_C::DisplayJob(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.DisplayJob");

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.ExecuteUbergraph_WBP_RelatedRogueEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RelatedRogueEntry_C::ExecuteUbergraph_WBP_RelatedRogueEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.ExecuteUbergraph_WBP_RelatedRogueEntry");

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
