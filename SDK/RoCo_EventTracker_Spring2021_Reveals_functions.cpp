// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_Reveals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.IsValidAndSeparateTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKSRevealInfo           RevealInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_Spring2021_Reveals_C::IsValidAndSeparateTeam(const struct FKSRevealInfo& RevealInfo, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.IsValidAndSeparateTeam");

	struct
	{
		struct FKSRevealInfo           RevealInfo;
		bool                           Valid;
	} params;

	params.RevealInfo = RevealInfo;

	UObject::ProcessEvent(fn, &params);

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_Spring2021_Reveals_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_Spring2021_Reveals_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.MatchHasEnded_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_Spring2021_Reveals_C::MatchHasEnded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.MatchHasEnded_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.OnServerRevealAdded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSRevealInfo           AddedRevealInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UEventTracker_Spring2021_Reveals_C::OnServerRevealAdded(const struct FKSRevealInfo& AddedRevealInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.OnServerRevealAdded");

	struct
	{
		struct FKSRevealInfo           AddedRevealInfo;
	} params;

	params.AddedRevealInfo = AddedRevealInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.ExecuteUbergraph_EventTracker_Spring2021_Reveals
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Spring2021_Reveals_C::ExecuteUbergraph_EventTracker_Spring2021_Reveals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C.ExecuteUbergraph_EventTracker_Spring2021_Reveals");

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
