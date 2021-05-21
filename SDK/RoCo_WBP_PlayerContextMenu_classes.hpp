#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerContextMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C
// 0x00F8 (0x0628 - 0x0530)
class UWBP_PlayerContextMenu_C : public UKSContextMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ShowAnim;                                                 // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOverlay*                                    AliasContainer;                                           // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_160;                                                // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                MenuContainer;                                            // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      OptionsBgA;                                               // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      OptionsBgB;                                               // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                OptionsContainerA;                                        // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                OptionsContainerB;                                        // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    OuterMenuContainer;                                       // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_player_card_module_C*                   PlayerCard;                                               // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                ScreenCanvas;                                             // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID;                                   // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_2;                                 // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_3;                                 // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_4;                                 // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_5;                                 // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_6;                                 // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*               WBP_VoiceActivityContainer;                               // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnReadyForNavigation;                                     // 0x05C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMenuHidden;                                             // 0x05D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMenuStart;                                              // 0x05E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FKey>                                KeysToAllow;                                              // 0x05F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TScriptInterface<class UIKSContextMenuTarget_C>    Last_Interacted_Target;                                   // 0x0608(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FScriptMulticastDelegate                    OnReportPlayer_1;                                         // 0x0618(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C");
		return ptr;
	}


	void GetOptionWidgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets);
	void OnUpdateContextButtons();
	void HandleOptionSelected(EPlayerContextOptions ContextOption);
	void IsShowingPlayer(class UKSPlayerInfo* playerinfo, bool* Showing);
	void IsContextMenuOpen(bool* IsOpen);
	void ShowForPlayerCard(class UWBP_player_card_module_C* PlayerCard);
	void MoveToWidgetSide(class UWidget* Widget, EViewSide side, const struct FMargin& Padding);
	void UpdatePlayerAliases(TArray<struct FPlayerAlias> Aliases);
	void MoveToWidget(class UWidget* Widget);
	void IsCurrentAccountId(const struct FString& AccountId, bool* IsAccountId);
	void RefreshOptionsPadding();
	void HideContextMenu();
	void Move_To_Player_Card_And_Show(class UWBP_player_card_module_C* Selected_Player_Card);
	void Is_Any_Option_Visible(bool* Return_Value);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void GetAllActiveButtons(TArray<class UWidget*>* Buttons);
	void GetFirstActiveButton(class UWidget** FocusWidget);
	void ShowForPlayer(class UKSPlayerInfo* Friend_Info, const TScriptInterface<class UIKSContextMenuTarget_C>& TargetWidget);
	void PreConstruct(bool IsDesignTime);
	void Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer);
	void OnInitialized();
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(EKSVoiceActivityAudioState AudioState);
	void DelayMoveMenu(class UKSWidget* Widget, const struct FMargin& Padding, EViewSide side);
	void On_Player_Card_Update(class UWBP_player_card_module_C* Player_Card);
	void ExecuteUbergraph_WBP_PlayerContextMenu(int EntryPoint);
	void OnReportPlayer_0__DelegateSignature(class UKSPlayerInfo* playerinfo);
	void OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void OnMenuHidden__DelegateSignature();
	void OnReadyForNavigation__DelegateSignature(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
