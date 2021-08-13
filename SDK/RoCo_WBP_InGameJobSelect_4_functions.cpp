// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Start Full Hide Visual State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::Start_Full_Hide_Visual_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Start Full Hide Visual State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Start Tasks Completed Visual State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::Start_Tasks_Completed_Visual_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Start Tasks Completed Visual State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Start Post Selection Visual State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::Start_Post_Selection_Visual_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Start Post Selection Visual State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Get Job Grid Width
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            GRID_WIDTH                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::Get_Job_Grid_Width(int* GRID_WIDTH)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Get Job Grid Width");

	struct
	{
		int                            GRID_WIDTH;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (GRID_WIDTH != nullptr)
		*GRID_WIDTH = params.GRID_WIDTH;
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Get Job Entry Buttons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UWidget*>         Buttons                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::Get_Job_Entry_Buttons(TArray<class UWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Get Job Entry Buttons");

	struct
	{
		TArray<class UWidget*>         Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.ClearPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::ClearPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.ClearPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.HandlePhaseChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_InGameJobSelect_3_C::HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.HandlePhaseChange");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.RestoreVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::RestoreVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.RestoreVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.On Clicked SelectBan Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::On_Clicked_SelectBan_Button(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.On Clicked SelectBan Button");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.On Clicked Loadout Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::On_Clicked_Loadout_Button(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.On Clicked Loadout Button");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Choice Grid Rebuilt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::Choice_Grid_Rebuilt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Choice Grid Rebuilt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Bring Choice Into View
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobSelectionChoiceWidget* Choice                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::Bring_Choice_Into_View(class UKSJobSelectionChoiceWidget* Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.Bring Choice Into View");

	struct
	{
		class UKSJobSelectionChoiceWidget* Choice;
	} params;

	params.Choice = Choice;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.PostSetJobSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::PostSetJobSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.PostSetJobSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.AllPersonalTasksCompleted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::AllPersonalTasksCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.AllPersonalTasksCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.EndJobSelection
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_3_C::EndJobSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.EndJobSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.ExecuteUbergraph_WBP_InGameJobSelect_4
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_3_C::ExecuteUbergraph_WBP_InGameJobSelect_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_4.WBP_InGameJobSelect_3_C.ExecuteUbergraph_WBP_InGameJobSelect_4");

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
