#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewClusterGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NewClusterGrenade.NewClusterGrenade_C
// 0x0050 (0x0A40 - 0x09F0)
class ANewClusterGrenade_C : public AKSProjectile_ClusterGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x09F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0A00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAUD_ExplosionWithEcho_Grenade_C*            AUD_ExplosionWithEcho_Grenade;                            // 0x0A08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UProjectileAkComponent_C*                    AkProjectileSound;                                        // 0x0A10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               BounceSoundEvent;                                         // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BounceRepeatDelay;                                        // 0x0A20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               BuildupSoundEvent;                                        // 0x0A28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasBounced;                                               // 0x0A30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               FirstBounceSoundEvent;                                    // 0x0A38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NewClusterGrenade.NewClusterGrenade_C");
		return ptr;
	}


	bool OnProjectileStopped(const struct FHitResult& HitResult);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void BndEvt__AkProjectileSound_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void InitializeRealActor();
	void OnTakeOverAsRealActor();
	void TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void ExecuteUbergraph_NewClusterGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
