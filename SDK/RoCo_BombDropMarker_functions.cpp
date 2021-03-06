// Rogue Company (0.6X) SDK

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
// EKSObjectiveState              ObjectiveState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBombDropMarker_C::IsStateEqualTo(EKSObjectiveState ObjectiveState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BombDropMarker.BombDropMarker_C.IsStateEqualTo");

	struct
	{
		EKSObjectiveState              ObjectiveState;
		bool                           Result;
	} params;

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
