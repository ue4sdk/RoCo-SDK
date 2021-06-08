#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosiveStakeProjectile.ExplosiveStakeProjectile_C
// 0x0060 (0x0A28 - 0x09C8)
class AExplosiveStakeProjectile_C : public AKSProjectile_ProximityGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemChannelComponent*             Trail;                                                    // 0x09D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x09D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             MeshRotator;                                              // 0x09E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           HitBox;                                                   // 0x09E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UProjectileAkComponent_C*                    AkProjectileSound;                                        // 0x09F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAUD_ExplosionWithEcho_Grenade_C*            AUD_ExplosionWithEcho_Grenade;                            // 0x09F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             GrenadeExplosionEffect;                                   // 0x0A00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass*                                      GrenadeExplosion3PCameraShake;                            // 0x0A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FGrenadeDecalParameters>             GrenadeExplosionDecal;                                    // 0x0A10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ArmingTimer;                                              // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplosiveStakeProjectile.ExplosiveStakeProjectile_C");
		return ptr;
	}


	bool ShouldDisablePingOutline();
	bool ShouldDisablePingTargeting();
	bool ShouldNotAffectTargetingReticle();
	bool ShouldSetFriendlyOutlineOnRegister();
	bool ShouldExplodeOnStopped(const struct FHitResult& HitResult);
	struct FVector GetProximityTraceRelativeLocation();
	bool CanSeeProximityWarning(class AController* QueriedPlayer);
	void GetOutlineableMeshes(TArray<class UPrimitiveComponent*>* OutMeshes);
	class USceneComponent* GetComponentToRotate();
	void PlantStake(const struct FHitResult& HitResult);
	bool OnProjectileStopped(const struct FHitResult& HitResult);
	void ExplosiveStakeExplosionSFX(const struct FVector& Actor_Location);
	void ExplosiveStakeImpactSFX(const struct FVector& Location);
	void ExplosiveStakeEffectsSFX();
	void ExplosiveStakeLPSFXStop();
	void ReceiveTick(float DeltaSeconds);
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void PlayPlantEffects(const struct FHitResult& HitResult);
	void InitializeRealActor();
	void OnTakeOverAsRealActor();
	void TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void RegisterDeployable();
	void UnregisterDeployable();
	void ReceiveBeginPlay();
	void Armed();
	void OnRootComponentDetached(class USceneComponent* DetachedComponent);
	void SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color);
	void ExecuteUbergraph_ExplosiveStakeProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
