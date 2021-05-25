// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScoreboardPlayerStats_Lobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Level From Player Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           KS_Player_Info                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerStats_Lobby_C::Set_Level_From_Player_Info(class UKSPlayerInfo* KS_Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Level From Player Info");

	struct
	{
		class UKSPlayerInfo*           KS_Player_Info;
	} params;

	params.KS_Player_Info = KS_Player_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Avatar From Player Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           KS_Player_Info                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerStats_Lobby_C::Set_Avatar_From_Player_Info(class UKSPlayerInfo* KS_Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Avatar From Player Info");

	struct
	{
		class UKSPlayerInfo*           KS_Player_Info;
	} params;

	params.KS_Player_Info = KS_Player_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UScoreboardPlayerStats_Lobby_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFriendly                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardPlayerStats_Lobby_C::SetColors(bool IsFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors");

	struct
	{
		bool                           IsFriendly;
	} params;

	params.IsFriendly = IsFriendly;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFriendlyTeam                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardPlayerStats_Lobby_C::SetTeamColor(bool IsFriendlyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor");

	struct
	{
		bool                           IsFriendlyTeam;
	} params;

	params.IsFriendlyTeam = IsFriendlyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardPlayerStats_Lobby_C::SetLocalPlayer(bool IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer");

	struct
	{
		bool                           IsLocalPlayer;
	} params;

	params.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerStats_Lobby_C::SetJobIcon(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon");

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerStats_Lobby_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardPlayerStats_Lobby_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerStats_Lobby_C::ExecuteUbergraph_ScoreboardPlayerStats_Lobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int64_t                        PlayerId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerStats_Lobby_C::OnClicked__DelegateSignature(class UWidget* Widget, int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
		int64_t                        PlayerId;
	} params;

	params.Widget = Widget;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
