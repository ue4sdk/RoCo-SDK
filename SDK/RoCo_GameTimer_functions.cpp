// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameTimer.GameTimer_C.ConvertSecondToTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Second                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   TimeText                       (CPF_Parm, CPF_OutParm)

void UGameTimer_C::ConvertSecondToTime(float Second, struct FText* TimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.ConvertSecondToTime");

	struct
	{
		float                          Second;
		struct FText                   TimeText;
	} params;

	params.Second = Second;

	UObject::ProcessEvent(fn, &params);

	if (TimeText != nullptr)
		*TimeText = params.TimeText;
}


// Function GameTimer.GameTimer_C.SetLocalTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::SetLocalTimer(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.SetLocalTimer");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.SetUseCustomTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUseCustomTimer                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimer_C::SetUseCustomTimer(bool bUseCustomTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.SetUseCustomTimer");

	struct
	{
		bool                           bUseCustomTimer;
	} params;

	params.bUseCustomTimer = bUseCustomTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.ShouldPlayCountdownSound
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldPlay                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimer_C::ShouldPlayCountdownSound(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.ShouldPlayCountdownSound");

	struct
	{
		bool                           ShouldPlay;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;
}


// Function GameTimer.GameTimer_C.PlayFinalCountdownSound
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimer_C::PlayFinalCountdownSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.PlayFinalCountdownSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.DebugIssues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::DebugIssues(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.DebugIssues");

	struct
	{
		struct FString                 Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.SetRoundTimerSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::SetRoundTimerSize(int NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.SetRoundTimerSize");

	struct
	{
		int                            NewSize;
	} params;

	params.NewSize = NewSize;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.OpenRetryGameStateBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimer_C::OpenRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.OpenRetryGameStateBind");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.CloseRetryGameStateBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimer_C::CloseRetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.CloseRetryGameStateBind");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.RetryGameStateBind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimer_C::RetryGameStateBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.RetryGameStateBind");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.OnUIRelevantPlayerStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.OnUIRelevantPlayerStateChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.OnGameTimerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::OnGameTimerUpdate(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.OnGameTimerUpdate");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.InitializeTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimer_C::InitializeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.InitializeTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimer_C::HandleKillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.HandleKillCamEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.Unbind OnGameTimerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimer_C::Unbind_OnGameTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.Unbind OnGameTimerUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.HandleKillCamViewPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ViewedPawn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::HandleKillCamViewPawn(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.HandleKillCamViewPawn");

	struct
	{
		class APawn*                   ViewedPawn;
	} params;

	params.ViewedPawn = ViewedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.BombTimerActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimer_C::BombTimerActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.BombTimerActive");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.BombTimerTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::BombTimerTick(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.BombTimerTick");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.HandleObjectiveTimerTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::HandleObjectiveTimerTick(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.HandleObjectiveTimerTick");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimer.GameTimer_C.ExecuteUbergraph_GameTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimer_C::ExecuteUbergraph_GameTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimer.GameTimer_C.ExecuteUbergraph_GameTimer");

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
