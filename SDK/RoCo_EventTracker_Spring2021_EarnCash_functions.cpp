// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_EarnCash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_Spring2021_EarnCash_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_Spring2021_EarnCash_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.MatchHasEnded_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_Spring2021_EarnCash_C::MatchHasEnded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.MatchHasEnded_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.On Money Earned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Money                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEventTracker_Spring2021_EarnCash_C::On_Money_Earned(int Money, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.On Money Earned");

	struct
	{
		int                            Money;
		struct FText                   Reason;
	} params;

	params.Money = Money;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.ExecuteUbergraph_EventTracker_Spring2021_EarnCash
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Spring2021_EarnCash_C::ExecuteUbergraph_EventTracker_Spring2021_EarnCash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_EarnCash.EventTracker_Spring2021_EarnCash_C.ExecuteUbergraph_EventTracker_Spring2021_EarnCash");

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
