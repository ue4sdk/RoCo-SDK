#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SeekerBow_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeekerBow_Projectile.SeekerBow_Projectile_C
// 0x0030 (0x09A8 - 0x0978)
class ASeekerBow_Projectile_C : public AMelee_Projectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                MaxBounces;                                               // 0x0980(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CachedLocation;                                           // 0x0984(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RevealRange;                                              // 0x0990(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RevealDuration;                                           // 0x0994(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AKSCharacter*>                        RevealedCharacters;                                       // 0x0998(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SeekerBow_Projectile.SeekerBow_Projectile_C");
		return ptr;
	}


	class UAkAudioEvent* GetSoundForRevealIndex(int Index);
	void TryPlayNearMissSound(class AActor* OverlapActor);
	bool IsActorWithinLineOfSight(class AActor* Actor);
	bool IsActorWithinRevealRange(class AActor* Actor);
	void TryToRevealEnemies();
	bool OnProjectileBounced(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InitializeRealActor();
	void OnTakeOverAsRealActor();
	void OnTimeCookedSet();
	void ExecuteUbergraph_SeekerBow_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
