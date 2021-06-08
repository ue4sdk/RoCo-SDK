// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TeammateHealth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeammateHealth.TeammateHealth_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeammateHealth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeammateHealth.TeammateHealth_C.HandleHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        KSCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeammateHealth_C::HandleHealthChanged(class AKSCharacterBase* KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleHealthChanged");

	struct
	{
		class AKSCharacterBase*        KSCharacter;
	} params;

	params.KSCharacter = KSCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function TeammateHealth.TeammateHealth_C.HandleOnDowned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Player_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeammateHealth_C::HandleOnDowned(class AKSPlayerState* Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleOnDowned");

	struct
	{
		class AKSPlayerState*          Player_State;
	} params;

	params.Player_State = Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function TeammateHealth.TeammateHealth_C.HandleOnElimated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeammateHealth_C::HandleOnElimated(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleOnElimated");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function TeammateHealth.TeammateHealth_C.HandleOnPlayerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Player_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeammateHealth_C::HandleOnPlayerSet(class AKSPlayerState* Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleOnPlayerSet");

	struct
	{
		class AKSPlayerState*          Player_State;
	} params;

	params.Player_State = Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function TeammateHealth.TeammateHealth_C.ResetPlayerHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeammateHealth_C::ResetPlayerHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.ResetPlayerHealth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeammateHealth.TeammateHealth_C.ExecuteUbergraph_TeammateHealth
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeammateHealth_C::ExecuteUbergraph_TeammateHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.ExecuteUbergraph_TeammateHealth");

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
