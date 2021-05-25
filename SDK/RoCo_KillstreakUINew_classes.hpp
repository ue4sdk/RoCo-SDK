#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KillstreakUINew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KillstreakUINew.GuidedMenuCalloutData
// 0x0028 (0x0050 - 0x0028)
class UGuidedMenuCalloutData : public UObject
{
public:
	struct FText                                       HeaderText;                                               // 0x0028(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<struct FGuidedCalloutCardData>              CalloutCards;                                             // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.GuidedMenuCalloutData");
		return ptr;
	}

};


// Class KillstreakUINew.GuidedMenuCalloutsViewRedirector
// 0x0010 (0x0038 - 0x0028)
class UGuidedMenuCalloutsViewRedirector : public UPUMG_ViewRedirecter
{
public:
	class UDataTable*                                  GuidedCalloutsTable;                                      // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.GuidedMenuCalloutsViewRedirector");
		return ptr;
	}


	void SetNPEGuidedCalloutSeen(EConfigPropertyGuidedCalloutScenes GuidedCalloutScene);
	bool HasSeenNPEGuidedCallout(EConfigPropertyGuidedCalloutScenes GuidedCalloutScene);
};


// Class KillstreakUINew.KSWidget
// 0x0040 (0x04E0 - 0x04A0)
class UKSWidget : public UPUMG_Widget
{
public:
	bool                                               bIsUIOnlyWidget;                                          // 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsExclusiveMenuWidget;                                   // 0x04A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	int                                                AmbientSoundRtpc;                                         // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTickAnimationManager*                       TickAnimations;                                           // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             ViewportEvent;                                            // 0x04B0(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	bool                                               bSubstituteKillCamWorld;                                  // 0x04C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSubstituteKillCamOwningPlayer;                           // 0x04C1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWantsKillCamCallbacks;                                   // 0x04C2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1D];                                      // 0x04C3(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWidget");
		return ptr;
	}


	void UnbindFromViewportSizeChange();
	void TriggerGlobalInvalidate();
	void StopTickAnimation(const struct FName& AnimName);
	void SkipToEndTickAnimation(const struct FName& AnimName);
	void SetAllAnimationsPlaybackSpeed(float PlaybackSpeed);
	void ResumeTickAnimation(const struct FName& AnimName);
	void RemoveTickAnimation(const struct FName& AnimName);
	void PlayTickAnimation(const struct FName& AnimName);
	void PauseTickAnimation(const struct FName& AnimName);
	bool IsInKillCamPlayback();
	void InitializeTickAnimations();
	bool GetTickAnimationInfo(const struct FName& AnimName, struct FTickAnimationParams* OutAnimParams);
	class APlayerController* GetNormalOwningPlayer();
	class APlayerController* GetKillCamSpectatorController();
	class APlayerController* GetActivePlayerController();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintFinishKillCamPlayback();
	void BindToViewportSizeChange(const struct FScriptDelegate& InViewportEvent);
	void AddTickAnimation(const struct FName& AnimName, float Duration, const struct FScriptDelegate& UpdateEvent, const struct FScriptDelegate& FinishedEvent);
};


// Class KillstreakUINew.KSAccoladeQueueWidget
// 0x0050 (0x0530 - 0x04E0)
class UKSAccoladeQueueWidget : public UKSWidget
{
public:
	bool                                               IsBusy;                                                   // 0x04E0(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                NumInQueue;                                               // 0x04E4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAccoladeReceived;                                       // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAccoladeUpdateMultiplier;                               // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0508(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAccoladeQueueWidget");
		return ptr;
	}


	void Queue(TArray<struct FAccoladeEventEntry> Accolades);
	void OnAccoladeRemovedFromScreen(const struct FAccoladeDisplayInfo& AccoladeRemoved);
	bool GetNext(struct FAccoladeDisplayInfo* Accolade);
	void ClearAccoladeQueue();
};


// Class KillstreakUINew.KSAcquisitionModal
// 0x0058 (0x0538 - 0x04E0)
class UKSAcquisitionModal : public UKSWidget
{
public:
	class UDataTable*                                  HeaderOverridesTable;                                     // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<int, struct FText>                            HeaderOverridesFromJson;                                  // 0x04E8(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAcquisitionModal");
		return ptr;
	}


	struct FText GetHeaderText(class UKSAcquisition* Acquisitition);
	class UKSAcquisitionManager* GetAcquisitionManager();
};


// Class KillstreakUINew.KSActiveBonusesWidget
// 0x0008 (0x04E8 - 0x04E0)
class UKSActiveBonusesWidget : public UKSWidget
{
public:
	class UDataTable*                                  EventLookupTable;                                         // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSActiveBonusesWidget");
		return ptr;
	}


	void GetBonusAppliedToLastMatch(TArray<struct FKSLimitedTimeEventMetadataRow>* ActiveEvents);
};


// Class KillstreakUINew.KSPawnWidget
// 0x0020 (0x0500 - 0x04E0)
class UKSPawnWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPawnWidget");
		return ptr;
	}


	void SetPlayerStateUIRelevanceChanged();
	void SetPawn(class AKSCharacter* NewPawn);
	void PreClearPlayerState();
	void PreClearPawn();
	void PostSetPlayerState();
	void PostSetPawn();
	void OnBoundPlayerStateDestroyed(class AActor* DestroyedActor);
	void OnBoundPawnDestroyed(class AActor* DestroyedActor);
	class AKSPlayerState* GetPlayerState();
	class AKSCharacterBase* GetPawnBase();
	class AKSCharacter* GetPawn();
};


// Class KillstreakUINew.KSPawnInventoryWidget
// 0x0070 (0x0570 - 0x0500)
class UKSPawnInventoryWidget : public UKSPawnWidget
{
public:
	TMap<struct FKSEquipmentId, class UKSWeaponComponentWidget*> EquipmentWidgets;                                         // 0x0500(0x0050) (CPF_ExportObject, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0550(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPawnInventoryWidget");
		return ptr;
	}


	bool RemoveWidgetFor(class UKSWeaponComponent* InWeaponComponent);
	class UKSWeaponComponentWidget* GetWidgetForWeaponComponent(class UKSWeaponComponent* InWeaponComponent);
	void EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment);
	void EquipmentEndActive(class UKSWeaponComponent* InactiveEquipment);
	void EquipmentBecomeActive(class UKSWeaponComponent* ActiveEquipment);
	void EquipmentAdded(class UKSWeaponComponent* AddedEquipment);
	class UKSWeaponComponentWidget* CreateWeaponComponentWidgetFor(class UObject* WorldContextObject, class UKSWeaponComponent* InWeaponComponent, class UClass* WidgetClass, class APlayerController* OwningPlayer);
};


// Class KillstreakUINew.KSActiveWeaponComponentWidget
// 0x0038 (0x05A8 - 0x0570)
class UKSActiveWeaponComponentWidget : public UKSPawnInventoryWidget
{
public:
	int                                                ActiveWeaponSlot;                                         // 0x0570(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       EquipPointsToIgnore;                                      // 0x0578(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bDelayClearUntilNextTick;                                 // 0x0598(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UKSWeaponComponent>           WeakActiveWeaponComponentPtr;                             // 0x059C(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSActiveWeaponComponentWidget");
		return ptr;
	}


	void PreClearActiveWeaponComponent();
	void PostSetActiveWeaponComponent();
	class UKSWeaponComponent* GetActiveWeaponComponent();
};


// Class KillstreakUINew.KSActivity_ViewRedirector
// 0x0010 (0x0038 - 0x0028)
class UKSActivity_ViewRedirector : public UPUMG_ViewRedirecter
{
public:
	TArray<TSoftObjectPtr<class UKSActivity>>          ActivitiesToCheck;                                        // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSActivity_ViewRedirector");
		return ptr;
	}


	class UKSActivityManagerBase* GetRelevantActivityManager(class UKSGameInstance* GameInstance);
};


// Class KillstreakUINew.KSAimAssistDebugWidget
// 0x0008 (0x0240 - 0x0238)
class UKSAimAssistDebugWidget : public UUserWidget
{
public:
	bool                                               bDrawAimAssistBoundary;                                   // 0x0238(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDrawHeadAimCorrectionBoundary;                           // 0x0239(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDrawMagnetismDebug;                                      // 0x023A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDrawTargetInfo;                                          // 0x023B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAimAssistDebugWidget");
		return ptr;
	}


	class AKSPlayerController* GetOwningKSPlayer();
	class UKSAimAssistComponent* GetAimAssistComponent();
};


// Class KillstreakUINew.KSMapIconWidgetBase
// 0x00E0 (0x0318 - 0x0238)
class UKSMapIconWidgetBase : public UUserWidget
{
public:
	bool                                               bDoesIconRotate;                                          // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              MarkerAnchorHeight;                                       // 0x023C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HeightThreshold;                                          // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	float                                              CachedRawMetersAway;                                      // 0x0248(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UniqueId;                                                 // 0x024C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AKSPlayerState>               CreatingPlayer;                                           // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDisplayType                                       ParentMapDisplayType;                                     // 0x0258(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       AssociatedActor;                                          // 0x025C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      AssociatedObject;                                         // 0x0264(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DefaultLocation;                                          // 0x026C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Lifespan;                                                 // 0x0278(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UKSMapWidgetBase>             ParentMapWidget;                                          // 0x027C(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenMargins;                                            // 0x0284(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CenterPercentageWidth;                                    // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CenterPercentageHeight;                                   // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OpacityWhenAiming;                                        // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DoesFadeOutWhenAiming;                                    // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              AimTransitionOpacity;                                     // 0x029C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     IconOffset;                                               // 0x02A0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x18];                                      // 0x02AC(0x0018) MISSED OFFSET
	float                                              HoverDelaySeconds;                                        // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMapIconWidgetReady;                                     // 0x02E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMapIconWidgetRemove;                                    // 0x02F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsWidgetPool;                                            // 0x0300(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	struct FString                                     WidgetPoolName;                                           // 0x0308(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMapIconWidgetBase");
		return ptr;
	}


	void UpdateScreenRegion();
	void UpdateOpacityWhenAiming();
	void UpdateMetersAway(int Meters);
	void UpdateMeetsHeightThreshold(bool bHeight, bool bDepth);
	ESlateVisibility Update();
	bool ShouldUpdateOpacityWhenAiming();
	bool ShouldUpdateHover();
	bool ShouldUpdate();
	void SetScreenRegion(EIconMarkerScreenRegion ScreenRegion);
	void SetLifeSpan(float InLifespan);
	void SetDisplayInfo(int InUniqueId, class AKSPlayerState* InCreatingPlayer, EDisplayType InParentMapDisplayType, class AActor* InAssociatedActor, class UObject* InAssociatedObject, const struct FVector& InDefaultLocation, float InLifespan);
	void SetArrowAngle(float Angle);
	void ResetDisplayInfo();
	void OnUnhoverTimerComplete();
	void OnHoverTimerComplete();
	void OnHoverStateChanged(EIconHoverState NewHoverState);
	void OnAssociatedActorDestroyed(class AActor* Actor);
	void OnAimStateChanged(EKSCharacterAimMode NewAimState, float NewAimTransitionOffset);
	void IsScreenRegion(bool* InsideCenter, bool* InsideMargins);
	bool IsInCenteredScreenRect(float PositionX, float PositionY, float XMargin, float YMargin);
	bool IsHovering();
	void HandleMapIconWidgetHide();
	float GetWorldYaw();
	struct FVector GetWorldPosition();
	EIconHoverState GetHoverState();
	float GetEdgeArrowAngleBase(float Angle);
	float GetDistanceToIcon();
	void GetArrowPosition(bool IsIconVisible, float Angle, struct FVector2D* ArrowPosition);
};


// Class KillstreakUINew.KSAllyMarkerWidget
// 0x0058 (0x0370 - 0x0318)
class UKSAllyMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class UWidget*                                     ArrowWidget;                                              // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     NameOrStatusWidget;                                       // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     DownedSectionWidget;                                      // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameModeModActivationChanged;                           // 0x0330(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x0340(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x0348(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0350(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAllyMarkerWidget");
		return ptr;
	}


	void View_SetSelfPingIcon(EPingType PingType, EPingMessage PingMessage);
	void View_SetRevivePercent(float PercentValue);
	void View_SetNameText(const struct FText& NameText);
	void View_SetMode(EAllyMarkerState AllyMarkerState, bool HasObjective, bool HasSelfPing);
	void View_SetJob(class UKSJobItem* Job);
	void View_SetHealthPercent(float PercentValue);
	void View_AcknowledgeSelfPing(class AKSPlayerState* AcknowledingPlayer);
	void SetPlayerName();
	void SetMarkerPlayerState(class AKSPlayerState* pPlayerState);
	bool IsOwningPlayer();
	void HandleUIRelevantChanged(class AKSPlayerState* InPlayerState);
	void HandleRemoveSelfPing(class AKSPlayerState* PingingPlayer);
	void HandlePlayerModActivated(class UKSPlayerMod_Activated* ActivatedMod, bool Active);
	void HandlePlayerDown(const struct FCombatEventInfo& CombatEventInfo, int ExpBonus);
	void HandlePlayerDeath(const struct FCombatEventInfo& DeathInfo);
	void HandleOnJobChanged();
	void HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& GameObjective);
	void HandleChangeSelfPing(class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	void HandleBombStateChanged(const struct FKSNeutralBombState& BombState);
	void HandleAddSelfPing(class AKSPlayerState* PingingPlayer, EPingType PingType, EPingMessage PingMessage);
	bool GetPingIconByType(EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon);
	bool GetPingIconByMessage(EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon);
	bool GetPingColorByType(EPingType PingType, struct FLinearColor* PingColor);
	struct FVector2D GetArrowPositionFromAngleBlueprint(float Angle);
	bool FindRowByType(EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	void ChangeOwnerContentVisibility(bool bVisible);
};


// Class KillstreakUINew.KSAlphaDisclaimer
// 0x0000 (0x04E0 - 0x04E0)
class UKSAlphaDisclaimer : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAlphaDisclaimer");
		return ptr;
	}


	static bool LoadAlphaDisclaimerText(struct FString* SaveText);
};


// Class KillstreakUINew.KSWeaponWidget
// 0x0008 (0x04E8 - 0x04E0)
class UKSWeaponWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWeaponWidget");
		return ptr;
	}


	void SetOwningWeapon(class AKSWeapon* InWeapon);
	void PreClearWeapon();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void OnOwningWeaponDestroyed(class AActor* DestroyedWeapon);
	class AKSWeapon* GetOwningWeapon();
};


// Class KillstreakUINew.KSAmmoWidget
// 0x0020 (0x0508 - 0x04E8)
class UKSAmmoWidget : public UKSWeaponWidget
{
public:
	int                                                CachedAmmoInClip;                                         // 0x04E8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CachedClipSize;                                           // 0x04EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CachedInReserve;                                          // 0x04F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               CachedIsReloading;                                        // 0x04F4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x13];                                      // 0x04F5(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve);
};


// Class KillstreakUINew.KSAnnouncementQueuedMessageWidget
// 0x0048 (0x0528 - 0x04E0)
class UKSAnnouncementQueuedMessageWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnEndDisplay;                                             // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FAnnouncementData                           AnnouncementData;                                         // 0x04F0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_Protected, CPF_ExposeOnSpawn, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAnnouncementQueuedMessageWidget");
		return ptr;
	}


	void DisplayAnnouncement();
};


// Class KillstreakUINew.KSAnnouncementQueueWidget
// 0x0030 (0x0510 - 0x04E0)
class UKSAnnouncementQueueWidget : public UKSWidget
{
public:
	bool                                               IsBusy;                                                   // 0x04E0(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReadyForNextAnnouncement;                               // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSAnnouncementQueueWidget");
		return ptr;
	}


	void Queue(const struct FAnnouncementData& Announcement);
	bool GetNext(struct FAnnouncementData* Announcement);
	void ClearAnnoucementQueue();
};


// Class KillstreakUINew.KSBoostInventoryWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSBoostInventoryWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSBoostInventoryWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSBoostInventoryItemWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSBoostInventoryItemWidget : public UKSWidget
{
public:
	struct FAccountConsumableDetails                   CurrentItemDetails;                                       // 0x04E0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSBoostInventoryItemWidget");
		return ptr;
	}


	void View_SetFromItem(const struct FAccountConsumableDetails& ItemDetails);
	void ShowBoostPopup();
	void SetItem(const struct FAccountConsumableDetails& ItemDetails);
	void PlayBoostConfirmationSound();
	void OnActivateBoostConfirm();
	void OnActivateBoostCancel();
};


// Class KillstreakUINew.KSChallengeEntryCardBase
// 0x0008 (0x04E8 - 0x04E0)
class UKSChallengeEntryCardBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSChallengeEntryCardBase");
		return ptr;
	}


	void SetChallengeData(class UKSActivityInstance* ActivityInstance);
	void DisplayRewardItems(TArray<struct FTierRewardItemData> RewardItems);
	void ApplyRerollAvailable(bool CanReroll);
	void ApplyLayoutType(EChallengeEntryCardState CardState);
	void ApplyChallengeProgress(int Progress, int ProgressTotal);
	void ApplyChallengeDescription(const struct FText& DescText);
};


// Class KillstreakUINew.KSChatDataFactory
// 0x0000 (0x0118 - 0x0118)
class UKSChatDataFactory : public UPUMG_ChatDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSChatDataFactory");
		return ptr;
	}

};


// Class KillstreakUINew.KSComponentReticleWidgetBase
// 0x0020 (0x05C8 - 0x05A8)
class UKSComponentReticleWidgetBase : public UKSActiveWeaponComponentWidget
{
public:
	float                                              ShrinkAnimationTime;                                      // 0x05A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMaxScale;                                  // 0x05AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMinScale;                                  // 0x05B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlockedShotMinScaleSqDist;                                // 0x05B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bGrenadeCooking;                                          // 0x05B8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInADS;                                                   // 0x05B9(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCachedBlockIconVisible;                                  // 0x05BA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05BB(0x0001) MISSED OFFSET
	float                                              CachedWeaponAccuracy;                                     // 0x05BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              CachedReticleOffset;                                      // 0x05C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSComponentReticleWidgetBase");
		return ptr;
	}


	void ViewedPawnInstigatedDamageNotify(const struct FCombatEventInfo& DamageInfo);
	void UpdateReticleOffset(float OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale);
	void CalculateReticleOffset(float DeltaTime);
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.ContextActionData
// 0x0060 (0x0088 - 0x0028)
class UContextActionData : public UObject
{
public:
	struct FName                                       RowName;                                                  // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FContextAction                              RowData;                                                  // 0x0030(0x0048) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnContextAction;                                          // 0x0078(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.ContextActionData");
		return ptr;
	}


	void TriggerContextAction();
};


