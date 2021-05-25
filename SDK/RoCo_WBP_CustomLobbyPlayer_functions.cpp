// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomLobbyPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::HandlePlayerContextUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::HandlePlayerContextHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlayControlsShow               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::DoHover(bool PlayControlsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover");

	struct
	{
		bool                           PlayControlsShow;
	} params;

	params.PlayControlsShow = PlayControlsShow;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlayControlsHide               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::DoUnhover(bool PlayControlsHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover");

	struct
	{
		bool                           PlayControlsHide;
	} params;

	params.PlayControlsHide = PlayControlsHide;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::DoPlayerClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsLocalPlayer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::GetRendererIsLocalPlayer(bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer");

	struct
	{
		bool                           IsLocalPlayer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanKick                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::GetCanLocalPlayerKick(bool* CanKick)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick");

	struct
	{
		bool                           CanKick;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanKick != nullptr)
		*CanKick = params.CanKick;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsOver                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::UserIsOverUs(bool* IsOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs");

	struct
	{
		bool                           IsOver;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsOver != nullptr)
		*IsOver = params.IsOver;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanControl                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::GetCanLocalPlayerControl(bool* CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl");

	struct
	{
		bool                           CanControl;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanControl != nullptr)
		*CanControl = params.CanControl;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomLobbyPlayer_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomLobbyPlayer_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp");

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


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::SetPlayerInfo(struct FPUMG_CustomMatchMember* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo");

	struct
	{
		struct FPUMG_CustomMatchMember playerinfo;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (playerinfo != nullptr)
		*playerinfo = params.playerinfo;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ELaterality>       side                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::SetControlsSide(TEnumAsByte<ELaterality> side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide");

	struct
	{
		TEnumAsByte<ELaterality>       side;
	} params;

	params.side = side;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::GetControlsHoverAnim(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim");

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::HandlePlayerClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EViewSide                      side                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnContextMenuOpen(EViewSide side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen");

	struct
	{
		EViewSide                      side;
	} params;

	params.side = side;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::OnContextMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMuted                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomLobbyPlayer_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState");

	struct
	{
		bool                           ShouldShow;
		bool                           IsTalking;
		bool                           IsMuted;
	} params;

	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::ExecuteUbergraph_WBP_CustomLobbyPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnUnhovered__DelegateSignature(class UWBP_CustomLobbyPlayer_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UWBP_CustomLobbyPlayer_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnHovered__DelegateSignature(class UWBP_CustomLobbyPlayer_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnHovered__DelegateSignature");

	struct
	{
		class UWBP_CustomLobbyPlayer_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnPlayerKick__DelegateSignature(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UKSWidget*               Widget;
	} params;

	params.playerinfo = playerinfo;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnPlayerSwap__DelegateSignature(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UKSWidget*               Widget;
	} params;

	params.playerinfo = playerinfo;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnEmptyClicked__DelegateSignature(class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature");

	struct
	{
		class UKSWidget*               Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomLobbyPlayer_C::OnPlayerClicked__DelegateSignature(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UKSWidget*               Widget;
	} params;

	params.playerinfo = playerinfo;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
