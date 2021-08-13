#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelectManager_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C
// 0x00F0 (0x0618 - 0x0528)
class UWBP_InGameJobSelectManager_2_C : public UKSJobSelectorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                ContentWrapper;                                           // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_Loadout_C*              JobLoadout;                                               // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             JobSelectVersionSwitcher;                                 // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AttackerDefenderScreen_C*               WBP_AttackerDefenderScreen;                               // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_InterstitialScreen_C*   WBP_InGameJobSelect_InterstitialScreen;                   // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FName                                       CurrentScreen;                                            // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FName, class UKSWidget*>               ScreenMappings;                                           // 0x0560(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TMap<struct FName, int>                            FocusGroupMapping;                                        // 0x05B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UJobSelectionEntryDetails*                   CurrentJobEntry;                                          // 0x0600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass*                                      Job_Select_Widget_Class;                                  // 0x0608(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_InGameJobSelect_Base_C*                 Dynamic_Job_Select_Widget;                                // 0x0610(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager_3.WBP_InGameJobSelectManager_2_C");
		return ptr;
	}


	void Get_Current_Match_Phase_Name(struct FName* Phase_Name);
	void Are_All_Tasks_Complete(bool* Complete);
	void Force_Grid_Navigation_Rebuild();
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
	void InitializeJobSelectScreen();
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void HandleJobLoadoutView();
	void InitializeWidgetNavigation();
	void OnShown();
	void HandleNavigateBack();
	void OpenMainMenu();
	void OnHide();
	void OnBackPrompt();
	void PreRoundAnimComplete();
	void Construct_Job_Select_Widget(bool Force_Reset);
	void AllPersonalTasksCompleted();
	void EndJobSelection();
	void PostSetJobSelector();
	void ExecuteUbergraph_WBP_InGameJobSelectManager_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