// Class KillstreakUINew.KSContextBarWidget
// 0x0078 (0x0558 - 0x04E0)
class UKSContextBarWidget : public UKSWidget
{
public:
	class UDataTable*                                  ContextActionDT;                                          // 0x04E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<struct FName, struct FRouteContextInfo>       RouteContextInfoMap;                                      // 0x04E8(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FName                                       ActiveRoute;                                              // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FName>                               OverrideRouteStack;                                       // 0x0540(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       OverrideRoute;                                            // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSContextBarWidget");
		return ptr;
	}


	void UpdateContextActions(TArray<class UContextActionData*> ContextActions, const struct FName& CurrentRoute);
	void SetPrompts(const struct FName& Route, TArray<struct FName> ContextNames);
	void SetPromptAction(const struct FName& Route, const struct FName& ContextName, const struct FScriptDelegate& EventCallback);
	void SetPrompt(const struct FName& Route, const struct FName& ContextName);
	void SetOverrideRoute(const struct FName& Route);
	void SetActiveRoute(const struct FName& Route);
	void RefreshContextBar();
	void PushOverrideRoute(const struct FName& Route);
	struct FName PopOverrideRoute();
	void OverrideKeyButtons();
	struct FName GetCurrentContextRoute();
	void ClearPromptByKey(const struct FName& Route, const struct FKey& Key);
	void ClearPrompt(const struct FName& Route, const struct FName& ContextName);
	void ClearOverrideRouteStack();
	void ClearOverrideRoute();
	void ClearAllPrompts(const struct FName& Route);
};


// Class KillstreakUINew.KSContextMenu
// 0x0050 (0x0530 - 0x04E0)
class UKSContextMenu : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnContextOptionsUpdated;                                  // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnReportPlayer;                                           // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	EPlayerContextMenuContext                          MenuContext;                                              // 0x0500(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAllowReportPlayer;                                       // 0x0501(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0502(0x0006) MISSED OFFSET
	class UKSPlayerInfo*                               CurrentPlayerInfo;                                        // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UKSContextMenuButton*>                ContextMenuButtons;                                       // 0x0510(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EViewSide                                          MenuViewSide;                                             // 0x0520(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	int                                                CachedQueuedOrInMatch;                                    // 0x0524(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCachedReportedPlayer;                                    // 0x0528(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0529(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSContextMenu");
		return ptr;
	}


	void SetOptionsVisibility();
	struct FVector2D SetMenuPosition(class UKSWidget* WidgetToMove, const struct FMargin& WidgetPadding, EViewSide side, float menuWidth, float menuHeight);
	void SetCurrentPlayerInfo(class UKSPlayerInfo* playerinfo);
	void RemoveContextMenuButton(class UKSContextMenuButton* ContextButton);
	bool OnOptionSelected(EPlayerContextOptions ContextOption);
	void HandleOnQueueStatusChange(EPUMG_MatchStatus QueueStatus);
	class UPUMG_QueueDataFactory* GetQueueDataFactory();
	class UKSPlayerDataFactory* GetPlayerDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSContextMenuButton* GetContextButtonByEnum(EPlayerContextOptions ContextOption);
	void ClearAllContextMenuButton();
	void AddContextMenuButton(class UKSContextMenuButton* ContextButton);
};


// Class KillstreakUINew.KSContextMenuButton
// 0x0008 (0x04E8 - 0x04E0)
class UKSContextMenuButton : public UKSWidget
{
public:
	EPlayerContextOptions                              ContextOption;                                            // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSContextMenuButton");
		return ptr;
	}


	void SetContextOption(EPlayerContextOptions Context);
	void HandleVisibility(bool isVisibility);
	void HandleActive(bool IsActive);
	EPlayerContextOptions GetContextOption();
};


// Class KillstreakUINew.KSContextualPingMarkerWidget
// 0x0088 (0x03A0 - 0x0318)
class UKSContextualPingMarkerWidget : public UKSMapIconWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnPingRemovedCalled;                                      // 0x0318(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPingChangedCalled;                                      // 0x0328(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FPingInfo                                   CurrentPingInfo;                                          // 0x0338(0x0050) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	class UKSPingManager*                              PingManager;                                              // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSContextualPingMarkerWidget");
		return ptr;
	}


	void SetupPingOnReady();
	void SetPingInfo(const struct FPingInfo& PingInfoVal);
	void OnPingUnhovered(int PingId, class AKSPlayerState* PingingPlayer);
	void OnPingHovered(int PingId, class AKSPlayerState* PingingPlayer);
	void OnInitializePing();
	bool IsInvisiblePingType(EPingType PingType);
	void HandleOnContextualPingRemoved(int PingId, class AKSPlayerState* PingingPlayer);
	void HandleOnContextualPingChanged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	float GetPingLifeSpan(EPingType PingType);
	bool GetPingIconByType(EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon);
	bool GetPingIconByMessage(EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon);
	bool GetPingColorByType(EPingType PingType, struct FLinearColor* PingColor);
	bool FindRowByType(EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
};


// Class KillstreakUINew.KSCosmeticItemSelectorWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSCosmeticItemSelectorWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSCosmeticItemSelectorWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSCustomizationSelection
// 0x0030 (0x0510 - 0x04E0)
class UKSCustomizationSelection : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	TArray<struct FRogueCustomizationRelatedInfo>      RogueCustomizationRelatedInfos;                           // 0x04E8(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<EMercCosmeticSlot>                          ActiveCosmeticSlots;                                      // 0x04F8(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                TabIndex;                                                 // 0x0508(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x050C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSCustomizationSelection");
		return ptr;
	}


	void TabRight();
	void TabLeft();
	void SetWingSuitAsset(class UKSWeaponAsset* WingSuit);
	void PurchaseAndEquip(EMercCosmeticSlot SlotType, int SlotPosition, class UKSJobItem* JobItem, class UPUMG_StoreItem* StoreItem);
	bool IsItemOwned(class UPlatformInventoryItem* Item);
	void GetWingSuitItems(TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems);
	class UKSWeaponAsset* GetWingSuitAsset();
	void GetWeaponSlotItems(EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems);
	bool GetWeaponItem(EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, class UKSWeaponAsset** Weapon);
	void GetSkinItemsForJobItem(class UKSJobItem* JobItem, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems);
	class UKSScrollBox* GetScrollBoxForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot);
	struct FRogueCustomizationRelatedInfo GetRogueCustomizationRelatedInfoForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot);
	void GetRadialMenuItems(TSoftObjectPtr<class UKSJobItem> ForJobItem, const struct FName& Tag, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems);
	class UKSNavTabWidget* GetNavTabForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot);
	class UKSStoreItemHelper* GetItemHelper();
	class UKSSortableGridPanel* GetItemContainerForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot);
	void GetCosmeticItemsForSlot(EMercCosmeticSlot SlotType, EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems);
	TArray<class UKSCosmeticItemSelectorWidget*> GetCosmeticItemSelectorsForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot);
	class UKSSortableGridPanel* GetActiveSortableGridPanel();
	class UKSScrollBox* GetActiveScrollBox();
	struct FRogueCustomizationRelatedInfo GetActiveRogueCustomizationRelatedInfo();
	class UKSNavTabWidget* GetActiveNavTab();
	EMercCosmeticSlot GetActiveCosmeticSlot();
	TArray<class UKSCosmeticItemSelectorWidget*> GetActiveCosmeticItemSelectors();
	void ForceSetTabIndex(int NewTabIndex);
	void ClearCosmeticItemsForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot);
	void ChangeToNewTab();
	bool CanChangeTab();
	void AddRogueCustomizationRelatedInfo(int NewSwitcherIndex, EMercCosmeticSlot NewCosmeticSlot, class UKSNavTabWidget* NewNavTab, class UKSScrollBox* NewScrollBox, class UKSSortableGridPanel* NewSortableGridPanel);
	void AddCosmeticItemsForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot, TArray<class UKSCosmeticItemSelectorWidget*> NewCosmeticItems);
};


// Class KillstreakUINew.KSDailyChallengeViewBase
// 0x0010 (0x04F0 - 0x04E0)
class UKSDailyChallengeViewBase : public UKSWidget
{
public:
	float                                              ChallengeTimerRefreshRate;                                // 0x04E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDailyChallengeViewBase");
		return ptr;
	}


	void UpdateChallenges();
	void InitializeChallengeDisplays();
	void HandlePlayerChallengesReady();
	void HandlePlayerChallengesChanged();
	void HandleDailyChallengeTimerRefreshed();
	TArray<class UKSActivityInstance*> GetDisplayingChallenges();
	void DisplayChallengeTimeRemaining(int TimeRemainingSeconds);
	void DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish);
};


// Class KillstreakUINew.KSDataSocialCategory
// 0x00B8 (0x00E0 - 0x0028)
class UKSDataSocialCategory : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPlayersUpdated;                                         // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHeaderUpdated;                                          // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMessageUpdated;                                         // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0058(0x0078) MISSED OFFSET
	TArray<class UKSDataSocialPlayer*>                 SortedPlayerList;                                         // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDataSocialCategory");
		return ptr;
	}


	bool TryConsumeOpenOnUpdate();
	void SetOpenOnUpdate(bool Value);
	void SetMessageText(bool bProcessing, const struct FText& MessageText);
	void SetHeaderText(const struct FText& Header);
	int Num();
	bool IsProcessing();
	TArray<class UKSDataSocialPlayer*> GetPlayerList();
	struct FText GetMessageText();
	struct FText GetHeaderText();
	unsigned char BP_GetSectionValue();
};


// Class KillstreakUINew.KSDataSocialPlayer
// 0x0018 (0x0040 - 0x0028)
class UKSDataSocialPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnDataUpdate;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UKSPlayerInfo*                               Info;                                                     // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDataSocialPlayer");
		return ptr;
	}


	void KSSocialPlayerUpdate__DelegateSignature(class UKSPlayerInfo* playerinfo);
	bool IsValid();
	class UKSPlayerInfo* GetPlayerInfo();
};


// Class KillstreakUINew.KSDebugMenu
// 0x0010 (0x04F0 - 0x04E0)
class UKSDebugMenu : public UKSWidget
{
public:
	TArray<struct FDebugMenuCommandInfo>               DebugCommands;                                            // 0x04E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDebugMenu");
		return ptr;
	}


	bool GetSubmenu(const struct FDebugMenuCommandInfo& BaseCommand, TArray<struct FDebugMenuCommandInfo>* Submenu);
	void GetSortedBaseDebugCommands(TArray<struct FDebugMenuCommandInfo>* SortedCommands);
	EConsoleCommandParamType GetParamTypeForSubCommand(const struct FString& BaseCommandString);
};


// Class KillstreakUINew.KSDownloadProgressWidget
// 0x0010 (0x0248 - 0x0238)
class UKSDownloadProgressWidget : public UUserWidget
{
public:
	float                                              UpdatePeriod;                                             // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMarkedFinished;                                          // 0x023C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	float                                              TimeUntilNextUpdate;                                      // 0x0240(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDownloadProgressWidget");
		return ptr;
	}


	void UpdateFinished();
	void UpdatedDownloadProgress(float Progress, float Total, float Eta, bool bSupportsEta);
};


// Class KillstreakUINew.KSEditableTextBox
// 0x0010 (0x0A40 - 0x0A30)
class UKSEditableTextBox : public UEditableTextBox
{
public:
	struct FScriptDelegate                             OnKeyDown;                                                // 0x0A30(0x0014) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSEditableTextBox");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedPawnWidget
// 0x0010 (0x0510 - 0x0500)
class UKSViewedPawnWidget : public UKSPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0500(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedPawnWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSEliminationMessageWidget
// 0x0000 (0x0510 - 0x0510)
class UKSEliminationMessageWidget : public UKSViewedPawnWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSEliminationMessageWidget");
		return ptr;
	}


	void ShowMessageForTakenDown(class AKSPlayerState* Instigator, bool IsElimination);
	void ShowMessageForTakedown(class AKSPlayerState* Victim, bool IsElimination);
	void ShowMessageForAssist(class AKSPlayerState* Victim, bool IsElimination);
	void OnPlayerDownReceived(const struct FCombatEventInfo& EventInfo, int ExpBonus);
	void OnPlayerDeathReceived(const struct FCombatEventInfo& EventInfo);
	void OnPlayerAssistReceived(const struct FAssistInfo& EventInfo);
	void ClearMessages();
};


// Class KillstreakUINew.KSEMODataFactory
// 0x00E8 (0x0120 - 0x0038)
class UKSEMODataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0038(0x0014) MISSED OFFSET
	bool                                               haveRecieveMatchReport;                                   // 0x004C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xB3];                                      // 0x004D(0x00B3) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRewardsRecieved;                                        // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnProgressionRecieved;                                    // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSEMODataFactory");
		return ptr;
	}


	void SetupTestData(int PlayerXp, int RankedXp, int RogueXp, int ReputationEarned, int PlacementMatchNum, int BattlePassXp);
	bool IsLocalPlayer(int64_t PlayerId);
	void HandlePlayerRewards(const struct FPlayerRewardsSummary& PlayerRewardSummary, bool bFakeTestData);
	void HandleEOMDetail();
	struct FScoreboardStats GetScoreboardStats();
	struct FPlayerRewardsSummary GetPlayerRewardsSummary();
	int GetLastMatchQueueId();
	bool FindReputationProgressionActivity(class UKSActivityInstance** ReputationProgressionActivity);
	bool FindRankedProgressionActivity(class UKSActivityInstance** RankedProgressionActivity);
	bool FindPlayerXpProgressionActivity(class UKSActivityInstance** PlayerXpProgressionActivity);
	bool FindMiniBattlePassProgressionActivity(class UKSActivityInstance** MiniBattlePassProgressionActivity);
	bool FindBattlePassProgressionActivity(class UKSActivityInstance** BattlePassProgressionActivity);
	void ComputeEOMResults();
};


// Class KillstreakUINew.KSEnemyDetectedWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSEnemyDetectedWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSEnemyDetectedWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSEventBuyThroughScreenBase
// 0x0000 (0x04E0 - 0x04E0)
class UKSEventBuyThroughScreenBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSEventBuyThroughScreenBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSExpDisplayWidget
// 0x0020 (0x0530 - 0x0510)
class UKSExpDisplayWidget : public UKSViewedPawnWidget
{
public:
	bool                                               bIsWaitingForNextQueue;                                   // 0x0510(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0511(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSExpDisplayWidget");
		return ptr;
	}


	void QueueExpDisplays(const struct FExpDisplayInfo& ExpInfo);
	void NativeHandleDisplayExpInfo();
	bool GetNextExpDisplay(struct FExpDisplayInfo* ExpInfo);
	void DisplayExpInfo();
};


// Class KillstreakUINew.KSFloatTickLerpWidgetBase
// 0x0028 (0x0260 - 0x0238)
class UKSFloatTickLerpWidgetBase : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnLerpComplete;                                           // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              LerpTime;                                                 // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LerpPower;                                                // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSFloatTickLerpWidgetBase");
		return ptr;
	}


	void SetTargetValue(float Value);
	void SetLerpTime(float Time);
	void SetLerpPower(float Power);
	bool IsLerping();
	float GetCurrentValue();
	void ForceCurrentValue(float Value);
	void DisplayForValue(float Value);
};


// Class KillstreakUINew.KSFriendDataFactory
// 0x0010 (0x0130 - 0x0120)
class UKSFriendDataFactory : public UPUMG_FriendDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnUpdateRecentlyPlayedPlayers;                            // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSFriendDataFactory");
		return ptr;
	}


	void OnEOMRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats);
	void KSUpdateRecentlyPlayedPlayers__DelegateSignature(class UKSFriendDataFactory* Source);
	TArray<class UPUMG_PlayerInfo*> GetSuggestedFriends_Info();
	TArray<class UKSPlayerInfo*> GetPlayersPlayedWithThisClientSession_Info();
	TArray<class UPUMG_PlayerInfo*> GetPendingFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetOnlineFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriendRequests_Info();
};


// Class KillstreakUINew.KSFubarPopupWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSFubarPopupWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSFubarPopupWidget");
		return ptr;
	}


	void ReceiveFubar(EFubarDisplayReason Reason);
	int GetSecondsToShutdown();
	void DisplayFubar(EFubarDisplayReason Reason);
};


// Class KillstreakUINew.KSMapWidgetBase
// 0x0140 (0x0620 - 0x04E0)
class UKSMapWidgetBase : public UKSWidget
{
public:
	EDisplayType                                       MapDisplayType;                                           // 0x04E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	TArray<struct FMapIconWidgetConfig>                MapIconWidgetsToPool;                                     // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UKSMapIconWidgetPool*>                MapIconWidgetPool;                                        // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UKSMapIconWidgetBase*>                MapIconWidgetPoolShown;                                   // 0x0508(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OpacityWhenAiming;                                        // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               DoesFadeOutWhenAiming;                                    // 0x051C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	float                                              AimTransitionProgress;                                    // 0x0520(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x64];                                      // 0x0524(0x0064) MISSED OFFSET
	TMap<class AKSPlayerState*, class UKSMapIconWidgetBase*> PlayerIconMap;                                            // 0x0588(0x0050) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x38];                                      // 0x05D8(0x0038) MISSED OFFSET
	bool                                               AbsoluteRotation;                                         // 0x0610(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               CanBeScrambled;                                           // 0x0611(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsScrambled;                                              // 0x0612(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAffectedByScramble;                                      // 0x0613(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0614(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMapWidgetBase");
		return ptr;
	}


	void UpdateOpacityWhenAiming();
	void UpdateIcon(class UKSMapIconWidgetBase* Icon);
	struct FVector2D ToIconRenderCoords(const struct FVector2D& MapCoords);
	float ToIconRenderAngle(float PlayerAngle);
	void TickCachedTransform();
	bool ShouldUpdateOpacityWhenAiming();
	void SetScrambleState(bool Scrambled);
	void RemoveWidgetFromLoaderById(int InId);
	void OnScrambleStateChanged(bool Scrambled);
	void OnReceiveDisplayWidgetInfo(const struct FDisplayInfo& DisplayInfo);
	void OnGameStateSet(class AGameStateBase* GameStateBase);
	bool IsOnMap(const struct FVector2D& MapCoords);
	void HandleMoveToWidgetPool(class UKSMapIconWidgetBase* MapIconWidget);
	void HandleDisplayFromWidgetPool(class UKSMapIconWidgetBase* MapIconWidget, const struct FDisplayInfo& DisplayInfo);
	void HandleAimStateChange(EKSCharacterAimMode NewAimState);
	class UKSMapIconWidgetBase* GrabMapIconWidget(const struct FString& WidgetPoolName);
	float GetDistanceToIcon(class UKSMapIconWidgetBase* Icon);
	class APawn* GetCachedViewedPawn();
	struct FTransform GetCachedTransform();
	void DisplayToMapWidget(class UKSMapIconWidgetBase* MapIcon);
	class UKSMapIconWidgetBase* CreateNewIconWidget(class UClass* WidgetClass, int UniqueId, class AKSPlayerState* CreatingPlayer, EDisplayType ParentMapDisplayType, class AActor* AssociatedActor, class UObject* AssociatedObject, const struct FVector& DefaultLocation, float Lifespan);
	void CreateMapIconWidgetPool(const struct FMapIconWidgetConfig& MapIconWidgetConfig);
};


