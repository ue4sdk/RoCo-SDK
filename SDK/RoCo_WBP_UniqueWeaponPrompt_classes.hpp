#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_UniqueWeaponPrompt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C
// 0x0058 (0x0620 - 0x05C8)
class UWBP_UniqueWeaponPrompt_C : public UKSViewedPawnInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Fade;                                                     // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              CalloutDouble;                                            // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         CalloutDouble1;                                           // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         CalloutDouble2;                                           // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         CalloutSingle;                                            // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             PromptSwitcher;                                           // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  PromptText;                                               // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              WeaponPromptGroup;                                        // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UKSWeaponComponent*>                  ActiveUniqueWeapons;                                      // 0x0610(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C");
		return ptr;
	}


	void CleanUpWeaponPrompt(class UKSWeaponComponent* InactiveWeapon);
	void SetUpWeaponPrompt(class UKSWeaponComponent* ActiveWeapon);
	void Finished_004258744317629FEEB1E5873FEB9A5D();
	void InitializeWidget(class APUMG_HUD* HUD);
	void EquipmentAdded(class UKSWeaponComponent* AddedEquipment);
	void EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment);
	void AddActiveWeapon(class UKSWeaponComponent* ActiveWeapon);
	void WeaponWithPromptChangedState(class UKSWeaponComponent* WeaponComponent, EWeaponStateNew OldState, EWeaponStateNew NewState);
	void OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult);
	void RemoveInactiveWeapon(class UKSWeaponComponent* InactiveWeapon);
	void BulwarkSidearmFailedToFire(class AKSWeapon* Weapon, EKSAbilityUsageFailureType FailureType);
	void ExecuteUbergraph_WBP_UniqueWeaponPrompt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
