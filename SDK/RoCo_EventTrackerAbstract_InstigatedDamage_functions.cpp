// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTrackerAbstract_InstigatedDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.ProcessValidCombatEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        ValidEventInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            TriggerCount                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTrackerAbstract_InstigatedDamage_C::ProcessValidCombatEvent(struct FCombatEventInfo* ValidEventInfo, int* TriggerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.ProcessValidCombatEvent");

	struct
	{
		struct FCombatEventInfo        ValidEventInfo;
		int                            TriggerCount;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ValidEventInfo != nullptr)
		*ValidEventInfo = params.ValidEventInfo;
	if (TriggerCount != nullptr)
		*TriggerCount = params.TriggerCount;
}


// Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.IsValidCombatEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTrackerAbstract_InstigatedDamage_C::IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.IsValidCombatEvent");

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


// Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.EventHandleCombatEvent
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        DamageInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTrackerAbstract_InstigatedDamage_C::EventHandleCombatEvent(const struct FCombatEventInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.EventHandleCombatEvent");

	struct
	{
		struct FCombatEventInfo        DamageInfo;
	} params;

	params.DamageInfo = DamageInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTrackerAbstract_InstigatedDamage_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTrackerAbstract_InstigatedDamage_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.ExecuteUbergraph_EventTrackerAbstract_InstigatedDamage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTrackerAbstract_InstigatedDamage_C::ExecuteUbergraph_EventTrackerAbstract_InstigatedDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTrackerAbstract_InstigatedDamage.EventTrackerAbstract_InstigatedDamage_C.ExecuteUbergraph_EventTrackerAbstract_InstigatedDamage");

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
