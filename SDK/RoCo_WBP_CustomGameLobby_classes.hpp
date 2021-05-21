#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomGameLobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CustomGameLobby.WBP_CustomGameLobby_C
// 0x0290 (0x0770 - 0x04E0)
class UWBP_CustomGameLobby_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_CustomGameActionLog_C*                  ActionLog;                                                // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     Blocker;                                                  // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*                    ContextMenu;                                              // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Subtitle_C*                             GameName;                                                 // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image;                                                    // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                  // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_112;                                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_379;                                                // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_498;                                                // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  JoiningButton;                                            // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ThrobberHorizontal_C*                   Loading;                                                  // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    LoadingState;                                             // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                LoadingWrapper;                                           // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              LobbyState;                                               // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             LobbySwitcher;                                            // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  SpectateButton;                                           // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                Spectator;                                                // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                SpectatorContainer;                                       // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  StartButton;                                              // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             StartGameSwitcher;                                        // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                TeamA;                                                    // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                TeamB;                                                    // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header1_C*                              Title;                                                    // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*               VoiceActivity;                                            // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                              // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  WarningMessage;                                           // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              WarningWrapper;                                           // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_GameModeInfoPanel_Lobby_C*              WBP_GameModeInfoPanel_Lobby;                              // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TMap<int, struct FFBP_CustomMatchTeam>             TeamDataMap;                                              // 0x05C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FTimerHandle                                DataChangeTimer;                                          // 0x0618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       FmtAdded;                                                 // 0x0620(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       FmtRemoved;                                               // 0x0638(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       FmtPromoted;                                              // 0x0650(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       FmtDemoted;                                               // 0x0668(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       FmtInvited;                                               // 0x0680(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       FmtMovedTeam;                                             // 0x0698(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TMap<class UKSPlayerInfo*, struct FFBP_CustomPendingLogEntry> PendingLogs;                                              // 0x06B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FmtLobbyCreated;                                          // 0x0700(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<class UPUMG_PlayerInfo*>                    TEMP_Invites;                                             // 0x0718(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FText                                       FmtGameName;                                              // 0x0728(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       RouteName;                                                // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Prompt_Kick;                                              // 0x0748(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Prompt_Swap;                                              // 0x0750(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowCustomGameLobbySFX;                                   // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	int                                                FocusGroup_TeamsAndButtons;                               // 0x0760(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                FocusGroup_ContextMenu;                                   // 0x0764(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MembersPopulated;                                         // 0x0768(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	int                                                MaxSpectators;                                            // 0x076C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_CustomGameLobby.WBP_CustomGameLobby_C");
		return ptr;
	}


	void ToggleContextBar(bool bShouldShow);
	void UpdateSpectateState();
	void SetupSpectateButtonNavigation(int FocusGroup);
	void SetupStartButtonNavigation(int FocusGroup);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void TogglePlayerCardFor(class UKSPlayerInfo* playerinfo, class UWBP_CustomLobbyPlayer_C* PlayerWidget);
	void HandleVoiceMemberUpdate(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void HandleVoiceMemberRemoved(const struct FString& AccountId);
	void HandleVoiceMemberAdded(const struct FString& AccountId);
	void GetMemberWidgetForVoice(const struct FString& VoiceId, class UWBP_CustomLobbyPlayer_C** Widget);
	void SetupExistingPlayers();
	void SetupQueueFactoryEvents();
	void OnQueueStateUpdated(EPUMG_MatchStatus MatchStatus);
	void GetTeamButtons(TArray<class UKSWidget*>* TeamButtons);
	void MassInvite_Close();
	EKSInviteSelectResult MassInvite_Select(class UKSPlayerInfo* playerinfo);
	bool MassInvite_IsSelected(class UKSPlayerInfo* playerinfo);
	bool MassInvite_ShouldShowPlayer(class UKSPlayerInfo* playerinfo);
	void OnReceiveHostName();
	void UpdateQueueState();
	void FinalizeLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo);
	void LogPermissionChange(class UPUMG_PlayerInfo* playerinfo, EPUMG_CustomMatchPermission NewPermissions, EPUMG_CustomMatchPermission OldPermissions);
	void HandleReceivePlayerName();
	struct FText GetTeamName(const struct FPUMG_CustomMatchMember& PUMG_CustomMatchMember);
	void AddLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo);
	void RemoveMember(struct FPUMG_CustomMatchMember* FormerMember, bool* Removed);
	void AddMember(const struct FPUMG_CustomMatchMember& MatchMember, bool* Added);
	bool NavigateBack();
	void TEST_InviteNextAvailablePlayer();
	void SetupTeamNavigation(int FocusGroup);
	void UpdateWidgetsWithData(struct FFBP_CustomMatchTeam* Team);
	void OnMemberUpdate(const struct FPUMG_CustomMatchMember& MatchMember, const struct FPUMG_CustomMatchMember& PreviousData);
	void OnMemberRemoved(const struct FPUMG_CustomMatchMember& FormerMember);
	void OnMemberAdded(const struct FPUMG_CustomMatchMember& MatchMember);
	void OnQueueUpdate();
	void GetQueueDataFactory(class UKSQueueDataFactory** DataFactory);
	void PopulateTeamRenderers(class UPanelWidget* TeamPanel, int TeamId, TEnumAsByte<ELaterality> ControlsSide, int NumPlayers);
	void SetupRenderers();
	void SetupDisplayElements();
	void UpdateQueueInfo(const struct FClientQueueInfo& QueueInfo);
	void Construct();
	void OnInitialized();
	void HandleDataChange();
	void InvalidateData();
	void InitializeWidgetNavigation();
	void HandlePlayerClicked(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget);
	void HandleEmptyClicked(class UKSWidget* Widget);
	void HandlePlayerKick(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget);
	void HandlePlayerSwap(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget);
	void OnClickBack();
	void OnShown();
	void BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void OnPlayerHovered(class UWBP_CustomLobbyPlayer_C* Widget);
	void OnPlayerUnhovered(class UWBP_CustomLobbyPlayer_C* Widget);
	void OnQueueLeft();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature(const struct FString& AccountId);
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature(const struct FString& AccountId);
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWidget* Widget);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature();
	void ExecuteUbergraph_WBP_CustomGameLobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
