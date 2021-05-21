#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewWeaponInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NewWeaponInventory.NewWeaponInventory_C
// 0x0061 (0x0609 - 0x05A8)
class UNewWeaponInventory_C : public UKSViewedPawnInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_ActiveWeaponComponent_C*                ActiveWeaponComponent;                                    // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_OutOfAmmoAlert_C*                       AmmoWarning;                                              // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                MainWeaponInventoryPanel;                                 // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UReticuleMoving_C*                           ReticuleMoving;                                           // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ItemPickup_C*                           WBP_ItemPickup;                                           // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWeaponComponentAmmoWarning_C*               WeaponComponentAmmoWarning;                               // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    WeaponInventory;                                          // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            WeaponInventoryInvalidationBox;                           // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_WeaponSlotsContainer_C*                 WeaponSlotsContainer;                                     // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FString                                     WeaponInventoryString;                                    // 0x05F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               CachedIsDead;                                             // 0x0608(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass NewWeaponInventory.NewWeaponInventory_C");
		return ptr;
	}


	void HandleDeathStateChanged();
	void UnbindKSCharacter();
	void BindKSCharacter();
	void AddGameRuleWidget(class UUserWidget* Game_Rule_Widget, const struct FString& Parent_Widget);
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void Construct();
	void EquipmentAdded(class UKSWeaponComponent* AddedEquipment);
	void EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment);
	void InitializeWidget(class APUMG_HUD* HUD);
	void PostSetPawn();
	void PreClearPawn();
	void Handle_Swap_Gamepad_Pressed();
	void Handle_Swap_Gamepad_Released();
	void SetKillCamWeapon(class APawn* ViewPawn);
	void ExecuteUbergraph_NewWeaponInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
