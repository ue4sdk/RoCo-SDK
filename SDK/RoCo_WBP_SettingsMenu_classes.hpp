#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// 0x00F8 (0x0600 - 0x0508)
class UWBP_SettingsMenu_C : public UKSSettingsMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            BackHovered;                                              // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            RevertHovered;                                            // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ApplyHovered;                                             // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                           LeftTabCallout;                                           // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              NavTabBox;                                                // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    PreviewContainer;                                         // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                           RightTabCallout;                                          // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  SettingsDescription;                                      // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             SettingsPageWidgetSwitcher;                               // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  SettingsTitle;                                            // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_panel_bevel_C*                          WBP_panel_bevel;                                          // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_subscreen_nav_tab_C*>            WBP_subscreen_nav_tabs;                                   // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        TopWidgets;                                               // 0x0578(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        BottomWidgets;                                            // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	EPUMG_LoginState                                   Login_State;                                              // 0x0598(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	struct FName                                       TAB_LEFT_NAME;                                            // 0x059C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       TAB_RIGHT_NAME;                                           // 0x05A4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       APPLY_NAME;                                               // 0x05AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       RESTORE_NAME;                                             // 0x05B4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	TArray<class UKSSettingsPage*>                     WBP_SubScreens;                                           // 0x05C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FName                                       ESC_NAME;                                                 // 0x05D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               BackSettingsMenuSFX;                                      // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               RevertSettingsMenuSFX;                                    // 0x05E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ApplySettingsMenuSFX;                                     // 0x05E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TArray<class UKSWidget*>                           PreviewWidgets;                                           // 0x05F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C"));
		return ptr;
	}


	void ResetPreviewWidgets();
	void HandlePreviewHovered(class UKSWidget* PreviewWidget);
	void AddPreviewToSettingMenu(class UKSWidget* PreviewWidget);
	void SetupPreviewWidgets();
	void On_Tab_Clicked(class UKSNavTabWidget* Tab_Selected);
	void ResetPageState();
	void GetContainerWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsContainer** KSSettingsContainerWidget);
	void On_Widget_Mouse_Entered(class UPUMG_Widget* PUMG_Widget, bool bEntered);
	void Setup_Hover_Handling();
	void GetSettingsContainersForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsContainer*>* SettingsContainers, TArray<class UPUMG_Widget*>* SettingsContainersAsPUMG);
	void GetSettingsWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsWidget** KSSettingsWidget);
	void Get_Current_Page(class UKSSettingsPage** KSSettingsPage);
	void On_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> Input_State);
	void Setup_Input_State_Handling();
	void Setup_Login_Handling();
	void Handle_Login_State(EPUMG_LoginState Login_State);
	void Tab_Right();
	void Tab_Left();
	void Go_To_Active_Tab(bool bInstantSwitch);
	void Recover_From_Navigate_Failure(class UPUMG_Widget* PUMG_Widget, int Index_Offset);
	void Widget_Navigate_Down_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget);
	void Widget_Navigate_Up_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget);
	void On_Widget_Gamepad_Hovered(class UPUMG_Widget* PUMG_Widget, bool bHovered);
	void Scroll_Widget_Into_View(class UPUMG_Widget* PUMG_Widget);
	void Scroll_To_Start();
	void Scroll_To_End();
	void GoBack();
	void Revert_Settings();
	void ConfirmExit(bool ShouldSaveSettings);
	void Restore_Settings();
	void ExitSettingsPage();
	void HasAnyUnsavedSetting(bool* AnyUnsaved);
	void Save_Settings();
	bool NavigateBackPressed();
	bool NavigateBack();
	void GetSettingsWidgetsForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsWidget*>* SettingsWidgets, TArray<class UPUMG_Widget*>* SettingsWidgetsAsPUMG);
	void SetupNavigationForPage(class UKSSettingsPage* Page, int Index);
	void On_Tab_Selected(class UKSNavTabWidget* Tab_Selected, bool bInstantSwitch);
	void Add_Tab_For_Settings_Page(class UKSSettingsPage* Settings_Page_Widget);
	void Add_Settings_Page_Widget(class UKSSettingsPage* Settings_Page);
	void SettingsMenuApplyClickSFX();
	void SettingsMenuBackClickSFX();
	void SettingsMenuRevertButtonClickSFX();
	void AddSettingsPageWidget(class UKSSettingsPage* SettingsPage);
	void OnShown();
	void OnHide();
	void OnMenuConfigSet();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void RebuildNavigation();
	void OnBackButton();
	void OnApplyButton();
	void OnRevertButton();
	void OnConfirmExit(bool ShouldSaveSettings);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_SettingsMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
