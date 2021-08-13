// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Molotov_FlameProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.InitializeRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMolotov_FlameProjectile_C::InitializeRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.InitializeRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.OnTakeOverAsRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMolotov_FlameProjectile_C::OnTakeOverAsRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.OnTakeOverAsRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.Flame_Stopped
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AMolotov_FlameProjectile_C::Flame_Stopped(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.Flame_Stopped");

	struct
	{
		struct FHitResult              ImpactResult;
	} params;

	params.ImpactResult = ImpactResult;

	UObject::ProcessEvent(fn, &params);
}


// Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMolotov_FlameProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.ExecuteUbergraph_Molotov_FlameProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMolotov_FlameProjectile_C::ExecuteUbergraph_Molotov_FlameProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Molotov_FlameProjectile.Molotov_FlameProjectile_C.ExecuteUbergraph_Molotov_FlameProjectile");

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
