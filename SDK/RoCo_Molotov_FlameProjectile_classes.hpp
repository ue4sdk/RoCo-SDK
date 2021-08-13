#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Molotov_FlameProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Molotov_FlameProjectile.Molotov_FlameProjectile_C
// 0x0010 (0x02B0 - 0x02A0)
class AMolotov_FlameProjectile_C : public AKSSpreadProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    Fire;                                                     // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Molotov_FlameProjectile.Molotov_FlameProjectile_C");
		return ptr;
	}


	void InitializeRealActor();
	void OnTakeOverAsRealActor();
	void Flame_Stopped(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Molotov_FlameProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
