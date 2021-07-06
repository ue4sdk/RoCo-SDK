// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.Get Job Entry Buttons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UWidget*>         Buttons                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::Get_Job_Entry_Buttons(TArray<class UWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.Get Job Entry Buttons");

	struct
	{
		TArray<class UWidget*>         Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ForceUpdateToCurrentlySelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              SelectedJob                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::ForceUpdateToCurrentlySelected(class UKSJobItem** SelectedJob)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ForceUpdateToCurrentlySelected");

	struct
	{
		class UKSJobItem*              SelectedJob;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SelectedJob != nullptr)
		*SelectedJob = params.SelectedJob;
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ConfirmExpectedBans
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::ConfirmExpectedBans()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ConfirmExpectedBans");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ConditionalNotifyBanExpected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::ConditionalNotifyBanExpected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ConditionalNotifyBanExpected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* NewMember                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnTeamMemberAdded(class UKSPersistentPlayerData* NewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnTeamMemberAdded");

	struct
	{
		class UKSPersistentPlayerData* NewMember;
	} params;

	params.NewMember = NewMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnSelectionActivityStatusChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionComponent* JobSelectionComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnSelectionActivityStatusChange(class UKSJobSelectionComponent* JobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnSelectionActivityStatusChange");

	struct
	{
		class UKSJobSelectionComponent* JobSelectionComponent;
	} params;

	params.JobSelectionComponent = JobSelectionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ClearCaptainText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::ClearCaptainText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ClearCaptainText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetCaptainNameFromSelecting
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::SetCaptainNameFromSelecting(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetCaptainNameFromSelecting");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.On Job Entry Change
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_InGameJobSelect_2_C::On_Job_Entry_Change(const struct FJobSelectionEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.On Job Entry Change");

	struct
	{
		struct FJobSelectionEntry      Entry;
	} params;

	params.Entry = Entry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.IsSomeoneBanning
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsLocalTeam                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsSelectingPlayer              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelect_2_C::IsSomeoneBanning(bool* IsLocalTeam, bool* IsSelectingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.IsSomeoneBanning");

	struct
	{
		bool                           ReturnValue;
		bool                           IsLocalTeam;
		bool                           IsSelectingPlayer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsLocalTeam != nullptr)
		*IsLocalTeam = params.IsLocalTeam;
	if (IsSelectingPlayer != nullptr)
		*IsSelectingPlayer = params.IsSelectingPlayer;

	return params.ReturnValue;
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.FindCorrespondingSelectionComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UKSJobSelectionComponent* JobSelectionComponent          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::FindCorrespondingSelectionComponent(class UKSJobSelectionComponent** JobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.FindCorrespondingSelectionComponent");

	struct
	{
		class UKSJobSelectionComponent* JobSelectionComponent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobSelectionComponent != nullptr)
		*JobSelectionComponent = params.JobSelectionComponent;
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.Update Rogue Panel for State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::Update_Rogue_Panel_for_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.Update Rogue Panel for State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.UpdateJobLockInButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::UpdateJobLockInButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.UpdateJobLockInButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ClearPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::ClearPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ClearPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.HandleScrollWidgetIntoView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::HandleScrollWidgetIntoView(class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.HandleScrollWidgetIntoView");

	struct
	{
		class UKSWidget*               Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetGamepadPrompts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::SetGamepadPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetGamepadPrompts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetAttackDefendMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::SetAttackDefendMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetAttackDefendMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.HandlePhaseChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InGameJobSelect_2_C::HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.HandlePhaseChange");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.RestoreVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::RestoreVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.RestoreVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetHoverMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::SetHoverMessage(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetHoverMessage");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.CanSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobSelectionEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanSelect                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_2_C::CanSelect(class UJobSelectionEntryDetails* JobSelectionEntry, bool* CanSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.CanSelect");

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


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnPlayerSelectionStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerSelectionState          SelectionState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnPlayerSelectionStateChanged(EPlayerSelectionState SelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnPlayerSelectionStateChanged");

	struct
	{
		EPlayerSelectionState          SelectionState;
	} params;

	params.SelectionState = SelectionState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnTimerTick
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnTimerTick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnTimerTick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnJobEntrySelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnJobEntrySelected(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnJobEntrySelected");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ClearSelectedRogue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::ClearSelectedRogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ClearSelectedRogue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.Update Job Entry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* UpdatedJobEntry                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_2_C::Update_Job_Entry(class UJobSelectionEntryDetails* UpdatedJobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.Update Job Entry");

	struct
	{
		class UJobSelectionEntryDetails* UpdatedJobEntry;
		bool                           EnemyTeam;
	} params;

	params.UpdatedJobEntry = UpdatedJobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetJobEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::SetJobEntries(TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetJobEntries");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetHoverMessage_OLD
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::SetHoverMessage_OLD(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.SetHoverMessage_OLD");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnJobHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OnJobHovered(class UJobSelectionEntryDetails* JobEntry, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnJobHovered");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		class UKSWidget*               Widget;
	} params;

	params.JobEntry = JobEntry;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnJobUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::OnJobUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnJobUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.On Clicked SelectBan Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::On_Clicked_SelectBan_Button(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.On Clicked SelectBan Button");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.On Clicked Loadout Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::On_Clicked_Loadout_Button(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.On Clicked Loadout Button");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OwningTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::OwningTeamChanged(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.OwningTeamChanged");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.GenericSelectionStatusUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_2_C::GenericSelectionStatusUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.GenericSelectionStatusUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ExecuteUbergraph_WBP_InGameJobSelect_3
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_2_C::ExecuteUbergraph_WBP_InGameJobSelect_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_3.WBP_InGameJobSelect_2_C.ExecuteUbergraph_WBP_InGameJobSelect_3");

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
