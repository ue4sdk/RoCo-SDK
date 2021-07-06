// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_PlayerXP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessEventBonuses
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_PlayerXP_C::ProcessEventBonuses(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessEventBonuses");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.IsWinningTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsWinningTeam                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_PlayerXP_C::IsWinningTeam(bool* IsWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.IsWinningTeam");

	struct
	{
		bool                           IsWinningTeam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsWinningTeam != nullptr)
		*IsWinningTeam = params.IsWinningTeam;
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessWinBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_PlayerXP_C::ProcessWinBonus(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessWinBonus");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessQueueBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_PlayerXP_C::ProcessQueueBonus(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessQueueBonus");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessBoosterBonuses
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_PlayerXP_C::ProcessBoosterBonuses(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ProcessBoosterBonuses");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ComputeBaseProgess
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OutProgress                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_PlayerXP_C::ComputeBaseProgess(float* OutProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ComputeBaseProgess");

	struct
	{
		float                          OutProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProgress != nullptr)
		*OutProgress = params.OutProgress;
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_PlayerXP_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_PlayerXP_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.MatchHAsEnded_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_PlayerXP_C::MatchHAsEnded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.MatchHAsEnded_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ExecuteUbergraph_EventTracker_PlayerXP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_PlayerXP_C::ExecuteUbergraph_EventTracker_PlayerXP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_PlayerXP.EventTracker_PlayerXP_C.ExecuteUbergraph_EventTracker_PlayerXP");

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
