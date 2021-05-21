#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueListing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RogueListing.WBP_RogueListing_C
// 0x00E8 (0x05C8 - 0x04E0)
class UWBP_RogueListing_C : public UKSJobSelectionWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGridPanel*                                  JobSelectionGrid;                                         // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    JobSelectionGridOverlay;                                  // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ThrobberHorizontal_C*                   Loading;                                                  // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                LoadingWrapper;                                           // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URetainerBox*                                Mask;                                                     // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    OuterSizeBox;                                             // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    RogueGridSizeBox;                                         // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              RoleFilters;                                              // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                              // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RogueListingOfferPanel_C*               WBP_RogueListingOfferPanel;                               // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_JobGeneralButton_C*>             JobButtons;                                               // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnJobSelected;                                            // 0x0548(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnJobListReady;                                           // 0x0558(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class AKSLobbyCharacter*                           MercSelectionCharacter;                                   // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ValidJobs;                                                // 0x0570(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	TArray<class UKSJobRole*>                          JobRoles;                                                 // 0x0578(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UKSItem*                                     CurrentlyHoveredJob;                                      // 0x0588(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSMercManager*                              MercManager;                                              // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bCurrentlyHoveredRogueOwned;                              // 0x0598(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                GRID_WIDTH;                                               // 0x059C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSJobItem*                                  SelectedJob;                                              // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PreserveSelectedJobOnHide;                                // 0x05A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	float                                              DLC_OFFSET;                                               // 0x05AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   GRID_SIZE;                                                // 0x05B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   MASK_PADDING;                                             // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPUMG_StoreItem*                             AdStoreOffer;                                             // 0x05C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RogueListing.WBP_RogueListing_C");
		return ptr;
	}


	void OnGotoOffer(class UPUMG_StoreItem* StoreItem);
	void SetDLCDisplay(bool ShowDLC);
	void IsJobOwned(class UKSJobItem* JobItem, bool* owned);
	void SetRogueOwned(class UPUMG_StoreItem* StoreItem);
	void ResetFavoriteIcons();
	void OnJobHovered(class UKSJobItem* JobItem);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	bool NavigateBack();
	void PopulateRoleFilters();
	void GetJobButtons(TArray<class UWBP_JobGeneralButton_C*>* JobButtons);
	void SetRowAndColumn(class UGridSlot* GridSlot, int Index, int MaxRowCount);
	void ResetButtonState();
	void ResetJobList();
	void PopulateJobList(TArray<TSoftObjectPtr<class UKSJobItem>>* LoadoutOptions);
	void InitializeTickAnimations();
	void OnShowScreenAnimUpdate(float ElapsedTime, float ElapsedAlpha);
	void OnShowScreenAnimFinished();
	void StartShowScreenAnim();
	void InitializeWidget(class APUMG_HUD* HUD);
	void HandleOnJobSelected(class UKSJobItem* SelectedJob);
	void OnShown();
	void ExternalOnShown();
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void HandleOnPurchasedItem(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price);
	void OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered);
	void OnHide();
	void BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature(class UPUMG_StoreItem* StoreItem);
	void FocusGroupNavigateRightFailure(int FocusGroup);
	void FocusGroupNavigateLeftFailure(int FocusGroup);
	void ExecuteUbergraph_WBP_RogueListing(int EntryPoint);
	void OnJobListReady__DelegateSignature(TArray<class UWBP_JobGeneralButton_C*>* JobButtons);
	void OnJobSelected__DelegateSignature(class UKSJobItem* JobItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
