// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryTrackSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSelectedEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActivityTierNumber             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackSection_C::SetSelectedEntry(int ActivityTierNumber)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSelectedEntry"));

	struct
	{
		int                            ActivityTierNumber;
	} params;

	params.ActivityTierNumber = ActivityTierNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSectionData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMasterySectionData     SectionData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            CurrentTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackSection_C::SetSectionData(int CurrentTier, struct FMasterySectionData* SectionData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSectionData"));

	struct
	{
		struct FMasterySectionData     SectionData;
		int                            CurrentTier;
	} params;

	params.CurrentTier = CurrentTier;

	UObject::ProcessEvent(fn, &params);

	if (SectionData != nullptr)
		*SectionData = params.SectionData;
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.GetSelectedActivity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FActivityTier           Activity                       (CPF_Parm, CPF_OutParm)

void UWBP_RogueMasteryTrackSection_C::GetSelectedActivity(int Index, struct FActivityTier* Activity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.GetSelectedActivity"));

	struct
	{
		int                            Index;
		struct FActivityTier           Activity;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Activity != nullptr)
		*Activity = params.Activity;
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnMasteryLevelSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           Activity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RogueMasteryTrackSection_C::OnMasteryLevelSelected(const struct FActivityTier& Activity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnMasteryLevelSelected"));

	struct
	{
		struct FActivityTier           Activity;
	} params;

	params.Activity = Activity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMasteryTrackSection_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrackSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackSection_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.ExecuteUbergraph_WBP_RogueMasteryTrackSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrackSection_C::ExecuteUbergraph_WBP_RogueMasteryTrackSection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.ExecuteUbergraph_WBP_RogueMasteryTrackSection"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RogueMasteryTrackSection_C::OnTrackEntrySelected__DelegateSignature(const struct FActivityTier& ActivityTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature"));

	struct
	{
		struct FActivityTier           ActivityTier;
	} params;

	params.ActivityTier = ActivityTier;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
