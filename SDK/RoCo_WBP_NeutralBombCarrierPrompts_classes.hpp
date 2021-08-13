#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NeutralBombCarrierPrompts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C
// 0x0070 (0x0638 - 0x05C8)
class UWBP_NeutralBombCarrierPrompts_C : public UKSViewedPawnInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_InputCallout_C*                         CalloutEquip;                                             // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         CalloutPlant;                                             // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             CalloutSwitcher;                                          // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         CalloutThrow;                                             // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         CalloutThrow_2;                                           // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ComboPlusText;                                            // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              EquipBombGroup;                                           // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  PromptText;                                               // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               Is_Bomb_Equipped;                                         // 0x0610(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Bomb_In_Inventory;                                     // 0x0611(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Can_Arm_Bomb;                                             // 0x0612(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Is_Interacting;                                           // 0x0613(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	class UKSWeaponComponent*                          Current_Tracked_Bomb_Equipment;                           // 0x0618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InMovement;                                               // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	TArray<class UKSWeaponAsset*>                      BombAssets;                                               // 0x0628(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C");
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD* HUD);
	void EquipmentAdded(class UKSWeaponComponent* AddedEquipment);
	void EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment);
	void Update_Prompt();
	void PostSetPawn();
	void PreClearPawn();
	void Handle_Interact_Start(class AActor* Target, float Duration);
	void Handle_Interact_End();
	void Handle_Bomb_Hidden_Interactable_Update(class AActor* Interactable);
	void Handle_Tracked_Bomb_Active_Changed(class AKSCharacter* EquipmentOwner, class UKSWeaponComponent* Equipment);
	void OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult);
	void Clear_Current_Tracked_Bomb(bool bSkipPromptUpdate);
	void HandleOnDodgeRollChanged(bool IsDodgeRolling);
	void HandleOnFreeFallStarted();
	void HandleOnFreeFallEnded();
	void ExecuteUbergraph_WBP_NeutralBombCarrierPrompts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
