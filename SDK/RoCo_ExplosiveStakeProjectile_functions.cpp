// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldDisablePingOutline
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::ShouldDisablePingOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldDisablePingOutline");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldDisablePingTargeting
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::ShouldDisablePingTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldDisablePingTargeting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldNotAffectTargetingReticle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::ShouldNotAffectTargetingReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldNotAffectTargetingReticle");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldSetFriendlyOutlineOnRegister
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::ShouldSetFriendlyOutlineOnRegister()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldSetFriendlyOutlineOnRegister");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldExplodeOnStopped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::ShouldExplodeOnStopped(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ShouldExplodeOnStopped");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.GetProximityTraceRelativeLocation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AExplosiveStakeProjectile_C::GetProximityTraceRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.GetProximityTraceRelativeLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.CanSeeProximityWarning
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             QueriedPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::CanSeeProximityWarning(class AController* QueriedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.CanSeeProximityWarning");

	struct
	{
		class AController*             QueriedPlayer;
		bool                           ReturnValue;
	} params;

	params.QueriedPlayer = QueriedPlayer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.GetOutlineableMeshes
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OutMeshes                      (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::GetOutlineableMeshes(TArray<class UPrimitiveComponent*>* OutMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.GetOutlineableMeshes");

	struct
	{
		TArray<class UPrimitiveComponent*> OutMeshes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutMeshes != nullptr)
		*OutMeshes = params.OutMeshes;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AExplosiveStakeProjectile_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.PlantStake
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AExplosiveStakeProjectile_C::PlantStake(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.PlantStake");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.OnProjectileStopped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AExplosiveStakeProjectile_C::OnProjectileStopped(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.OnProjectileStopped");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeExplosionSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Actor_Location                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::ExplosiveStakeExplosionSFX(const struct FVector& Actor_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeExplosionSFX");

	struct
	{
		struct FVector                 Actor_Location;
	} params;

	params.Actor_Location = Actor_Location;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeImpactSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::ExplosiveStakeImpactSFX(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeImpactSFX");

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeEffectsSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::ExplosiveStakeEffectsSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeEffectsSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeLPSFXStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::ExplosiveStakeLPSFXStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExplosiveStakeLPSFXStop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AExplosiveStakeProjectile_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.PlayPlantEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AExplosiveStakeProjectile_C::PlayPlantEffects(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.PlayPlantEffects");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.InitializeRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::InitializeRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.InitializeRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.OnTakeOverAsRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::OnTakeOverAsRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.OnTakeOverAsRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AExplosiveStakeProjectile_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.TriggerExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.RegisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::RegisterDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.RegisterDeployable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.UnregisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::UnregisterDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.UnregisterDeployable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.Armed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExplosiveStakeProjectile_C::Armed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.Armed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.OnRootComponentDetached
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         DetachedComponent              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::OnRootComponentDetached(class USceneComponent* DetachedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.OnRootComponentDetached");

	struct
	{
		class USceneComponent*         DetachedComponent;
	} params;

	params.DetachedComponent = DetachedComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.SetOutlineColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKSOutlineParameters    OutlineParams                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.SetOutlineColor");

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


// Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExecuteUbergraph_ExplosiveStakeProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosiveStakeProjectile_C::ExecuteUbergraph_ExplosiveStakeProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosiveStakeProjectile.ExplosiveStakeProjectile_C.ExecuteUbergraph_ExplosiveStakeProjectile");

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
