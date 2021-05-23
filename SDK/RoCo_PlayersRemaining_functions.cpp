// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayersRemaining_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayersRemaining.PlayersRemaining_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayersRemaining_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayersRemaining.PlayersRemaining_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayersRemaining_C::RefreshPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayersRemaining.PlayersRemaining_C.RefreshPlayerCount"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayersRemaining_C::HandlePlayerEliminated(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayersRemaining.PlayersRemaining_C.HandlePlayerEliminated"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayersRemaining_C::HandlePlayerSpawn(class AKSCharacterBase* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayersRemaining.PlayersRemaining_C.HandlePlayerSpawn"));

	struct
	{
		class AKSCharacterBase*        NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayersRemaining_C::HandlePhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayersRemaining.PlayersRemaining_C.HandlePhaseChange"));

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayersRemaining_C::ExecuteUbergraph_PlayersRemaining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayersRemaining.PlayersRemaining_C.ExecuteUbergraph_PlayersRemaining"));

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
