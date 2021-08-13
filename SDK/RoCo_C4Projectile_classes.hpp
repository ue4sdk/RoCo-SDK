#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_C4Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass C4Projectile.C4Projectile_C
// 0x0028 (0x0A60 - 0x0A38)
class AC4Projectile_C : public ARemoteExplosive_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A38(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDefaultDestroyableHazardComponent_C*        DestroyableHazardComponent;                               // 0x0A40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               ShotCollider;                                             // 0x0A48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAUD_ExplosionWithEcho_Grenade_C*            AUD_ExplosionWithEcho_Grenade;                            // 0x0A50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      ChargeMesh;                                               // 0x0A58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass C4Projectile.C4Projectile_C");
		return ptr;
	}


	bool ShouldDisablePingOutline();
	bool ShouldDisablePingTargeting();
	bool ShouldNotAffectTargetingReticle();
	bool ShouldSetFriendlyOutlineOnRegister();
	bool ShouldBounceOff(const struct FHitResult& HitResult);
	class USceneComponent* GetComponentToRotate();
	bool OnProjectileStopped(const struct FHitResult& HitResult);
	void StopC4ProjectileBeepAlertSFX();
	void PlayC4ProjectileBeepAlertSFX();
	void PlayC4ProjectileExplosionSFX();
	void PlayC4ProjectileAttachSurfaceSFX();
	void ReceiveBeginPlay();
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color);
	void RegisterDeployable();
	void UnregisterDeployable(class AActor* DestroyedActor);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_C4Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
