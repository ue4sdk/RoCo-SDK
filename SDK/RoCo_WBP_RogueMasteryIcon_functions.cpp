// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C.SetMasteryLevelExplicit
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryIcon_C::SetMasteryLevelExplicit(int CurrentLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C.SetMasteryLevelExplicit"));

	struct
	{
		int                            CurrentLevel;
	} params;

	params.CurrentLevel = CurrentLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C.SetMasteryLevelForJob
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryIcon_C::SetMasteryLevelForJob(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C.SetMasteryLevelForJob"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
