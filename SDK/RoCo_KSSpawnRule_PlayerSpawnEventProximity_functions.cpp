// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KSSpawnRule_PlayerSpawnEventProximity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C.BindToEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSpawnRule_PlayerSpawnEventProximity_C::BindToEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C.BindToEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C.On Player Spawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKSSpawnRule_PlayerSpawnEventProximity_C::On_Player_Spawn(class AKSCharacterBase* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C.On Player Spawn");

	struct
	{
		class AKSCharacterBase*        NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C.ExecuteUbergraph_KSSpawnRule_PlayerSpawnEventProximity
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKSSpawnRule_PlayerSpawnEventProximity_C::ExecuteUbergraph_KSSpawnRule_PlayerSpawnEventProximity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C.ExecuteUbergraph_KSSpawnRule_PlayerSpawnEventProximity");

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
