// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BombDropMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BombDropMarker.BombDropMarker_C.HandleGameObjectiveChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::HandleGameObjectiveChanged(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.HandleGameObjectiveChanged");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.IsStateEqualTo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSNeutralBombState            BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSObjectiveState              ObjectiveState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::IsStateEqualTo(EKSNeutralBombState BombState, EKSObjectiveState ObjectiveState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.IsStateEqualTo");

	struct
	{
		EKSNeutralBombState            BombState;
		EKSObjectiveState              ObjectiveState;
		bool                           Result;
	} params;

	params.BombState = BombState;
	params.ObjectiveState = ObjectiveState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BombDropMarker.BombDropMarker_C.IsCurrentObjectiveStateEqualTo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSObjectiveState              CompareState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::IsCurrentObjectiveStateEqualTo(EKSObjectiveState CompareState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.IsCurrentObjectiveStateEqualTo");

	struct
	{
		EKSObjectiveState              CompareState;
		bool                           Result;
	} params;

	params.CompareState = CompareState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BombDropMarker.BombDropMarker_C.IsCurrentBombStateEqualTo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EKSNeutralBombState            CompareState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::IsCurrentBombStateEqualTo(EKSNeutralBombState CompareState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.IsCurrentBombStateEqualTo");

	struct
	{
		EKSNeutralBombState            CompareState;
		bool                           Result;
	} params;

	params.CompareState = CompareState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BombDropMarker.BombDropMarker_C.GetObjectiveColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ObjectiveColor                 (CPF_Parm, CPF_OutParm)

void UBombDropMarker_C::GetObjectiveColor(struct FSlateColor* ObjectiveColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.GetObjectiveColor");

	struct
	{
		struct FSlateColor             ObjectiveColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ObjectiveColor != nullptr)
		*ObjectiveColor = params.ObjectiveColor;
}


// Function BombDropMarker.BombDropMarker_C.SetShowBombTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowTimer                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::SetShowBombTimer(bool bShowTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.SetShowBombTimer");

	struct
	{
		bool                           bShowTimer;
	} params;

	params.bShowTimer = bShowTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.SetLocalPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBombDropMarker_C::SetLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.SetLocalPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.GetBombColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             BombColor                      (CPF_Parm, CPF_OutParm)

void UBombDropMarker_C::GetBombColor(struct FSlateColor* BombColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.GetBombColor");

	struct
	{
		struct FSlateColor             BombColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (BombColor != nullptr)
		*BombColor = params.BombColor;
}


// Function BombDropMarker.BombDropMarker_C.UpdateProgressMeterFromBombState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSNeutralBombState            BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BombTeam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::UpdateProgressMeterFromBombState(EKSNeutralBombState BombState, int BombTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.UpdateProgressMeterFromBombState");

	struct
	{
		EKSNeutralBombState            BombState;
		int                            BombTeam;
	} params;

	params.BombState = BombState;
	params.BombTeam = BombTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.UpdateProgressMeterProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBombDropMarker_C::UpdateProgressMeterProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.UpdateProgressMeterProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.HandleBombStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UBombDropMarker_C::HandleBombStateChanged(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.HandleBombStateChanged");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.GetArmedBombZone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSNeutralBombZone*      BombZone                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::GetArmedBombZone(class AKSNeutralBombZone** BombZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.GetArmedBombZone");

	struct
	{
		class AKSNeutralBombZone*      BombZone;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (BombZone != nullptr)
		*BombZone = params.BombZone;
}


// Function BombDropMarker.BombDropMarker_C.Update
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UBombDropMarker_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.Update");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BombDropMarker.BombDropMarker_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBombDropMarker_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BombDropMarker.BombDropMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBombDropMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.Handle Bomb State Timer Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::Handle_Bomb_State_Timer_Tick(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.Handle Bomb State Timer Tick");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.SetAttackingTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::SetAttackingTeam(class AKSTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.SetAttackingTeam");

	struct
	{
		class AKSTeamState*            NewTeam;
	} params;

	params.NewTeam = NewTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.UpdateMetersAway
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Meters                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::UpdateMetersAway(int Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.UpdateMetersAway");

	struct
	{
		int                            Meters;
	} params;

	params.Meters = Meters;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::HandleKillCamEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.HandleKillCamEnabled");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.HandleObjectiveTimerActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::HandleObjectiveTimerActive(const TScriptInterface<class UKSObjective>& GameObjective, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.HandleObjectiveTimerActive");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
		bool                           Active;
	} params;

	params.GameObjective = GameObjective;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.UpdateObjectiveTimerSeconds
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBombDropMarker_C::UpdateObjectiveTimerSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.UpdateObjectiveTimerSeconds");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BombDropMarker.BombDropMarker_C.ExecuteUbergraph_BombDropMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombDropMarker_C::ExecuteUbergraph_BombDropMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.ExecuteUbergraph_BombDropMarker");

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
