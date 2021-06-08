#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StickySensorGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StickySensorGrenade.StickySensorGrenade_C
// 0x0058 (0x0A20 - 0x09C8)
class AStickySensorGrenade_C : public AKSProjectile_ProximityGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UProjectileAkComponent_C*                    AkProjectileSound;                                        // 0x09D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_APS_Light;                                             // 0x09D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDefaultDestroyableHazardComponent_C*        DestroyableHazardComponent;                               // 0x09E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x09E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Blink;                                                    // 0x09F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            HitBox;                                                   // 0x09F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bLanded;                                                  // 0x0A00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A01(0x0003) MISSED OFFSET
	struct FRotator                                    NormalRotation;                                           // 0x0A04(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class UKSModInst_DetectEnemy*                      StickySensorDetectModInst;                                // 0x0A10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              InstigatorPlayerState;                                    // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass StickySensorGrenade.StickySensorGrenade_C");
		return ptr;
	}


	bool ShouldDisablePingOutline();
	bool ShouldDisablePingTargeting();
	bool ShouldNotAffectTargetingReticle();
	bool ShouldSetFriendlyOutlineOnRegister();
	struct FVector GetProximityTraceRelativeLocation();
	bool IsRealAndAuthority();
	class USceneComponent* GetComponentToRotate();
	void GetDetectorComponent();
	void PlayImpactSFX();
	void PlayDestroyedSFX();
	void PlayRevealAlertSFX();
	void StopRevealAlertSFX();
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void Overlap_End_Simple(class AActor* Actor);
	void Overlap_Start_Simple(class AActor* Actor);
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color);
	void RegisterDeployable();
	void UnregisterDeployable(class AActor* DestroyedActor);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnRootComponentDetached(class USceneComponent* DetachedComponent);
	void ProximityActorUpdated(class AActor* Actor, class UPrimitiveComponent* Component, const struct FKSActorProximityInfo& ProximityInfo);
	void ExecuteUbergraph_StickySensorGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
