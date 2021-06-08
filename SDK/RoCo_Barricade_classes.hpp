#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Barricade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Barricade.Barricade_C
// 0x0148 (0x04D0 - 0x0388)
class ABarricade_C : public AKSBuild
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               MantleBox;                                                // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        CanisterCube;                                             // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                Barricade_Damage_SFX;                                     // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Glass_FXLocation;                                         // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWarrant_Level_1_WeaponComponent_C*          Warrant_Level_1_WeaponComponent;                          // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               NavModifier2;                                             // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               NavModifier1;                                             // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               NavModifier;                                              // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDefaultDestroyableHazardComponent_C*        DestroyableHazardComponent;                               // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FName, class UParticleSystem*>         SparkBones;                                               // 0x03D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FName, class UParticleSystem*>         DamagedBones;                                             // 0x0430(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FName, class UParticleSystem*>         DestroyedBones;                                           // 0x0480(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Barricade.Barricade_C");
		return ptr;
	}


	float GetRealActorTakeoverDelay();
	float ComponentTakeDamage(class UPrimitiveComponent* PrimitiveComponent, float DamageAmount);
	void Barricade_Placed_SFX();
	void Lightly_Damaged_SFX();
	void Heavily_Damaged_SFX();
	void Destroyed_SFX();
	void Glass_Broken_SFX();
	void BarricadeImpactSFX();
	void BarricadeGlassImpactSFX();
	void DamagedLoopingSFXSTOP();
	void OnBuildComponentDestroyed(class UPrimitiveComponent* PrimitiveComponent);
	void OnHealthChanged();
	void ReceiveBeginPlay();
	void PlayDestructionEffects();
	void OnRadialDamageTaken(class UDamageType* DamageType);
	void OnPointDamageTaken(class UDamageType* DamageType, class UPrimitiveComponent* PrimitiveComponent, const struct FName& HitBone);
	void SpawnDamagedEffect();
	void SpawnDamageSparks();
	void OnKilled();
	void ExecuteUbergraph_Barricade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
