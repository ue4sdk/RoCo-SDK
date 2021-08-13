// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeMeleeModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.OnNewGivenItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExplosiveStakeMeleeModInst_C::OnNewGivenItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.OnNewGivenItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.GrenadeReclaimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSProjectile*           Reclaimed                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplosiveStakeMeleeModInst_C::GrenadeReclaimed(class AKSProjectile* Reclaimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.GrenadeReclaimed");

	struct
	{
		class AKSProjectile*           Reclaimed;
	} params;

	params.Reclaimed = Reclaimed;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.ProjectileSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSProjectile*           SpawnedProjectile              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplosiveStakeMeleeModInst_C::ProjectileSpawned(class AKSProjectile* SpawnedProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.ProjectileSpawned");

	struct
	{
		class AKSProjectile*           SpawnedProjectile;
	} params;

	params.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.ExecuteUbergraph_ExplosiveStakeMeleeModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplosiveStakeMeleeModInst_C::ExecuteUbergraph_ExplosiveStakeMeleeModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C.ExecuteUbergraph_ExplosiveStakeMeleeModInst");

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
