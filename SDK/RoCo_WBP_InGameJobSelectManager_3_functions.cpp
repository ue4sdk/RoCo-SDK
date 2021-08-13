// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelectManager_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Get Current Match Phase Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Phase_Name                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_2_C::Get_Current_Match_Phase_Name(struct FName* Phase_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Get Current Match Phase Name");

	struct
	{
		struct FName                   Phase_Name;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Phase_Name != nullptr)
		*Phase_Name = params.Phase_Name;
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Are All Tasks Complete
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Complete                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_2_C::Are_All_Tasks_Complete(bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Are All Tasks Complete");

	struct
	{
		bool                           Complete;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Force Grid Navigation Rebuild
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::Force_Grid_Navigation_Rebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Force Grid Navigation Rebuild");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.GetActiveJobEntryButtons
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UWidget*>         ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UWidget*> UWBP_InGameJobSelectManager_2_C::GetActiveJobEntryButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.GetActiveJobEntryButtons");

	struct
	{
		TArray<class UWidget*>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.GetActiveJobSelectWidget
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWBP_InGameJobSelect_Base_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_InGameJobSelect_Base_C* UWBP_InGameJobSelectManager_2_C::GetActiveJobSelectWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.GetActiveJobSelectWidget");

	struct
	{
		class UWBP_InGameJobSelect_Base_C* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.HandlePhaseChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_2_C::HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.HandlePhaseChange");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_InGameJobSelectManager_2_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnKeyDown");

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


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.RestoreJobSelectViewState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::RestoreJobSelectViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.RestoreJobSelectViewState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_InGameJobSelectManager_2_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnKeyUp");

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


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.SetFocusGroup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_2_C::SetFocusGroup(const struct FName& FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.SetFocusGroup");

	struct
	{
		struct FName                   FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeLoadoutScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::InitializeLoadoutScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeLoadoutScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InGameJobSelectManager_2_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.ViewScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   GoToScreen                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_2_C::ViewScreen(const struct FName& GoToScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.ViewScreen");

	struct
	{
		struct FName                   GoToScreen;
	} params;

	params.GoToScreen = GoToScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeJobSelectScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::InitializeJobSelectScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeJobSelectScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.HandleJobLoadoutView
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::HandleJobLoadoutView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.HandleJobLoadoutView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.HandleNavigateBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::HandleNavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.HandleNavigateBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OpenMainMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::OpenMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OpenMainMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.PreRoundAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::PreRoundAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.PreRoundAnimComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Construct Job Select Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Force_Reset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelectManager_2_C::Construct_Job_Select_Widget(bool Force_Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.Construct Job Select Widget");

	struct
	{
		bool                           Force_Reset;
	} params;

	params.Force_Reset = Force_Reset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.AllPersonalTasksCompleted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::AllPersonalTasksCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.AllPersonalTasksCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.EndJobSelection
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::EndJobSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.EndJobSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.PostSetJobSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelectManager_2_C::PostSetJobSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.PostSetJobSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.ExecuteUbergraph_WBP_InGameJobSelectManager_3
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelectManager_2_C::ExecuteUbergraph_WBP_InGameJobSelectManager_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C.ExecuteUbergraph_WBP_InGameJobSelectManager_3");

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
