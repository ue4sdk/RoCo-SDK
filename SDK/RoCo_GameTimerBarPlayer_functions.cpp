// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTimerBarPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetBombIndicatorVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::SetBombIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetBombIndicatorVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.CheckPlayerViewState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTimerBarPlayerState> CurrentState                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::CheckPlayerViewState(TEnumAsByte<EGameTimerBarPlayerState>* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.CheckPlayerViewState");

	struct
	{
		TEnumAsByte<EGameTimerBarPlayerState> CurrentState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnRespawnConfigChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::OnRespawnConfigChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnRespawnConfigChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.GetTeamRespawnType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSRespawnMode                 RespawnMode                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::GetTeamRespawnType(EKSRespawnMode* RespawnMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.GetTeamRespawnType");

	struct
	{
		EKSRespawnMode                 RespawnMode;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RespawnMode != nullptr)
		*RespawnMode = params.RespawnMode;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleRespawnTimerComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::HandleRespawnTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleRespawnTimerComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleRespawnTimerActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::HandleRespawnTimerActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleRespawnTimerActive");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitGradientBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::InitGradientBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitGradientBackgroundColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitSelectionFrameColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::InitSelectionFrameColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitSelectionFrameColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnModActivationChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerMod_Activated*  ActivatedMod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::OnModActivationChange(class UKSPlayerMod_Activated* ActivatedMod, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnModActivationChange");

	struct
	{
		class UKSPlayerMod_Activated*  ActivatedMod;
		bool                           Active;
	} params;

	params.ActivatedMod = ActivatedMod;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnRespawnQueueChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::OnRespawnQueueChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnRespawnQueueChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Unbind Player State Delegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::Unbind_Player_State_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Unbind Player State Delegates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Try Update Is Ally
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ValueHasChanged                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::Try_Update_Is_Ally(bool* ValueHasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Try Update Is Ally");

	struct
	{
		bool                           ValueHasChanged;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ValueHasChanged != nullptr)
		*ValueHasChanged = params.ValueHasChanged;
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnRespawnsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::OnRespawnsChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnRespawnsChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player Respawns Changed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::On_Player_Respawns_Changed(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player Respawns Changed");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleBindingsForPlayerStateChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::HandleBindingsForPlayerStateChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleBindingsForPlayerStateChanges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Merc Icon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::Set_Merc_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Merc Icon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetLocalIdentifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::SetLocalIdentifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.SetLocalIdentifier");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set View State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTimerBarPlayerState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Force                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::Set_View_State(TEnumAsByte<EGameTimerBarPlayerState> State, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set View State");

	struct
	{
		TEnumAsByte<EGameTimerBarPlayerState> State;
		bool                           Force;
	} params;

	params.State = State;
	params.Force = Force;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Player State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          In_Player_State                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::Set_Player_State(class AKSPlayerState* In_Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Set Player State");

	struct
	{
		class AKSPlayerState*          In_Player_State;
	} params;

	params.In_Player_State = In_Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player State Downed Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::On_Player_State_Downed_Changed(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Player State Downed Changed");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Player Mods Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerMod*            Mod                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSPlayerModInstance*    ModInstance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::Handle_Player_Mods_Changed(class UKSPlayerMod* Mod, class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Player Mods Changed");

	struct
	{
		class UKSPlayerMod*            Mod;
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.Mod = Mod;
	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Icon Showing Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSTopBarStatusIconInterface> StatusIconInterface            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::Handle_Icon_Showing_Changed(const TScriptInterface<class UKSTopBarStatusIconInterface>& StatusIconInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Icon Showing Changed");

	struct
	{
		TScriptInterface<class UKSTopBarStatusIconInterface> StatusIconInterface;
	} params;

	params.StatusIconInterface = StatusIconInterface;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bound Icon Mod Removed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::Handle_Bound_Icon_Mod_Removed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Handle Bound Icon Mod Removed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Character Is Locally Viewed Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Character_Locally_Viewed    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::On_Character_Is_Locally_Viewed_Changed(bool Is_Character_Locally_Viewed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.On Character Is Locally Viewed Changed");

	struct
	{
		bool                           Is_Character_Locally_Viewed;
	} params;

	params.Is_Character_Locally_Viewed = Is_Character_Locally_Viewed;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameTimerBarPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleOnObjectiveStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::HandleOnObjectiveStateChanged(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleOnObjectiveStateChanged");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnCharacterOwnerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacterBase*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::OnCharacterOwnerChanged(class AKSPlayerState* PlayerState, class AKSCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.OnCharacterOwnerChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
		class AKSCharacterBase*        Character;
	} params;

	params.PlayerState = PlayerState;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleGameObjectiveRegistered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarPlayer_C::HandleGameObjectiveRegistered(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.HandleGameObjectiveRegistered");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarPlayer.GameTimerBarPlayer_C.ExecuteUbergraph_GameTimerBarPlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarPlayer_C::ExecuteUbergraph_GameTimerBarPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPlayer.GameTimerBarPlayer_C.ExecuteUbergraph_GameTimerBarPlayer");

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
