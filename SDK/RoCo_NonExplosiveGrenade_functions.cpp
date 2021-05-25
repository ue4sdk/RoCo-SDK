// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NonExplosiveGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NonExplosiveGrenade.NonExplosiveGrenade_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANonExplosiveGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonExplosiveGrenade.NonExplosiveGrenade_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NonExplosiveGrenade.NonExplosiveGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANonExplosiveGrenade_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonExplosiveGrenade.NonExplosiveGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params;

	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(fn, &params);
}


// Function NonExplosiveGrenade.NonExplosiveGrenade_C.BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANonExplosiveGrenade_C::BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonExplosiveGrenade.NonExplosiveGrenade_C.BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	struct
	{
		class UActorComponent*         Component;
		bool                           bReset;
	} params;

	params.Component = Component;
	params.bReset = bReset;

	UObject::ProcessEvent(fn, &params);
}


// Function NonExplosiveGrenade.NonExplosiveGrenade_C.InitializeRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANonExplosiveGrenade_C::InitializeRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonExplosiveGrenade.NonExplosiveGrenade_C.InitializeRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NonExplosiveGrenade.NonExplosiveGrenade_C.OnTakeOverAsRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANonExplosiveGrenade_C::OnTakeOverAsRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonExplosiveGrenade.NonExplosiveGrenade_C.OnTakeOverAsRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NonExplosiveGrenade.NonExplosiveGrenade_C.ExecuteUbergraph_NonExplosiveGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANonExplosiveGrenade_C::ExecuteUbergraph_NonExplosiveGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonExplosiveGrenade.NonExplosiveGrenade_C.ExecuteUbergraph_NonExplosiveGrenade");

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
