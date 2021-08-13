#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Molotov_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Molotov.Molotov_C
// 0x0099 (0x0DC9 - 0x0D30)
class AMolotov_C : public AKSProjectile_GrenadeSpread
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D30(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSAkComponent*                              KSAk;                                                     // 0x0D38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMultiCosmeticHeatComponent_C*               MultiCosmeticHeatComponent;                               // 0x0D40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDefaultDestroyableHazardComponent_C*        DestroyableHazardComponent;                               // 0x0D48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_Molotov_RagFire;                                       // 0x0D50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX_Molotov_Trail_01;                                      // 0x0D58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0D60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MolotovDecalExtended_Timeline_Min_Erode_78BBADD14A9DF9E2BDC022B8C6801DEC;// 0x0D68(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    MolotovDecalExtended_Timeline__Direction_78BBADD14A9DF9E2BDC022B8C6801DEC;// 0x0D6C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MolotovDecalExtended_Timeline;                            // 0x0D70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MolotovDecal_Timeline_Min_Erode_6B373EF746393DF4F679A4B525ADE332;// 0x0D78(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    MolotovDecal_Timeline__Direction_6B373EF746393DF4F679A4B525ADE332;// 0x0D7C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MolotovDecal_Timeline;                                    // 0x0D80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ScorchDecal_Timeline_HDR_Intensity_6D3B299B46B87031CFD22696037628C0;// 0x0D88(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    ScorchDecal_Timeline__Direction_6D3B299B46B87031CFD22696037628C0;// 0x0D8C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D8D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScorchDecal_Timeline;                                     // 0x0D90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Stacking_Slow;                                            // 0x0D98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D99(0x0007) MISSED OFFSET
	class UKSPlayerMod*                                Molotov_Slow_Mod;                                         // 0x0DA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    MolotovLight;                                             // 0x0DA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPoolableDecalComponent*                     MAT_MolotovDecal_04;                                      // 0x0DB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                SFXTimerStop;                                             // 0x0DB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DecalMID;                                                 // 0x0DC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ExtendedLifetime;                                         // 0x0DC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Molotov.Molotov_C");
		return ptr;
	}


	bool AffectsActor(class AActor* InActor);
	class USceneComponent* GetComponentToRotate();
	void Unslow_Character(class AKSCharacter* Character);
	void Slow_Character(class AKSCharacter* Character);
	void MolotovDecal_Timeline__FinishedFunc();
	void MolotovDecal_Timeline__UpdateFunc();
	void ScorchDecal_Timeline__FinishedFunc();
	void ScorchDecal_Timeline__UpdateFunc();
	void MolotovDecalExtended_Timeline__FinishedFunc();
	void MolotovDecalExtended_Timeline__UpdateFunc();
	void Audio_StartFire();
	void Audio_Glass_Impact();
	void Audio_StopFire();
	void Audio_ExhaustSFX();
	void OnSpreadTransformAdded(const struct FTransform& AddedTransform);
	void OnActorAffected(class AActor* AffectedActor);
	void OnActorUnaffected(class AActor* UnaffectedActor);
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void InitializeRealActor();
	void OnTakeOverAsRealActor();
	void OnAllSpreadTransformsRemoved();
	void OnSpreadTransformRemoved(const struct FTransform& RemovedTransform);
	void TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void ConfigureSpreadTransformParticleSystem(class UParticleSystemComponent* ParticleSystem);
	void SFXTimerStopEvent();
	void ExecuteUbergraph_Molotov(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
