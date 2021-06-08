#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformGameFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlatformGameFramework.DistributionVectorUniformParameter
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniformParameter : public UDistributionVector
{
public:
	struct FName                                       MaxParamName;                                             // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MinParamName;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DefaultMaxValue;                                          // 0x0048(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DefaultMinValue;                                          // 0x0054(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.DistributionVectorUniformParameter");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPGame_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_BlueprintFunctionLibrary");
		return ptr;
	}


	static void ShowSkinnedMeshMaterialSection(class USkinnedMeshComponent* SkinnedMeshComponent, int MaterialID, int SectionIndex, bool bShow, int LODIndex);
	static void SetLightingChannels(class UPrimitiveComponent* PrimitiveComponent, const struct FLightingChannels& NewLightingChannels);
	static bool ServerTravelWithGameMode(class UObject* WorldContextObject, TSoftObjectPtr<class UWorld> Map, TSoftObjectPtr<class UClass> GameMode, TArray<struct FString> Options, bool bSeamless);
	static bool ServerTravel(class UObject* WorldContextObject, TSoftObjectPtr<class UWorld> Map, TSoftObjectPtr<class UClass> GameMode, TArray<struct FString> Options, bool bSeamless, bool bPreserveCurrentOptions);
	static bool IsSteamClient();
	static bool IsPlatformType(bool IsConsole, bool IsPC, bool IsMobile);
	static bool IsPlatform(bool IsXboxOne, bool IsPS4, bool IsSwitch, bool IsWindows, bool IsMac, bool IsLinux, bool IsIOS, bool IsAndroid, bool IsXSX, bool IsPS5);
	static bool IsGameBit(EGameBits GameBit);
	static bool IsAnonymousLogin();
	static float GetPropertyClampedValue(const struct FPGame_Property& Prop);
	static EGameLocalizationType GetGameLocalizationType();
	static void FrameDelay(class UObject* WorldContextObject, int NumFramesToDelay, const struct FLatentActionInfo& LatentInfo);
	static struct FLightingChannels ConvertToEngineLightingChannels(const struct FPGame_BlueprintableLightingChannels& BlueprintableLightingChannels);
	static struct FPGame_BlueprintableLightingChannels ConvertToBlueprintableLightingChannels(const struct FLightingChannels& EngineLightChannels);
	static bool AreMeshComponentTexturesFullyStreamedIn(class UMeshComponent* InMeshComponent);
	static bool AreActorTexturesFullyStreamedIn(class AActor* InActor);
};


// Class PlatformGameFramework.PGame_Character
// 0x0040 (0x0500 - 0x04C0)
class APGame_Character : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	class UPGame_EffectManagerComponent*               m_EffectManager;                                          // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FTweenInfo                                  r_TweenInfo;                                              // 0x04D0(0x0014) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FChargeInfo                                 r_ChargeInfo;                                             // 0x04E4(0x001C) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_Character");
		return ptr;
	}


	void OnRep_Tween();
	void OnRep_Charge();
};


// Class PlatformGameFramework.PGame_CharacterMovementComponent
// 0x0060 (0x0670 - 0x0610)
class UPGame_CharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0610(0x0020) MISSED OFFSET
	bool                                               bUseTweenWalkingPhysics;                                  // 0x0630(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	struct FChargeInfo                                 r_ChargeInfo;                                             // 0x0638(0x001C) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTweenInfo                                  r_TweenInfo;                                              // 0x0654(0x0014) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0668(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_CharacterMovementComponent");
		return ptr;
	}


	void StopTween();
	void StopCharge();
	void StartTween(unsigned char TweenType, const struct FVector& TweenDestination, float TweenTime);
	void StartCharge(unsigned char ChargeType, float ChargeInitialYaw, const struct FVector& ChargeInitialLocation, float ChargeSpeed, float ChargeRange);
	void OnRep_Tween(const struct FTweenInfo& TweenInfo);
	void OnRep_Charge(const struct FChargeInfo& ChargeInfo);
};


// Class PlatformGameFramework.PGame_CheatComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPGame_CheatComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_CheatComponent");
		return ptr;
	}


	void TestFubarRewardPostLogin();
	void TestFubarRewardPosted();
	void TestFubar();
	void ServerTestFubarRewardPostLogin();
	void ServerTestFubarRewardPosted();
	void ServerTestFubar();
	void ServerExecCall(const struct FString& request);
	void ServerExec(const struct FString& request);
	void Logout();
	void gmJoinQueue(int QueueId);
	void gmCommand(const struct FString& request);
	void gmC(const struct FString& request);
	void DumpAnimationStats();
	void CustomForceStart();
};


