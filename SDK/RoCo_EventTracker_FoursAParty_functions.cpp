// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_FoursAParty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_FoursAParty.EventTracker_FoursAParty_C.IsValidCombatEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_FoursAParty_C::IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_FoursAParty.EventTracker_FoursAParty_C.IsValidCombatEvent");

	struct
	{
		struct FCombatEventInfo        EventInfo;
		bool                           IsValid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (EventInfo != nullptr)
		*EventInfo = params.EventInfo;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function EventTracker_FoursAParty.EventTracker_FoursAParty_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_FoursAParty_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_FoursAParty.EventTracker_FoursAParty_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_FoursAParty.EventTracker_FoursAParty_C.ExecuteUbergraph_EventTracker_FoursAParty
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_FoursAParty_C::ExecuteUbergraph_EventTracker_FoursAParty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_FoursAParty.EventTracker_FoursAParty_C.ExecuteUbergraph_EventTracker_FoursAParty");

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