// Class KillstreakUINew.KSFullMapWidget
// 0x0010 (0x0630 - 0x0620)
class UKSFullMapWidget : public UKSMapWidgetBase
{
public:
	float                                              MinimapWidth;                                             // 0x0620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0624(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSFullMapWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSHUDCommon
// 0x0078 (0x05C8 - 0x0550)
class AKSHUDCommon : public APUMG_HUD
{
public:
	struct FScriptMulticastDelegate                    OnPreferredSiteUpdated;                                   // 0x0550(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UPUMG_LoginDataFactory*                      LoginDataFactory;                                         // 0x0560(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsDataFactory*                      SettingsFactory;                                          // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSChatDataFactory*                          ChatDataFactory;                                          // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSPartyDataFactory*                         PartyDataFactory;                                         // 0x0578(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSNPEDataFactory*                           NPEDataFactory;                                           // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSPlayerDataFactory*                        PlayerDataFactory;                                        // 0x0588(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisplayWatermark;                                        // 0x0590(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0591(0x0003) MISSED OFFSET
	float                                              WatermarkAlpha;                                           // 0x0594(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetLeft;                                      // 0x0598(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetTop;                                       // 0x059C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetRight;                                     // 0x05A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WatermarkOffsetBottom;                                    // 0x05A4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WatermarkChangePositionTime;                              // 0x05A8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UDataTable*                                  ColorPaletteDT;                                           // 0x05B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  FontPaletteDT;                                            // 0x05B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsColorOptionsAsset*                CrosshairColorOptions;                                    // 0x05C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSHUDCommon");
		return ptr;
	}


	void UIX_ReportServer();
	void TestChallengeNotification();
	void ShowErrorPopup(const struct FText& ErrorMsg);
	bool ShouldShowCrossplayIconForPlayerState(class AKSPlayerState* PlayerState);
	bool ShouldShowCrossplayIconForPlayer(int64_t PlayerId);
	void SetPreferredSiteId(int SiteId);
	void PrintToLog(const struct FText& InText);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	bool MutePlayer(int64_t PlayerId, bool Mute);
	void LogErrorMessage(const struct FText& ErrorMsg);
	bool IsSamePortalAsLocalPlayer(int64_t PlayerId);
	bool IsMuted(int64_t PlayerId);
	void HandleOpenTextChat(bool BeginChatCommand);
	void HandleControllerDisconnect();
	class UKSUISessionManager* GetUISessionManager();
	void GetSiteList(TMap<int, struct FText>* OutSiteIdToNameMap);
	class UKSSettingsDataFactory* GetSettingsDataFactory();
	bool GetPreferredSiteId(int* OutSiteId);
	class UKSPlayerDataFactory* GetPlayerDataFactory();
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSNPEDataFactory* GetNPEDataFactory();
	class UKSMercManager* GetMercManager();
	class UPUMG_LoginDataFactory* GetLoginDataFactory();
	class UKSLoadoutDataFactory* GetLoadoutDataFactory();
	class UKSStoreItemHelper* GetItemHelper();
	bool GetFont(const struct FName& FontName, struct FSlateFontInfo* ReturnFont);
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	class UKSContextBarWidget* GetContextBarWidget();
	bool GetColor(const struct FName& ColorName, struct FLinearColor* ReturnColor);
	class UKSChatDataFactory* GetChatDataFactory();
	class UKSAcquisitionManager* GetAcquisitionManager();
	void EvaluateFocus();
	void DisplayWatermark();
	void ConfirmReportServer();
	void ApplySafeFrameScale(float SafeFrameScale);
};


// Class KillstreakUINew.KSGameHUDNew
// 0x00A8 (0x0670 - 0x05C8)
class AKSGameHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET
	class UClass*                                      AimAssistDebugWidgetClass;                                // 0x05D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UUserWidget>                  AimAssistDebugWidget;                                     // 0x05D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FDataTableInfo>                      BaseAssetDataTables;                                      // 0x05E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDynamicSkinTable*                           AssetDataTableManager;                                    // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMultiSkinObject*                            SkinObject;                                               // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSHUDStateTracker*                          HUDStateTracker;                                          // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0608(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHudFubarDel;                                            // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0668(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSGameHUDNew");
		return ptr;
	}


	void UIX_ReturnLobby();
	void ToggleAimAssistDebug();
	void SetHUDVisible(bool bVisible);
	void ReturnToHome();
	void OnViewedPlayerStateModRemoved(class UKSPlayerMod* PlayerMod, class UKSPlayerModInstance* ModInstance);
	void OnViewedPlayerStateModAdded(class UKSPlayerMod* PlayerMod, class UKSPlayerModInstance* ModInstance);
	void OnViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void OnToggleHUD();
	void OnAssetDataTableManagerChanged();
	void NetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState> LagType);
	bool IsPlayerMuted(class AKSPlayerState* KSPlayerState);
	bool IsPlayerInVoiceChannel(class AKSPlayerState* KSPlayerState);
	void HandleLoginStateChange(EPUMG_LoginState LoginState);
	void HandleFubar(EFubarDisplayReason Reason);
	class UKSHUDStateTracker* GetHUDStateTracker();
};


// Class KillstreakUINew.KSGameInfoOverlayBase
// 0x0020 (0x0500 - 0x04E0)
class UKSGameInfoOverlayBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSGameInfoOverlayBase");
		return ptr;
	}


	void HandlePlayerStateReady(class AKSPlayerState* PlayerState);
};


// Class KillstreakUINew.KSGamepadPromptWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSGamepadPromptWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSGamepadPromptWidget");
		return ptr;
	}


	void SetContext(const struct FButtonPromptContext& PromptContext);
	void PushContext(const struct FButtonPromptContext& PromptContext);
	bool PopContext(struct FButtonPromptContext* OutContext);
	void ClearAllContext();
	void ApplyContext(const struct FButtonPromptContext& Context);
};


// Class KillstreakUINew.KSHealthWidget
// 0x0020 (0x0520 - 0x0500)
class UKSHealthWidget : public UKSPawnWidget
{
public:
	float                                              CachedHealth;                                             // 0x0500(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CachedArmor;                                              // 0x0504(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CachedMaxHealth;                                          // 0x0508(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CachedOverheal;                                           // 0x050C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0510(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSHealthWidget");
		return ptr;
	}


	void OverhealChangeFromChar(class AKSCharacterBase* Character, bool bAnimatedChange);
	void OnOverhealChanged(float OldOverheal, float NewOverheal, bool bAnimatedChange);
	void OnHealthChanged(float OldHealth, float OldMaxHealth, float NewHealth, float NewMaxHealth, bool bAnimatedChange);
	void OnArmorChanged(float OldArmor, float NewArmor);
	void HealthChangeFromChar(class AKSCharacterBase* Character, bool bAnimatedChange);
	void HandlePawnOverhealChange(class AKSCharacterBase* Character);
	void HandlePawnHealthChange(class AKSCharacterBase* Character);
};


// Class KillstreakUINew.KSHUDStateTracker
// 0x0028 (0x0050 - 0x0028)
class UKSHUDStateTracker : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHUDMatchPhaseChanged;                                   // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              PhaseTime;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       TrackedCurrentMatchPhase;                                 // 0x003C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSHUDStateTracker");
		return ptr;
	}


	void PollMatchPhase();
	void HandleUpdatedMatchPhase(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void HandleGameStateBeginPlay(class AKSGameState* GameState);
};


// Class KillstreakUINew.KSInfoActorWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UKSInfoActorWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSInfoActorWidgetInterface");
		return ptr;
	}


	bool SetInfoActor(class AKSWidgetInfoActor* InfoActor);
};


// Class KillstreakUINew.KSInputManager
// 0x0000 (0x00D8 - 0x00D8)
class UKSInputManager : public UPUMG_InputManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSInputManager");
		return ptr;
	}

};


// Class KillstreakUINew.KSInspectPlayerInterface
// 0x0000 (0x0028 - 0x0028)
class UKSInspectPlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSInspectPlayerInterface");
		return ptr;
	}


	void UnbindEventFromInspectPlayerChanged(const struct FScriptDelegate& Callback);
	class AKSPlayerState* GetInspectPlayerState();
	void BindEventToInspectPlayerChanged(const struct FScriptDelegate& Callback);
};


// Class KillstreakUINew.KSJobSelectionWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSJobSelectionWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSJobSelectionWidget");
		return ptr;
	}


	TArray<TSoftObjectPtr<class UKSJobItem>> GetJobItems();
	class UKSStoreItemHelper* GetItemHelper();
	class UPUMG_StoreItem* GetAdOffer();
};


// Class KillstreakUINew.KSKillCardWidget
// 0x0008 (0x04E8 - 0x04E0)
class UKSKillCardWidget : public UKSWidget
{
public:
	float                                              DisplayDuration;                                          // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSKillCardWidget");
		return ptr;
	}


	void ShowPlayerAndMessage(class AKSPlayerState* PlayerState, const struct FText& Message);
	void ClearMessage(bool UseAnimations);
};


// Class KillstreakUINew.KSLobbyHUDNew
// 0x00F8 (0x06C0 - 0x05C8)
class AKSLobbyHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05C8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMinuteTimerUpdate;                                      // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x05E8(0x0010) MISSED OFFSET
	class UKSQueueDataFactory*                         QueueDataFactory;                                         // 0x05F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UKSFriendDataFactory*                        FriendDataFactory;                                        // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UKSPlayerQueryDataFactory*                   PlayerQueryDataFactory;                                   // 0x0608(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UKSEMODataFactory*                           EMODataFactory;                                           // 0x0610(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UKSPlayerWhoDataFactory*                     PlayerWhoDataFactory;                                     // 0x0618(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UKSMediaPlayerWidget>         CurrentMediaPlayerWidget;                                 // 0x0620(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0628(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTriggerBlockerChange;                                   // 0x0630(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               EnablePreMatchAnimation;                                  // 0x0640(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnablePostMatchAnimation;                                 // 0x0641(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableEOMIdleAnimation;                                   // 0x0642(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0643(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    LobbyWidgetReady;                                         // 0x0648(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    MainLobbyCameraSet;                                       // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    LoginCameraSet;                                           // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BeginPlayingPreMatchAnim;                                 // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EndPlayingPreMatchAnim;                                   // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EndPlayingPostMatchAnim;                                  // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	ELobbyCharacterAnimState                           CurrentLobbyCharacterAnimState;                           // 0x06A8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPUMG_MatchStatus                                  CurrentMatchStatus;                                       // 0x06A9(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x6];                                       // 0x06AA(0x0006) MISSED OFFSET
	float                                              LoadingScreenFadeInDelay;                                 // 0x06B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              LoadingScreenFadeInDuration;                              // 0x06B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x8];                                       // 0x06B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLobbyHUDNew");
		return ptr;
	}


	void TransitionCamera(const struct FName& CameraTag, float BlendTime);
	void ToggleDisablePartyLobbyCharacters(bool Disable);
	void TestSetStoreRotationOverride(const struct FString& DateTime);
	void TestPostMatchLobby(int PlayerXp, int RankedXp, int RogueXp, int ReputationEarned, int PlacementMatchNum, int BattlePassXp);
	void TestEventGrandPrizeAcquisition();
	void TestBattlePassAcquisition(int StartTier, int EndTier);
	void ShowPopupConfirmation(const struct FText& Message, ESocialMessageType MessageType);
	void SetNewLobbyAnimState(ELobbyCharacterAnimState TargetState);
	void ResetLobbyCharactersByIndex(TArray<ELobbyCharacterIndex> IndicesToReset);
	void ResetLobbyCharacters();
	void PlayLoopingLevelSequence(const struct FName& LvlSeqTag);
	void OnStoreVendorsLoaded(int GroupId, TArray<int> VendorIds);
	void OnNotEnoughCurreny(class UPUMG_StorePurchaseRequest* PurchaseRequest);
	void NotifyViewStateChange(const struct FName& NewRoute, const struct FName& PreviousRoute);
	bool IsPlayerMuted(class UPUMG_PlayerInfo* PlayerData);
	void HandleSpecificPartyIdDataUpdated(int64_t PlayerId);
	void HandleSpecificPartyDataUpdated(const struct FPUMG_PartyMemberData& PartyMember);
	void HandleSpecificPartyDataAdded(const struct FPUMG_PartyMemberData& PartyMember);
	void HandleReturnFromBattleLevelSeqStopped();
	void HandlePlayerLoadoutsUpdated();
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember, int MemberIndex);
	void HandlePartyEmoteMessageReceived(class UPUMG_PlayerInfo* Sender, TSoftObjectPtr<class UKSEmote> SoftEmotePtr);
	void HandlePartyDataUpdated();
	void HandleMatchStatusUpdated(EPUMG_MatchStatus MatchStatus);
	void HandleLoginUserChange();
	void HandleLoginStateChange(EPUMG_LoginState LoginState);
	void HandleExitToGameLevelSeqStopped();
	void HandleDenyPartyInvitation();
	void HandleAcceptPartyInvitation();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPlayerQueryDataFactory* GetPlayerQueryDataFactory();
	class UKSLobbyWidget* GetLobbyWidget();
	bool GetLobbyCharacterByPosition(ELobbyCharacterIndex CharacterIndex, class AKSLobbyCharacter** LobbyCharacter);
	class UKSQueueDataFactory* GetKSQueueDataFactory();
	class UKSJsonDataFactory* GetJsonDataFactory();
	bool GetJobSelectPreviewActorByPosition(ELobbyCharacterIndex CharacterIndex, class AKSJobSelectPreviewActor_Lobby** PreviewActor);
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSEMODataFactory* GetEMODataFactory();
	class UKSItem* GetDefaultPlayerAccountItem(EPlayerAccountSlot ItemSlot);
	bool GetCharacterIndexFromPartyIndex(int PartyMemberIndex, ELobbyCharacterIndex* OutCharIndex);
	void ForceMinuteTimerUpdate();
	void ForceEulaAccept();
	void CreateInitialPlayerLoadout();
	void CheckForVoucherRedemption();
	void CheckForExistingPenaltyTime();
	void CancelExitToGameLevelAnimStoppedHandling();
};


// Class KillstreakUINew.KSLobbyNameplateWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSLobbyNameplateWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLobbyNameplateWidget");
		return ptr;
	}


	void SetupRankedManager();
	void RefreshRankedData();
};


// Class KillstreakUINew.KSLobbyWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSLobbyWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLobbyWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginExistingBase
// 0x0000 (0x04E0 - 0x04E0)
class UKSLoginExistingBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginExistingBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginInventoryCheckViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSLoginInventoryCheckViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginInventoryCheckViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginInventoryCheck
// 0x0010 (0x04F0 - 0x04E0)
class UKSLoginInventoryCheck : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginInventoryCheck");
		return ptr;
	}


	void CancelLogin();
};


// Class KillstreakUINew.KSLoginProcessRewardsViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSLoginProcessRewardsViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginProcessRewardsViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginProcessRewards
// 0x0000 (0x04E0 - 0x04E0)
class UKSLoginProcessRewards : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginProcessRewards");
		return ptr;
	}


	void ProcessAccountRewards();
};


// Class KillstreakUINew.KSTabValidator
// 0x0000 (0x0028 - 0x0028)
class UKSTabValidator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSTabValidator");
		return ptr;
	}


	bool IsValidTab();
};


// Class KillstreakUINew.KSLoginRewardsTabValidator
// 0x0000 (0x0028 - 0x0028)
class UKSLoginRewardsTabValidator : public UKSTabValidator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginRewardsTabValidator");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginRewardsModalViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSLoginRewardsModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginRewardsModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginRewardsModal
// 0x0028 (0x0508 - 0x04E0)
class UKSLoginRewardsModal : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnLoginRewardsReady;                                      // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLoginRewardItem>                    LoginRewardItems;                                         // 0x04F0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                nDefaultItemsPerRow;                                      // 0x0500(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0504(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLoginRewardsModal");
		return ptr;
	}


	void UIX_AttemptClaimReward();
	void HandlePlayerChallengesReady();
	TArray<struct FLoginRewardItem> GrabLoginRewardsFromActivityInstance(class UKSActivityInstance* ActivityInstance);
	int GetNumberOfItemsToDisplay();
	int GetLoginRewardProgressCount();
	TArray<struct FLoginRewardItem> GetLoginRewardItems();
	struct FText GetLoginEventTimeRemaining();
};


// Class KillstreakUINew.KSLootSiteIconWidget
// 0x0008 (0x0320 - 0x0318)
class UKSLootSiteIconWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                           // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLootSiteIconWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLootSiteMarkerWidget
// 0x0020 (0x0338 - 0x0318)
class UKSLootSiteMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                           // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDisplayDistance;                                       // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bViewedPawnHasEndedFreeFall;                              // 0x0324(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	TArray<ELootSiteRarity>                            TagsToHide;                                               // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLootSiteMarkerWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLowAmmoAlertWidget
// 0x0020 (0x05C8 - 0x05A8)
class UKSLowAmmoAlertWidget : public UKSActiveWeaponComponentWidget
{
public:
	float                                              LowAmmoThreshold;                                         // 0x05A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ELowAmmoState                                      CachedLowAmmoState;                                       // 0x05AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAmmoStateChangedDel;                                    // 0x05B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSLowAmmoAlertWidget");
		return ptr;
	}


	ELowAmmoState GetAmmoState();
	ELowAmmoState CalcAmmoState();
	void AmmoStateChanged();
};


// Class KillstreakUINew.KSMapIconWidgetPool
// 0x0020 (0x0048 - 0x0028)
class UKSMapIconWidgetPool : public UObject
{
public:
	struct FString                                     PoolType;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UKSMapIconWidgetBase*>                MapIconWidgets;                                           // 0x0038(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMapIconWidgetPool");
		return ptr;
	}


	class UKSMapIconWidgetBase* GetMapIconWidget();
	void AddMapIconWidget(class UKSMapIconWidgetBase* MapIconWidget);
};


// Class KillstreakUINew.KSMarkerDisplayBase
// 0x0080 (0x06A0 - 0x0620)
class UKSMarkerDisplayBase : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0620(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMarkerDisplayBase");
		return ptr;
	}


	bool GetScreenPositionForMarker(const struct FVector& TargetLocation, float AnchorHeight, float MarginX, float MarginY, struct FVector2D* ScreenLocation);
};