// Class PlatformGameFramework.PGame_CombatLogVisualizer
// 0x0010 (0x0230 - 0x0220)
class APGame_CombatLogVisualizer : public AActor
{
public:
	struct FString                                     LogFileName;                                              // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_CombatLogVisualizer");
		return ptr;
	}


	void Visualize();
	void LoadCombatLog();
	void ClearVisualization();
};


// Class PlatformGameFramework.PGame_EffectManagerComponent
// 0x02D0 (0x0380 - 0x00B0)
class UPGame_EffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) MISSED OFFSET
	struct FPGame_PersistentEffectRepDataContainer     r_ReplicatedEffectData;                                   // 0x00D8(0x0120) (CPF_Edit, CPF_Net, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_RepNotify, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FPGame_EffectManagerPropertyContainer       r_ReplicatedProperties;                                   // 0x01F8(0x0170) (CPF_Edit, CPF_Net, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0368(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_EffectManagerComponent");
		return ptr;
	}


	void OnRep_EffectData();
	void InstantEffectBroadcast(const struct FPGame_InstantEffectRepData& repData);
	int GetPropertyValueIntFromBlueprint(int PropertyId);
	float GetPropertyValueFromBlueprint(int PropertyId);
	class UPGame_EffectGroupPersistent* GetDefaultEffectGroupForPersistentRepData(const struct FPGame_PersistentEffectRepData& repData);
	class UPGame_EffectGroupInstant* GetDefaultEffectGroupForInstantRepData(const struct FPGame_InstantEffectRepData& repData);
	class UPGame_EffectAttachment* CreatePersistentAttachment(const struct FPGame_PersistentEffectRepData& repData);
	void CreateInstantAttachment(const struct FPGame_InstantEffectRepData& repData);
};


// Class PlatformGameFramework.PGame_EffectAttachment
// 0x0000 (0x00B0 - 0x00B0)
class UPGame_EffectAttachment : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_EffectAttachment");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroup
// 0x0058 (0x0080 - 0x0028)
class UPGame_EffectGroup : public UObject
{
public:
	struct FGameplayTagContainer                       m_EffectGroupTypes;                                       // 0x0028(0x0020) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       m_BehaviorCategories;                                     // 0x0048(0x0020) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<class UPGame_Effect*>                       m_Effects;                                                // 0x0068(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      m_AttachmentClass;                                        // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_EffectGroup");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroupPersistent
// 0x0020 (0x00A0 - 0x0080)
class UPGame_EffectGroupPersistent : public UPGame_EffectGroup
{
public:
	struct FGameplayTag                                m_StackingCategory;                                       // 0x0080(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EEffectGroupApplicationRule                        m_ApplicationRule;                                        // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0088(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      m_nMaxStackCount;                                         // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_bApplyInstantOnInterval;                                // 0x008D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_bApplyStackOnInterval;                                  // 0x008E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	float                                              m_fStartDuration;                                         // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_fDuration;                                              // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_fIntervalDuration;                                      // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_fApplicationStrength;                                   // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_EffectGroupPersistent");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroupInstant
// 0x0000 (0x0080 - 0x0080)
class UPGame_EffectGroupInstant : public UPGame_EffectGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_EffectGroupInstant");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_Effect
// 0x0028 (0x0050 - 0x0028)
class UPGame_Effect : public UObject
{
public:
	struct FPGame_Property                             m_Property;                                               // 0x0028(0x0024) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               m_bApplyOnInternal;                                       // 0x004C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_Effect");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_Effectable
// 0x0000 (0x0028 - 0x0028)
class UPGame_Effectable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_Effectable");
		return ptr;
	}


