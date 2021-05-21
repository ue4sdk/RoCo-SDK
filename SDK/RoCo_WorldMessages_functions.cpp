// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WorldMessages_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldMessages.WorldMessages_C.PlayCombatLogSFX
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScreenLogData          ScreenLogData                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWorldMessages_C::PlayCombatLogSFX(const struct FScreenLogData& ScreenLogData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.PlayCombatLogSFX");

	struct
	{
		struct FScreenLogData          ScreenLogData;
	} params;

	params.ScreenLogData = ScreenLogData;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.CreateFrontQueuedMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWorldMessages_C::CreateFrontQueuedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.CreateFrontQueuedMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.GetPooledMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCombatLogElement_C*     Message                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::GetPooledMessage(class UCombatLogElement_C** Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.GetPooledMessage");

	struct
	{
		class UCombatLogElement_C*     Message;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Message != nullptr)
		*Message = params.Message;
}


// Function WorldMessages.WorldMessages_C.ReturnPooledMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCombatLogElement_C*     Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::ReturnPooledMessage(class UCombatLogElement_C* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.ReturnPooledMessage");

	struct
	{
		class UCombatLogElement_C*     Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.SFXKillFeed_Down
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::SFXKillFeed_Down(class APlayerState* Victim, class APlayerState* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.SFXKillFeed_Down");

	struct
	{
		class APlayerState*            Victim;
		class APlayerState*            Instigator;
	} params;

	params.Victim = Victim;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.SFXKillFeed_Elim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::SFXKillFeed_Elim(class APlayerState* Victim, class APlayerState* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.SFXKillFeed_Elim");

	struct
	{
		class APlayerState*            Victim;
		class APlayerState*            Instigator;
	} params;

	params.Victim = Victim;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWorldMessages_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.DeathMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWorldMessages_C::DeathMessage(const struct FCombatEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.DeathMessage");

	struct
	{
		struct FCombatEventInfo        EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.DownMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ExpBonus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::DownMessage(const struct FCombatEventInfo& EventInfo, int ExpBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.DownMessage");

	struct
	{
		struct FCombatEventInfo        EventInfo;
		int                            ExpBonus;
	} params;

	params.EventInfo = EventInfo;
	params.ExpBonus = ExpBonus;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.ResetMessages
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWorldMessages_C::ResetMessages(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.ResetMessages");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.OnRoundOver
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWorldMessages_C::OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.OnRoundOver");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.OnKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWorldMessages_C::OnKillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.OnKillCamEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.OnKillCamViewedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::OnKillCamViewedPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.OnKillCamViewedPawn");

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.HandleQueuedMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWorldMessages_C::HandleQueuedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.HandleQueuedMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.RadialMenuItemMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRadialMenuItemEventInfo EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWorldMessages_C::RadialMenuItemMessage(const struct FRadialMenuItemEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.RadialMenuItemMessage");

	struct
	{
		struct FRadialMenuItemEventInfo EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldMessages.WorldMessages_C.ExecuteUbergraph_WorldMessages
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWorldMessages_C::ExecuteUbergraph_WorldMessages(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMessages.WorldMessages_C.ExecuteUbergraph_WorldMessages");

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
