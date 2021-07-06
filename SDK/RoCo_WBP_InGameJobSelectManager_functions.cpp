// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelectManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.IsBanning
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           CheckEnemy                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::IsBanning(bool CheckEnemy, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.IsBanning");

	struct
	{
		bool                           CheckEnemy;
		bool                           Return_Value;
	} params;

	params.CheckEnemy = CheckEnemy;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.GetActiveJobEntryButtons
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UWidget*>         ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UWidget*> UWBP_InGameJobSelectManager_C::GetActiveJobEntryButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.GetActiveJobEntryButtons");

	struct
	{
		TArray<class UWidget*>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.GetActiveJobSelectWidget
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWBP_InGameJobSelect_Base_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_InGameJobSelect_Base_C* UWBP_InGameJobSelectManager_C::GetActiveJobSelectWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.GetActiveJobSelectWidget");

	struct
	{
		class UWBP_InGameJobSelect_Base_C* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandlePhaseChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandlePhaseChange");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_InGameJobSelectManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.RestoreJobSelectViewState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::RestoreJobSelectViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.RestoreJobSelectViewState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_InGameJobSelectManager_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.SetFocusGroup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_C::SetFocusGroup(const struct FName& FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.SetFocusGroup");

	struct
	{
		struct FName                   FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeLoadoutScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::InitializeLoadoutScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeLoadoutScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelectManager_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ViewScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   GoToScreen                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_C::ViewScreen(const struct FName& GoToScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ViewScreen");

	struct
	{
		struct FName                   GoToScreen;
	} params;

	params.GoToScreen = GoToScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionEntryChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::HandleJobSelectionEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionEntryChanged");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		bool                           EnemyTeam;
	} params;

	params.JobEntry = JobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeJobSelectScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::InitializeJobSelectScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeJobSelectScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::HandleJobSelectionReady(bool EnemyTeam, TArray<class UJobSelectionEntryDetails*>* JobEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelectionReady");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
		bool                           EnemyTeam;
	} params;

	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);

	if (JobEntries != nullptr)
		*JobEntries = params.JobEntries;
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_C::HandleJobSelection(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobSelection");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLockedIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsBan                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::HandleJobLockedIn(bool IsBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLockedIn");

	struct
	{
		bool                           IsBan;
	} params;

	params.IsBan = IsBan;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLoadoutView
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::HandleJobLoadoutView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleJobLoadoutView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntryChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::OnJobEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntryChanged");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		bool                           EnemyTeam;
	} params;

	params.JobEntry = JobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleNavigateBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::HandleNavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.HandleNavigateBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OpenMainMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OpenMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OpenMainMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.PreRoundAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::PreRoundAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.PreRoundAnimComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntriesReady
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*> JobEntries, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnJobEntriesReady");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
		bool                           EnemyTeam;
	} params;

	params.JobEntries = JobEntries;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnResetSelection
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_C::OnResetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnResetSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerSelectionStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EPlayerSelectionState          NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_C::OnPlayerSelectionStateChanged(EPlayerSelectionState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.OnPlayerSelectionStateChanged");

	struct
	{
		EPlayerSelectionState          NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct Job Select Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Force_Reset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_C::Construct_Job_Select_Widget(bool Force_Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.Construct Job Select Widget");

	struct
	{
		bool                           Force_Reset;
	} params;

	params.Force_Reset = Force_Reset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ExecuteUbergraph_WBP_InGameJobSelectManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_C::ExecuteUbergraph_WBP_InGameJobSelectManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C.ExecuteUbergraph_WBP_InGameJobSelectManager");

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