	int GetIntPropertyValue(int propIdInt);
	float GetFloatPropertyValue(int propIdInt);
};


// Class PlatformGameFramework.PGame_EffectSource
// 0x0000 (0x0028 - 0x0028)
class UPGame_EffectSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_EffectSource");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_GameInstance
// 0x00B8 (0x0250 - 0x0198)
class UPGame_GameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0198(0x0050) MISSED OFFSET
	struct FString                                     LastSonyMatchId;                                          // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x40];                                      // 0x01F8(0x0040) MISSED OFFSET
	bool                                               bStartHotfixProcessingOnUpdateAppSettings;                // 0x0238(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0239(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_GameInstance");
		return ptr;
	}


	void ProvideSonyMatchFeedback(bool bReviewTeamOnly);
	bool HasValidSonyMatch();
	void EndLoadingScreen(class UWorld* World);
	void BeginLoadingScreen(const struct FString& mapName);
};


// Class PlatformGameFramework.PGame_GameModeBase
// 0x00A8 (0x03B0 - 0x0308)
class APGame_GameModeBase : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0308(0x0068) MISSED OFFSET
	struct FString                                     PersistentMapSuffix;                                      // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FString>                             SublevelSuffixes;                                         // 0x0380(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FString>                             HighMemorySublevelSuffixes;                               // 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FString>                             LowMemorySublevelSuffixes;                                // 0x03A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_GameModeBase");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_GameMode
// 0x00D0 (0x0480 - 0x03B0)
class APGame_GameMode : public APGame_GameModeBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET
	bool                                               bAutoEnableCombatLog;                                     // 0x03C8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUploadCombatLogOverride;                                 // 0x03C9(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4E];                                      // 0x03CA(0x004E) MISSED OFFSET
	bool                                               bFubarForCPUFramerate;                                    // 0x0418(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bFubarForPacketLoss;                                      // 0x0419(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              FubarShutdownWaitTimeoutTime;                             // 0x041C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0420(0x0008) MISSED OFFSET
	struct FString                                     SonyActivityId;                                           // 0x0428(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SonyMatchOwnerNetTimeout;                                 // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FPGame_SonyMatchData                        SonyMatchData;                                            // 0x0440(0x0018) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<uint32_t>                                   SonyIneligibleMatchOwners;                                // 0x0458(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	TArray<struct FPGame_InactivePlayerStateEntry>     PGame_InactivePlayerArray;                                // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_GameMode");
		return ptr;
	}


	void OnFubarShutdownTimeout();
	void InactivePlayerStateDestroyed(class AActor* InActor);
	void FinalShutdown();
	void FinalizeMatchEnded();
};


// Class PlatformGameFramework.PGame_GameState
// 0x0010 (0x02A0 - 0x0290)
class APGame_GameState : public AGameState
{
public:
	struct FString                                     r_SonyMatchIdForPlayerFeedback;                           // 0x0290(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_GameState");
		return ptr;
	}


	void OnRep_SonyMatchIdForPlayerFeedback();
};


// Class PlatformGameFramework.PGame_LandingPanelJSONHandler
// 0x0148 (0x0170 - 0x0028)
class UPGame_LandingPanelJSONHandler : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHandlerObjectReady;                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJsonDownloaded;                                         // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJsonReady;                                              // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnImagesDownloaded;                                       // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0068(0x00B8) MISSED OFFSET
	TMap<struct FString, class UTexture2DDynamic*>     mapFilePathToTexture;                                     // 0x0120(0x0050) (CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_LandingPanelJSONHandler");
		return ptr;
	}


	void RequestNewJson();
};


// Class PlatformGameFramework.PGame_PerformanceCaptureSettings
// 0x0048 (0x0070 - 0x0028)
class UPGame_PerformanceCaptureSettings : public UObject
{
public:
	float                                              FOV;                                                      // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FString>                             StatsToCollect;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapsToProfile;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartingOffsetTime;                                       // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfSamples;                                          // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeBetweenSamples;                                       // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FPGame_PerformanceCaptureProfile>    Profiles;                                                 // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_PerformanceCaptureSettings");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerController
// 0x0128 (0x06B0 - 0x0588)
class APGame_PlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0588(0x00D0) MISSED OFFSET
	struct FString                                     SonyMatchId;                                              // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     SonyActivityId;                                           // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ESonyMatchState                                    SonyMatchState;                                           // 0x0678(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ESonyMatchState                                    QueuedSonyMatchState;                                     // 0x0679(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsSonyMatchOwner;                                        // 0x067A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsEligibleSonyMatchOwner;                                // 0x067B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsExclusiveSonyMatchOwner;                               // 0x067C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x13];                                      // 0x067D(0x0013) MISSED OFFSET
	class UClass*                                      m_CheatComponentClass;                                    // 0x0690(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPGame_CheatComponent*                       r_CheatComponent;                                         // 0x0698(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSerializedMctsNetId                        r_ReplicatedNetId;                                        // 0x06A0(0x0008) (CPF_Net, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      InputComponentClass;                                      // 0x06A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_PlayerController");
		return ptr;
	}


	void ServerUpdateSonyMatchOwnerEligibility(bool bIsEligible);
	void ServerUpdateSonyMatchData(const struct FString& InMatchId);
	void ClientUpdateSonyMatchData(const struct FString& InMatchId, const struct FString& InActivityId);
	void ClientGameFubared(EFubarReason Reason);
	void ClientCheckSonyMatchOwnerEligibility();
};


