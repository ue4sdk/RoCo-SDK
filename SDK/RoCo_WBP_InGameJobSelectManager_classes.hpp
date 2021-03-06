#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelectManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C
// 0x00F0 (0x0640 - 0x0550)
class UWBP_InGameJobSelectManager_C : public UKSPlayerJobSelectWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                ContentWrapper;                                           // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_Loadout_C*              JobLoadout;                                               // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             JobSelectVersionSwitcher;                                 // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AttackerDefenderScreen_C*               WBP_AttackerDefenderScreen;                               // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_InterstitialScreen_C*   WBP_InGameJobSelect_InterstitialScreen;                   // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FName                                       CurrentScreen;                                            // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FName, class UKSWidget*>               ScreenMappings;                                           // 0x0588(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TMap<struct FName, int>                            FocusGroupMapping;                                        // 0x05D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UJobSelectionEntryDetails*                   CurrentJobEntry;                                          // 0x0628(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass*                                      Job_Select_Widget_Class;                                  // 0x0630(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_Base_C*                 Dynamic_Job_Select_Widget;                                // 0x0638(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C");
		return ptr;
	}


	void IsBanning(bool CheckEnemy, bool* Return_Value);
	TArray<class UWidget*> GetActiveJobEntryButtons();
	class UWBP_InGameJobSelect_Base_C* GetActiveJobSelectWidget();
	void HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void RestoreJobSelectViewState();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetFocusGroup(const struct FName& FocusGroup);
	void InitializeLoadoutScreen();
	bool NavigateBack();
	void ViewScreen(const struct FName& GoToScreen);
	void HandleJobSelectionEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam);
	void InitializeJobSelectScreen();
	void HandleJobSelectionReady(bool EnemyTeam, TArray<class UJobSelectionEntryDetails*>* JobEntries);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void HandleJobSelection(class UJobSelectionEntryDetails* JobEntry);
	void HandleJobLockedIn(bool IsBan);
	void HandleJobLoadoutView();
	void OnJobEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam);
	void InitializeWidgetNavigation();
	void OnShown();
	void HandleNavigateBack();
	void OpenMainMenu();
	void OnHide();
	void OnBackPrompt();
	void PreRoundAnimComplete();
	void OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*> JobEntries, bool EnemyTeam);
	void OnResetSelection();
	void OnPlayerSelectionStateChanged(EPlayerSelectionState NewState);
	void Construct_Job_Select_Widget(bool Force_Reset);
	void ExecuteUbergraph_WBP_InGameJobSelectManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