// Class KillstreakUINew.KSDataMassInviteBase
// 0x0050 (0x0078 - 0x0028)
class UKSDataMassInviteBase : public UObject
{
public:
	struct FText                                       Title;                                                    // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_NativeAccessSpecifierPublic)
	struct FText                                       ButtonLabel;                                              // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnShouldShow;                                             // 0x0058(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnClose;                                                  // 0x0068(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDataMassInviteBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSDataIndividualInviteSetup
// 0x0020 (0x0098 - 0x0078)
class UKSDataIndividualInviteSetup : public UKSDataMassInviteBase
{
public:
	struct FScriptDelegate                             OnGetIsSelected;                                          // 0x0078(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnSelect;                                                 // 0x0088(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDataIndividualInviteSetup");
		return ptr;
	}


	class UKSDataIndividualInviteSetup* SetCallbacks(const struct FScriptDelegate& GetIsSelected, const struct FScriptDelegate& Select, const struct FScriptDelegate& ShouldShowPlayer, const struct FScriptDelegate& Close);
	EKSInviteSelectResult KSInviteSelect__DelegateSignature(class UKSPlayerInfo* playerinfo);
	bool KSInviteGetIsSelected__DelegateSignature(class UKSPlayerInfo* playerinfo);
};


// Class KillstreakUINew.KSDataBatchInviteSetup
// 0x0010 (0x0088 - 0x0078)
class UKSDataBatchInviteSetup : public UKSDataMassInviteBase
{
public:
	struct FScriptDelegate                             OnSelect;                                                 // 0x0078(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSDataBatchInviteSetup");
		return ptr;
	}


	class UKSDataBatchInviteSetup* SetCallbacks(const struct FScriptDelegate& Select, const struct FScriptDelegate& ShouldShowPlayer, const struct FScriptDelegate& Cancel);
	void KSBatchSelect__DelegateSignature(TArray<class UKSPlayerInfo*> playerinfo);
};


// Class KillstreakUINew.KSMassInviteModal
// 0x0018 (0x04F8 - 0x04E0)
class UKSMassInviteModal : public UKSWidget
{
public:
	TArray<class UKSPlayerInfo*>                       SelectedPlayers;                                          // 0x04E0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSDataMassInviteBase*                       RouteData;                                                // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMassInviteModal");
		return ptr;
	}


	bool UpdateRouteData();
	EKSInviteSelectResult SelectPlayer(class UKSPlayerInfo* Player);
	void RequestFriends(const struct FScriptDelegate& OnReceivePlayers);
	void KSInviteReceivePlayers__DelegateSignature(TArray<class UKSPlayerInfo*> Players);
	bool GetShouldSelect(class UKSPlayerInfo* Player);
	void CloseScreen(EKSInviteCloseAction CloseAction);
};


// Class KillstreakUINew.KSMatchInvitationModal
// 0x0018 (0x04F8 - 0x04E0)
class UKSMatchInvitationModal : public UKSWidget
{
public:
	struct FName                                       RouteName;                                                // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FTimerHandle                                InvitationExpireTimeout;                                  // 0x04F0(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMatchInvitationModal");
		return ptr;
	}


	void ShowInvitation(class UKSPlayerInfo* playerinfo, const struct FClientQueueInfo& QueueInfo);
	void ShowError(const struct FText& ErrorMessage);
	void OnInvitationExpired();
	void HandleReceivePlayerName(class UPUMG_PlayerInfo* playerinfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	float GetInvitationTotalTimeToExpire();
	float GetInvitationTimeRemaining();
	void DeclineInvite();
	void CloseScreen();
	void AcceptInvite(int MapId);
};


// Class KillstreakUINew.KSMatchResult
// 0x0048 (0x0528 - 0x04E0)
class UKSMatchResult : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x04E0(0x000C) MISSED OFFSET
	float                                              FinalResultEndTime;                                       // 0x04EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRoundResultAnnoucement                     RoundResultAnnoucement;                                   // 0x04F0(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	int                                                pTeamNum;                                                 // 0x0510(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                pOpposeTeamNum;                                           // 0x0514(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                pTeamScore;                                               // 0x0518(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                pOpposeTeamScore;                                         // 0x051C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsEndOfMatch;                                            // 0x0520(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMatchEndedInSurrender;                                   // 0x0521(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0522(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMatchResult");
		return ptr;
	}


	void UpdateRoundBaseScore(class AKSGameState_RoundGame* pGameState);
	void UpdateResultStatus(EGameResult Result, struct FText* Status);
	void ProcessResultAnnoucement(EGameResult Result);
	void HandleResultReceived(const struct FRoundResultAnnoucement& ResultAnnoucement);
	void HandleEndOfMatch();
	void GetTeamNames(struct FText* pTeamName, struct FText* pOpposingTeamName);
	void GetSurrenderText(struct FText* pSurrenderText);
};


// Class KillstreakUINew.KSMediaPlayerWidget
// 0x0058 (0x0538 - 0x04E0)
class UKSMediaPlayerWidget : public UKSWidget
{
public:
	TSoftObjectPtr<class UDataTable>                   MediaPlayerPlaylistEntries;                               // 0x04E0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0508(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMediaPlayerWidget");
		return ptr;
	}


	void UIX_SkipEntry();
	void OnShouldShowPromptChanged(bool bCanSkipEntry);
	void OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent);
	void OnEndLoadingPlaylist();
	void OnBeginLoadingPlaylist();
	bool IsCurrentEntrySkippable();
};


// Class KillstreakUINew.KSMinimapWidgetBase
// 0x0010 (0x0630 - 0x0620)
class UKSMinimapWidgetBase : public UKSMapWidgetBase
{
public:
	EMinimapWidgetClampStyle                           ClampStyle;                                               // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0621(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSMinimapWidgetBase");
		return ptr;
	}


	void UpdateMapMaterialTransform(class UMaterialInstanceDynamic* MapMaterial, float NormalizedX, float NormalizedY, float Rotation, float Scale);
};


// Class KillstreakUINew.KSModelViewer
// 0x0000 (0x0028 - 0x0028)
class UKSModelViewer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSModelViewer");
		return ptr;
	}


	static void ViewModelByName(class UObject* WorldContextObject, const struct FName& InTargetItem, class UDataTable* InDataTable);
	static void ViewModelAttachment(class UObject* WorldContextObject, class UKSWeaponAttachment* InAttachment, const struct FName& InSpawnOnActorName, unsigned char Slot);
	static void ViewModel(class UObject* WorldContextObject, class UKSItem* InItem, const struct FName& InSpawnOnActorName, EWeaponStateNew DefaultWeaponState, bool InScaleToFitTargetActor, const struct FRotator& InDefaultRotation, bool InBindControllerToSpawner);
	static void UnbindControllerFromSpawner(class UObject* WorldContextObject, const struct FName& InSpawnActorName);
	static void UnbindAllControllersFromSpawners(class UObject* WorldContextObject);
	static void SetAnimation(class UObject* WorldContextObject, class UAnimSequence* InAnim, const struct FName& InSpawnOnActorName, bool bLooping);
	static void HideModelAttachment(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, unsigned char Slot);
	static void ClearModelAttachments(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	static void ClearModel(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName);
	static bool BindDelForWeaponModelSet(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, const struct FScriptDelegate& InEventCallback);
	static void BindControllerToSpawner(class UObject* WorldContextObject, const struct FName& InSpawnActorName);
};


// Class KillstreakUINew.KSModWidget_DetectEnemy
// 0x0018 (0x04F8 - 0x04E0)
class UKSModWidget_DetectEnemy : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSModWidget_DetectEnemy");
		return ptr;
	}


	void OnDetectChanged(class UKSModInst_DetectEnemy* DetectEnemyModInst, bool bIsDetectingEnemy);
	class UHorizontalBox* GetIconBox();
};


// Class KillstreakUINew.KSModWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UKSModWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSModWidgetInterface");
		return ptr;
	}


	bool RemoveModInstance(class UKSPlayerModInstance* InInstance);
	bool AddModInstance(class UKSPlayerModInstance* InInstance);
};


// Class KillstreakUINew.KSNavTabWidget
// 0x0040 (0x0520 - 0x04E0)
class UKSNavTabWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnNavTabSelected;                                         // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavTabUnselected;                                       // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	bool                                               bSelected;                                                // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                // 0x0501(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0502(0x0006) MISSED OFFSET
	struct FText                                       NavText;                                                  // 0x0508(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSNavTabWidget");
		return ptr;
	}


	void UnselectNavTab();
	void SetSelected(bool bNewSelected);
	void SetDisabled(bool bNewDisabled);
	void SelectNavTab();
	bool IsSelected();
	bool IsDisabled();
};


// Class KillstreakUINew.KSNewsRotatorData
// 0x0020 (0x0090 - 0x0070)
class UKSNewsRotatorData : public UKSJsonData
{
public:
	class UTexture2DDynamic*                           Image;                                                    // 0x0070(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ENewsActions                                       PanelAction;                                              // 0x0078(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     ActionDetails;                                            // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSNewsRotatorData");
		return ptr;
	}

};


// Class KillstreakUINew.KSNewsRotatorWidget
// 0x0018 (0x04F8 - 0x04E0)
class UKSNewsRotatorWidget : public UKSWidget
{
public:
	struct FString                                     JsonSection;                                              // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TimePerSection;                                           // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSNewsRotatorWidget");
		return ptr;
	}


	bool ShouldShowPanel(class UKSNewsRotatorData* Panel);
	void OnJsonChanged();
	TArray<class UKSNewsRotatorData*> GetPanelData();
	class UKSJsonDataFactory* GetJsonDataFactory();
};


// Class KillstreakUINew.KSNPEDataFactory
// 0x0000 (0x0038 - 0x0038)
class UKSNPEDataFactory : public UPUMG_DataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSNPEDataFactory");
		return ptr;
	}


	void UIX_ClaimTutorialActivity();
	void UIX_ClaimRegionSelectedActivity();
	void SkipTutorial();
	bool ShouldForceTutorial();
	void QueueTutorial();
	bool HasClaimedActivity(const struct FGameplayTag& ActivityTag);
	class UKSQueueDataFactory* GetQueueDataFactory();
	void ClaimActivity(const struct FGameplayTag& ActivityTag);
};


// Class KillstreakUINew.KSOverlayTabHubRouteData
// 0x0008 (0x0030 - 0x0028)
class UKSOverlayTabHubRouteData : public UObject
{
public:
	struct FName                                       RedirectViewName;                                         // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSOverlayTabHubRouteData");
		return ptr;
	}

};


// Class KillstreakUINew.KSOverlayTabHubBase
// 0x0080 (0x0560 - 0x04E0)
class UKSOverlayTabHubBase : public UKSWidget
{
public:
	class UDataTable*                                  ViewsTable;                                               // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FName>                               ViewNames;                                                // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       CurrentViewName;                                          // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0500(0x0050) MISSED OFFSET
	struct FName                                       MyViewRouteName;                                          // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSOverlayTabHubBase");
		return ptr;
	}


	void SetFocusToView();
	void SetFocusToTabs();
	void SelectViewAndShow(const struct FName& ViewName);
	void OnViewFocused();
	void OnTabsFocused();
	struct FName GetLandingView();
	class UPUMG_Widget* GetCurrentViewWidget();
	TArray<class UPUMG_Widget*> GetAllViews();
	void CreateAllViews();
	void ClearAllViews();
	void ChangeView(const struct FName& ViewName);
	void AddView(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo);
};


// Class KillstreakUINew.KSPartyDataFactory
// 0x0028 (0x01B0 - 0x0188)
class UKSPartyDataFactory : public UPUMG_PartyDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnEmoteMessageReceived;                                   // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0198(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPartyDataFactory");
		return ptr;
	}


	void SetSelectedQueueId(int QueueId);
	void PlayEmoteInParty(class UKSEmote* Emote);
	int GetSelectedQueueId();
	int GetPartyMinimumLevel();
	int GetHighestDeserterPenaltySeconds();
	bool CanPartyQueueForRanked(const struct FString& RankedSeasonKey);
	void BroadcastPartyInvitationError(const struct FText& InvitationError);
};


// Class KillstreakUINew.KSPartyManagerWidgetBase
// 0x0010 (0x04F0 - 0x04E0)
class UKSPartyManagerWidgetBase : public UKSWidget
{
public:
	TArray<struct FPUMG_PartyMemberData>               CachedDisplayedPartyMembers;                              // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPartyManagerWidgetBase");
		return ptr;
	}


	void RefreshFromPartyData();
	void HandlePartyMemberUpdateByName(const struct FText& PlayerName);
	void HandlePartyMemberUpdateByInfo(class UPUMG_PlayerInfo* playerinfo);
	void HandlePartyMemberUpdateById(int64_t PlayerId);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& MemberData);
	class UPUMG_PlayerInfo* GetSuggestedInvite();
	class UKSPartyDataFactory* GetPartyDataFactory();
	TArray<struct FPUMG_PartyMemberData> GetCachedDisplayedPartyMembers();
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers);
	void ApplyEmptyPartyData();
};


// Class KillstreakUINew.KSPerkTreeBase
// 0x0040 (0x0520 - 0x04E0)
class UKSPerkTreeBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnPerkHovered;                                            // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPerkSelected;                                           // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPerkUnlockRequest;                                      // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     HoverTarget;                                              // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0518(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPerkTreeBase");
		return ptr;
	}


	void SetCursorLerping(bool bLerping);
	void RefreshEdge(class UKSPerkTreeEdgeBase* Edge, int column, int Row, TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> NodesMap);
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> InitializeNodes();
	void HandleTreeNodeSelected(class UKSPerkTreeNodeBase* SelectedNode, const struct FCustomLoadoutItem& SelectedPerk, bool bAlreadyEquipped);
	void HandleTreeNodeHovered(class UKSPerkTreeNodeBase* HoveredNode, const struct FCustomLoadoutItem& HoveredPerk);
	class UWidget* GetHoverCursor();
	class UKSPerkTreeNodeBase* GetDefaultFocusNode();
	void BindNode(class UKSPerkTreeNodeBase* TreeNode);
};


// Class KillstreakUINew.KSPerkTreeEdgeBase
// 0x0018 (0x04F8 - 0x04E0)
class UKSPerkTreeEdgeBase : public UKSWidget
{
public:
	bool                                               bTopEnabled;                                              // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLeftEnabled;                                             // 0x04E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDiagonalEnabled;                                         // 0x04E2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBackDiagonalEnabled;                                     // 0x04E3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                AccentColor;                                              // 0x04E4(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPerkTreeEdgeBase");
		return ptr;
	}


	void SetViewByState(const struct FKSPerkTreeEdgeInfo& EdgeInfo);
};


// Class KillstreakUINew.KSPerkTreeNodeBase
// 0x0060 (0x0540 - 0x04E0)
class UKSPerkTreeNodeBase : public UKSWidget
{
public:
	TSoftObjectPtr<class UKSPlayerMod>                 AssignedPerk;                                             // 0x04E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTreeNodeHovered;                                        // 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTreeNodeSelected;                                       // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestPerkPurchase;                                    // 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsPlaceholder;                                           // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPerkTreeNodeState                                 NodeState;                                                // 0x0539(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x053A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPerkTreeNodeBase");
		return ptr;
	}


	void SetNodeState(EPerkTreeNodeState NewNodeState);
	void RefreshView();
	EPerkTreeNodeState GetNodeState();
};


// Class KillstreakUINew.KSViewedActiveWeaponWidget
// 0x0010 (0x04F8 - 0x04E8)
class UKSViewedActiveWeaponWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedActiveWeaponWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerAmmoLoaderWidget
// 0x0118 (0x0610 - 0x04F8)
class UKSPlayerAmmoLoaderWidget : public UKSViewedActiveWeaponWidget
{
public:
	TSoftObjectPtr<class UClass>                       PendingAmmoWidgetClass;                                   // 0x04F8(0x0028) (CPF_Transient, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass*                                      LoadedAmmoWidgetClass;                                    // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0528(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerAmmoLoaderWidget");
		return ptr;
	}


	void SetActiveAmmoWidget(class UClass* NewWidgetClass, class AKSWeapon* NewWeapon);
	class UKSAmmoWidget* GetActiveAmmoWidget();
	void ClearActiveAmmoWidget();
};


// Class KillstreakUINew.KSPlayerAwardsPanelWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSPlayerAwardsPanelWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerAwardsPanelWidget");
		return ptr;
	}


	void GetSortedRecentlyProgressedData(TArray<struct FPlayerAwardsPanelData> AwardData, TArray<struct FPlayerAwardsPanelData>* RecentlyProgressedData);
	void GetActivityAwardData(TArray<struct FPlayerAwardsPanelData>* AwardData);
};


// Class KillstreakUINew.KSPlayerCardModuleBase
// 0x0010 (0x04F0 - 0x04E0)
class UKSPlayerCardModuleBase : public UKSWidget
{
public:
	class UPUMG_PlayerInfo*                            AssignedPlayerInfo;                                       // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerCardModuleBase");
		return ptr;
	}


	void View_SetPlayer(class UPUMG_PlayerInfo* playerinfo, EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending);
	void OnPlayerUpdate(class UPUMG_PlayerInfo* playerinfo, EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending);
	void HandlePlayerDataUpdated(class UPUMG_PlayerInfo* playerinfo);
};


// Class KillstreakUINew.KSPlayerCosmeticWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSPlayerCosmeticWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerCosmeticWidget");
		return ptr;
	}


	void GetItemsForSlot(EPlayerAccountSlot SlotType, TArray<TSoftObjectPtr<class UKSItem>>* CosmeticItems);
};


// Class KillstreakUINew.KSPlayerDataFactory
// 0x0018 (0x00C8 - 0x00B0)
class UKSPlayerDataFactory : public UPUMG_PlayerDataFactory
{
public:
	class UKSPlayerStatsManager*                       PlayerStatsManager;                                       // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnPlayerLevelChanged;                                     // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerDataFactory");
		return ptr;
	}


	bool ShouldDisplayRankedLevel();
	void HandlePlayerRankIncremented(class UKSActivityInstance* ActivityInstance, int Count);
	void HandlePlayerRankChanged(class UKSActivityInstance* Activity, int Tier, int Count);
	void HandlePlayerLevelIncremented(class UKSActivityInstance* ActivityInstance, int Count);
	void HandlePlayerLevelChanged(class UKSActivityInstance* Activity, int Tier, int Count);
	int GetRankedLevel();
	float GetPlayerLevelPercent();
	int GetPlayerLevel();
	int GetPlayerId();
	class UKSCurrency* GetCurrencyItemByItemId(int CurrencyItemId);
	int GetCurrencyCountByItemId(int CurrencyItemId);
};


// Class KillstreakUINew.KSPlayerHealthSegmentBase
// 0x0000 (0x04E0 - 0x04E0)
class UKSPlayerHealthSegmentBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerHealthSegmentBase");
		return ptr;
	}


	void View_SetResidualValue(float PercentValue);
	void View_SetResidualColor(const struct FLinearColor& Color);
	void View_SetMainValue(float PercentValue, bool bCanTriggerPulse);
	void View_SetMainColor(const struct FLinearColor& Color);
	void View_PlayEmptiedPulse();
	void View_PlayDamagePulse(const struct FLinearColor& PeakColor, const struct FLinearColor& BaseColor);
};


