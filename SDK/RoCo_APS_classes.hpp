#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_APS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APS.APS_C
// 0x0028 (0x03E8 - 0x03C0)
class AAPS_C : public AKSBuild_APS
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    FX_APS_Light;                                             // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                Ak;                                                       // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        HitBox;                                                   // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasBeenDeactivated;                                      // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                LoopAudioId;                                              // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass APS.APS_C");
		return ptr;
	}


	float GetRealActorTakeoverDelay();
	void UserConstructionScript();
	void APSDestroyedSFX(const struct FVector& Actor_Location);
	void APSProjectileBlockSFX(const struct FVector& Intercepted_Projectile_Location);
	void APSDeactivateSFX();
	void APSPlacedSFX();
	void APSActivatedLPSFX();
	void Destroyed();
	void OnProjectileIntercepted(const struct FVector& InterceptedProjectileLocation);
	void APS_Placed();
	void Activated();
	void Deactivated();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnActivated();
	void OnDeactivated();
	void OnKilled();
	void ExecuteUbergraph_APS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
