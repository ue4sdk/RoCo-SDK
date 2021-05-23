// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerContextMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_PlayerContextMenuOption_C*> Option_Widgets                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::GetOptionWidgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionWidgets"));

	struct
	{
		TArray<class UWBP_PlayerContextMenuOption_C*> Option_Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Option_Widgets != nullptr)
		*Option_Widgets = params.Option_Widgets;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnUpdateContextButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnUpdateContextButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnUpdateContextButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerContextOptions          ContextOption                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::HandleOptionSelected(EPlayerContextOptions ContextOption)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected"));

	struct
	{
		EPlayerContextOptions          ContextOption;
	} params;

	params.ContextOption = ContextOption;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Showing                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::IsShowingPlayer(class UKSPlayerInfo* playerinfo, bool* Showing)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		bool                           Showing;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);

	if (Showing != nullptr)
		*Showing = params.Showing;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsOpen                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::IsContextMenuOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen"));

	struct
	{
		bool                           IsOpen;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* PlayerCard                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ShowForPlayerCard(class UWBP_player_card_module_C* PlayerCard)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard"));

	struct
	{
		class UWBP_player_card_module_C* PlayerCard;
	} params;

	params.PlayerCard = PlayerCard;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewSide                      side                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FMargin                 Padding                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::MoveToWidgetSide(class UWidget* Widget, EViewSide side, const struct FMargin& Padding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide"));

	struct
	{
		class UWidget*                 Widget;
		EViewSide                      side;
		struct FMargin                 Padding;
	} params;

	params.Widget = Widget;
	params.side = side;
	params.Padding = Padding;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPlayerAlias>    Aliases                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::UpdatePlayerAliases(TArray<struct FPlayerAlias> Aliases)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases"));

	struct
	{
		TArray<struct FPlayerAlias>    Aliases;
	} params;

	params.Aliases = Aliases;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::MoveToWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           IsAccountId                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::IsCurrentAccountId(const struct FString& AccountId, bool* IsAccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId"));

	struct
	{
		struct FString                 AccountId;
		bool                           IsAccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);

	if (IsAccountId != nullptr)
		*IsAccountId = params.IsAccountId;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerContextMenu_C::RefreshOptionsPadding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerContextMenu_C::HideContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Selected_Player_Card           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Move_To_Player_Card_And_Show(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show"));

	struct
	{
		class UWBP_player_card_module_C* Selected_Player_Card;
	} params;

	params.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::Is_Any_Option_Visible(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible"));

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_PlayerContextMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp"));

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


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_PlayerContextMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown"));

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


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWidget*>         Buttons                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::GetAllActiveButtons(TArray<class UWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons"));

	struct
	{
		TArray<class UWidget*>         Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::GetFirstActiveButton(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton"));

	struct
	{
		class UWidget*                 FocusWidget;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           Friend_Info                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UIKSContextMenuTarget_C> TargetWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::ShowForPlayer(class UKSPlayerInfo* Friend_Info, const TScriptInterface<class UIKSContextMenuTarget_C>& TargetWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer"));

	struct
	{
		class UKSPlayerInfo*           Friend_Info;
		TScriptInterface<class UIKSContextMenuTarget_C> TargetWidget;
	} params;

	params.Friend_Info = Friend_Info;
	params.TargetWidget = TargetWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed"));

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


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bIsTalking                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsMuted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature"));

	struct
	{
		struct FString                 AccountId;
		bool                           bIsTalking;
		bool                           bIsMuted;
	} params;

	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EKSVoiceActivityAudioState     AudioState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(EKSVoiceActivityAudioState AudioState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature"));

	struct
	{
		EKSVoiceActivityAudioState     AudioState;
	} params;

	params.AudioState = AudioState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.DelayMoveMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FMargin                 Padding                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EViewSide                      side                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::DelayMoveMenu(class UKSWidget* Widget, const struct FMargin& Padding, EViewSide side)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.DelayMoveMenu"));

	struct
	{
		class UKSWidget*               Widget;
		struct FMargin                 Padding;
		EViewSide                      side;
	} params;

	params.Widget = Widget;
	params.Padding = Padding;
	params.side = side;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Player Card Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Player_Card                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::On_Player_Card_Update(class UWBP_player_card_module_C* Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Player Card Update"));

	struct
	{
		class UWBP_player_card_module_C* Player_Card;
	} params;

	params.Player_Card = Player_Card;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ExecuteUbergraph_WBP_PlayerContextMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnReportPlayer_0__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer_0__DelegateSignature"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature"));

	struct
	{
		class UWidget*                 FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UWidget*                 Default_Widget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnReadyForNavigation__DelegateSignature(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
