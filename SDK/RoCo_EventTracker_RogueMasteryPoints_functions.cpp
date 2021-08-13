// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_RogueMasteryPoints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessEventBonuses
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_RogueMasteryPoints_C::ProcessEventBonuses(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessEventBonuses");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessWinBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_RogueMasteryPoints_C::ProcessWinBonus(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessWinBonus");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessQueueBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_RogueMasteryPoints_C::ProcessQueueBonus(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessQueueBonus");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessBoosterBonuses
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_RogueMasteryPoints_C::ProcessBoosterBonuses(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ProcessBoosterBonuses");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ComputeBaseProgress
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_RogueMasteryPoints_C::ComputeBaseProgress(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ComputeBaseProgress");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.AccumulateTimeSpent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_RogueMasteryPoints_C::AccumulateTimeSpent()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.AccumulateTimeSpent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.IsWinningTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsWinningTeam                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_RogueMasteryPoints_C::IsWinningTeam(bool* IsWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.IsWinningTeam");

	struct
	{
		bool                           IsWinningTeam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsWinningTeam != nullptr)
		*IsWinningTeam = params.IsWinningTeam;
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.AwardRogueMasteryPoints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_RogueMasteryPoints_C::AwardRogueMasteryPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.AwardRogueMasteryPoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.UpdateJobSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_RogueMasteryPoints_C::UpdateJobSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.UpdateJobSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandleMatchEnded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_RogueMasteryPoints_C::HandleMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandleMatchEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandlePhaseChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UEventTracker_RogueMasteryPoints_C::HandlePhaseChanged(const struct FMatchPhase& PreviousPhase, const struct FMatchPhase& NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandlePhaseChanged");

	struct
	{
		struct FMatchPhase             PreviousPhase;
		struct FMatchPhase             NewPhase;
	} params;

	params.PreviousPhase = PreviousPhase;
	params.NewPhase = NewPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_RogueMasteryPoints_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_RogueMasteryPoints_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ExecuteUbergraph_EventTracker_RogueMasteryPoints
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_RogueMasteryPoints_C::ExecuteUbergraph_EventTracker_RogueMasteryPoints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_RogueMasteryPoints.EventTracker_RogueMasteryPoints_C.ExecuteUbergraph_EventTracker_RogueMasteryPoints");

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
