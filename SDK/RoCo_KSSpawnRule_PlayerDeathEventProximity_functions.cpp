// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KSSpawnRule_PlayerDeathEventProximity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C.BindToEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSpawnRule_PlayerDeathEventProximity_C::BindToEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C.BindToEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C.On Player Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UKSSpawnRule_PlayerDeathEventProximity_C::On_Player_Death(const struct FCombatEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C.On Player Death");

	struct
	{
		struct FCombatEventInfo        EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C.ExecuteUbergraph_KSSpawnRule_PlayerDeathEventProximity
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKSSpawnRule_PlayerDeathEventProximity_C::ExecuteUbergraph_KSSpawnRule_PlayerDeathEventProximity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C.ExecuteUbergraph_KSSpawnRule_PlayerDeathEventProximity");

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
