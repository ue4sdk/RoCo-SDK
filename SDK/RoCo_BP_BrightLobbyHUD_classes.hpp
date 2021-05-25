#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_BrightLobbyHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
// 0x0040 (0x0708 - 0x06C8)
class ABP_BrightLobbyHUD_C : public ABP_BrightLobbyHUDMinimal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBrightLobbyWidget_C*                        LobbyWidget;                                              // 0x06D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      Loadout_Slot_Edit;                                        // 0x06D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Loadout_Slot_Change;                                      // 0x06E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FName                                       MatchLoadingRouteName;                                    // 0x06F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               ClearPendingRouteDataOnSwap;                              // 0x06F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C");
		return ptr;
	}


	void Show_Lobby_Radial_Select();
	class UKSItem* GetDefaultPlayerAccountItem(EPlayerAccountSlot ItemSlot);
	void SetupQueueEvents();
	void CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
	void SafeFrameSettingApplied();
	void BindSettingCallbacks();
	void InternalAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data, bool* ViewChanged);
	void OnAcquisition(class UKSAcquisition* Acquisition);
	class UKSContextBarWidget* GetContextBarWidget();
	void SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition);
	void Remove_Top_View_Route(bool ForceTransition, bool* ViewChanged);
	void Add_View_Route(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
	void HandeEOMResults(bool ForceTransition);
	void GetCurrentTransitionRoute(struct FName* Current_Route);
	class UKSLobbyWidget* GetLobbyWidget();
	void Focus_Home_Screen();
	void Get_Current_View_Route(struct FName* Current_Route);
	void Focus_Sticky_Loadout_Panel();
	void Get_Current_Loadout_Slot(unsigned char* Current_Loadout_Slot);
	void Cache_Current_Loadout_Slot(unsigned char Loadout_Slot_Edit);
	void InitialLobbyAnimStatesBinding();
	void TempBootstrapFunctionality();
	void FallbackLogoutCleanup();
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	void Handle_Login_State_Change(EPUMG_LoginState Login_State);
	class UPUMG_PopupManager* GetPopupManager();
	void ReceiveBeginPlay();
	void HandleEndPlayingPreMatch();
	void HandleBeginPlayingPreMatch();
	void HandleEndPlayingPostMatch();
	void HandleLoginCameraSet();
	void HandleMainLobbyCameraSet();
	void Handle_Party_Invite_Received(class UPUMG_PlayerInfo* Inviter);
	void HandleSettingsKeybind();
	void SetUIFocus();
	void HandleOpenTextChat(bool BeginChatCommand);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void ApplySafeFrameScale(float SafeFrameScale);
	void OnCustomQueueJoin();
	void EvaluateFocus();
	void HandleRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats);
	void ExecuteUbergraph_BP_BrightLobbyHUD(int EntryPoint);
	void Loadout_Slot_Change__DelegateSignature(unsigned char Loadout_Slot_Edit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