// Class KillstreakUINew.KSViewedTargetHealthWidget
// 0x0010 (0x0530 - 0x0520)
class UKSViewedTargetHealthWidget : public UKSHealthWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0520(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedTargetHealthWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerHealthWidgetBase
// 0x0030 (0x0560 - 0x0530)
class UKSPlayerHealthWidgetBase : public UKSViewedTargetHealthWidget
{
public:
	struct FPlayerHealthMeterState                     CurrentHealthMeterState;                                  // 0x0530(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0548(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerHealthWidgetBase");
		return ptr;
	}


	void View_SetResidualPercent(float ResidualPercent);
	void View_SetResidualMode(bool IsHealing);
	void View_SetResidualAlpha(float ResidualAlpha);
	void View_SetHealthTextValue(float HealthValue, float OverhealValue);
	void View_SetHealthPercent(float HealthPercent);
	void View_SetHealthMode(bool IsDowned, bool IsOverhealed);
	void View_PlayDamagePulse();
	void View_OnDeathStateChanged();
	void OnJobChanged(class UKSJobItem* Job);
	void OnHealthMeterStateChanged();
	void OnHealthDecreased();
	void HandlePlayerDownedChanged(class AKSPlayerState* pKSPlayerState);
	void HandleJobChanged();
	void HandleDeathStateChanged();
};


// Class KillstreakUINew.JobSelectionEntryDetails
// 0x0038 (0x0060 - 0x0028)
class UJobSelectionEntryDetails : public UObject
{
public:
	struct FJobSelectionEntry                          JobEntry;                                                 // 0x0028(0x0028) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x0050(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AllowIfUnowned;                                           // 0x0058(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.JobSelectionEntryDetails");
		return ptr;
	}


	bool IsSelf();
	bool IsOwned();
	struct FText GetJobName();
	class UKSJobItem* GetJobItem();
};


// Class KillstreakUINew.KSPlayerJobSelectWidgetBase
// 0x0050 (0x0530 - 0x04E0)
class UKSPlayerJobSelectWidgetBase : public UKSWidget
{
public:
	class UKSJobSelectionManager*                      JobSelectionManager;                                      // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSJobSelectionComponent*                    JobSelectionComponent;                                    // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UJobSelectionEntryDetails*>           JobDetailEntries;                                         // 0x04F0(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EPlayerSelectionState                              CurrentPlayerSelectionState;                              // 0x0500(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	TArray<class UJobSelectionEntryDetails*>           EnemyJobDetailsEntries;                                   // 0x0508(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UKSJobSelectionComponent>     BoundEnemyJobSelectionComponent;                          // 0x0518(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UKSJobSelectionComponent>     BoundLocalJobSelectionComponent;                          // 0x0520(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerJobSelectWidgetBase");
		return ptr;
	}


	bool UIX_RequestJobSelect(class UJobSelectionEntryDetails* JobEntry, EJobSelectionState RequestedState);
	void OnResetSelection();
	void OnPlayerSelectionStateChanged(EPlayerSelectionState NewState);
	void OnJobEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam);
	void OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*> JobEntries, bool EnemyTeam);
	void HandleTeamAddedToMatch(class AKSTeamState* NewTeam);
	void HandleNewJobSelectionComponent(class UKSJobSelectionComponent* NewJobSelectionComponent);
	void HandleJobSelectionManagerReady(class UKSJobSelectionManager* JobSelectionManager);
	void HandleJobSelectionInitialized();
	void HandleJobEntryStateChangedForEnemies(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryStateChanged(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryAddedForEnemies(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryAdded(const struct FJobSelectionEntry& JobEntry);
	void HandleJobEntryAcknowledge(int ItemId, bool bSuccess, EJobSelectionState RequestState);
	class UKSJobSelectionComponent* GetJobSelectionComponent();
	class UKSJobItem* GetJobItemById(int JobItemId);
	void BindListenersForTeam(class AKSTeamState* Team);
};


// Class KillstreakUINew.KSPlayerQueryDataFactory
// 0x0118 (0x0150 - 0x0038)
class UKSPlayerQueryDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0038(0x0100) MISSED OFFSET
	struct FTimerHandle                                CheckTimerHandle;                                         // 0x0138(0x0008) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerQueryDataFactory");
		return ptr;
	}


	bool QueryPlayersByNameWithProfiles(const struct FText& PlayerName, const struct FScriptDelegate& OnReponse, struct FKSPlayerQueryHandle* OutHandle);
	bool QueryPlayersByName(const struct FText& PlayerName, const struct FScriptDelegate& OnReponse, struct FKSPlayerQueryHandle* OutHandle);
	void OnTimeoutCheck();
	struct FText GetQueriedName(const struct FKSPlayerQueryHandle& InHandle);
	static struct FText GetPlayerQueryErrorMessage(EKSPlayerQueryError Error);
	void CancelQuery(struct FKSPlayerQueryHandle* InHandle);
};


// Class KillstreakUINew.KSPlayerShopWidgetBase
// 0x0018 (0x04F8 - 0x04E0)
class UKSPlayerShopWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class AKSPlayerShop*                               PlayerShop;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerShopWidgetBase");
		return ptr;
	}


	void TriggerDisplayUpdate(bool ForceUpdate);
	void ShopItemChanged(const struct FShopItem& ChangedItem);
	void SetShopState(bool IsOpen);
	void SetShopContent();
	void SetPromptShow(bool ShouldShowPrompt);
	void SetCashValue(int CashValue);
	void PurchaseAcknowledge(EShopItemType ShopItemType);
	void HandleTeamsFlipped();
	void HandleShopOpened(class AKSPlayerShop* KSPlayerShop);
	void HandleShopItemChanged(const struct FShopItem& ChangedItem);
	void HandleShopClosed(class AKSPlayerShop* KSPlayerShop);
	void HandleShopAvailabilityChanged(class AKSPlayerShop* KSPlayerShop);
	void HandlePurchaseAcknowledged(EShopItemType ShopItemType, bool bSuccess);
	void HandleCashChanged(int Cash, int Delta);
	void CheckForValidPlayerState();
};


// Class KillstreakUINew.KSPlayerWhoDataFactory
// 0x0000 (0x0060 - 0x0060)
class UKSPlayerWhoDataFactory : public UPUMG_PlayerWhoDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPlayerWhoDataFactory");
		return ptr;
	}


	void ClearSearchResults();
};


// Class KillstreakUINew.KSPointObjectiveMarkerWidget
// 0x0090 (0x03A8 - 0x0318)
class UKSPointObjectiveMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0318(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPointObjectiveMarkerWidget");
		return ptr;
	}


	void ViewSetCaptureProgress(float ProgressPercent);
	void ViewApplyTimerValue(float TimerSeconds, float TotalTimerSeconds);
	bool ShouldHideObjectiveIcon();
	void SetView(const struct FKSPointObjectiveMarkerViewState& ViewState);
	void SetTeamColorsForState(TMap<EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors);
	bool SetTeamColorForState(EPointObjectiveMarkerTeamState ObjectiveState, const struct FLinearColor& StateColor);
	void OnControlTeamScoreUpdated(class AKSTeamState* TeamState);
	bool IsInTimerState();
	bool IsInProgressState();
	bool IsInMatchTimerState();
	bool IsInLockedState();
	bool IsInCountdownState();
	bool IsInContestedState();
	bool IsInCapturedState();
	void HandlePhaseChanged(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& Objective);
	void HandleControlTeamScoreUpdated(class AKSTeamState* TeamState, class AKSControlPoint* ControlPoint);
	void HandleBombStateChanged(const struct FKSNeutralBombState& BombState);
	bool GetTeamColorForState(struct FLinearColor* TeamColor);
	struct FKSPointObjectiveMarkerViewState GetCurrentViewState();
	class AKSObjectiveBase* GetAssociatedObjective();
	bool DoesAttackingTeamExist(bool* IsLocalPlayerOnAttackingTeam);
	void ControlPointStateUpdated(class AKSControlPoint* Objective);
};


// Class KillstreakUINew.KSPortalOffersWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSPortalOffersWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPortalOffersWidget");
		return ptr;
	}


	TArray<class UPUMG_StoreItem*> GetPortalOfferItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSProgressionTallyWidget
// 0x0170 (0x0650 - 0x04E0)
class UKSProgressionTallyWidget : public UKSWidget
{
public:
	struct FPlayerProgression                          PlayerProgressionData;                                    // 0x04E0(0x0170) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSProgressionTallyWidget");
		return ptr;
	}


	void SetPlayerProgressionData(const struct FPlayerProgression& PlayerProgression);
	void GetPlayerProgressionBreakdown(int* BaseXP, int* EventBonusXP, int* WinBonusXP, int* MiscGainedXP);
	struct FProgressionTallyMiscXPInfo GetMiscXPInfo();
};


// Class KillstreakUINew.KSProgressMeterWidgetBase
// 0x0020 (0x0500 - 0x04E0)
class UKSProgressMeterWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSProgressMeterWidgetBase");
		return ptr;
	}


	void SetDeltaAnimationParams(float BasePercent, float DeltaPercent, float AnimTime);
	void PlayDeltaAnimation(float StartDelay);
	void OnDeltaAnimationTicked();
	void OnDeltaAnimationStarted();
	void OnDeltaAnimationFinished(bool bLevelChange);
	bool IsPlayingDeltaAnimation();
	void EnableDeltaAnimation();
	void ApplyMeterPercentages_Raw(float BasePercent, float DeltaPercent);
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent);
};


// Class KillstreakUINew.KSStoreItemWithPurchaseData
// 0x0018 (0x0040 - 0x0028)
class UKSStoreItemWithPurchaseData : public UObject
{
public:
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PurchaseQuantity;                                         // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UKSEquipOnAcquisitionData*                   EquipOnPurchase;                                          // 0x0038(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSStoreItemWithPurchaseData");
		return ptr;
	}

};


// Class KillstreakUINew.KSPurchaseConfirmationWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSPurchaseConfirmationWidget : public UKSWidget
{
public:
	class UPUMG_StoreItem*                             PurchaseItem;                                             // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                PurchaseQuantity;                                         // 0x04E8(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPurchaseConfirmationWidget");
		return ptr;
	}


	bool TryChangePurchaseQuantity(int QuantityChangeAmount);
	void SetupEquipOnPurchase(class UKSEquipOnAcquisitionData* EquipOnPurchaseData);
	void PromptAlreadyPurchasing();
	class UKSStoreItemHelper* GetStoreItemHelper();
	bool CanChangePurchaseQuantity(int QuantityChangeAmount);
};


// Class KillstreakUINew.KSPurchaseModal
// 0x0000 (0x04E0 - 0x04E0)
class UKSPurchaseModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSPurchaseModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowPurchaseModal(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price);
	class UPUMG_StoreItemHelper* GetStoreItemHelper();
};


// Class KillstreakUINew.KSQueueDataFactory
// 0x0098 (0x02A0 - 0x0208)
class UKSQueueDataFactory : public UPUMG_QueueDataFactory
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetQueueId;                                             // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueueErrorRelevantStateChanged;                         // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                ChunksInstallingQueueId;                                  // 0x0238(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DefaultSelectedQueueId;                                   // 0x023C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetQueueInputState;                                     // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<int64_t>                                    PreviousCustomMatchMemberIds;                             // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                SelectedQueueId;                                          // 0x0260(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TimeoutForSwitchFromShelteredToMainQueue;                 // 0x0264(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bWaitingOnLeaveForShelteredSwitch;                        // 0x0268(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bWaitingOnJoinForShelteredSwitch;                         // 0x0269(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x026A(0x0002) MISSED OFFSET
	int                                                MaxRetriesForFindingPartyMemberLevels;                    // 0x026C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TimeBetweenRetriesForFindingPartyMemberLevels;            // 0x0270(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	int                                                NumRetriesForFindingPartyMemberLevels;                    // 0x0278(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	TArray<struct FMapDetail>                          MapInfos;                                                 // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  QueueDetailDataTable;                                     // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSQueueDataFactory");
		return ptr;
	}


	TArray<struct FClientQueueInfo> SortQueues(TArray<struct FClientQueueInfo> ClientCachedQueueInfo, bool IsAlphanumerical);
	bool SetSelectedQueueId(int QueueId);
	void SetPreviousCustomMatchMemberIds(TArray<int64_t> PreviousMembers);
	void RetryQueuingForSheltered(int QueueId);
	void PopulateMapInfos();
	void OnPartyMemberUpdate(const struct FPUMG_PartyMemberData& Member);
	void OnPartyMemberEvent(int64_t PlayerId);
	void OnPartyEvent();
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	bool JoinSelectedQueue();
	bool IsTutorialQueue(int QueueId);
	bool IsRankedQueue(int QueueId);
	bool IsQueueAvailableOnPlatform(int QueueId);
	bool IsCustomSpectateEnabled();
	void HandleShelteredMMTimeout(int QueueId);
	void HandleShelteredMMSwitchFinish(bool bSendNotify, bool bClearTimer);
	void HandleShelteredMMQueueSwitch(int QueueId);
	int GetSelectedShelteredQueueId();
	int GetSelectedQueueId();
	bool GetQueueInfoById(int QueueId, struct FClientQueueInfo* InClientQueueInfo);
	int GetPenaltyTime();
	bool GetMapRotationsByQueueId(int QueueId, TArray<int>* MapIds);
	bool GetMapInfoById(int MapId, struct FMapDetail* MapDetail);
	TArray<struct FClientQueueInfo> GetCustomQueues();
	bool GetCurrentCustomMatchInfo(struct FClientQueueInfo* InClientQueueInfo);
	static bool FormatQueueJoinErrorMessage(const struct FClientQueueInfo& Queue, EKSQueueJoinError Error, struct FText* OutErrorMessage);
	int DetermineQueueIdForShelteredMM(int QueueId, const struct FClientQueueInfo& QueueInfo);
	EKSQueueJoinError CheckQueueJoinableById(int QueueId);
	EKSQueueJoinError CheckQueueJoinable(const struct FClientQueueInfo& Queue);
};


// Class KillstreakUINew.KSQueuedMessageWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSQueuedMessageWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSQueuedMessageWidget");
		return ptr;
	}


	void QueueMessage(const struct FText& Message);
	bool GetNextMessage(struct FText* Message);
};


// Class KillstreakUINew.KSQueueWidgetBase
// 0x0000 (0x04E0 - 0x04E0)
class UKSQueueWidgetBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSQueueWidgetBase");
		return ptr;
	}


	void UpdateQueueSelection();
	void UpdateQueuePermissions();
	bool UIX_AttemptRejoinMatch();
	bool UIX_AttemptLeaveMatch();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetCurrentlySelectedQueue(int QueueId);
	void ReceiveMatchStatusUpdate(EPUMG_MatchStatus CurrentMatchStatus);
	void OnSelectedQueueUpdate(const struct FClientQueueInfo& CurrentSelectedQueue);
	void OnQueueStateUpdate(EPUMG_MatchStatus CurrentMatchStatus);
	void OnQueuePermissionUpdate(bool CanQueue);
	void OnControlQueuePermissionUpdate(bool CanControl);
	bool IsValidQueue(int QueueId);
	void HandleSelectedQueueIdSet();
	void HandlePartyMemberRemoved(int64_t PartyMemberId);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember);
	void HandleMatchStatusUpdate(EPUMG_MatchStatus MatchStatus);
	void HandleConfirmLeaveQueue();
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo> ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	void GetQueuePermissions(bool* CanControl, bool* CanQueue);
	bool GetQueueInfoById(int QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UKSPlayerDataFactory* GetPlayerDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
};


// Class KillstreakUINew.KSQueueTimerWidgetBase
// 0x0010 (0x04F0 - 0x04E0)
class UKSQueueTimerWidgetBase : public UKSQueueWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSQueueTimerWidgetBase");
		return ptr;
	}


	void OnUpdateQueueTimerState(EQueueTimerState State);
	void OnUpdateQueueTime(float TimeSecs);
	float GetQueueTime_TotalSecs();
	int GetQueueTime_PartSecs();
	int GetQueueTime_PartMins();
	int GetQueueTime_PartHours();
	EQueueTimerState GetCurrentTimerState();
};


// Class KillstreakUINew.KSQuickPlay
// 0x00F0 (0x05D0 - 0x04E0)
class UKSQuickPlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedQueueChanged;                                   // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               CanCurrentlyJoinQueue;                                    // 0x04F0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CanControlQueue;                                          // 0x04F1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04F2(0x0002) MISSED OFFSET
	int                                                DefaultSelectedQueueId;                                   // 0x04F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                ChunksInstallingQueueId;                                  // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x14];                                      // 0x04FC(0x0014) MISSED OFFSET
	bool                                               ReadyForQueueing;                                         // 0x0510(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FClientQueueInfo                            CurrentSelectedQueue;                                     // 0x0518(0x00B8) (CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSQuickPlay");
		return ptr;
	}


	void UpdateQueuePermissions();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	TArray<struct FQueueSection> SortQueueSections(TArray<struct FQueueSection> QueueSections);
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetDefaultSelectedQueue(struct FClientQueueInfo* NewSelectedQueue);
	bool SetCurrentlySelectedQueue(int QueueId);
	void ReceiveMatchStatusUpdate(EPUMG_MatchStatus CurrentMatchStatus);
	void OnQueuePermissionChanged(bool CanQueue);
	void OnControlQueuePermissionChanged(bool CanControl);
	bool IsValidQueue(int QueueId);
	void HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember);
	EQueueType GetQueueTypeFromName(const struct FName& QueueType);
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo> ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	bool GetQueueInfoById(int QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	int GetDefaultSelectedQueueId();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
	bool CheckForDirtyQueues(TArray<struct FClientQueueInfo>* NewClientCachedQueueInfo);
	bool CheckForCustomQueues(TArray<struct FClientQueueInfo>* CustomMatchQueueInfo);
};


// Class KillstreakUINew.KSQuickPlayWidget
// 0x0018 (0x04F8 - 0x04E0)
class UKSQuickPlayWidget : public UKSQueueWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSQuickPlayWidget");
		return ptr;
	}


	void UpdateState();
	void SetIsPendingQueueUpdate(bool IsPending);
	void OnUpdateQuickPlayState(EQuickPlayQueueState QueueState);
	void OnUpdateQuickPlayCanPlay(bool CanPlay);
	void OnUpdateQueueTimeElapsed(float TimeElapsed);
	void OnUpdatePenaltyTimeLeft(int TimeLeft);
	bool IsPendingQueueUpdate();
	EQuickPlayQueueState GetSelectedQueueState();
	bool GetGameModeDisplayName(struct FText* GameModeDisplayName);
	EQuickPlayQueueState GetCurrentQuickPlayState();
};


