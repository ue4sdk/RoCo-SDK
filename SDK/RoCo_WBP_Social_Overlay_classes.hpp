#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Overlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C
// 0x0108 (0x0688 - 0x0580)
class UWBP_Social_Overlay_C : public UKSSocialOverlay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            OpenPanel;                                                // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      background;                                               // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     Blocker;                                                  // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             ContentSwitcher;                                          // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     ContextBlocker;                                           // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*                    ContextMenu;                                              // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      dropshadowgradient;                                       // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Friends_Tab_C*                   FriendsPanel;                                             // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*                    NavButton0;                                               // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*                    NavButton1;                                               // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*                    NavButton2;                                               // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                     PromptTabLeft;                                            // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    PromptTabLeftContainer;                                   // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                     PromptTabRight;                                           // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    PromptTabRightContainer;                                  // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Search_Tab_C*                    SearchPanel;                                              // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Header_Cosmetic_C*               WBP_Social_Header_Cosmetic;                               // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TMap<class UWBP_subscreen_nav_tab_C*, class UKSWidget*> NavButtons;                                               // 0x0610(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UWBP_subscreen_nav_tab_C*                    ActiveTabButton;                                          // 0x0660(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ContextMenuFocusGroup;                                    // 0x0668(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                StatusContextMenuFocusGroup;                              // 0x066C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsOpen;                                                   // 0x0670(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0671(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               ShowSocialOverlaySFX;                                     // 0x0678(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               GamePadTabSocialOverlaySFX;                               // 0x0680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C");
		return ptr;
	}


	void OnFriendsScrolled();
	void Toggle_Context_Menu_for_Player_Card(class UKSWidget* KSWidget);
	void HandleStatusMenuHidden();
	void HandleStatusMenuShown(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget);
	void HandleStatusNavigationReady(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons);
	void SetupHeader();
	void SetTabIndex(int Index);
	void OnTabChange(class UWBP_subscreen_nav_tab_C* ActiveTabButton);
	void SetActiveTabByWidget(class UWidget* Widget);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void MoveTabBy(int Value);
	void SetupNavTabs(class APUMG_HUD* HUD);
	bool NavigateBack();
	void ClosePanel();
	void OnShown();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void OnPlayerCardClick(class UKSWidget* PlayerCard);
	void OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void InitializeWidgetNavigation();
	void OnHide();
	void OnTabLeft();
	void OnTabRight();
	void OnToggleSocial();
	void OnViewStateChange(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer);
	void OnToggleStatusMenu();
	void HandlePlayerInvitesChanged(class UKSDataSocialCategory* Category, TArray<class UKSDataSocialPlayer*> Players);
	void BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature();
	void HandleNavTabSelected(class UKSNavTabWidget* NavTab);
	void OnHeaderClicked(class UKSWidget* Header);
	void ExecuteUbergraph_WBP_Social_Overlay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
