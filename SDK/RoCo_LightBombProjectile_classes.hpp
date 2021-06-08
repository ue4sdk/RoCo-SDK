#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LightBombProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightBombProjectile.LightBombProjectile_C
// 0x0048 (0x0A38 - 0x09F0)
class ALightBombProjectile_C : public ANonExplosiveGrenade_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    FX_Blinded;                                               // 0x09F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0A00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 FlashIntensityCurve;                                      // 0x0A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AKSCharacter*>                        ActorsToDamage;                                           // 0x0A10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UKSPlayerMod*>                        ModsToApply;                                              // 0x0A20(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              PlayerStateOwner;                                         // 0x0A30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LightBombProjectile.LightBombProjectile_C");
		return ptr;
	}


	EFlashBangIntensity DetermineFlashIntensity(class AKSCharacter* FlashedCharacter);
	class UCurveFloat* GetFlashCurve(EFlashBangIntensity Intensity);
	bool ShouldBounceOff(const struct FHitResult& HitResult);
	void DoDamageToActors();
	void LightBombDetonateSFX();
	void TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void SpawnNumberHitWidget(int NumberHit);
	void ExecuteUbergraph_LightBombProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
