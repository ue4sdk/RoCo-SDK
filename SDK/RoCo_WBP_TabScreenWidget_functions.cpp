// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TabScreenWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleMuteOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::HandleMuteOption(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleMuteOption"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IsOppositeTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsOppositeTeam                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::IsOppositeTeam(class AKSPlayerState* PlayerState, bool* IsOppositeTeam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IsOppositeTeam"));

	struct
	{
		class AKSPlayerState*          PlayerState;
		bool                           IsOppositeTeam;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	if (IsOppositeTeam != nullptr)
		*IsOppositeTeam = params.IsOppositeTeam;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ClearVoteInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::ClearVoteInput()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ClearVoteInput"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ChangeFocusable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Focusable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::ChangeFocusable(bool Is_Focusable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ChangeFocusable"));

	struct
	{
		bool                           Is_Focusable;
	} params;

	params.Is_Focusable = Is_Focusable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UpdateAfterTabChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::UpdateAfterTabChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UpdateAfterTabChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.RegisterAllForFocus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::RegisterAllForFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.RegisterAllForFocus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupContextPrompts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::SetupContextPrompts(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupContextPrompts"));

	struct
	{
		class AHUD*                    HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupReportButtonNav
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::SetupReportButtonNav()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupReportButtonNav"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandlePlayerReported
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int64_t                        PlayerId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::HandlePlayerReported(int64_t PlayerId, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandlePlayerReported"));

	struct
	{
		int64_t                        PlayerId;
		bool                           Success;
	} params;

	params.PlayerId = PlayerId;
	params.Success = Success;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeReportPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeReportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeReportPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardNav
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::ResetScoreboardNav()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardNav"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.MoveFocusTo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ToGoScreen                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::MoveFocusTo(const struct FName& ToGoScreen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.MoveFocusTo"));

	struct
	{
		struct FName                   ToGoScreen;
	} params;

	params.ToGoScreen = ToGoScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnActionBack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::HandleOnActionBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnActionBack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnPlayerReported
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::HandleOnPlayerReported(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleOnPlayerReported"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializePlayerAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializePlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializePlayerAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeScoreboard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeScoreboard"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupPlayerActionNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 DefaultWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::SetupPlayerActionNavigation(class UWidget* DefaultWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupPlayerActionNavigation"));

	struct
	{
		class UWidget*                 DefaultWidget;
	} params;

	params.DefaultWidget = DefaultWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ToggleHideCursor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::ToggleHideCursor(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ToggleHideCursor"));

	struct
	{
		bool                           ShouldHide;
	} params;

	params.ShouldHide = ShouldHide;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_TabScreenWidget_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnMouseMove"));

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


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_TabScreenWidget_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_TabScreenWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnKeyUp"));

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


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupScoreboardNav
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::SetupScoreboardNav()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetupScoreboardNav"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleInputModeChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputMode;
	} params;

	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HasTabs
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasTabs                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::HasTabs(bool* HasTabs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HasTabs"));

	struct
	{
		bool                           HasTabs;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasTabs != nullptr)
		*HasTabs = params.HasTabs;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleNavButtonClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 TargetWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::HandleNavButtonClicked(class UWidget* TargetWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.HandleNavButtonClicked"));

	struct
	{
		class UWidget*                 TargetWidget;
	} params;

	params.TargetWidget = TargetWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Cycle Tabs
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reverse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::Cycle_Tabs(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Cycle Tabs"));

	struct
	{
		bool                           Reverse;
	} params;

	params.Reverse = Reverse;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IncrementTabWrapped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            In                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Reverse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::IncrementTabWrapped(int In, bool Reverse, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.IncrementTabWrapped"));

	struct
	{
		int                            In;
		bool                           Reverse;
		int                            Out;
	} params;

	params.In = In;
	params.Reverse = Reverse;

	UObject::ProcessEvent(fn, &params);

	if (Out != nullptr)
		*Out = params.Out;
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Refresh Tabs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::Refresh_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Refresh Tabs"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetGamepadCallouts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::SetGamepadCallouts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.SetGamepadCallouts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.InitializeWidgetButtonListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::NavLeft()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavLeft"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::NavRight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.NavRight"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OpenTimerGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::OpenTimerGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.OpenTimerGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CloseTimerGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::CloseTimerGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.CloseTimerGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTab
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::AttemptCloseTab()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTab"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.FocusScoreboardPlayerEntries
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::FocusScoreboardPlayerEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.FocusScoreboardPlayerEntries"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::ResetScoreboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ResetScoreboardFocus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ShowPlayerOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* NewPlayerState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::ShowPlayerOptions(class UKSPersistentPlayerData* NewPlayerState, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ShowPlayerOptions"));

	struct
	{
		class UKSPersistentPlayerData* NewPlayerState;
		class UWidget*                 Widget;
	} params;

	params.NewPlayerState = NewPlayerState;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle KillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::Handle_KillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle KillCamEnabled"));

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Back Button Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::Handle_Back_Button_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Back Button Clicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UnfocusScoreboardPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::UnfocusScoreboardPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.UnfocusScoreboardPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTabFromKeyUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bKeyboardInput                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabScreenWidget_C::AttemptCloseTabFromKeyUp(bool bKeyboardInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.AttemptCloseTabFromKeyUp"));

	struct
	{
		bool                           bKeyboardInput;
	} params;

	params.bKeyboardInput = bKeyboardInput;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.BndEvt__ContextMenuBlocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::BndEvt__ContextMenuBlocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.BndEvt__ContextMenuBlocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ReturnToScoreboardPlayerEntries
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::ReturnToScoreboardPlayerEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ReturnToScoreboardPlayerEntries"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Context Options Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabScreenWidget_C::Handle_Context_Options_Updated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.Handle Context Options Updated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ExecuteUbergraph_WBP_TabScreenWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabScreenWidget_C::ExecuteUbergraph_WBP_TabScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabScreenWidget.WBP_TabScreenWidget_C.ExecuteUbergraph_WBP_TabScreenWidget"));

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
