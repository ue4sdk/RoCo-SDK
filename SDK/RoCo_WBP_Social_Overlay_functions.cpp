// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Overlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnFriendsScrolled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnFriendsScrolled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnFriendsScrolled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.Toggle Context Menu for Player Card
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               KSWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::Toggle_Context_Menu_for_Player_Card(class UKSWidget* KSWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.Toggle Context Menu for Player Card");

	struct
	{
		class UKSWidget*               KSWidget;
	} params;

	params.KSWidget = KSWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::HandleStatusMenuHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleStatusMenuShown(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown");

	struct
	{
		class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleStatusNavigationReady(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady");

	struct
	{
		TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::SetupHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetTabIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C* ActiveTabButton                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnTabChange(class UWBP_subscreen_nav_tab_C* ActiveTabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange");

	struct
	{
		class UWBP_subscreen_nav_tab_C* ActiveTabButton;
	} params;

	params.ActiveTabButton = ActiveTabButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetActiveTabByWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Social_Overlay_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::MoveTabBy(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetupNavTabs(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Social_Overlay_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::ClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               PlayerCard                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnPlayerCardClick(class UKSWidget* PlayerCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick");

	struct
	{
		class UKSWidget*               PlayerCard;
	} params;

	params.PlayerCard = PlayerCard;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnTabLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnTabRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnToggleSocial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnViewStateChange(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   PreviousRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::OnToggleStatusMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory*   Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UKSDataSocialPlayer*> Players                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandlePlayerInvitesChanged(class UKSDataSocialCategory* Category, TArray<class UKSDataSocialPlayer*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged");

	struct
	{
		class UKSDataSocialCategory*   Category;
		TArray<class UKSDataSocialPlayer*> Players;
	} params;

	params.Category = Category;
	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UWidget*                 Default_Widget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature");

	struct
	{
		TArray<class UWidget*>         NavWidgets;
		class UWidget*                 Default_Widget;
	} params;

	params.Default_Widget = Default_Widget;

	UObject::ProcessEvent(fn, &params);

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature");

	struct
	{
		class UWidget*                 FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleNavTabSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         NavTab                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleNavTabSelected(class UKSNavTabWidget* NavTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleNavTabSelected");

	struct
	{
		class UKSNavTabWidget*         NavTab;
	} params;

	params.NavTab = NavTab;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHeaderClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Header                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnHeaderClicked(class UKSWidget* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHeaderClicked");

	struct
	{
		class UKSWidget*               Header;
	} params;

	params.Header = Header;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Overlay_C::ExecuteUbergraph_WBP_Social_Overlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay");

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
