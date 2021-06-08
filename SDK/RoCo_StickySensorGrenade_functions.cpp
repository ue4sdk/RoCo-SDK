// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StickySensorGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StickySensorGrenade.StickySensorGrenade_C.ShouldDisablePingOutline
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AStickySensorGrenade_C::ShouldDisablePingOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ShouldDisablePingOutline");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.ShouldDisablePingTargeting
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AStickySensorGrenade_C::ShouldDisablePingTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ShouldDisablePingTargeting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.ShouldNotAffectTargetingReticle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AStickySensorGrenade_C::ShouldNotAffectTargetingReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ShouldNotAffectTargetingReticle");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.ShouldSetFriendlyOutlineOnRegister
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AStickySensorGrenade_C::ShouldSetFriendlyOutlineOnRegister()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ShouldSetFriendlyOutlineOnRegister");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.GetProximityTraceRelativeLocation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AStickySensorGrenade_C::GetProximityTraceRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.GetProximityTraceRelativeLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.IsRealAndAuthority
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AStickySensorGrenade_C::IsRealAndAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.IsRealAndAuthority");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AStickySensorGrenade_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StickySensorGrenade.StickySensorGrenade_C.GetDetectorComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::GetDetectorComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.GetDetectorComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.PlayImpactSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::PlayImpactSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.PlayImpactSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.PlayDestroyedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::PlayDestroyedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.PlayDestroyedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.PlayRevealAlertSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::PlayRevealAlertSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.PlayRevealAlertSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.StopRevealAlertSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::StopRevealAlertSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.StopRevealAlertSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AStickySensorGrenade_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	struct
	{
		struct FHitResult              ImpactResult;
	} params;

	params.ImpactResult = ImpactResult;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.Overlap End Simple
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStickySensorGrenade_C::Overlap_End_Simple(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.Overlap End Simple");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.Overlap Start Simple
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStickySensorGrenade_C::Overlap_Start_Simple(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.Overlap Start Simple");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AStickySensorGrenade_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.SetOutlineColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKSOutlineParameters    OutlineParams                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStickySensorGrenade_C::SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.SetOutlineColor");

	struct
	{
		bool                           Enabled;
		struct FKSOutlineParameters    OutlineParams;
		int                            Color;
	} params;

	params.Enabled = Enabled;
	params.OutlineParams = OutlineParams;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.RegisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::RegisterDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.RegisterDeployable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.UnregisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStickySensorGrenade_C::UnregisterDeployable(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.UnregisterDeployable");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AStickySensorGrenade_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.OnRootComponentDetached
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         DetachedComponent              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStickySensorGrenade_C::OnRootComponentDetached(class USceneComponent* DetachedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.OnRootComponentDetached");

	struct
	{
		class USceneComponent*         DetachedComponent;
	} params;

	params.DetachedComponent = DetachedComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.ProximityActorUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKSActorProximityInfo   ProximityInfo                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void AStickySensorGrenade_C::ProximityActorUpdated(class AActor* Actor, class UPrimitiveComponent* Component, const struct FKSActorProximityInfo& ProximityInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ProximityActorUpdated");

	struct
	{
		class AActor*                  Actor;
		class UPrimitiveComponent*     Component;
		struct FKSActorProximityInfo   ProximityInfo;
	} params;

	params.Actor = Actor;
	params.Component = Component;
	params.ProximityInfo = ProximityInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function StickySensorGrenade.StickySensorGrenade_C.ExecuteUbergraph_StickySensorGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStickySensorGrenade_C::ExecuteUbergraph_StickySensorGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickySensorGrenade.StickySensorGrenade_C.ExecuteUbergraph_StickySensorGrenade");

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
