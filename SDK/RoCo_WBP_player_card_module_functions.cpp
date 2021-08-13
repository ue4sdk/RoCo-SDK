// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_player_card_module_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_player_card_module.WBP_player_card_module_C.HideRankedBadge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Should_Hide                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_player_card_module_C::HideRankedBadge(bool Should_Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.HideRankedBadge");

	struct
	{
		bool                           Should_Hide;
	} params;

	params.Should_Hide = Should_Hide;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerCardStyle>  PlayerCardStyle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::SetPlayerCardStyle(TEnumAsByte<EPlayerCardStyle> PlayerCardStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle");

	struct
	{
		TEnumAsByte<EPlayerCardStyle>  PlayerCardStyle;
	} params;

	params.PlayerCardStyle = PlayerCardStyle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMuted                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_player_card_module_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState");

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


// Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::View_ResetPlayerCardState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_player_card_module_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player_Info                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::PlayerUpdate(class UPUMG_PlayerInfo* Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate");

	struct
	{
		class UPUMG_PlayerInfo*        Player_Info;
	} params;

	params.Player_Info = Player_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::View_SetDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::View_SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::SocialPlayerCardHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::SocialPlayerCardClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::ShowPlayerCardAnimation(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::ShowPlayerCardAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::AddShowPlayerCardAnimation(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation");

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_player_card_module_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::Manual_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::Manual_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::Manual_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSPlayerOnlineStatus          PlayerStatus                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsPortalFriend                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsPending                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_player_card_module_C::OnPlayerUpdate(class UPUMG_PlayerInfo* playerinfo, EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
		EKSPlayerOnlineStatus          PlayerStatus;
		bool                           IsPortalFriend;
		bool                           IsPending;
	} params;

	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EViewSide                      side                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::OnContextMenuOpen(EViewSide side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen");

	struct
	{
		EViewSide                      side;
	} params;

	params.side = side;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::OnContextMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::ExecuteUbergraph_WBP_player_card_module(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Player_Card                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::OnPlayerUpdated__DelegateSignature(class UWBP_player_card_module_C* Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdated__DelegateSignature");

	struct
	{
		class UWBP_player_card_module_C* Player_Card;
	} params;

	params.Player_Card = Player_Card;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::OnBackButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Card_Player_Info               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::OnCardHovered__DelegateSignature(class UPUMG_PlayerInfo* Card_Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature");

	struct
	{
		class UPUMG_PlayerInfo*        Card_Player_Info;
	} params;

	params.Card_Player_Info = Card_Player_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::OnNavigateRightFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_player_card_module_C::OnNavigateLeftFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Selected_Player_Card           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_player_card_module_C::OnPlayerClicked__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature");

	struct
	{
		class UWBP_player_card_module_C* Selected_Player_Card;
	} params;

	params.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
