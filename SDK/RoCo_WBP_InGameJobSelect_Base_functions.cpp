// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.Get Job Entry Buttons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UWidget*>         Buttons                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::Get_Job_Entry_Buttons(TArray<class UWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.Get Job Entry Buttons");

	struct
	{
		TArray<class UWidget*>         Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* NewMember                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnTeamMemberAdded(class UKSPersistentPlayerData* NewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnTeamMemberAdded");

	struct
	{
		class UKSPersistentPlayerData* NewMember;
	} params;

	params.NewMember = NewMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnSelectionActivityStatusChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionComponent* JobSelectionComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnSelectionActivityStatusChange(class UKSJobSelectionComponent* JobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnSelectionActivityStatusChange");

	struct
	{
		class UKSJobSelectionComponent* JobSelectionComponent;
	} params;

	params.JobSelectionComponent = JobSelectionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.TryBindJobEntryChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::TryBindJobEntryChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.TryBindJobEntryChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.On Job Entry Change
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_InGameJobSelect_Base_C::On_Job_Entry_Change(const struct FJobSelectionEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.On Job Entry Change");

	struct
	{
		struct FJobSelectionEntry      Entry;
	} params;

	params.Entry = Entry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.UpdateJobLockInButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::UpdateJobLockInButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.UpdateJobLockInButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.HandleTeamAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::HandleTeamAdded(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.HandleTeamAdded");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.ClearPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::ClearPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.ClearPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.HandleScrollWidgetIntoView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::HandleScrollWidgetIntoView(class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.HandleScrollWidgetIntoView");

	struct
	{
		class UKSWidget*               Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetGamepadPrompts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::SetGamepadPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetGamepadPrompts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetAttackDefendMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::SetAttackDefendMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetAttackDefendMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.HandlePhaseChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InGameJobSelect_Base_C::HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.HandlePhaseChange");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.RestoreVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::RestoreVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.RestoreVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetHoverMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::SetHoverMessage(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetHoverMessage");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.CanSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobSelectionEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanSelect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_Base_C::CanSelect(class UJobSelectionEntryDetails* JobSelectionEntry, bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.CanSelect");

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


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnPlayerSelectionStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerSelectionState          SelectionState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnPlayerSelectionStateChanged(EPlayerSelectionState SelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnPlayerSelectionStateChanged");

	struct
	{
		EPlayerSelectionState          SelectionState;
	} params;

	params.SelectionState = SelectionState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnTimerTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnTimerTick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnTimerTick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnJobEntrySelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnJobEntrySelected(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnJobEntrySelected");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.Update Job Entry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* UpdatedJobEntry                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_Base_C::Update_Job_Entry(class UJobSelectionEntryDetails* UpdatedJobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.Update Job Entry");

	struct
	{
		class UJobSelectionEntryDetails* UpdatedJobEntry;
		bool                           EnemyTeam;
	} params;

	params.UpdatedJobEntry = UpdatedJobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.ClearSelectedRogue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::ClearSelectedRogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.ClearSelectedRogue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetJobEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::SetJobEntries(TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.SetJobEntries");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnCancelJobSelection__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnCancelJobSelection__DelegateSignature(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnCancelJobSelection__DelegateSignature");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnViewJobLoadout__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Base_C::OnViewJobLoadout__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnViewJobLoadout__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnLockInJob__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsBan                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_Base_C::OnLockInJob__DelegateSignature(bool IsBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnLockInJob__DelegateSignature");

	struct
	{
		bool                           IsBan;
	} params;

	params.IsBan = IsBan;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnJobSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnJobSelected__DelegateSignature(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnJobSelected__DelegateSignature");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnResetJobEntries__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_InGameJobSelect_JobEntry_C*> JobEntryButtons                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Base_C::OnResetJobEntries__DelegateSignature(TArray<class UWBP_InGameJobSelect_JobEntry_C*>* JobEntryButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C.OnResetJobEntries__DelegateSignature");

	struct
	{
		TArray<class UWBP_InGameJobSelect_JobEntry_C*> JobEntryButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobEntryButtons != nullptr)
		*JobEntryButtons = params.JobEntryButtons;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
