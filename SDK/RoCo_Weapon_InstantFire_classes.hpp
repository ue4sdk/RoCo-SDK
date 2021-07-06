#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Weapon_InstantFire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_InstantFire.Weapon_InstantFire_C
// 0x000C (0x0874 - 0x0868)
class AWeapon_InstantFire_C : public AKSWeapon_Aimed
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Hit_Scan_Distance;                                        // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Weapon_InstantFire.Weapon_InstantFire_C");
		return ptr;
	}


	void ApplyHit(const struct FVector& Direction, TArray<struct FHitResult>* Hits);
	void CalculateHits();
	void FireWeapon();
	void ProcessHits(const struct FAimData& ReceivedAim, TArray<struct FHitResult> Hits);
	void ExecuteUbergraph_Weapon_InstantFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
