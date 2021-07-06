#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BounceGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BounceGrenade.BounceGrenade_C
// 0x0067 (0x0A60 - 0x09F9)
class ABounceGrenade_C : public AExplosiveGrenade_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0A08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             MeshRotator;                                              // 0x0A10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDefaultDestroyableHazardComponent_C*        DestroyableHazardComponent;                               // 0x0A18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Trail;                                                // 0x0A20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAUD_ExplosionWithEcho_Grenade_C*            AUD_ExplosionWithEcho_Grenade;                            // 0x0A28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0A30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0A30(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UParticleSystem*                             GrenadeExplosionEffect;                                   // 0x0A40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass*                                      GrenadeExplosion3PCameraShake;                            // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FGrenadeDecalParameters>             GrenadeExplosionDecal;                                    // 0x0A50(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BounceGrenade.BounceGrenade_C");
		return ptr;
	}


	class USceneComponent* GetComponentToRotate();
	class UKSWeaponAsset* GetWeaponAssetOrSecondary();
	void PlayGrenadeExplosionSFX();
	void ReceiveTick(float DeltaSeconds);
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void ExecuteUbergraph_BounceGrenade(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
