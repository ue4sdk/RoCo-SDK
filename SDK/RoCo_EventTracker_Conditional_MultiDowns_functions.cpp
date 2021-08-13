// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Conditional_MultiDowns_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_Conditional_MultiDowns_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_Conditional_MultiDowns_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.MultiDownAchieved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DownCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCombatEventInfoContainer CombatEventContainer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEventTracker_Conditional_MultiDowns_C::MultiDownAchieved(int DownCount, const struct FCombatEventInfoContainer& CombatEventContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.MultiDownAchieved");

	struct
	{
		int                            DownCount;
		struct FCombatEventInfoContainer CombatEventContainer;
	} params;

	params.DownCount = DownCount;
	params.CombatEventContainer = CombatEventContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.ExecuteUbergraph_EventTracker_Conditional_MultiDowns
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Conditional_MultiDowns_C::ExecuteUbergraph_EventTracker_Conditional_MultiDowns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Conditional_MultiDowns.EventTracker_Conditional_MultiDowns_C.ExecuteUbergraph_EventTracker_Conditional_MultiDowns");

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
