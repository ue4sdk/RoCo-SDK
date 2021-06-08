#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Weapon_Shotgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Shotgun.Weapon_Shotgun_C
// 0x0059 (0x08C1 - 0x0868)
class AWeapon_Shotgun_C : public AKSWeapon_Shotgun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAimData                                    Spread_Applied_Aim;                                       // 0x0870(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ETraceTypeQuery>                       WeaponTr;                                                 // 0x08C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Weapon_Shotgun.Weapon_Shotgun_C");
		return ptr;
	}


	void CalculateHits();
	void ApplyHits(TArray<struct FHitResult>* Hits);
	void FireWeapon();
	void ProcessHits(const struct FAimData& ReceivedAim, TArray<struct FHitResult> Hits);
	void ExecuteUbergraph_Weapon_Shotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