// Class KillstreakUINew.KSRadialSelectionWidgetBase
// 0x00B0 (0x0590 - 0x04E0)
class UKSRadialSelectionWidgetBase : public UKSWidget
{
public:
	TArray<struct FGameplayTag>                        EmoteSlots;                                               // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        QuipSlots;                                                // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        CommunicationSlots;                                       // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        SpraySlots;                                               // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FName>                               AdditionalInputsToDisableOnOpen;                          // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<EMercCosmeticSlot>                          RadialMenuCosmeticSlots;                                  // 0x0530(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCycleBetweenMenusEnabled;                                // 0x0540(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0541(0x003F) MISSED OFFSET
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x0580(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x0588(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRadialSelectionWidgetBase");
		return ptr;
	}


	void UpdateLastSelectedIndex(int NewIndex);
	void UpdateLastHoveredIndex(int NewHoveredIndex);
	void TraceSelectionCursor(float Radius, float Angle);
	void ShowSelector();
	void SetupForRadialWheelMode(ERadialWheelMode NewRadialWheelMode);
	void RadialOptionUnhover();
	void RadialOptionSelected(int Index);
	void RadialOptionHovered(int Index);
	void OpenSpecifiedRadialMenu(EMercCosmeticSlot CosmeticSlot);
	void OnRadialMenuUseLastSelection(EMercCosmeticSlot ButtonCosmeticSlot);
	void OnRadialMenuReleased(EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold);
	void OnRadialMenuPressed(EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold);
	void OnRadialMenuForceClosed();
	void OnCycleMenusRight();
	void OnCycleMenusLeft();
	void OnCycledMenus(bool bCycledRight);
	bool IsSelectorVisible();
	bool IsSelectorActive();
	bool IsCycleBetweenMenusEnabled();
	void InitializeTracking();
	void HideSelector();
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> NewInputState);
	float GetWheelSize();
	bool GetPingIconByType(EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon);
	bool GetPingIconByMessage(EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon);
	bool GetPingColorByType(EPingType PingType, struct FLinearColor* PingColor);
	int GetOptionsCount();
	int GetLastSelectedIndexForCosmeticSlot(EMercCosmeticSlot CosmeticSlot);
	int GetLastHoveredIndex();
	EMercCosmeticSlot GetInitialRadialMenu();
	TArray<struct FGameplayTag> GetGameplayTagsForCosmeticSlot(EMercCosmeticSlot CosmeticSlot);
	float GetDeadZone();
	EMercCosmeticSlot GetContiguousCosmeticSlotMenu(bool bRightSide);
	EMercCosmeticSlot GetActiveCosmeticSlotMenu();
	bool FindRowByType(EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	void DummyFunction();
	void ChangeToNewRadialMenu();
	void ButtonClicked();
	void BackPressed();
	bool ActivateRadialMenuItem(int Index, class AKSPlayerController* PlayerController);
};


// Class KillstreakUINew.KSRankChangeWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSRankChangeWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRankChangeWidget");
		return ptr;
	}


	struct FPlayerProgression FormatProgressionData(const struct FPlayerProgression& ProgressionData);
};


// Class KillstreakUINew.KSRankedUnlockedViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSRankedUnlockedViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRankedUnlockedViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSRedeemCodeScreenBase
// 0x0018 (0x04F8 - 0x04E0)
class UKSRedeemCodeScreenBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRedeemCodeScreenBase");
		return ptr;
	}


	void RedeemCode(const struct FString& Code);
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult(bool Success, const struct FText& Error);
	bool IsPendingServerReply();
};


// Class KillstreakUINew.KSRegionSelectModalViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSRegionSelectModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRegionSelectModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSRegionSelectModal
// 0x0000 (0x04E0 - 0x04E0)
class UKSRegionSelectModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRegionSelectModal");
		return ptr;
	}

};


// Class KillstreakUINew.KSReticleWidgetBase
// 0x0020 (0x0518 - 0x04F8)
class UKSReticleWidgetBase : public UKSViewedActiveWeaponWidget
{
public:
	float                                              ShrinkAnimationTime;                                      // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMaxScale;                                  // 0x04FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlockedShotIconMinScale;                                  // 0x0500(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlockedShotMinScaleSqDist;                                // 0x0504(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bGrenadeCooking;                                          // 0x0508(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInADS;                                                   // 0x0509(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCachedBlockIconVisible;                                  // 0x050A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1];                                       // 0x050B(0x0001) MISSED OFFSET
	float                                              CachedWeaponAccuracy;                                     // 0x050C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              CachedReticleOffset;                                      // 0x0510(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSReticleWidgetBase");
		return ptr;
	}


	void UpdateReticleOffset(float OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale);
	void CalculateReticleOffset(float DeltaTime);
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.KSRewardsTrackMeterSegmentBase
// 0x0000 (0x0500 - 0x0500)
class UKSRewardsTrackMeterSegmentBase : public UKSProgressMeterWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRewardsTrackMeterSegmentBase");
		return ptr;
	}


	void UpdateFromRewardTier(const struct FActivityTier& ActivityTier, int ActivityCount);
	struct FLinearColor GetStandardBackgroundColor();
	struct FLinearColor GetPremiumBackgroundColor();
	struct FLinearColor GetBattlePassPremiumColor();
	struct FLinearColor GetBattlePassFreeColor();
	void ApplySegmentProgress(float ProgressPercent);
	void ApplySegmentMeterColor(const struct FLinearColor& MeterColor);
	void ApplySegmentLabel(const struct FText& LabelText);
	void ApplySegmentBackgroundColor(const struct FLinearColor& BackgroundColor);
};


// Class KillstreakUINew.KSRewardsTrackWidgetBase
// 0x0028 (0x0508 - 0x04E0)
class UKSRewardsTrackWidgetBase : public UKSWidget
{
public:
	int                                                MaxPageCount;                                             // 0x04E0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CurrentPage;                                              // 0x04E4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UKSWidget*>                           ItemButtons;                                              // 0x04E8(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSActivityInstance*                         ActivityInstance;                                         // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSAcquisition*                              Acquisition;                                              // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRewardsTrackWidgetBase");
		return ptr;
	}


	void UpdateMaxPageCount(int RewardCount);
	void SetCurrentPageFromIndex(int Index);
};


// Class KillstreakUINew.KSRogueDetailsWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSRogueDetailsWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRogueDetailsWidget");
		return ptr;
	}


	class UPUMG_StoreItem* GetStoreItemForJob(class UKSJobItem* JobItem);
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSRogueMasteryWidget
// 0x0000 (0x04E0 - 0x04E0)
class UKSRogueMasteryWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSRogueMasteryWidget");
		return ptr;
	}


	void GetSectionData(class UKSActivityInstance* ActivityInstance, TArray<struct FMasterySectionData>* SectionData);
	void GetMasteryRewardsForTier(const struct FActivityTier& Tier, TArray<struct FMasteryRewardData>* Rewards);
};


// Class KillstreakUINew.KSScreenLogWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSScreenLogWidget : public UKSWidget
{
public:
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSScreenLogWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSScreenMarkerWidgetBase
// 0x0010 (0x0328 - 0x0318)
class UKSScreenMarkerWidgetBase : public UKSMapIconWidgetBase
{
public:
	bool                                               bHideWhenOffscreen;                                       // 0x0318(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	struct FVector2D                                   OffscreenMargins;                                         // 0x031C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0324(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSScreenMarkerWidgetBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollBox
// 0x0000 (0x0888 - 0x0888)
class UKSScrollBox : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSScrollBox");
		return ptr;
	}


	float GetViewFraction();
};


// Class KillstreakUINew.KSSettingsContainer
// 0x0020 (0x0500 - 0x04E0)
class UKSSettingsContainer : public UKSWidget
{
public:
	TArray<class UKSSettingsWidget*>                   SettingsWidgets;                                          // 0x04E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsPreview*                          AssociatePreviewWidget;                                   // 0x04F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsContainerConfigAsset*             ContainerConfigAsset;                                     // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsContainer");
		return ptr;
	}


	void OnShowSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void OnHideSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void OnContainerConfigSet();
	struct FText GetWidgetContainerTitle();
	class UKSSettingsPreview* GetWidgetContainerPreview();
	struct FText GetWidgetContainerDescription();
	TArray<class UKSSettingsWidget*> GetSettingsWidgets();
	void AddSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void AddPreviewWidget(class UKSSettingsPreview* PreviewWidget);
};


// Class KillstreakUINew.KSSettingsColorOptionsAsset
// 0x0010 (0x0040 - 0x0030)
class UKSSettingsColorOptionsAsset : public UDataAsset
{
public:
	TArray<struct FColorOptions>                       ColorOptions;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsColorOptionsAsset");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsContainerConfigAsset
// 0x0110 (0x0140 - 0x0030)
class UKSSettingsContainerConfigAsset : public UDataAsset
{
public:
	bool                                               bIsAvailableOffline;                                      // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRequires120HzDisplay;                                    // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSAllowedPlatformTypes                     AllowedPlatformTypes;                                     // 0x0032(0x000A) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FKSRequiredInputTypes                       RequiredInputTypes;                                       // 0x003C(0x0002) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FString                                     RequiredExperiment;                                       // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSSwitchDockedModeSetting                  SwitchDockedModeSetting;                                  // 0x0050(0x0002) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsePreview;                                              // 0x0052(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	class UClass*                                      PreviewWidget;                                            // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FKSSettingsWidgetConfig>             WidgetConfigs;                                            // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       SettingName;                                              // 0x0070(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 SettingNameByPlatform;                                    // 0x0088(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       SettingDescription;                                       // 0x00D8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 SettingDescriptionByPlatform;                             // 0x00F0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsContainerConfigAsset");
		return ptr;
	}


	struct FText GetSettingName();
	struct FText GetSettingDescription();
};


// Class KillstreakUINew.KSSettingsSectionConfigAsset
// 0x0078 (0x00A8 - 0x0030)
class UKSSettingsSectionConfigAsset : public UDataAsset
{
public:
	TArray<struct FKSSettingsGroupConfig>              SettingsGroups;                                           // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Heading;                                                  // 0x0040(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                        // 0x0058(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsSectionConfigAsset");
		return ptr;
	}


	struct FText GetHeading();
};


// Class KillstreakUINew.KSSettingsPageConfigAsset
// 0x0078 (0x00A8 - 0x0030)
class UKSSettingsPageConfigAsset : public UDataAsset
{
public:
	TArray<class UKSSettingsSectionConfigAsset*>       SettingsSectionConfigs;                                   // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       PageName;                                                 // 0x0040(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                        // 0x0058(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsPageConfigAsset");
		return ptr;
	}


	struct FText GetPageName();
};


// Class KillstreakUINew.KSSettingsMenuConfigAsset
// 0x0010 (0x0040 - 0x0030)
class UKSSettingsMenuConfigAsset : public UDataAsset
{
public:
	TArray<class UKSSettingsPageConfigAsset*>          SettingsPageConfigs;                                      // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsMenuConfigAsset");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsDataFactory
// 0x02F8 (0x03D0 - 0x00D8)
class UKSSettingsDataFactory : public UPUMG_SettingsDataFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSettingsReceivedFromPlayerAccount;                      // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x00F0(0x00A0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeyBindSettingsApplied;                                 // 0x0190(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKeyBindSettingsSaved;                                   // 0x01A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FKSSettingPropertyId>                BoolSettingPropertyIds;                                   // 0x01B0(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET
	TArray<struct FKSSettingPropertyId>                IntSettingPropertyIds;                                    // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0220(0x0050) MISSED OFFSET
	TArray<struct FKSSettingPropertyId>                FloatSettingPropertyIds;                                  // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0xB0];                                      // 0x0280(0x00B0) MISSED OFFSET
	TSoftObjectPtr<class UKSSettingsMenuConfigAsset>   KSSettingsMenuConfigAssetSoftObjectPtr;                   // 0x0330(0x0028) (CPF_Edit, CPF_Config, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSSettingsMenuConfigAsset*                  KSSettingsMenuConfigAsset;                                // 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDisplayLanguageApplied;                                 // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDisplayLanguageSaved;                                   // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScreenResolutionApplied;                                // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScreenResolutionSaved;                                  // 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCrosshairColorSaved;                                    // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsDataFactory");
		return ptr;
	}


	bool SetSelectedRegion(int SiteId);
	bool SetCrosshairColor(int CrosshairColorIndex);
	void SetColorOptionValues(class UKSSettingsColorOptionsAsset* ColorOptionAsset);
	void SaveSettings();
	void SaveSettingAsInt(const struct FString& Name);
	void SaveSettingAsFloat(const struct FString& Name);
	void SaveSettingAsBool(const struct FString& Name);
	void SaveScreenResolution();
	void SaveLanguage();
	void SaveKeyBindings();
	bool SaveCrosshairColor(int CrosshairColorIndex);
	void RevertScreenResolution();
	void RevertPlayerPreferences();
	void RevertLanguageToDefault();
	void RevertKeyBindings();
	bool IsUserLoggedIn();
	bool GetSettingAsInt_Legacy(const struct FString& Name, int* OutInt);
	bool GetSettingAsFloat_Legacy(const struct FString& Name, float* OutFloat);
	bool GetSettingAsBool_Legacy(const struct FString& Name, bool* OutBool);
	int GetSelectedRegion();
	struct FIntPoint GetScreenResolution();
	class UKSPlayerInput* GetKSPlayerInput();
	void GetDefaultKSInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKSInputActionKey>* OutKeys);
	void GetDefaultInputAxisKeys(const struct FName& Name, EKSInputType InputType, float Scale, TArray<struct FKey>* OutKeys);
	void GetDefaultInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKey>* OutKeys);
	void GetCustomKSInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKSInputActionKey>* OutKeys);
	void GetCustomInputAxisKeys(const struct FName& Name, EKSInputType InputType, float Scale, TArray<struct FKey>* OutKeys);
	void GetCustomInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKey>* OutKeys);
	struct FString GetCurrentLanguage();
	struct FLinearColor GetCrosshairColorValue(int CrosshairColorIndex);
	int GetCrosshairColor();
	TArray<struct FString> GetAvailableLanguages();
	void BindSettingCallbacks_Legacy(const struct FString& Name, const struct FSettingDelegateStruct& SettingDelegateStruct);
	void ApplySettingAsInt(const struct FString& Name, int Value);
	void ApplySettingAsFloat(const struct FString& Name, float Value);
	void ApplySettingAsBool(const struct FString& Name, bool Value);
	void ApplyScreenResolution(const struct FIntPoint& ScreenResolution);
	void ApplyLanguage(const struct FString& LanguageCulture);
	void AddColorOptionValues(const struct FLinearColor& ColorValue);
};


// Class KillstreakUINew.KSSettingsGroup
// 0x0030 (0x0510 - 0x04E0)
class UKSSettingsGroup : public UKSWidget
{
public:
	TArray<class UKSSettingsContainer*>                SettingsContainers;                                       // 0x04E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      SettingsContainerClass;                                   // 0x04F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FKSSettingsGroupConfig                      GroupConfig;                                              // 0x04F8(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsGroup");
		return ptr;
	}


	void OnShowContainer(class UKSSettingsContainer* SettingsContainer);
	void OnHideContainer(class UKSSettingsContainer* SettingsContainer);
	void OnGroupConfigSet();
	TArray<class UKSSettingsContainer*> GetSettingsContainers();
	void AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
};


// Class KillstreakUINew.KSSettingsInfoBase
// 0x00E0 (0x0108 - 0x0028)
class UKSSettingsInfoBase : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSettingValueChanged;                                    // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSettingPreviewChanged;                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsAutoApplied;                                           // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsAutoSaved;                                             // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x86];                                      // 0x004A(0x0086) MISSED OFFSET
	TArray<struct FText>                               TextOptions;                                              // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnTextOptionsChanged;                                     // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	float                                              MinValue;                                                 // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                 // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StepValue;                                                // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRoundValue;                                              // 0x00FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              RoundToNearest;                                           // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsPercent;                                               // 0x0104(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0105(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfoBase");
		return ptr;
	}


	void UpdateTextOptions(TArray<struct FText> NewOptions);
	bool SetPreviewValueInt(int inInt);
	bool SetPreviewValueFloat(float InFloat);
	bool SetPreviewValueBool(bool InBool);
	bool SetDesiredValueKeyBind(const struct FKSKeyBind& InKeyBind);
	bool SetDesiredValueInt(int inInt);
	bool SetDesiredValueFloat(float InFloat);
	bool SetDesiredValueBool(bool InBool);
	bool SaveKeyBindValue(const struct FKSKeyBind& InKeyBind);
	bool SaveIntValue(int inInt);
	bool SaveFloatValue(float InFloat);
	bool SaveBoolValue(bool InBool);
	void Save();
	float RoundToNearestValueFloat(float ValueToRound);
	void RevertSettingToDefault();
	void Revert();
	void ResetPreview();
	void OnValueKeyBindSaved(const struct FKSKeyBind& SavedKeyBind);
	void OnValueKeyBindApplied(const struct FKSKeyBind& AppliedKeyBind);
	void OnValueIntSaved(int SavedInt);
	void OnValueIntApplied(int AppliedInt);
	void OnValueFloatSaved(float SavedFloat);
	void OnValueFloatApplied(float AppliedFloat);
	void OnValueBoolSaved(bool SavedBool);
	void OnValueBoolApplied(bool AppliedBool);
	bool IsValidValueKeyBind(const struct FKSKeyBind& InKey);
	bool IsValidValueInt(int inInt);
	bool IsValidValueFloat(float InFloat);
	bool IsValidValueBool(bool InBool);
	bool IsDirty();
	void InitializeValue();
	struct FKSKeyBind GetValueKeyBind();
	int GetValueInt();
	float GetValueFloat();
	bool GetValueBool();
	TArray<struct FText> GetTextOptions();
	struct FText GetTextOption(int Index);
	float GetStep();
	EKSSettingType GetSettingType();
	float GetRoundToNearest();
	bool GetRound();
	int GetPreviewValueInt();
	float GetPreviewValueFloat();
	bool GetPreviewValueBool();
	int GetNumTextOptions();
	float GetMin();
	float GetMax();
	class AKSHUDCommon* GetKSHUD();
	bool GetIsPercent();
	struct FKSKeyBind GetDirtyValueKeyBind();
	int GetDirtyValueInt();
	float GetDirtyValueFloat();
	bool GetDirtyValueBool();
	struct FKSKeyBind FixupInvalidKeyBind(const struct FKSKeyBind& InKey);
	int FixupInvalidInt(int inInt);
	float FixupInvalidFloat(float InFloat);
	bool FixupInvalidBool(bool InBool);
	bool CanRevert();
	bool ApplyPreviewIntValue(int inInt);
	bool ApplyPreviewFloatValue(float InFloat);
	bool ApplyPreviewBoolValue(bool InBool);
	void ApplyPreview();
	bool ApplyKeyBindValue(const struct FKSKeyBind& InKeyBind);
	bool ApplyIntValue(int inInt);
	bool ApplyFloatValue(float InFloat);
	bool ApplyBoolValue(bool InBool);
	void Apply();
};