// Class PlatformGameFramework.PGame_PlayerInputDefault
// 0x0008 (0x0030 - 0x0028)
class UPGame_PlayerInputDefault : public UObject
{
public:
	bool                                               bRestrictInvalidInputType;                                // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_PlayerInputDefault");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerInput
// 0x0040 (0x1330 - 0x12F0)
class UPGame_PlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x12F0(0x0020) MISSED OFFSET
	float                                              KeyMouseSwitchDelta;                                      // 0x1310(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1314(0x0004) MISSED OFFSET
	float                                              GamepadSwitchDelta;                                       // 0x1318(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x14];                                      // 0x131C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_PlayerInput");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_HierarchicalInputComponent
// 0x0060 (0x0198 - 0x0138)
class UPGame_HierarchicalInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0138(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_HierarchicalInputComponent");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerState
// 0x0000 (0x0320 - 0x0320)
class APGame_PlayerState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_PlayerState");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PositionHistoryComponent
// 0x0038 (0x00E8 - 0x00B0)
class UPGame_PositionHistoryComponent : public UActorComponent
{
public:
	EPositionHistoryRecordMode                         PositionRecordMode;                                       // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               ExtrapolateFromLastEntry;                                 // 0x00B1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAutoPopulateOnBeginPlay;                                 // 0x00B2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x15];                                      // 0x00B3(0x0015) MISSED OFFSET
	TArray<struct FPrimitivePriority>                  TrackedPrimitives;                                        // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_PositionHistoryComponent");
		return ptr;
	}


	void RemoveTrackedPrimitive(class UPrimitiveComponent* InPrimitive);
	void AddTrackedPrimitive(class UPrimitiveComponent* InPrimitive, int Priority);
};


// Class PlatformGameFramework.PGame_ShippingConsole
// 0x0000 (0x0138 - 0x0138)
class UPGame_ShippingConsole : public UShippingConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_ShippingConsole");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_WorldSettings
// 0x0030 (0x03D0 - 0x03A0)
class APGame_WorldSettings : public AWorldSettings
{
public:
	TArray<class UClass*>                              ActorsToAlwaysSpawn;                                      // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FString>                             HighMemorySublevelSuffixes;                               // 0x03B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             LowMemorySublevelSuffixes;                                // 0x03C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGame_WorldSettings");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_ParallelSequence
// 0x0000 (0x0090 - 0x0090)
class UPGameBTComposite_ParallelSequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGameBTComposite_ParallelSequence");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random
// 0x0010 (0x00A0 - 0x0090)
class UPGameBTComposite_Random : public UBTCompositeNode
{
public:
	TArray<float>                                      Probabilities;                                            // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGameBTComposite_Random");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random_Selector
// 0x0000 (0x00A0 - 0x00A0)
class UPGameBTComposite_Random_Selector : public UPGameBTComposite_Random
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGameBTComposite_Random_Selector");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random_Sequence
// 0x0000 (0x00A0 - 0x00A0)
class UPGameBTComposite_Random_Sequence : public UPGameBTComposite_Random
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGameBTComposite_Random_Sequence");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTTask_AlwaysReturn
// 0x0008 (0x0078 - 0x0070)
class UPGameBTTask_AlwaysReturn : public UBTTaskNode
{
public:
	TEnumAsByte<EBTNodeResult>                         AlwaysReturn;                                             // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGameBTTask_AlwaysReturn");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey
// 0x0000 (0x0098 - 0x0098)
class UPGameBTTask_ClearBlackboardKey : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
