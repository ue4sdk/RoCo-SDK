// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPreviewWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::ResetPreviewWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPreviewWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HandlePreviewHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               PreviewWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::HandlePreviewHovered(class UKSWidget* PreviewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.HandlePreviewHovered");

	struct
	{
		class UKSWidget*               PreviewWidget;
	} params;

	params.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddPreviewToSettingMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               PreviewWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::AddPreviewToSettingMenu(class UKSWidget* PreviewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddPreviewToSettingMenu");

	struct
	{
		class UKSWidget*               PreviewWidget;
	} params;

	params.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupPreviewWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::SetupPreviewWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupPreviewWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         Tab_Selected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::On_Tab_Clicked(class UKSNavTabWidget* Tab_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked");

	struct
	{
		class UKSNavTabWidget*         Tab_Selected;
	} params;

	params.Tab_Selected = Tab_Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::ResetPageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSSettingsPage*         Page                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSSettingsContainer*    KSSettingsContainerWidget      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetContainerWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsContainer** KSSettingsContainerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage");

	struct
	{
		class UKSSettingsPage*         Page;
		class UPUMG_Widget*            PUMG_Widget;
		class UKSSettingsContainer*    KSSettingsContainerWidget;
	} params;

	params.Page = Page;
	params.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(fn, &params);

	if (KSSettingsContainerWidget != nullptr)
		*KSSettingsContainerWidget = params.KSSettingsContainerWidget;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bEntered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::On_Widget_Mouse_Entered(class UPUMG_Widget* PUMG_Widget, bool bEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered");

	struct
	{
		class UPUMG_Widget*            PUMG_Widget;
		bool                           bEntered;
	} params;

	params.PUMG_Widget = PUMG_Widget;
	params.bEntered = bEntered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Setup_Hover_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSSettingsPage*         SettingsPage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UKSSettingsContainer*> SettingsContainers             (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TArray<class UPUMG_Widget*>    SettingsContainersAsPUMG       (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetSettingsContainersForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsContainer*>* SettingsContainers, TArray<class UPUMG_Widget*>* SettingsContainersAsPUMG)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage");

	struct
	{
		class UKSSettingsPage*         SettingsPage;
		TArray<class UKSSettingsContainer*> SettingsContainers;
		TArray<class UPUMG_Widget*>    SettingsContainersAsPUMG;
	} params;

	params.SettingsPage = SettingsPage;

	UObject::ProcessEvent(fn, &params);

	if (SettingsContainers != nullptr)
		*SettingsContainers = params.SettingsContainers;
	if (SettingsContainersAsPUMG != nullptr)
		*SettingsContainersAsPUMG = params.SettingsContainersAsPUMG;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSSettingsPage*         Page                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSSettingsWidget*       KSSettingsWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetSettingsWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsWidget** KSSettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage");

	struct
	{
		class UKSSettingsPage*         Page;
		class UPUMG_Widget*            PUMG_Widget;
		class UKSSettingsWidget*       KSSettingsWidget;
	} params;

	params.Page = Page;
	params.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(fn, &params);

	if (KSSettingsWidget != nullptr)
		*KSSettingsWidget = params.KSSettingsWidget;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSSettingsPage*         KSSettingsPage                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Get_Current_Page(class UKSSettingsPage** KSSettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page");

	struct
	{
		class UKSSettingsPage*         KSSettingsPage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (KSSettingsPage != nullptr)
		*KSSettingsPage = params.KSSettingsPage;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> Input_State                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::On_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> Input_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> Input_State;
	} params;

	params.Input_State = Input_State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Setup_Input_State_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Setup_Login_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               Login_State                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Handle_Login_State(EPUMG_LoginState Login_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State");

	struct
	{
		EPUMG_LoginState               Login_State;
	} params;

	params.Login_State = Login_State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Tab_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Tab_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInstantSwitch                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::Go_To_Active_Tab(bool bInstantSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab");

	struct
	{
		bool                           bInstantSwitch;
	} params;

	params.bInstantSwitch = bInstantSwitch;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index_Offset                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Recover_From_Navigate_Failure(class UPUMG_Widget* PUMG_Widget, int Index_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure");

	struct
	{
		class UPUMG_Widget*            PUMG_Widget;
		int                            Index_Offset;
	} params;

	params.PUMG_Widget = PUMG_Widget;
	params.Index_Offset = Index_Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Focus_Group                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Widget_Navigate_Down_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure");

	struct
	{
		int                            Focus_Group;
		class UPUMG_Widget*            PUMG_Widget;
	} params;

	params.Focus_Group = Focus_Group;
	params.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Focus_Group                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Widget_Navigate_Up_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure");

	struct
	{
		int                            Focus_Group;
		class UPUMG_Widget*            PUMG_Widget;
	} params;

	params.Focus_Group = Focus_Group;
	params.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::On_Widget_Gamepad_Hovered(class UPUMG_Widget* PUMG_Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered");

	struct
	{
		class UPUMG_Widget*            PUMG_Widget;
		bool                           bHovered;
	} params;

	params.PUMG_Widget = PUMG_Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            PUMG_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Scroll_Widget_Into_View(class UPUMG_Widget* PUMG_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View");

	struct
	{
		class UPUMG_Widget*            PUMG_Widget;
	} params;

	params.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Scroll_To_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Scroll_To_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldSaveSettings             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::ConfirmExit(bool ShouldSaveSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit");

	struct
	{
		bool                           ShouldSaveSettings;
	} params;

	params.ShouldSaveSettings = ShouldSaveSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Restore_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::ExitSettingsPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           AnyUnsaved                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::HasAnyUnsavedSetting(bool* AnyUnsaved)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting");

	struct
	{
		bool                           AnyUnsaved;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnyUnsaved != nullptr)
		*AnyUnsaved = params.AnyUnsaved;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::Save_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsMenu_C::NavigateBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_SettingsMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSSettingsPage*         SettingsPage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UKSSettingsWidget*> SettingsWidgets                (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TArray<class UPUMG_Widget*>    SettingsWidgetsAsPUMG          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetSettingsWidgetsForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsWidget*>* SettingsWidgets, TArray<class UPUMG_Widget*>* SettingsWidgetsAsPUMG)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage");

	struct
	{
		class UKSSettingsPage*         SettingsPage;
		TArray<class UKSSettingsWidget*> SettingsWidgets;
		TArray<class UPUMG_Widget*>    SettingsWidgetsAsPUMG;
	} params;

	params.SettingsPage = SettingsPage;

	UObject::ProcessEvent(fn, &params);

	if (SettingsWidgets != nullptr)
		*SettingsWidgets = params.SettingsWidgets;
	if (SettingsWidgetsAsPUMG != nullptr)
		*SettingsWidgetsAsPUMG = params.SettingsWidgetsAsPUMG;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         Page                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::SetupNavigationForPage(class UKSSettingsPage* Page, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage");

	struct
	{
		class UKSSettingsPage*         Page;
		int                            Index;
	} params;

	params.Page = Page;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         Tab_Selected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInstantSwitch                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::On_Tab_Selected(class UKSNavTabWidget* Tab_Selected, bool bInstantSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected");

	struct
	{
		class UKSNavTabWidget*         Tab_Selected;
		bool                           bInstantSwitch;
	} params;

	params.Tab_Selected = Tab_Selected;
	params.bInstantSwitch = bInstantSwitch;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         Settings_Page_Widget           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Add_Tab_For_Settings_Page(class UKSSettingsPage* Settings_Page_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page");

	struct
	{
		class UKSSettingsPage*         Settings_Page_Widget;
	} params;

	params.Settings_Page_Widget = Settings_Page_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         Settings_Page                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Add_Settings_Page_Widget(class UKSSettingsPage* Settings_Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget");

	struct
	{
		class UKSSettingsPage*         Settings_Page;
	} params;

	params.Settings_Page = Settings_Page;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuApplyClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuBackClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuRevertButtonClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         SettingsPage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::AddSettingsPageWidget(class UKSSettingsPage* SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget");

	struct
	{
		class UKSSettingsPage*         SettingsPage;
	} params;

	params.SettingsPage = SettingsPage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::OnMenuConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::RebuildNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::OnBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::OnApplyButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::OnRevertButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldSaveSettings             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::OnConfirmExit(bool ShouldSaveSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit");

	struct
	{
		bool                           ShouldSaveSettings;
	} params;

	params.ShouldSaveSettings = ShouldSaveSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RevertSettings
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsMenu_C::RevertSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.RevertSettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ExecuteUbergraph_WBP_SettingsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu");

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