// Class KillstreakUINew.KSSettingsInfo_Binding
// 0x0020 (0x0128 - 0x0108)
class UKSSettingsInfo_Binding : public UKSSettingsInfoBase
{
public:
	struct FKSKeyBindInfo                              PrimaryKeyBindInfo;                                       // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FKSKeyBindInfo                              GamepadKeyBindInfo;                                       // 0x0118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_Binding");
		return ptr;
	}


	void OnSettingsReceivedFromPlayerAccount();
	void OnKeyBindingsSaved(const struct FName& Name);
	void OnKeyBindingsApplied(const struct FName& Name);
};


// Class KillstreakUINew.KSSettingsInfo_Brightness
// 0x0000 (0x0108 - 0x0108)
class UKSSettingsInfo_Brightness : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_Brightness");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode
// 0x0000 (0x0108 - 0x0108)
class UKSSettingsInfo_ConsolePerformanceMode : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_CrosshairColor
// 0x0008 (0x0110 - 0x0108)
class UKSSettingsInfo_CrosshairColor : public UKSSettingsInfoBase
{
public:
	class UKSSettingsColorOptionsAsset*                ColorOptions;                                             // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_CrosshairColor");
		return ptr;
	}


	void OnCrosshairColorSaved(int SavedIndex);
};


// Class KillstreakUINew.KSSettingsInfo_GamepadIconSet
// 0x0000 (0x0108 - 0x0108)
class UKSSettingsInfo_GamepadIconSet : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_GamepadIconSet");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsInfo_Generic
// 0x0018 (0x0120 - 0x0108)
class UKSSettingsInfo_Generic : public UKSSettingsInfoBase
{
public:
	EKSSettingType                                     KSSettingType;                                            // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_Generic");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_MuteAudio
// 0x0000 (0x0108 - 0x0108)
class UKSSettingsInfo_MuteAudio : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_MuteAudio");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsInfo_Region
// 0x0000 (0x0108 - 0x0108)
class UKSSettingsInfo_Region : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_Region");
		return ptr;
	}


	void OnPreferredSiteUpdated();
};


// Class KillstreakUINew.KSSettingsInfo_Resolution
// 0x0010 (0x0118 - 0x0108)
class UKSSettingsInfo_Resolution : public UKSSettingsInfoBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsInfo_Resolution");
		return ptr;
	}


	void OnScreenResolutionSaved(const struct FIntPoint& SavedScreenResolution);
	void OnScreenResolutionApplied(const struct FIntPoint& AppliedScreenResolution);
};


// Class KillstreakUINew.KSSettingsMenu
// 0x0028 (0x0508 - 0x04E0)
class UKSSettingsMenu : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	TArray<class UKSSettingsPage*>                     SettingsPages;                                            // 0x04E8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      SettingsPageClass;                                        // 0x04F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsMenuConfigAsset*                  MenuConfigAsset;                                          // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsMenu");
		return ptr;
	}


	void RebuildNavigation();
	void OnShowPage(class UKSSettingsPage* SettingsPage);
	void OnSaveSettings();
	void OnRevertSettings();
	void OnMenuConfigSet();
	void OnHidePage(class UKSSettingsPage* SettingsPage);
	void OnConfirmExit(bool ShouldSaveSettings);
	TArray<class UKSSettingsPage*> GetSettingsPages();
	void CheckSavePendingChanges();
	void AddSettingsPageWidget(class UKSSettingsPage* SettingsPage);
};


// Class KillstreakUINew.KSSettingsPage
// 0x0020 (0x0500 - 0x04E0)
class UKSSettingsPage : public UKSWidget
{
public:
	TArray<class UKSSettingsSection*>                  SettingsSections;                                         // 0x04E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      SettingsSectionClass;                                     // 0x04F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsPageConfigAsset*                  PageConfigAsset;                                          // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsPage");
		return ptr;
	}


	void OnShowSection(class UKSSettingsSection* SettingsSection);
	void OnPageConfigSet();
	void OnHideSection(class UKSSettingsSection* SettingsSection);
	TArray<class UKSSettingsSection*> GetSettingsSections();
	class UScrollBox* GetScrollBox();
	void AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection);
};


// Class KillstreakUINew.KSSettingsPreview
// 0x0018 (0x04F8 - 0x04E0)
class UKSSettingsPreview : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnPreviewValueChanged;                                    // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UKSSettingsInfoBase*                         SettingsInfo;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsPreview");
		return ptr;
	}


	void HandleOnValueChanged(bool ChangedExternally);
	void HandleOnPreviewValueChanged();
};


// Class KillstreakUINew.KSSettingsSection
// 0x0020 (0x0500 - 0x04E0)
class UKSSettingsSection : public UKSWidget
{
public:
	TArray<class UKSSettingsGroup*>                    SettingsGroups;                                           // 0x04E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      SettingsGroupClass;                                       // 0x04F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsSectionConfigAsset*               SectionConfigAsset;                                       // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsSection");
		return ptr;
	}


	void OnShowGroup(class UKSSettingsGroup* SettingsGroup);
	void OnSectionConfigSet();
	void OnHideGroup(class UKSSettingsGroup* SettingsGroup);
	TArray<class UKSSettingsGroup*> GetSettingsGroups();
	void AddSettingsGroupWidget(class UKSSettingsGroup* SettingsGroup);
};


// Class KillstreakUINew.KSSettingsWidget
// 0x0058 (0x0538 - 0x04E0)
class UKSSettingsWidget : public UKSWidget
{
public:
	struct FKSSettingsWidgetConfig                     WidgetConfig;                                             // 0x04E0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       WidgetContainerTitle;                                     // 0x04F0(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       WidgetContainerDescription;                               // 0x0508(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasPreview;                                              // 0x0520(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class UKSSettingsPreview*                          WidgetContainerPreviewWidget;                             // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSSettingsInfoBase*                         SettingsInfo;                                             // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSettingsWidget");
		return ptr;
	}


	void SaveSetting();
	void RevertSetting();
	void OnWidgetSettingsInfoSet();
	void OnWidgetContainerTitleSet();
	void OnWidgetContainerPreviewSet();
	void OnWidgetContainerDescriptionSet();
	void OnWidgetConfigSet();
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached);
	bool IsSaved();
	bool IsApplied();
	bool HasPreview();
	bool CanGamepadNavigate();
	void ApplySetting();
};


// Class KillstreakUINew.KSShopItemButtonBase
// 0x0028 (0x0508 - 0x04E0)
class UKSShopItemButtonBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnShopSelection;                                          // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnShopViewItemDetails;                                    // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	EShopItemType                                      ActiveShopSlot;                                           // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0501(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSShopItemButtonBase");
		return ptr;
	}


	class UButton* GetHitTarget();
	void DisplayShopItem(const struct FShopItem& ShopItem, bool IsAffordable, bool IsToggleSlot);
	void ButtonUnhovered();
	void ButtonReleased();
	void ButtonPressed();
	void ButtonHovered();
	void ButtonClicked();
};


// Class KillstreakUINew.KSSocialPanelBase
// 0x0060 (0x0540 - 0x04E0)
class UKSSocialPanelBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnDataReady;                                              // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerCardClicked;                                      // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSocialHeaderClicked;                                    // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	class UTreeView*                                   TreeView;                                                 // 0x0510(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UKSSocialOverlay*                            DataSource;                                               // 0x0518(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0520(0x0010) MISSED OFFSET
	TArray<class UKSDataSocialCategory*>               CategoriesList;                                           // 0x0530(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSocialPanelBase");
		return ptr;
	}


	void UpdateListData();
	void SetupTreeView(class UTreeView* List);
	void SetDataSource(class UKSSocialOverlay* Source);
	void OnDataChange(TArray<EKSSocialOverlaySection> Sections);
	class UTreeView* GetTreeView();
	void GetSubListFromData(class UObject* Source, TArray<class UObject*>* Out_List);
	class UKSSocialOverlay* GetDataSource();
};


// Class KillstreakUINew.KSSocialFriendsPanel
// 0x0018 (0x0558 - 0x0540)
class UKSSocialFriendsPanel : public UKSSocialPanelBase
{
public:
	TArray<class UKSDataSocialCategory*>               CategoryData;                                             // 0x0540(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UKSSocialOverlay*                            Parent;                                                   // 0x0550(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSocialFriendsPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSSocialOverlay
// 0x00A0 (0x0580 - 0x04E0)
class UKSSocialOverlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnDataChanged;                                            // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class UKSDataSocialCategory*>               CategoriesList;                                           // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0500(0x0008) MISSED OFFSET
	TMap<TWeakObjectPtr<class UKSPlayerInfo>, EKSSocialOverlaySection> PlayerCategoryMap;                                        // 0x0508(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UKSPlayerInfo>>        PlayersToUpdate;                                          // 0x0558(0x0010) (CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
	TArray<class UKSDataSocialPlayer*>                 UnusedEntries;                                            // 0x0570(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSocialOverlay");
		return ptr;
	}


	void RepopulateAll();
	void PlayTransition(class UWidgetAnimation* Animation, bool TransitionOut);
	void OnRecentlyPlayedChange(class UKSFriendDataFactory* Source);
	void HandleUpdatePlayers();
	TArray<class UKSDataSocialCategory*> GetData();
	class UKSDataSocialCategory* GetCategory(EKSSocialOverlaySection Category);
	TArray<class UKSDataSocialCategory*> GetCategories(TArray<EKSSocialOverlaySection> Categories);
};


// Class KillstreakUINew.KSSocialSearchPanel
// 0x0048 (0x0588 - 0x0540)
class UKSSocialSearchPanel : public UKSSocialPanelBase
{
public:
	struct FScriptMulticastDelegate                    OnOpen;                                                   // 0x0540(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClose;                                                  // 0x0550(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0560(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSocialSearchPanel");
		return ptr;
	}


	void OnSearchTimeout();
	void OnSearchStart(const struct FText& SearchTerm);
	void OnSearchComplete(const struct FText& SearchTerm, const struct FText& Error, TArray<class UKSDataSocialPlayer*> Results);
	void OnOverlayClosed();
	bool IsSearching();
	struct FText GetActiveSearchTerm();
	void DoSearch(const struct FText& SearchTerm);
};


// Class KillstreakUINew.KSSocialWidgetBase
// 0x0008 (0x04E8 - 0x04E0)
class UKSSocialWidgetBase : public UKSWidget
{
public:
	class UKSPartyDataFactory*                         CachedPartyDataFactory;                                   // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSocialWidgetBase");
		return ptr;
	}


	void SortFriendData(TArray<class UPUMG_PlayerInfo*>* Friends);
	void SearchPlayerName(const struct FString& PlayerName);
	void OnFriendRequestsUpdated();
	void HandleSearchByNameResultsUpdated();
	void HandlePartyDataUpdated();
	void HandleFriendInviteReceived(const struct FPUMG_FriendData& PlayerData);
	void HandleFriendDataUpdated();
	TArray<class UPUMG_PlayerInfo*> GetSortedFriends();
	TArray<class UPUMG_PlayerInfo*> GetSearchResults();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	void ClearSearchResults();
};


// Class KillstreakUINew.KSSortableGridPanel
// 0x0018 (0x0170 - 0x0158)
class UKSSortableGridPanel : public UGridPanel
{
public:
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0158(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                               // 0x015C(0x0014) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSortableGridPanel");
		return ptr;
	}


	bool SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS);
	void SortChildren();
	class UGridSlot* AddChildAutoLayout(class UWidget* Content);
};


// Class KillstreakUINew.KSSortableVerticalBox
// 0x0010 (0x0148 - 0x0138)
class UKSSortableVerticalBox : public UVerticalBox
{
public:
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                               // 0x0138(0x0014) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSSortableVerticalBox");
		return ptr;
	}


	bool SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS);
	void SortChildren();
};


// Class KillstreakUINew.KSStorePanelItem
// 0x0028 (0x0050 - 0x0028)
class UKSStorePanelItem : public UObject
{
public:
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                    // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisplaySaleTag;                                           // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               HasBeenSeen;                                              // 0x0032(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	struct FText                                       CustomBannerText;                                         // 0x0038(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSStorePanelItem");
		return ptr;
	}


	bool IsOnSale();
};


// Class KillstreakUINew.KSStoreSectionItem
// 0x0028 (0x0050 - 0x0028)
class UKSStoreSectionItem : public UObject
{
public:
	TArray<class UKSStorePanelItem*>                   StorePanelItems;                                          // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                column;                                                   // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Row;                                                      // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EStoreItemWidgetType>                  WidgetType;                                               // 0x0040(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UKSStorePanelItem*                           CurrentlyViewedItem;                                      // 0x0048(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSStoreSectionItem");
		return ptr;
	}


	bool HasUnseenItems();
};


// Class KillstreakUINew.KSStoreSection
// 0x0038 (0x0060 - 0x0028)
class UKSStoreSection : public UObject
{
public:
	TArray<class UKSStoreSectionItem*>                 SectionItems;                                             // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EStoreSectionTypes>                    SectionType;                                              // 0x0038(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0039(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSStoreSection");
		return ptr;
	}


	bool HasUnseenItems();
	struct FText GetSectionHeader();
	int GetSecondsRemaining();
};


// Class KillstreakUINew.KSStoreWidget
// 0x0008 (0x04E8 - 0x04E0)
class UKSStoreWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSStoreWidget");
		return ptr;
	}


	void OnVendorsReceived(int GroupId, TArray<int> VendorIds);
	void OnPricePointsReveived();
	void OnPortalOffersReceived();
	bool HasAllRequiredStoreInformation();
	int GetStoreRotationSecondsRemaining();
	TArray<class UKSStoreSection*> GetStoreLayout();
	class UKSStoreItemHelper* GetStoreItemHelper();
};


// Class KillstreakUINew.KSTargetMarkerWidget
// 0x0048 (0x0370 - 0x0328)
class UKSTargetMarkerWidget : public UKSScreenMarkerWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnTargetChanged;                                          // 0x0328(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnModUsed;                                                // 0x0338(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      CurrentTarget;                                            // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKSModInst_Activated*                        TargetModInst;                                            // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TScriptInterface<class UKSTargeter>                Targeter;                                                 // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSTargetMarkerWidget");
		return ptr;
	}


	void UpdateCharge(class UKSModInst_Activated* ModInst);
	void TryApplyViewState(ETargetMarkerViewState ViewState, bool bForce);
	void ReceiveNewTarget(const TScriptInterface<class UKSTargeter>& InTargeter, class AActor* NewTarget);
	void OnGamepadSelectedChanged(int NewSelectionIndex);
	ETargetMarkerViewState GetCurrentViewState();
	void BindTargetModInst();
	void ApplyViewState(ETargetMarkerViewState ViewState);
};


// Class KillstreakUINew.KSTextChatWidget
// 0x0040 (0x0520 - 0x04E0)
class UKSTextChatWidget : public UKSWidget
{
public:
	TArray<EMercCosmeticSlot>                          RadialMenuItemsToShowInChat;                              // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               ActiveChatChannelsDirty;                                  // 0x04F0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChannels;                                       // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CurrentChatChannelIndex;                                  // 0x0508(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCurrentChatChannelChanged;                              // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSTextChatWidget");
		return ptr;
	}


	void Whisper(const struct FString& PlayerName, const struct FString& Message);
	void Unblock(const struct FString& PlayerName);
	void UIX_SubmitTextInput(const struct FString& Message);
	void UIX_SendMessageToPlayer(const struct FString& Message, int64_t PlayerId);
	void UIX_SendMessageToChannel(const struct FString& Message, EPUMG_ChatChannel Channel);
	void UIX_MarkMessageAsRead(int MessageIndex);
	void UIX_ExecuteChatCommandLine(const struct FString& CommandLine);
	void ToggleDND();
	void ShowTextChat();
	bool SetChatChannelToPlayer(int64_t PlayerId);
	bool SetChatChannel(EPUMG_ChatChannel Channel, int64_t PersonalChannelPlayerId);
	void Reply(const struct FString& Message);
	void ProcessMessageOnClient(const struct FText& Message, EPUMG_ChatChannel Channel);
	void PreviousChatChannel();
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void OpenTextChat(bool BeginChatCommand);
	void NextChatChannel();
	bool IsActiveChatChannel(EPUMG_ChatChannel Channel);
	void HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage);
	void HandleChatMessageRead(const struct FPUMG_ChatData& ReadMessage);
	void HandleChatChannelLeft(EPUMG_ChatChannel Channel);
	void HandleChatChannelJoined(EPUMG_ChatChannel Channel);
	struct FPUMG_ActiveChatChannelData GetCurrentChatChannel();
	class UKSChatDataFactory* GetChatDataFactory();
	TArray<struct FPUMG_ActiveChatChannelData> GetActiveChatChannels();
	bool CanChatInChannel(EPUMG_ChatChannel Channel);
	void Block(const struct FString& PlayerName);
};


// Class KillstreakUINew.KSToastNotificationWidgetBase
// 0x0040 (0x0520 - 0x04E0)
class UKSToastNotificationWidgetBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnToastReceived;                                          // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                MaxToastNotification;                                     // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CurrentToastCount;                                        // 0x04F4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsBusy;                                                   // 0x04F8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	TArray<struct FToastData>                          ToastQueue;                                               // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FToastData>                          PostMatchToasts;                                          // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSToastNotificationWidgetBase");
		return ptr;
	}


	void TestDisplayChallengeNotification();
	void StoreToastQueue(const struct FToastData& ToastNotification);
	void ShowToastNotification();
	void OnToastNotificationReceived(const struct FToastData& ToastData);
	void OnChallengeCompleted(class UKSActivityInstance* Activity);
	void OnAwardsCompleted(class UKSActivityInstance* Activity);
	void NotifyToastShown();
	void NotifyToastHidden();
	void HandlePartyMemberPromoted(int64_t PlayerId);
	void HandlePartyMemberLeftGeneric();
	void HandlePartyMemberKick(int64_t PlayerId);
	void HandlePartyMemberAdded(const struct FPUMG_PartyMemberData& PartyMemberData);
	void HandlePartyLocalPlayerLeft();
	void HandlePartyInviteSent(const struct FText& PlayerName);
	void HandlePartyInviteRejected();
	void HandlePartyInviteReceived(class UPUMG_PlayerInfo* PartyInviter);
	void HandlePartyInviteError(const struct FText& PlayerName);
	void HandlePartyInviteAccepted();
	void HandleFriendRejected(const struct FText& PlayerName);
	void HandleFriendInviteReceived(const struct FPUMG_FriendData& PlayerData);
	void HandleFriendAddSuccess(const struct FString& PlayerName);
	void HandleFriendAdded(const struct FText& PlayerName);
	TArray<struct FToastData> GetPostMatchToasts();
	class UKSPlayerChallengesManager* GetPlayerChallengesManager();
	class UKSAwardsManager* GetPlayerAwardsManager();
	class UKSPartyDataFactory* GetPartyDataFactory();
	bool GetNext(struct FToastData* NextToastNotification);
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSEventChallengesManager* GetEventChallengesManager();
	class UKSBattlePassProgressionManager* GetBattlePassProgressionManager();
	void CreatePlayerLevelUpToasts(class UKSActivityInstance* PlayerLevelActivityInstance, const struct FActivityTier& TierObtained);
	void CreateMiniBattlePassTierUnlockToasts(class UKSActivityInstance* MiniBattlePassActivityInstance, const struct FActivityTier& TierObtained);
	void CreateMercMasteryLevelUpToasts(class UKSActivityInstance* MercMasteryActivityInstance, const struct FActivityTier& TierObtained);
	void CreateEventChallengeCompleteToasts(class UKSActivityInstance* EventChallengeActivityInstance);
	void CreateBoostActivationToastBySpentItem(class UPlatformInventoryItem* SpentItem);
	void CreateBoostActivationToastByAcquisition(class UPUMG_StoreItem* AcquisitionItem);
	void ClearPostMatchQueue();
	void ClearNotificationQueue();
};


