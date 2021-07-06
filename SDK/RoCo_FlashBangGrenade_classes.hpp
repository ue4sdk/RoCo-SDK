#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashBangGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlashBangGrenade.FlashBangGrenade_C
// 0x0030 (0x0A20 - 0x09F0)
class AFlashBangGrenade_C : public ANonExplosiveGrenade_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAUD_ExplosionWithEcho_Grenade_C*            AUD_ExplosionWithEcho_Grenade;                            // 0x09F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Trail;                                                // 0x0A00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0A08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxFlashBangEffectDistance;                               // 0x0A10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HalfFlashBangEffectDistance;                              // 0x0A14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 FlashIntensityCurve;                                      // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FlashBangGrenade.FlashBangGrenade_C");
		return ptr;
	}


	EFlashBangIntensity DetermineFlashIntensity(class AKSCharacter* FlashedCharacter);
	class UCurveFloat* GetFlashCurve(EFlashBangIntensity Intensity);
	class USceneComponent* GetComponentToRotate();
	void FuseTimeExpired();
	void PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo);
	void ExecuteUbergraph_FlashBangGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
