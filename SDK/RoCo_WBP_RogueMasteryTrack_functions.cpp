// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryTrack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.UpdateSelectedTier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::UpdateSelectedTier()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.UpdateSelectedTier"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ViewPreviousMasteryLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::ViewPreviousMasteryLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ViewPreviousMasteryLevel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ViewNextMasteryLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::ViewNextMasteryLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ViewNextMasteryLevel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetActiveSection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SectionIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::SetActiveSection(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetActiveSection"));

	struct
	{
		int                            SectionIndex;
	} params;

	params.SectionIndex = SectionIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.UpdateSectionViewed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::UpdateSectionViewed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.UpdateSectionViewed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnInputStateChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnMasteryLevelSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RogueMasteryTrack_C::OnMasteryLevelSelected(const struct FActivityTier& ActivityTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnMasteryLevelSelected"));

	struct
	{
		struct FActivityTier           ActivityTier;
	} params;

	params.ActivityTier = ActivityTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetupPersonalProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::SetupPersonalProgress(class UKSJobItem* JobItem, class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetupPersonalProgress"));

	struct
	{
		class UKSJobItem*              JobItem;
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.JobItem = JobItem;
	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetupTrackSections
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FMasterySectionData> SectionData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            CurrentTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::SetupTrackSections(int CurrentTier, TArray<struct FMasterySectionData>* SectionData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetupTrackSections"));

	struct
	{
		TArray<struct FMasterySectionData> SectionData;
		int                            CurrentTier;
	} params;

	params.CurrentTier = CurrentTier;

	UObject::ProcessEvent(fn, &params);

	if (SectionData != nullptr)
		*SectionData = params.SectionData;
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetTrackData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FMasterySectionData> SectionData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::SetTrackData(class UKSJobItem* JobItem, TArray<struct FMasterySectionData>* SectionData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetTrackData"));

	struct
	{
		class UKSJobItem*              JobItem;
		TArray<struct FMasterySectionData> SectionData;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	if (SectionData != nullptr)
		*SectionData = params.SectionData;
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMasteryTrack_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ExecuteUbergraph_WBP_RogueMasteryTrack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryTrack_C::ExecuteUbergraph_WBP_RogueMasteryTrack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ExecuteUbergraph_WBP_RogueMasteryTrack"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnPrestiegeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryTrack_C::OnPrestiegeSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnPrestiegeSelected__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RogueMasteryTrack_C::OnMasteryLevelSelectedEvent__DelegateSignature(const struct FActivityTier& ActivityTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature"));

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
