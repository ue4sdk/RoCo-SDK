#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReplenishModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReplenishModInst.ReplenishModInst_C
// 0x0008 (0x01B0 - 0x01A8)
class UReplenishModInst_C : public UKSModInst_OnDownOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ReplenishModInst.ReplenishModInst_C");
		return ptr;
	}


	void Get_Replenish_Reload_Info(bool* Can_Reload, int* Ammo_Count, EAmmoType* Ammo_Type);
	void GetWeaponToReplenish(class AKSWeapon** Weapon_To_Replenish);
	void TryToReplenish();
	void ReloadAlert();
	void OnDownOther(class AKSCharacter* Other);
	void OnEliminateOther(class AKSCharacter* Other);
	void OnAssistEliminateOther(class AKSCharacter* Other);
	void ExecuteUbergraph_ReplenishModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
