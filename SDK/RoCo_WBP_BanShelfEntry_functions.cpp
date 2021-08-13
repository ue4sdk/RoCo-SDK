// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelfEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.Preset from Task
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FJobSelectionTask       Incomplete_Task                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_BanShelfEntry_C::Preset_from_Task(const struct FJobSelectionTask& Incomplete_Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.Preset from Task");

	struct
	{
		struct FJobSelectionTask       Incomplete_Task;
	} params;

	params.Incomplete_Task = Incomplete_Task;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.SetFromTask
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FJobSelectionTask       New_Task                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_BanShelfEntry_C::SetFromTask(const struct FJobSelectionTask& New_Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.SetFromTask");

	struct
	{
		struct FJobSelectionTask       New_Task;
	} params;

	params.New_Task = New_Task;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.SetBanDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFriendly                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TSoftObjectPtr<class UTexture2D> JobPortrait                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           BanSkipped                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BanShelfEntry_C::SetBanDisplay(bool IsFriendly, TSoftObjectPtr<class UTexture2D> JobPortrait, bool BanSkipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelfEntry.WBP_BanShelfEntry_C.SetBanDisplay");

	struct
	{
		bool                           IsFriendly;
		TSoftObjectPtr<class UTexture2D> JobPortrait;
		bool                           BanSkipped;
	} params;

	params.IsFriendly = IsFriendly;
	params.JobPortrait = JobPortrait;
	params.BanSkipped = BanSkipped;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
