#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InWorld_ReticleComponents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C
// 0x0028 (0x0260 - 0x0238)
class UWBP_InWorld_ReticleComponents_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AbilityDurationBar_C*                   WBP_AbilityDurationBar;                                   // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AmmoWrapper_C*                          WBP_AmmoWrapper;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSModInst_Activated*                        ModInstance;                                              // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C");
		return ptr;
	}


	void SetWeaponComponent(class UKSWeaponComponent* WeaponComponent);
	void SetPlayerState(class APlayerState* PlayerState);
	void SetAmmoColor(bool IsActive);
	void OnPossession(class APlayerState* PlayerState);
	void OnWeaponSet(class UKSWeaponComponent* WeaponComponent);
	void OnModActivated(bool bActive);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_InWorld_ReticleComponents(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
