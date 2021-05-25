// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.UpdateJobLockInButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::UpdateJobLockInButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.UpdateJobLockInButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::ClearPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandleScrollWidgetIntoView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::HandleScrollWidgetIntoView(class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandleScrollWidgetIntoView");

	struct
	{
		class UKSWidget*               Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::SetGamepadPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::SetAttackDefendMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::HandlePhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::RestoreVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::SetHoverMessage(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobSelectionEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanSelect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_C::CanSelect(class UJobSelectionEntryDetails* JobSelectionEntry, bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect");

	struct
	{
		class UJobSelectionEntryDetails* JobSelectionEntry;
		bool                           CanSelect;
	} params;

	params.JobSelectionEntry = JobSelectionEntry;

	UObject::ProcessEvent(fn, &params);

	if (CanSelect != nullptr)
		*CanSelect = params.CanSelect;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerSelectionState          SelectionState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnPlayerSelectionStateChanged(EPlayerSelectionState SelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged");

	struct
	{
		EPlayerSelectionState          SelectionState;
	} params;

	params.SelectionState = SelectionState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnTimerTick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnJobEntrySelected(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::ClearSelectedRogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* UpdatedJobEntry                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_C::Update_Job_Entry(class UJobSelectionEntryDetails* UpdatedJobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry");

	struct
	{
		class UJobSelectionEntryDetails* UpdatedJobEntry;
		bool                           EnemyTeam;
	} params;

	params.UpdatedJobEntry = UpdatedJobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::SetJobEntries(TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.UpdateJobLockInButton_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::UpdateJobLockInButton_OLD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.UpdateJobLockInButton_OLD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearPrompt_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::ClearPrompt_OLD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearPrompt_OLD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandleScrollWidgetIntoView_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::HandleScrollWidgetIntoView_OLD(class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandleScrollWidgetIntoView_OLD");

	struct
	{
		class UKSWidget*               Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts_OLD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::SetGamepadPrompts_OLD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts_OLD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::SetAttackDefendMessage_OLD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage_OLD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange_OLD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::HandlePhaseChange_OLD(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange_OLD");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::RestoreVisualState_OLD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState_OLD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnInputStateChanged_OLD(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged_OLD");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage_OLD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::SetHoverMessage_OLD(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage_OLD");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect_OLD
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobSelectionEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanSelect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_C::CanSelect_OLD(class UJobSelectionEntryDetails* JobSelectionEntry, bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect_OLD");

	struct
	{
		class UJobSelectionEntryDetails* JobSelectionEntry;
		bool                           CanSelect;
	} params;

	params.JobSelectionEntry = JobSelectionEntry;

	UObject::ProcessEvent(fn, &params);

	if (CanSelect != nullptr)
		*CanSelect = params.CanSelect;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerSelectionState          SelectionState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnPlayerSelectionStateChanged_OLD(EPlayerSelectionState SelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged_OLD");

	struct
	{
		EPlayerSelectionState          SelectionState;
	} params;

	params.SelectionState = SelectionState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick_OLD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnTimerTick_OLD(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick_OLD");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected_OLD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnJobEntrySelected_OLD(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected_OLD");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* UpdatedJobEntry                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_C::Update_Job_Entry_OLD(class UJobSelectionEntryDetails* UpdatedJobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry_OLD");

	struct
	{
		class UJobSelectionEntryDetails* UpdatedJobEntry;
		bool                           EnemyTeam;
	} params;

	params.UpdatedJobEntry = UpdatedJobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue_OLD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::ClearSelectedRogue_OLD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue_OLD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries_OLD
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::SetJobEntries_OLD(TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries_OLD");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::OnJobHovered(class UJobSelectionEntryDetails* JobEntry, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobHovered");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		class UKSWidget*               Widget;
	} params;

	params.JobEntry = JobEntry;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::OnJobUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ExecuteUbergraph_WBP_InGameJobSelect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_C::ExecuteUbergraph_WBP_InGameJobSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ExecuteUbergraph_WBP_InGameJobSelect");

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
