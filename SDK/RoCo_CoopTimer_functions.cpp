// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CoopTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CoopTimer.CoopTimer_C.UpdateMatchPointDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::UpdateMatchPointDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.UpdateMatchPointDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.UpdateTeamCountDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::UpdateTeamCountDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.UpdateTeamCountDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.SetRoundTimerSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::SetRoundTimerSize(int NewSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.SetRoundTimerSize"));

	struct
	{
		int                            NewSize;
	} params;

	params.NewSize = NewSize;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCoopTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.HackInProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSExtractionComputer*   Computer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::HackInProgress(class AKSExtractionComputer* Computer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.HackInProgress"));

	struct
	{
		class AKSExtractionComputer*   Computer;
	} params;

	params.Computer = Computer;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.RoundEnd
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UCoopTimer_C::RoundEnd(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.RoundEnd"));

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.RoundWarmup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UCoopTimer_C::RoundWarmup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.RoundWarmup"));

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.RoundStart
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UCoopTimer_C::RoundStart(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.RoundStart"));

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.ComputersUnlock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::ComputersUnlock()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.ComputersUnlock"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.Player Eliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::Player_Eliminated(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.Player Eliminated"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.OpenRetryGameStateBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::OpenRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.OpenRetryGameStateBind"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.CloseRetryGameStateBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::CloseRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.CloseRetryGameStateBind"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.RetryGameStateBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::RetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.RetryGameStateBind"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.OnUIRelevantPlayerStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.OnUIRelevantPlayerStateChanged"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.OnGameTimerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::OnGameTimerUpdate(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.OnGameTimerUpdate"));

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.InitializeTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::InitializeTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.InitializeTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCoopTimer_C::HandleKillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.HandleKillCamEnabled"));

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.Unbind OnGameTimerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCoopTimer_C::Unbind_OnGameTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.Unbind OnGameTimerUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.HandleKillCamViewPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ViewedPawn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::HandleKillCamViewPawn(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.HandleKillCamViewPawn"));

	struct
	{
		class APawn*                   ViewedPawn;
	} params;

	params.ViewedPawn = ViewedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.Handle Alarm State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAlarmState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCoopTimer_C::Handle_Alarm_State_Changed(bool bAlarmState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.Handle Alarm State Changed"));

	struct
	{
		bool                           bAlarmState;
	} params;

	params.bAlarmState = bAlarmState;

	UObject::ProcessEvent(fn, &params);
}


// Function CoopTimer.CoopTimer_C.ExecuteUbergraph_CoopTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCoopTimer_C::ExecuteUbergraph_CoopTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoopTimer.CoopTimer_C.ExecuteUbergraph_CoopTimer"));

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
