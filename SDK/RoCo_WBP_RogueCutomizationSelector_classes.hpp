#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueCutomizationSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C
// 0x0278 (0x0788 - 0x0510)
class UWBP_RogueCutomizationSelector_C : public UKSCustomizationSelection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                     // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonMedium_C*                 AcceptEquipAll;                                           // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ActionBtnText;                                            // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonMedium_C*                 CancelEquipAll;                                           // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        CommunicationCosmeticItemContainer;                       // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                CommunicationScrollbox;                                   // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              CompleteCosmeticSlotNavBar;                               // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             CosmeticSwitcher;                                         // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        EmoteCosmeticItemContainer;                               // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                EmoteScrollbox;                                           // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  EquipAllDesc;                                             // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                EquipAllPanel;                                            // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                        EquipCosmeticBtn;                                         // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      EquippedGamepadIcon;                                      // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemDisplay_C*                EquipToAllIcon;                                           // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      FakeFill;                                                 // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_54;                                                 // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ItemInfoContainer_C*                    ItemInfoContainer;                                        // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        OutfitCosmeticItemContainer;                              // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                OutfitScrollbox;                                          // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        QuipCosmeticItemContainer;                                // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                QuipScrollbox;                                            // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSAsyncImage*                               RogueIcon;                                                // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        SprayCosmeticItemContainer;                               // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            SprayImage;                                               // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SprayImageContainer;                                      // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                SprayScrollbox;                                           // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TabLeftButtonImage;                                       // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TabRightButtonImage;                                      // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_CommunicationsCosmeticSlotNavTab;                     // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_EmotesCosmeticSlotNavTab;                             // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header1_C*                              WBP_Header1;                                              // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header1_C*                              WBP_Header1_318;                                          // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector;                               // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector_2;                             // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector_3;                             // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector_4;                             // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector_5;                             // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector_6;                             // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               WBP_KSCosmeticItemSelector_7;                             // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*                  WBP_ModalPopupContainer;                                  // 0x0658(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_OutfitsCosmeticSlotNavTab;                            // 0x0660(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_QuipsCosmeticSlotNavTab;                              // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_SpraysCosmeticSlotNavTab;                             // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_WingsuitsCosmeticSlotNavTab;                          // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_WrapsCosmeticSlotNavTab;                              // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        WingsuitCosmeticItemContainer;                            // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                WingsuitScrollbox;                                        // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSortableGridPanel*                        WrapCosmeticItemContainer;                                // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSScrollBox*                                WrapScrollbox;                                            // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_KSCosmeticItemSelector_C*>       CosmeticItems;                                            // 0x06A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnEquipCosmeticItem;                                      // 0x06B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FCosmeticSlotDetails                        CosmeticSlotDetail;                                       // 0x06C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSMercManager*                              MercManager;                                              // 0x06E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSLoadoutDataFactory*                       LouadoutDataFactory;                                      // 0x06E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSLobbyCharacter*                           MercSelectionCharacter;                                   // 0x06F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSItem*                                     SelectedCosmeticKSItem;                                   // 0x06F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSWeaponAsset*                              WingSuitAsset;                                            // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               EquippedSlot;                                             // 0x0708(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSItem*                                     HoveredItem;                                              // 0x0710(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowEquipAllRogueCustomSelectSFX;                         // 0x0718(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               WingsuitEquipSound;                                       // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               SprayEquipSound;                                          // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               WrapEmoteEquipSound;                                      // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Skin_Preview_Line;                                        // 0x0738(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UAkAudioEvent*                               SkinEquipSound;                                           // 0x0768(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPUMG_StoreItem*                             SelectedStoreItem;                                        // 0x0770(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPUMG_StoreItem*                             ReturnToItemSelection;                                    // 0x0778(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPUMG_StoreItem*                             HoveredStoreItem;                                         // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C");
		return ptr;
	}


	void GetSelectedStoreItem(class UPUMG_StoreItem** StoreItem);
	void GetPrimaryItem(class UKSItem** KSItem);
	bool CanChangeTab();
	void Create_Cosmetic_Item_Selector(class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem);
	void SoundPlayCosmeticEquip(EMercCosmeticSlot CosmeticType);
	void GetActiveTabFocusGroup(int* ActiveTabFocusGroup);
	void ReevaluateGamepadTabImageVisibility();
	void GetAdjustedCosmeticSlot(class UPlatformInventoryItem* OriginalItem, EMercCosmeticSlot OriginalCosmeticSlot, EMercCosmeticSlot* AdjustedCosmeticSlot);
	void AddActiveCosmeticSlot(EMercCosmeticSlot NewCosmeticSlot);
	void ChangeCosmeticSlotTab(class UKSNavTabWidget* Tab);
	void SetupCosmeticSlots();
	bool OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS);
	void IsEquipAllAllowed(class UKSItem* Item, bool* CanEquipAll);
	void DisplayEquipAllPrompt();
	void OnEquipAll();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetEmoteModel(class UKSItem* CosmeticItem);
	void SetEquippedItem(bool IsEquipped, class UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot, class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem);
	void SetOwnedItem(class UPUMG_StoreItem* StoreItem);
	void OnPurchaseItem(class UPUMG_StoreItem* StoreItem);
	void AddClearCosmeticSlot(class UKSSortableGridPanel* ItemContainer);
	void IsItemEquipped(class UKSItem* KSItem, bool* IsEquipped);
	void Set_Active_States(class UWBP_KSCosmeticItemSelector_C* ActiveWidget);
	void SetEquipBtn();
	void SetWingSuitModel(class UKSItem* CosmeticItem);
	void ResetSprayIcon();
	void ResetModels(bool Skip_Character);
	void SetEmoteImage(class UKSItem* CosmeticItem);
	void ResetCharacter();
	void SetWeapon(class UKSItem* CosmeticItem, class UKSJobItem* JobItem, EWeaponSlot WeaponSlot);
	void Set_Model_Viewer(class UPlatformInventoryItem* CosmeticItem, const struct FCosmeticSlotDetails& CosmeticDetail);
	void SetCharacterSkin(class UKSItem* CosmeticItem, class UKSJobItem* JobItem);
	bool NavigateBack();
	void SetContextBar();
	void UpdateNavigation();
	void RegisterNavigation();
	void ResetCosmeticSelection();
	void SetCosmeticSelection(class UWBP_KSCosmeticItemDisplay_C* CosmeticDisplayBtn);
	void ClearDataOnInitialize();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnHover(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem);
	void OnUnhover();
	void OnSelectCosmetic(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticDetails);
	void OnShown();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void EquipCosmetic();
	void OnHide();
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget);
	void On_Close_Button_Clicked();
	void OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered);
	void Return_To_Job_Preview_Model();
	void Hide_Preview_Character();
	void Show_Preview_Character();
	void ChangeToNewTab();
	void ExecuteUbergraph_WBP_RogueCutomizationSelector(int EntryPoint);
	void OnEquipCosmeticItem__DelegateSignature(EMercCosmeticSlot SlotType, int SlotIndex, class UKSItem* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
