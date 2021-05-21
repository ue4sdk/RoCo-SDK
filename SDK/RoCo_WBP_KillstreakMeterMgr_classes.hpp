#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KillstreakMeterMgr_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C
// 0x0100 (0x0610 - 0x0510)
class UWBP_KillstreakMeterMgr_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              AbilitySlotContainer;                                     // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ErrorPrompt;                                              // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ErrorPromptOverlay;                                       // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGadgetElementWrapper_C*                     GadgetElementWrapper;                                     // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_36;                                                 // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_65;                                                 // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              MeterContainer;                                           // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              MeterContainer_GameMode;                                  // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            PromptIcon;                                               // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    PromptOverlay;                                            // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  PromptText;                                               // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         WBP_InputCallout;                                         // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KillstreakMeter_C*                      WBP_KillstreakMeter;                                      // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KillstreakMeter_C*                      WBP_KillstreakMeter_1;                                    // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KillstreakMeter_C*                      WBP_KillstreakMeter_2;                                    // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KillstreakMeter_C*                      WBP_KillstreakMeter_3;                                    // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              LocalKSPlayerState;                                       // 0x0598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UWBP_KillstreakMeter_C*>              Meters;                                                   // 0x05A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               IsDirty;                                                  // 0x05B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05B1(0x0003) MISSED OFFSET
	int                                                CurrentMoney;                                             // 0x05B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MaxShownTime;                                             // 0x05B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	float                                              DeltaSecond;                                              // 0x05BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Second;                                                   // 0x05C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               KillCamEnabled;                                           // 0x05C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	TArray<class UKSModInst_Activated*>                ActivatableMods;                                          // 0x05C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class AKSCharacter*                                KSCharacter;                                              // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Tick_Prompt_Mod_Found;                                    // 0x05E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	float                                              LockoutTimeRemaining;                                     // 0x05E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Currently_Jammed;                                         // 0x05E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               CurrentJammedLoopStopEvent;                               // 0x05F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               CurrentJammedLoopEndEvent;                                // 0x05F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UKSModInst_Activated*>                GameModeActivatableMods;                                  // 0x0600(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C");
		return ptr;
	}


	void InitActivatableMods(TArray<class UKSModInst_Activated*>* Mods);
	void GetWeaponErrorText(class AKSWeapon* Weapon, EKSAbilityUsageFailureType AbilityFailType, struct FText* ErrorText);
	void DisplayErrorText(const struct FText& ErrorText);
	void GetModInstErrorText(class UKSModInst_Activated* ModInst, EKSAbilityUsageFailureType AbilityFailType, struct FText* ErrorText);
	void UpdateCanUse();
	void Set_Jammed(bool IsJammed, bool Initialize);
	void HandleEMPLockoutTick(float TimeLeft);
	void BindToEMPLockout();
	void HandleEMPLocked(bool IsLocked);
	void RemoveMeters();
	void CreateNewMeter(class UKSModInst_Activated* KSModInstActivtd, bool Reserve);
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void PostSetPawn();
	void OpenPostSetPawnRetry();
	void ClosePostSetPawnRetry();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AttemptPostSetPawnRetry();
	void RetryPostSetPawn();
	void HandleModsUpdated(class AKSCharacter* KSCharacter);
	void PreClearPawn();
	void HandleOnPlayerEliminated(class AKSPlayerState* PlayerState);
	void HandleDownedStateChange(class AKSPlayerState* PlayerState);
	void InitializeWidget(class APUMG_HUD* HUD);
	void HandleActivateModsUpdated(class AKSPlayerState* KSPlayerState);
	void OpenPromptFailureTimer();
	void ClosePromptFailureTimer();
	void StartPromptFailureTimer(float DeltaTime);
	void Construct();
	void HandleKillCam(bool Enabled);
	void Handle_Mod_Failed(class UKSModInst_Activated* AttemptedMod, EKSAbilityUsageFailureType AbilityFailureType);
	void OnBuildFailed();
	void OnBruteStrengthActivated(bool bActive);
	void HandleFireFailed(class AKSWeapon* Weapon, EKSAbilityUsageFailureType FailureType);
	void ExecuteUbergraph_WBP_KillstreakMeterMgr(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
