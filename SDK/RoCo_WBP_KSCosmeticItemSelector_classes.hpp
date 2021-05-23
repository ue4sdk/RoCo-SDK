#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KSCosmeticItemSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C
// 0x0090 (0x0570 - 0x04E0)
class UWBP_KSCosmeticItemSelector_C : public UKSCosmeticItemSelectorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticItemDisplay;                                      // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPlatformInventoryItem*                      PlatformItem;                                             // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemUnhovered;                                          // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticDetails;                                          // 0x0530(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               IsClearSlot;                                              // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPurchaseItem;                                           // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAkAudioEvent*                               HoverCosmeticItemSelectorSFX;                             // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickCosmeticItemSelectorSFX;                             // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C"));
		return ptr;
	}


	bool NavigateConfirm();
	void OnClickSound();
	void OnHoverSound();
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnCosmeticHover(const struct FCosmeticSlotDetails& CosmeticDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget);
	void OnCosmeticUnhover();
	void OnCosmeticClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails);
	void GamepadHover();
	void GamepadUnhover();
	void SetSlotActive(bool Active);
	void SetItemOwned(class UPUMG_StoreItem* StoreItem);
	void ExecuteUbergraph_WBP_KSCosmeticItemSelector(int EntryPoint);
	void OnPurchaseItem__DelegateSignature(class UPUMG_StoreItem* StoreItem);
	void OnItemSelected__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticSlot);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
