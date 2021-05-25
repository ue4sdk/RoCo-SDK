#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TabScreenWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TabScreenWidget.WBP_TabScreenWidget_C
// 0x0101 (0x05E1 - 0x04E0)
class UWBP_TabScreenWidget_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      background;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ContentWrapper;                                           // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*                    ContextMenu;                                              // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     ContextMenuBlocker;                                       // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UFullMap_C*                                  FullMap;                                                  // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   FullMapWrapper;                                           // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_1;                                          // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      LeftBumperCallout;                                        // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              NavButtonsWrapper;                                        // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UReportMenu_C*                               ReportMenu;                                               // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      RightBumperCallout;                                       // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScoreboard_C*                               Scoreboard;                                               // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              TopBar;                                                   // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FInGameTabStruct>                    TabsStruct;                                               // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	int                                                CurrentIndex;                                             // 0x0560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HoldTimer;                                                // 0x0564(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaTimer;                                               // 0x0568(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxHoldTime;                                              // 0x056C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FName, int>                            ScreensFocusGroup;                                        // 0x0570(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       CurrentScreen;                                            // 0x05C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UScoreboardPlayerEntry_C*>            ScoreboardEntries;                                        // 0x05C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FName                                       ScreenRoute;                                              // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsReportPlayer;                                           // 0x05E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_TabScreenWidget.WBP_TabScreenWidget_C");
		return ptr;
	}


	void HandleMuteOption(class AKSPlayerState* PlayerState);
	void IsOppositeTeam(class AKSPlayerState* PlayerState, bool* IsOppositeTeam);
	void ClearVoteInput();
	void ChangeFocusable(bool Is_Focusable);
	void UpdateAfterTabChange();
	void RegisterAllForFocus();
	void SetupContextPrompts(class AHUD* HUD);
	void SetupReportButtonNav();
	void HandlePlayerReported(int64_t PlayerId, bool Success);
	void InitializeReportPlayer();
	void ResetScoreboardNav();
	void MoveFocusTo(const struct FName& ToGoScreen);
	void HandleOnActionBack();
	void HandleOnPlayerReported(class UKSPlayerInfo* playerinfo);
	void InitializePlayerAction();
	void InitializeScoreboard();
	void SetupPlayerActionNavigation(class UWidget* DefaultWidget);
	void ToggleHideCursor(bool ShouldHide);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool NavigateBack();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetupScoreboardNav();
	void HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputMode);
	void HasTabs(bool* HasTabs);
	void HandleNavButtonClicked(class UWidget* TargetWidget);
	void Cycle_Tabs(bool Reverse);
	void IncrementTabWrapped(int In, bool Reverse, int* Out);
	void Refresh_Tabs();
	void SetGamepadCallouts();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void OnShown();
	void OnHide();
	void InitializeWidgetButtonListeners();
	void NavLeft();
	void NavRight();
	void OpenTimerGate();
	void CloseTimerGate();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AttemptCloseTab();
	void FocusScoreboardPlayerEntries();
	void ResetScoreboardFocus();
	void ShowPlayerOptions(class UKSPersistentPlayerData* NewPlayerState, class UWidget* Widget);
	void Handle_KillCamEnabled(bool bEnabled);
	void Construct();
	void Handle_Back_Button_Clicked();
	void UnfocusScoreboardPlayers();
	void AttemptCloseTabFromKeyUp(bool bKeyboardInput);
	void BndEvt__ContextMenuBlocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ReturnToScoreboardPlayerEntries();
	void Handle_Context_Options_Updated();
	void ExecuteUbergraph_WBP_TabScreenWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
