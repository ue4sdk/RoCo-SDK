// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewClusterGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewClusterGrenade.NewClusterGrenade_C.OnProjectileStopped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ANewClusterGrenade_C::OnProjectileStopped(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.OnProjectileStopped");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NewClusterGrenade.NewClusterGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANewClusterGrenade_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params;

	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(fn, &params);
}


// Function NewClusterGrenade.NewClusterGrenade_C.BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANewClusterGrenade_C::BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	struct
	{
		class UActorComponent*         Component;
		bool                           bReset;
	} params;

	params.Component = Component;
	params.bReset = bReset;

	UObject::ProcessEvent(fn, &params);
}


// Function NewClusterGrenade.NewClusterGrenade_C.InitializeRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANewClusterGrenade_C::InitializeRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.InitializeRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewClusterGrenade.NewClusterGrenade_C.OnTakeOverAsRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANewClusterGrenade_C::OnTakeOverAsRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.OnTakeOverAsRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewClusterGrenade.NewClusterGrenade_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ANewClusterGrenade_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.TriggerExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function NewClusterGrenade.NewClusterGrenade_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ANewClusterGrenade_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function NewClusterGrenade.NewClusterGrenade_C.ExecuteUbergraph_NewClusterGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANewClusterGrenade_C::ExecuteUbergraph_NewClusterGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewClusterGrenade.NewClusterGrenade_C.ExecuteUbergraph_NewClusterGrenade");

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
