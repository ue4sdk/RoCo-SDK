// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CoopProgressOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CoopProgressOverlay.CoopProgressOverlay_C.Refresh Appearance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopProgressOverlay_C::Refresh_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Refresh Appearance"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Round Start
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UCoopProgressOverlay_C::Handle_Round_Start(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Round Start"));

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Coop Pickup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Pickup                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PickupsUsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PickupsLeft                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::Handle_Coop_Pickup(class AKSObjectiveBase* Pickup, int PickupsUsed, int PickupsLeft)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Coop Pickup"));

	struct
	{
		class AKSObjectiveBase*        Pickup;
		int                            PickupsUsed;
		int                            PickupsLeft;
	} params;

	params.Pickup = Pickup;
	params.PickupsUsed = PickupsUsed;
	params.PickupsLeft = PickupsLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Computers Unlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopProgressOverlay_C::Handle_Computers_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Computers Unlocked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Successful Hack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSExtractionComputer*   Computer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::Handle_Successful_Hack(class AKSExtractionComputer* Computer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Successful Hack"));

	struct
	{
		class AKSExtractionComputer*   Computer;
	} params;

	params.Computer = Computer;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Escape Point Changed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AKSPlayerState*>  ContainedPlayers               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::Handle_Escape_Point_Changed(TArray<class AKSPlayerState*> ContainedPlayers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Escape Point Changed"));

	struct
	{
		TArray<class AKSPlayerState*>  ContainedPlayers;
	} params;

	params.ContainedPlayers = ContainedPlayers;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Phase Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentPhaseName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::Handle_Phase_Change(const struct FName& CurrentPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Phase Change"));

	struct
	{
		struct FName                   CurrentPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.CurrentPhaseName = CurrentPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Timer Second Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::Handle_Timer_Second_Tick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Timer Second Tick"));

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Downed Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::Handle_Player_Downed_Changed(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Downed Changed"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UCoopProgressOverlay_C::Handle_Player_Death(const struct FCombatEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.Handle Player Death"));

	struct
	{
		struct FCombatEventInfo        EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopProgressOverlay.CoopProgressOverlay_C.ExecuteUbergraph_CoopProgressOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopProgressOverlay_C::ExecuteUbergraph_CoopProgressOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopProgressOverlay.CoopProgressOverlay_C.ExecuteUbergraph_CoopProgressOverlay"));

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
