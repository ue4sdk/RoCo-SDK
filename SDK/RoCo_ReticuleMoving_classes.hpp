#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReticuleMoving_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReticuleMoving.ReticuleMoving_C
// 0x0121 (0x0709 - 0x05E8)
class UReticuleMoving_C : public UKSComponentReticleWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            BlockedShotAnim;                                          // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FlashbangIconAnim;                                        // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            BrokenGadgetIconAnim;                                     // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            DamagedGadgetIconAnim;                                    // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ResistIconAnim;                                           // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      AimBlockedIcon;                                           // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   AimBlockedIconWrapper;                                    // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BrokenGadgetIcon;                                         // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UChaosLauncherReticle_C*                     ChaosLauncherReticle;                                     // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      DamagedGadgetIcon;                                        // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              DamageIcons;                                              // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UDualARReticle_C*                            DualARReticle;                                            // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                HitMarkersContainer;                                      // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHitReticle_C*                               HitReticle;                                               // 0x0658(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvas;                                               // 0x0660(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UReticleBase_C*                              NullReticle;                                              // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPistolReticle_C*                            PistolReticle;                                            // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UReloadReticle_C*                            ReloadReticle;                                            // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ResistIcon;                                               // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    ResistIconWrapper;                                        // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             ReticleSwitcher;                                          // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URifleReticle_C*                             RifleReticle;                                             // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UShotgunReticle_C*                           ShotgunReticle;                                           // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Lightbomb_HitDisplay_C*                 WBP_Lightbomb_HitDisplay;                                 // 0x06A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              CachedAccuracy;                                           // 0x06B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Offset;                                                   // 0x06B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentADSTime;                                           // 0x06B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	class AKSWeapon*                                   Grenade;                                                  // 0x06C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GrenadeTickPeriod;                                        // 0x06C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	class AKSWeapon_Aimed*                             ActiveWeapon;                                             // 0x06D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              BoundPlayer;                                              // 0x06D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSCharacter*                                BoundChar;                                                // 0x06E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CachedOutOfBounds;                                        // 0x06E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CachedCrosshairHidden;                                    // 0x06E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x06EA(0x0002) MISSED OFFSET
	struct FVector2D                                   TargetTranslation;                                        // 0x06EC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetOpacity;                                            // 0x06F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CachedIsDead;                                             // 0x06F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CachedDownedInPlay;                                       // 0x06F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CachedIsPlayingEmote;                                     // 0x06FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x5];                                       // 0x06FB(0x0005) MISSED OFFSET
	class UKSSettingsDataFactory*                      SettingDataFactory;                                       // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CachedIsShotBlocked;                                      // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ReticuleMoving.ReticuleMoving_C");
		return ptr;
	}


	void ResetADS();
	void UpdateBlockedShotDisplay(bool IsShotBlocked, const struct FVector2D& Translation, const struct FVector2D& IconScale);
	void UpdateVisibility();
	void UnBindReticleAmmoGauge();
	void HandleShotgunElimination();
	void ProcessShotgunHitDisplay(const struct FShotgunHitData& InShotgunHitData);
	void UnbindShotgunNotify();
	void BindToShotgunNotify();
	void IsShotgunReticleType(bool* Return, class UReticleBase_C** Reticle);
	void BindReticleAmmoGauge();
	void CheckShotgunReload(bool* IsShotgunReload);
	void GetActiveReticle(class UReticleBase_C** Reticle);
	void SetActiveReticle();
	void InitializeTickAnimations();
	void HandleBlockedShotLerpUpdate(float ElapsedTime, float ElapsedAlpha);
	void HandleBlockedShotLerpFinished();
	void Construct();
	void AimStateChange(EKSCharacterAimMode NewAimMode);
	void Kill(const struct FCombatEventInfo& Victim);
	void OnInstigatedDamage(float DamageAmount, bool IsHeadshot, bool IsDown, bool isLethal, bool isShielded, class UClass* DamageTypeClass, class AActor* Target, class AActor* DamageCauser, bool Damage_Resisted);
	void UpdateReticleOffset(float OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale);
	void PostSetActiveWeaponComponent();
	void PreClearActiveWeaponComponent();
	void HandleOnKillCamViewProjectile(class AKSProjectile* ViewProjectile);
	void HandleKillCamEnabled(bool bEnabled);
	void PreClearPawn();
	void ViewedPawnInstigatedDamageNotify(const struct FCombatEventInfo& DamageInfo);
	void OnPlayerKilled(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter);
	void HandleReload__New_(class UKSWeaponComponent* WeaponComponent, EWeaponStateNew OldState, EWeaponStateNew NewState);
	void GrenadeStateChange__New_(class UKSWeaponComponent* Weapon, EWeaponStateNew Old_State, EWeaponStateNew New_State);
	void HandleShotgunNotify(class AKSCharacter* KSCharacter, const struct FShotgunHitData& InShotgunHitData);
	void PostSetPawn();
	void PostSetPlayerState();
	void PreClearPlayerState();
	void HideResistIcon();
	void HideDamagedGadgetIcon();
	void HideBrokenGadgetIcon();
	void HideFlashbangIcon();
	void Handle_Player_Down_or_Elim_Changed(class AKSPlayerState* PlayerState);
	void HandleLightBombHitCount(int HitCount);
	void HandleEmoteStoppedPlaying();
	void HandleOnEmoteStartedPlaying();
	void HandleDeathStateChange();
	void HandleCrosshairHidden(class AKSCharacter* Character, bool Hidden);
	void Handle_Out_Of_Bounds_End();
	void Handle_Out_Of_Bounds_Begin();
	void ExecuteUbergraph_ReticuleMoving(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