// Class KillstreakUINew.KSTopBarStatusIconInterface
// 0x0000 (0x0028 - 0x0028)
class UKSTopBarStatusIconInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSTopBarStatusIconInterface");
		return ptr;
	}


	void UnbindEventFromTopBarStatusIconShowingChanged(const struct FScriptDelegate& Callback);
	bool IsInTopBarStatusIconShowingState();
	class UTexture2D* GetTopBarStatusIconTexture();
	void BindEventToTopBarStatusIconShowingChanged(const struct FScriptDelegate& Callback);
};


// Class KillstreakUINew.KSTouchHudWidget
// 0x0040 (0x0520 - 0x04E0)
class UKSTouchHudWidget : public UKSWidget
{
public:
	class UKSWeaponAsset_Melee*                        QuickMeleeWeaponAsset;                                    // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     MyFireWidget;                                             // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     MyMeleeWidget;                                            // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     MyQuickMeleeWidget;                                       // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UImage*                                      MyAimDownSightsWidget;                                    // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  AimDownSightsEnableIcon;                                  // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  AimDownSightsCancelIcon;                                  // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidget*                                     MyPingWidget;                                             // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSTouchHudWidget");
		return ptr;
	}


	void UpdateQuickMeleeRadius();
	void UpdateMeleeOrFireButton();
};


// Class KillstreakUINew.KSTreeView
// 0x0008 (0x03E0 - 0x03D8)
class UKSTreeView : public UTreeView
{
public:
	TWeakObjectPtr<class APUMG_HUD>                    MyHud;                                                    // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSTreeView");
		return ptr;
	}


	void UninitializeWidget();
	void NavigateSelectItem(class UObject* Item);
	bool IsItemExpanded(class UObject* Item);
	void InitializeWidget();
	int GetNumItemsInLayout();
	bool BP_GetEntryWidgetFromItem(class UObject* Item, class UUserWidget** OutWidget);
};


// Class KillstreakUINew.KSUIBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UKSUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSUIBlueprintFunctionLibrary");
		return ptr;
	}


	static bool UIX_ReportPlayer(class UObject* WorldContextObject, const struct FReportPlayerParams& Params);
	static struct FReportPlayerParams SetupReportPlayerFromScoreboardStats(int64_t PlayerId, const struct FScoreboardStats& State);
	static struct FReportPlayerParams SetupReportPlayerFromGameState(int64_t PlayerId, class AKSGameState* State);
	static void SetHiddenCursorMode(class UObject* WorldContextObject, class APlayerController* PlayerController, bool ShouldHide);
	static void ResetHiddenCursorMode(class UObject* WorldContextObject, class APlayerController* PlayerController);
	static void RegisterGridNavigation(class UPUMG_Widget* ParentWidget, int FocusGroup, TArray<class UWidget*> NavWidgets, int GridWidth, bool NavToLastElementOnDown);
	static struct FText Key_GetShortDisplayName(const struct FKey& Key);
	static bool IsPlayerRelevant(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState, bool bLockedInOnly);
	static bool IsNewJob(int RogueID);
	static bool IsInsideMargins(class UObject* WorldContextObject, const struct FVector2D& Translation, const struct FVector2D& Margins);
	static bool IsInCenteredScreenRect(float PositionX, float PositionY, float MarginX, float MarginY);
	static bool IsExperimentActive(EExperimentalFeatureName Feature);
	static struct FText GetTextByPlatform(const struct FText& DefaultText, TMap<struct FString, struct FText> PlatformTexts);
	static class UKSStoreItemHelper* GetStoreItemHelper(class UObject* WorldContextObject);
	static EJobSelectionState GetSelectionStateForPlayer(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState);
	static bool GetQueueName(struct FText* DisplayNameText);
	static bool GetQueueDisplayName(class UObject* WorldContextObject, struct FText* DisplayNameText);
	static bool GetPlayerSelectInfo(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState, struct FPlayerJobSelectInfo* PlayerSelectInfo);
	static class UPUMG_PlayerInfo* GetPlayerInfoById(class APUMG_HUD* HUD, int64_t PlayerId);
	static bool GetPingIconByType(class UDataTable* ContextualPingTypesDT, EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon);
	static bool GetPingIconByMessage(class UDataTable* ContextualPingMessagesDT, EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon);
	static bool GetPingColorByType(class UDataTable* ContextualPingTypesDT, EPingType PingType, struct FLinearColor* PingColor);
	static int GetNewJobId();
	static class UPUMG_PlayerInfo* GetLocalPlayerInfo(class APUMG_HUD* HUD);
	static struct FKey GetKeyForBinding(class APlayerController* PlayerController, const struct FName& Binding, bool SecondaryKey, bool FallbackToDefault, bool IsGamepadDoubleTap);
	static TArray<int> GetDigitsFromInt(int Value);
	static void GetCurrentRogueMasteryLevel(class UKSActivityInstance* ActivityInstance, int* MasteryLevel, int* CurrentXPProgress, int* XPRequiredForLevel);
	static bool FindContextualPingTypesRowByType(class UDataTable* ContextualPingTypesDT, EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	static bool FindContextualPingMessagesRowByMessage(class UDataTable* ContextualPingMessagesDT, EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	static bool DistanceToClosestScreenEdge(class UObject* WorldContextObject, const struct FVector2D& Location, float* OutDistX, float* OutDistY);
	static EJobSelectionState DetermineEntryLocalSelectionState(const struct FJobSelectionEntry& Entry);
	static class UKSSettingsWidget* CreateSettingsWidgetWithConfig(class APUMG_HUD* HUD, const struct FKSSettingsWidgetConfig& SettingsWidgetConfig);
	static class UKSSettingsWidget* CreateSettingsWidget(class APUMG_HUD* HUD, class UClass* SettingsWidgetClass);
	static class UKSSettingsPreview* CreateSettingsPreview(class APUMG_HUD* HUD, class UClass* SettingsPreviewClass);
	static int CompareStrings(const struct FString& LeftString, const struct FString& RightString);
	static void ClearKeyboardFocus();
	static bool CanReportServer(class UObject* WorldContextObject);
	static bool CanPlayerSelectEntry(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState);
};


// Class KillstreakUINew.KSUISoundLibrary
// 0x0000 (0x0028 - 0x0028)
class UKSUISoundLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSUISoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSGenericSoundLibrary
// 0x0018 (0x0040 - 0x0028)
class UKSGenericSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               BackToScreenSound;                                        // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ErrorSound;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScreenTransitionSound;                                    // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSGenericSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSButtonSoundLibrary
// 0x0018 (0x0040 - 0x0028)
class UKSButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ButtonClicked;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ButtonHovered;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ButtonUnhovered;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollButtonSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSScrollButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ScrollClicked;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScrollHovered;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScrollUnhovered;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ScrollingSound;                                           // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSScrollButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSShopSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSShopSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ShopOpen;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ShopClose;                                                // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               PurchaseSucceeded;                                        // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               PurchaseFailed;                                           // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSShopSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSToastSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSToastSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               FriendToast;                                              // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               PartyToast;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ErrorToast;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               InfoToast;                                                // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSToastSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.CommonVendorHelper
// 0x0000 (0x0028 - 0x0028)
class UCommonVendorHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.CommonVendorHelper");
		return ptr;
	}


	static int GetVendorIDFromEnum(EKSVendorTypes VendorType);
};


// Class KillstreakUINew.KSViewedActiveWeaponCompWidget
// 0x0010 (0x05B8 - 0x05A8)
class UKSViewedActiveWeaponCompWidget : public UKSActiveWeaponComponentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedActiveWeaponCompWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveGadgetWidget
// 0x0010 (0x04F8 - 0x04E8)
class UKSViewedActiveGadgetWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedActiveGadgetWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveMedPackWidget
// 0x0010 (0x04F8 - 0x04E8)
class UKSViewedActiveMedPackWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedActiveMedPackWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedItemLabel
// 0x0018 (0x0528 - 0x0510)
class UKSViewedItemLabel : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
	bool                                               UpdateViewLimitPosition;                                  // 0x0518(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	struct FVector2D                                   ViewLimitPosition;                                        // 0x051C(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0524(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedItemLabel");
		return ptr;
	}


	void UpdateLabelPosition();
	void UnbindToViewportResizeEvent();
	void TriggerLabelPositionUpdate();
	void OnLabelShow();
	void OnLabelHide();
	class UImage* GetViewLimitImage();
	class AActor* GetTrackedActor();
	class UCanvasPanel* GetOutermostCanvasPanel();
	bool GetOnScreenPositionForLabel(class APlayerController* Player, class AActor* InActor, struct FBox2D* OutBounds);
	class UCanvasPanel* GetLabelCanvasPanel();
	void BindToViewportResizeEvent();
};


// Class KillstreakUINew.KSViewedPawnDamageDisplay
// 0x0090 (0x05A0 - 0x0510)
class UKSViewedPawnDamageDisplay : public UKSViewedPawnWidget
{
public:
	float                                              StackingWait;                                             // 0x0510(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               TetherToEventLocation;                                    // 0x0514(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	int                                                MaxNumDamageWidgetsOnScreen;                              // 0x0518(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UCanvasPanel*                                DamageNumberContainer;                                    // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<class UClass*, struct FSpecialDamageColors>   SpecialDamageTypes;                                       // 0x0528(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UDamageNumberDisplayWidget*>          CurrentDamageNumbersOnScreen;                             // 0x0578(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UDamageNumberDisplayWidget*>          DamageNumbersPool;                                        // 0x0588(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0598(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedPawnDamageDisplay");
		return ptr;
	}


	void PrimeDamageNumbersWidgetPool();
	void HandlePhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void HandleInstigateDamageNotify(const struct FCombatEventInfo& DamageInfo);
	void HandleAnimationCompleted(class UDamageNumberDisplayWidget* DamageNumberWidget);
	class UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance();
	void ClearDamageNumbersOnScreen();
};


// Class KillstreakUINew.DamageNumberDisplayWidget
// 0x0048 (0x0280 - 0x0238)
class UDamageNumberDisplayWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnNumberAnimationComplete;                                // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      DamageTarget;                                             // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     InitialDamageLocation;                                    // 0x0250(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               TetherToEventLocation;                                    // 0x025C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	float                                              DamageAmount;                                             // 0x0260(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDamageBaseType                                    DamageBaseType;                                           // 0x0264(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDamageFlourishType                                DamageFlourishType;                                       // 0x0265(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDamageModifier                                    DamageModifier;                                           // 0x0266(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDamageTargetType                                  DamageTargetType;                                         // 0x0267(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DelayBeforeAnimation;                                     // 0x0268(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StackWaitTime;                                            // 0x026C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               PlayingNumberAnimation;                                   // 0x0270(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              VerticalWorldOffset;                                      // 0x0274(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               ChangePosition;                                           // 0x0278(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0279(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.DamageNumberDisplayWidget");
		return ptr;
	}


	void SetDisplayInformation(class AActor* InTargetActor, bool InTetherToEventLocation, float InDamageAmount, bool InIsSpecialDamage, const struct FSpecialDamageColors& InDamageColors, bool InIsLethal, bool InIsHeadshot, float InDelayWindow, float InStackWait, bool InArmorHit, bool InDamageReduced, bool InDamageResisted, bool InDamageShielded);
	void SetContentVisibility(bool IsVisible);
	void PlayNumberAnimation();
	bool PlayerIsBlinded();
	void OnDisplaySpecialDamageInfo(float CurrentDamageAmount, const struct FSpecialDamageColors& DamageColors, bool bChangePosition);
	void OnDisplayInformationReset();
	bool IsDisplayStacking();
};


// Class KillstreakUINew.KSViewedPawnInventoryWidget
// 0x0038 (0x05A8 - 0x0570)
class UKSViewedPawnInventoryWidget : public UKSPawnInventoryWidget
{
public:
	struct FPlayerInventorySlot                        ActiveInventoryItem;                                      // 0x0570(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0588(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedPawnInventoryWidget");
		return ptr;
	}


	void OnUpdatedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot);
	void OnRemovedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot);
	void OnActivePawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot);
	int GetSlotIndex(const struct FGameplayTag& EquipPoint);
};


// Class KillstreakUINew.KSViewedPawnModsWidget
// 0x0018 (0x0528 - 0x0510)
class UKSViewedPawnModsWidget : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0510(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewedPawnModsWidget");
		return ptr;
	}


	void OnViewedPawnModAdded(class UKSPlayerMod* Mod, class UKSPlayerModInstance* ModInstance);
	class UOverlay* GetOverlay();
};


// Class KillstreakUINew.KSViewRedirector_LocalSetting
// 0x0008 (0x0030 - 0x0028)
class UKSViewRedirector_LocalSetting : public UPUMG_ViewRedirecter
{
public:
	struct FName                                       LocalActionName;                                          // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSViewRedirector_LocalSetting");
		return ptr;
	}


	bool DoesLocalSettingApply(class APUMG_HUD* HUD);
};


// Class KillstreakUINew.KSVoiceActivityWidget
// 0x0070 (0x0550 - 0x04E0)
class UKSVoiceActivityWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    VoiceAccountNamePairsUpdated;                             // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceParticipantAdded;                                    // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceParticipantRemoved;                                  // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceParticipantUpdated;                                  // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    VoiceAudioStateChange;                                    // 0x0520(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0530(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSVoiceActivityWidget");
		return ptr;
	}


	void OnVoiceParticipantUpdated(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void OnVoiceParticipantRemoved(const struct FString& AccountId);
	void OnVoiceParticipantAdded(const struct FString& AccountId);
	struct FString GetVoiceIdByPlayerId(int64_t PlayerId);
	class AKSPlayerState* GetPlayerStateByVoiceId(const struct FString& VoiceId);
	int64_t GetPlayerIdByVoiceId(const struct FString& VoiceId);
};


// Class KillstreakUINew.KSVoucherAcquisition
// 0x0000 (0x04E0 - 0x04E0)
class UKSVoucherAcquisition : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSVoucherAcquisition");
		return ptr;
	}


	bool RedeemVouchers(TArray<class UPUMG_StoreItem*> VoucherItems);
	void GetVoucherAcquisitions(TArray<class UPUMG_StoreItem*>* VoucherItems, TArray<class UPUMG_StoreItem*>* PurchaseItems);
	void DisplayVoucherRedemptionFailed();
};


// Class KillstreakUINew.KSWeaponComponentWidget
// 0x0020 (0x0500 - 0x04E0)
class UKSWeaponComponentWidget : public UKSWidget
{
public:
	TWeakObjectPtr<class UKSWeaponComponent>           WeaponComponent;                                          // 0x04E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FKSEquipmentId                              EquipmentId;                                              // 0x04E8(0x0004) (CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x14];                                      // 0x04EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWeaponComponentWidget");
		return ptr;
	}


	void SetOwningWeaponComponent(class UKSWeaponComponent* InWeaponComponent);
	void PreClearWeaponComponent();
	void PostSetWeaponComponent();
	void OnEndActiveWeaponComponent();
	void OnBecomeActiveWeaponComponent();
	bool IsWeaponComponentActive();
	class UKSWeaponComponent* GetWeaponComponent();
};


// Class KillstreakUINew.KSWeaponComponentAmmoWidget
// 0x0020 (0x0520 - 0x0500)
class UKSWeaponComponentAmmoWidget : public UKSWeaponComponentWidget
{
public:
	int                                                CachedAmmoInClip;                                         // 0x0500(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CachedClipSize;                                           // 0x0504(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CachedInReserve;                                          // 0x0508(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               CachedIsReloading;                                        // 0x050C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x13];                                      // 0x050D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWeaponComponentAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve);
	bool IsReloading();
	int GetClipSize();
	int GetAmmoInReserve();
	int GetAmmoInClip();
};


// Class KillstreakUINew.KSWhatsNewModalViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSWhatsNewModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWhatsNewModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewPanel
// 0x0068 (0x00D8 - 0x0070)
class UKSWhatsNewPanel : public UKSJsonData
{
public:
	struct FText                                       Header;                                                   // 0x0070(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       SubHeader;                                                // 0x0088(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x00A0(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                           Image;                                                    // 0x00B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                      // 0x00C0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsFullScreen;                                             // 0x00D0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWhatsNewPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewModal
// 0x0018 (0x04F8 - 0x04E0)
class UKSWhatsNewModal : public UKSWidget
{
public:
	int                                                maxPanelCount;                                            // 0x04E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<class UKSWhatsNewPanel*>                    StoredPanels;                                             // 0x04E8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.KSWhatsNewModal");
		return ptr;
	}


	void UpdateWhatsNewPanels();
	void OnJsonChanged();
	TArray<class UKSWhatsNewPanel*> GetPanelData();
	int GetMaxPanelCount();
	class UKSJsonDataFactory* GetJsonDataFactory();
};


// Class KillstreakUINew.TickAnimationManager
// 0x0050 (0x0078 - 0x0028)
class UTickAnimationManager : public UObject
{
public:
	TMap<struct FName, struct FTickAnimationParams>    AnimsByName;                                              // 0x0028(0x0050) (CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakUINew.TickAnimationManager");
		return ptr;
	}


	void StopAnimation(const struct FName& AnimName);
	void SkipToEndAnimation(const struct FName& AnimName);
	void ResumeAnimation(const struct FName& AnimName);
	void RemoveAnimation(const struct FName& AnimName);
	void PlayAnimation(const struct FName& AnimName);
	void PauseAnimation(const struct FName& AnimName);
	bool GetAnimationInfo(const struct FName& AnimName, struct FTickAnimationParams* OutAnimParams);
	void ApplyTick(float DeltaTime);
	void AddAnimation(const struct FName& AnimName, float Duration, const struct FScriptDelegate& UpdateEvent, const struct FScriptDelegate& FinishedEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
