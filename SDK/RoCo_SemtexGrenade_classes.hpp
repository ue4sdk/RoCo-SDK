#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SemtexGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SemtexGrenade.SemtexGrenade_C
// 0x0037 (0x0A40 - 0x0A09)
class ASemtexGrenade_C : public AExplosiveGrenade_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDefaultDestroyableHazardComponent_C*        DestroyableHazardComponent;                               // 0x0A18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Blinking;                                                 // 0x0A20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAUD_ExplosionWithEcho_Grenade_C*            AUD_ExplosionWithEcho_Grenade;                            // 0x0A28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        GrenadeMesh;                                              // 0x0A30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PostStickFuseTime;                                        // 0x0A38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckPawnDamage;                                          // 0x0A3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SemtexGrenade.SemtexGrenade_C");
		return ptr;
	}


	TArray<class AActor*> DetermineIgnoredActors(const struct FHitResult& HitResult);
	class USceneComponent* GetComponentToRotate();
	bool OnProjectileStopped(const struct FHitResult& HitResult);
	void PlayImpactPlayerConfirmSFX(class AActor* Hit_Actor);
	void PlayImpactSurfaceSFX();
	void PlayImpactPawnSFX();
	void ReceiveBeginPlay();
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void PlaySemtexGrenadeExplosionSFX();
	void ExecuteUbergraph_SemtexGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
