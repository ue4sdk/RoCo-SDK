// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_BattlePass3_UniqueGunDowns_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.IsWinningTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsWinningTeam                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_BattlePass3_UniqueGunDowns_C::IsWinningTeam(bool* IsWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.IsWinningTeam");

	struct
	{
		bool                           IsWinningTeam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsWinningTeam != nullptr)
		*IsWinningTeam = params.IsWinningTeam;
}


// Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_BattlePass3_UniqueGunDowns_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.OwnedPawnInstigateDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        DamageInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_BattlePass3_UniqueGunDowns_C::OwnedPawnInstigateDamage(const struct FCombatEventInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.OwnedPawnInstigateDamage");

	struct
	{
		struct FCombatEventInfo        DamageInfo;
	} params;

	params.DamageInfo = DamageInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.ExecuteUbergraph_EventTracker_BattlePass3_UniqueGunDowns
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_BattlePass3_UniqueGunDowns_C::ExecuteUbergraph_EventTracker_BattlePass3_UniqueGunDowns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_BattlePass3_UniqueGunDowns.EventTracker_BattlePass3_UniqueGunDowns_C.ExecuteUbergraph_EventTracker_BattlePass3_UniqueGunDowns");

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
