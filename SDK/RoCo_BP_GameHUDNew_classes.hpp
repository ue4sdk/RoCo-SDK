#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_GameHUDNew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameHUDNew.BP_GameHUDNew_C
// 0x00E8 (0x0758 - 0x0670)
class ABP_GameHUDNew_C : public AKSGameHUDNew
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UGameHUDWidget_C*                            HUD_Widget;                                               // 0x0680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HUDXRatio;                                                // 0x0688(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HUDYRatio;                                                // 0x068C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AccuracyDebugMode;                                        // 0x0690(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSwimmingChanged;                                        // 0x0698(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0691(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    HUDMessage;                                               // 0x06A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x06A8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TMap<class UUserWidget*, struct FString>           WidgetsToAddToHUD;                                        // 0x06B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FScriptMulticastDelegate                    OnRuleWidgetCreated;                                      // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0708(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAsyncWidgetInfoParams>              AsyncWidgetInfos;                                         // 0x0718(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 WatermarkWidget;                                          // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCINE_Walkin_Widget_C*                       WalkInWidget;                                             // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHUDReady;                                               // 0x0738(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0738(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UUserWidget*>                         AddedWidgetsArray;                                        // 0x0748(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_GameHUDNew.BP_GameHUDNew_C");
		return ptr;
	}


	void AddHudWidgetToScreen(class UUserWidget* Widget, int ZOrder);
	void FocusFirstFocusableWidget(TArray<class UPUMG_Widget*>* PUMG_Widgets);
	void GetFocusableWidgets(TArray<class UPUMG_Widget*>* FocusableWidgets);
	class UKSContextBarWidget* GetContextBarWidget();
	void ToggleWatermarkDisplay(bool Show);
	void GetAsyncWidgetsForString(const struct FString& String, TArray<class UUserWidget*>* UserWidgets);
	void SetupJobSelectionManager();
	class UPUMG_PopupManager* GetPopupManager();
	void OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD(class UClass* Loaded);
	void ReceiveBeginPlay();
	void OnShowHUD();
	void OnHideHUD();
	void Spawn_Tutorial_Widget();
	void OnToggleHUD();
	void OnToggleTopBar(bool ShouldShow);
	void SetHUDVisible(bool bVisible);
	void CreateGameRuleWidget(const struct FKSWidgetInfoParams& WidgetInfoParams);
	void BroadcastWidgetMessage(const struct FName& Message);
	void BindEventToWidgetMessages(const struct FScriptDelegate& Callback);
	void HandleOpenTextChat(bool BeginChatCommand);
	void DisplayWatermark();
	void OnAsyncWidgetInfoLoaded(class UClass* LoadedClass, const struct FString& ParentWidget, class AKSWidgetInfoActor* WidgetInfoActor);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void ApplySafeFrameScale(float SafeFrameScale);
	void NetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState> LagType);
	void SetUIFocus();
	void Play_Cinematic_Nameplate_Anim(int Index, int NumWalking);
	void Set_Cinematic_Nameplate_Data(class UKSPersistentPlayerData* Player_Data, int Index);
	void EvaluateFocus();
	void Init_WalkIn_Widget(TArray<class AKSJobSelectPreviewActor*> Players);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnPhaseChanged(const struct FMatchPhase& CurrentPhase, const struct FMatchPhase& PreviousPhase);
	void ExecuteUbergraph_BP_GameHUDNew(int EntryPoint);
	void OnHUDReady__DelegateSignature();
	void OnRuleWidgetCreated__DelegateSignature(class UUserWidget* UserWidget, const struct FString& Placement);
	void HUDMessage__DelegateSignature(const struct FName& Message);
	void OnSwimmingChanged__DelegateSignature(bool IsSwimming);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
