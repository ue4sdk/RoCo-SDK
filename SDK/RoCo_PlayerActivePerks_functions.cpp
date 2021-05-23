// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayerActivePerks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerActivePerks.PlayerActivePerks_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.HandleModsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            KSCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerActivePerks_C::HandleModsUpdated(class AKSCharacter* KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.HandleModsUpdated"));

	struct
	{
		class AKSCharacter*            KSCharacter;
	} params;

	params.KSCharacter = KSCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.HandleDownedElim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerActivePerks_C::HandleDownedElim(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.HandleDownedElim"));

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Player State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          In_Player_State                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerActivePerks_C::Bind_Callbacks_to_Player_State(class AKSPlayerState* In_Player_State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Player State"));

	struct
	{
		class AKSPlayerState*          In_Player_State;
	} params;

	params.In_Player_State = In_Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Player State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::Unbind_Callbacks_to_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Player State"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Pawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            In_Pawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerActivePerks_C::Bind_Callbacks_to_Pawn(class AKSCharacter* In_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.Bind Callbacks to Pawn"));

	struct
	{
		class AKSCharacter*            In_Pawn;
	} params;

	params.In_Pawn = In_Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Pawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::Unbind_Callbacks_to_Pawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.Unbind Callbacks to Pawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.PreClearPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.PreClearPlayerState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.PostSetPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.PostSetPlayerState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.SetPlayerStateUIRelevanceChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::SetPlayerStateUIRelevanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.SetPlayerStateUIRelevanceChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.Try To Show On UI Relevant
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerActivePerks_C::Try_To_Show_On_UI_Relevant()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.Try To Show On UI Relevant"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerActivePerks.PlayerActivePerks_C.ExecuteUbergraph_PlayerActivePerks
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerActivePerks_C::ExecuteUbergraph_PlayerActivePerks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerActivePerks.PlayerActivePerks_C.ExecuteUbergraph_PlayerActivePerks"));

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
