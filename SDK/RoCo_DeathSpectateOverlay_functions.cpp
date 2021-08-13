// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DeathSpectateOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleKSPlayerStateTeamChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::HandleKSPlayerStateTeamChanged(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleKSPlayerStateTeamChanged");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.BindTeamRespawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::BindTeamRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.BindTeamRespawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleQueueRespawnChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::HandleQueueRespawnChanged(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.HandleQueueRespawnChanged");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.UpdateViewNextTeammate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::UpdateViewNextTeammate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.UpdateViewNextTeammate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Spectate State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSpectating                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDeathSpectateOverlay_C::Handle_Spectate_State_Changed(bool IsSpectating)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Handle Spectate State Changed");

	struct
	{
		bool                           IsSpectating;
	} params;

	params.IsSpectating = IsSpectating;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.TeamMemberEliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::TeamMemberEliminated(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.TeamMemberEliminated");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.DetermineLocalPlayerControlled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::DetermineLocalPlayerControlled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.DetermineLocalPlayerControlled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Refresh Player Identity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          InKSPlayerState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::Refresh_Player_Identity(class AKSPlayerState* InKSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Refresh Player Identity");

	struct
	{
		class AKSPlayerState*          InKSPlayerState;
	} params;

	params.InKSPlayerState = InKSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.PostSetPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.PostSetPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.PreClearPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.PreClearPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Update Team State Bindings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::Update_Team_State_Bindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Update Team State Bindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.Clear Bound Team State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathSpectateOverlay_C::Clear_Bound_Team_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.Clear Bound Team State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DeathSpectateOverlay.DeathSpectateOverlay_C.ExecuteUbergraph_DeathSpectateOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDeathSpectateOverlay_C::ExecuteUbergraph_DeathSpectateOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSpectateOverlay.DeathSpectateOverlay_C.ExecuteUbergraph_DeathSpectateOverlay");

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
