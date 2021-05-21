// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameState_KOTH_Modular_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.OnRep_CurrentPointTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGameState_KOTH_Modular_C::OnRep_CurrentPointTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.OnRep_CurrentPointTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGameState_KOTH_Modular_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGameState_KOTH_Modular_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ApplyTimerForActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimerHandle            CurrentPointTimer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGameState_KOTH_Modular_C::ApplyTimerForActive(const struct FTimerHandle& CurrentPointTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ApplyTimerForActive");

	struct
	{
		struct FTimerHandle            CurrentPointTimer;
	} params;

	params.CurrentPointTimer = CurrentPointTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ExecuteUbergraph_GameState_KOTH_Modular
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGameState_KOTH_Modular_C::ExecuteUbergraph_GameState_KOTH_Modular(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_KOTH_Modular.GameState_KOTH_Modular_C.ExecuteUbergraph_GameState_KOTH_Modular");

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
