// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTimerBarCenter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameTimerBarCenter.GameTimerBarCenter_C.ShowOvertime
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::ShowOvertime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.ShowOvertime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleGameObjectiveUnregistered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::HandleGameObjectiveUnregistered(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleGameObjectiveUnregistered"));

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleGameObjectiveRegistered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::HandleGameObjectiveRegistered(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleGameObjectiveRegistered"));

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleObjectiveTimerTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::HandleObjectiveTimerTick(const TScriptInterface<class UKSObjective>& GameObjective, float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleObjectiveTimerTick"));

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
		float                          Time;
	} params;

	params.GameObjective = GameObjective;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleObjectiveTimerActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::HandleObjectiveTimerActive(const TScriptInterface<class UKSObjective>& GameObjective, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleObjectiveTimerActive"));

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
		bool                           Active;
	} params;

	params.GameObjective = GameObjective;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleGameObjectiveStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::HandleGameObjectiveStateChanged(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleGameObjectiveStateChanged"));

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleObjectiveTimerComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::HandleObjectiveTimerComplete(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleObjectiveTimerComplete"));

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleBombStateTimerTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::HandleBombStateTimerTick(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleBombStateTimerTick"));

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.HandleBombStateTimerActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::HandleBombStateTimerActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.HandleBombStateTimerActive"));

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.BindGameStateEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::BindGameStateEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.BindGameStateEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetShouldUseProgressCircle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseProgressCircle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::SetShouldUseProgressCircle(bool UseProgressCircle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.SetShouldUseProgressCircle"));

	struct
	{
		bool                           UseProgressCircle;
	} params;

	params.UseProgressCircle = UseProgressCircle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetContestedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsContested                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::SetContestedState(bool bIsContested)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.SetContestedState"));

	struct
	{
		bool                           bIsContested;
	} params;

	params.bIsContested = bIsContested;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.PlayScoreAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::PlayScoreAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.PlayScoreAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetCurrentPhase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::SetCurrentPhase(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.SetCurrentPhase"));

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenterTextStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::ResetCenterTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenterTextStyle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::ResetCenter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.ResetCenter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetRoundTimers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::SetRoundTimers(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.SetRoundTimers"));

	struct
	{
		float                          Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.UpdateObjectiveTimerSeconds
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::UpdateObjectiveTimerSeconds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.UpdateObjectiveTimerSeconds"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Update Bomb Timer Seconds
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::Update_Bomb_Timer_Seconds(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Update Bomb Timer Seconds"));

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Reset Bomb Timer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::Reset_Bomb_Timer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Reset Bomb Timer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Set Hack Seconds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HackTimeLeft                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::Set_Hack_Seconds(float HackTimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Set Hack Seconds"));

	struct
	{
		float                          HackTimeLeft;
	} params;

	params.HackTimeLeft = HackTimeLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Set Countdown Seconds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CountdownTimeLeft              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          CountdownTimeTotal             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::Set_Countdown_Seconds(float CountdownTimeLeft, float CountdownTimeTotal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Set Countdown Seconds"));

	struct
	{
		float                          CountdownTimeLeft;
		float                          CountdownTimeTotal;
	} params;

	params.CountdownTimeLeft = CountdownTimeLeft;
	params.CountdownTimeTotal = CountdownTimeTotal;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Set View By Objective State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTimerBarCenterState> Center_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::Set_View_By_Objective_State(TEnumAsByte<EGameTimerBarCenterState> Center_State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Set View By Objective State"));

	struct
	{
		TEnumAsByte<EGameTimerBarCenterState> Center_State;
	} params;

	params.Center_State = Center_State;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarCenter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.PlayFlipTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::PlayFlipTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.PlayFlipTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.SetProgress"));

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.SetTeamProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::SetTeamProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.SetTeamProgress"));

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Tick Countdown Time
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::Tick_Countdown_Time(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Tick Countdown Time"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::Circle_Progress_Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Close"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBarCenter_C::Circle_Progress_Open()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.Circle Progress Open"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarCenter.GameTimerBarCenter_C.ExecuteUbergraph_GameTimerBarCenter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarCenter_C::ExecuteUbergraph_GameTimerBarCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameTimerBarCenter.GameTimerBarCenter_C.ExecuteUbergraph_GameTimerBarCenter"));

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
