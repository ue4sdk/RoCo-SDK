#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HealOnDownModInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HealOnDownModInstance.HealOnDownModInstance_C
// 0x0014 (0x01BC - 0x01A8)
class UHealOnDownModInstance_C : public UKSModInst_OnDownOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTimerHandle                                HealTimer;                                                // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HealTickCount;                                            // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass HealOnDownModInstance.HealOnDownModInstance_C");
		return ptr;
	}


	void ShouldHealOwner(bool* ShouldHeal);
	void ReceiveBeginPlay();
	void OnDownOther(class AKSCharacter* Other);
	void HealTick();
	void StartHeal();
	void CheckOwnerHealth();
	void ClearHealTickTimer();
	void ModTriggered();
	void ExecuteUbergraph_HealOnDownModInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
