// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_OutOfBoundsVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OutOfBoundsVolume.OutOfBoundsVolume_C.TurnOnDropBoundary
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AOutOfBoundsVolume_C::TurnOnDropBoundary()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutOfBoundsVolume.OutOfBoundsVolume_C.TurnOnDropBoundary");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutOfBoundsVolume.OutOfBoundsVolume_C.TurnOffCollision
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AOutOfBoundsVolume_C::TurnOffCollision(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutOfBoundsVolume.OutOfBoundsVolume_C.TurnOffCollision");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function OutOfBoundsVolume.OutOfBoundsVolume_C.TurnOffDropBoundary
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AOutOfBoundsVolume_C::TurnOffDropBoundary()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutOfBoundsVolume.OutOfBoundsVolume_C.TurnOffDropBoundary");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutOfBoundsVolume.OutOfBoundsVolume_C.ExecuteUbergraph_OutOfBoundsVolume
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AOutOfBoundsVolume_C::ExecuteUbergraph_OutOfBoundsVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutOfBoundsVolume.OutOfBoundsVolume_C.ExecuteUbergraph_OutOfBoundsVolume");

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
