#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeMeleeModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C
// 0x0008 (0x04F0 - 0x04E8)
class UExplosiveStakeMeleeModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplosiveStakeMeleeModInst.ExplosiveStakeMeleeModInst_C");
		return ptr;
	}


	void OnNewGivenItem();
	void GrenadeReclaimed(class AKSProjectile* Reclaimed);
	void ProjectileSpawned(class AKSProjectile* SpawnedProjectile);
	void ExecuteUbergraph_ExplosiveStakeMeleeModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
