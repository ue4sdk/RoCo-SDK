#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainCharacterVOComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C
// 0x0840 (0x0990 - 0x0150)
class UMainCharacterVOComponent_C : public UKSVOComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FKSVoicelineEvent                           UnderFire;                                                // 0x0158(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           TakingDamage;                                             // 0x0188(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	float                                              AngleThresholdForShotFromBehind;                          // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FKSVoicelineEvent                           ShotFromBehind;                                           // 0x01C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           AbilityOnCooldown;                                        // 0x01F0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           PrimaryPickedUp;                                          // 0x0220(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           GadgetPickedUp;                                           // 0x0250(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           MeleePickedUp;                                            // 0x0280(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           MedPackPickedUp;                                          // 0x02B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Revived;                                                  // 0x02E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           RevivedOther;                                             // 0x0310(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           RevivedOtherRemote;                                       // 0x0340(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           LastManStanding;                                          // 0x0370(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Zipline;                                                  // 0x03A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Upline;                                                   // 0x03D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Landed;                                                   // 0x0400(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Mantle;                                                   // 0x0430(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Jumped;                                                   // 0x0460(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           DodgeRoll;                                                // 0x0490(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           GetObjective;                                             // 0x04C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Victory;                                                  // 0x04F0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Skydive;                                                  // 0x0520(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           LethalGadget;                                             // 0x0550(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           UtilityGadget;                                            // 0x0580(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           UtilityDeployable;                                        // 0x05B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           LethalDeployable;                                         // 0x05E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           InteractObjective;                                        // 0x0610(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Select;                                                   // 0x0640(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           ShopPurchase;                                             // 0x0670(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UKSShopRuleComponent*                        ShopRuleComponent;                                        // 0x06A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Intro;                                                    // 0x06A8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           ReviveMe;                                                 // 0x06D8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Acknowledged;                                             // 0x0708(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           CancelThat;                                               // 0x0738(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           SuddenDeath;                                              // 0x0768(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TMap<EPingMessage, struct FKSVoicelineEvent>       PingVOMap;                                                // 0x0798(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombPickedUp;                                             // 0x07E8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombPlant;                                                // 0x0818(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombSpottedArmed;                                         // 0x0848(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombSpottedUnarmed;                                       // 0x0878(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombDefusing;                                             // 0x08A8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class AKSPlayerState*                              PlayerState;                                              // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSVoicelineEvent                           SprintStart;                                              // 0x08E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           SprintEnd;                                                // 0x0910(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               SprintStarted;                                            // 0x0940(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	struct FKSVoicelineEvent                           SprintEndStop;                                            // 0x0948(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               SprintPlaying;                                            // 0x0978(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	float                                              SprintingTimer;                                           // 0x097C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SprintTimerExhale;                                        // 0x0980(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	struct FTimerHandle                                SprintTimerHandle;                                        // 0x0988(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C"));
		return ptr;
	}


	void EnemyBehind(class AActor* EnemyActor, bool* Behind);
	void BindToGameStateEvents(class AKSGameState* GameState);
	void OnLastManStanding(class AKSPlayerState* LastPlayer);
	void OnWinnerSet(int TeamNumber);
	void OnRoundSetup(const struct FRoundInitState& RoundInitState);
	void OnPhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void BindToPingManagerEvents(class UKSPingManager* PingManager);
	void PingAdded(const struct FPingInfo& PingInfo);
	void PingAcknowledged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	void SentVoiceLineOnly(EPingMessage PingMessage, class AKSPlayerState* SendingPlayer);
	void OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnItemPickedUp(class AKSCharacter* Character, class AKSItemDrop* ItemDrop, class UKSItem* Item);
	void OnReviveCompleted(class AKSCharacter* Reviver, class AKSCharacter* Revivee);
	void BindToCharacterEvents(class AKSCharacter* Character);
	void OnInteractStart(class AActor* Target, float Duration);
	void OnLanded(const struct FVector& Velocity);
	void OnMantleChanged(bool IsMantling);
	void OnDOdgeRollChanged(bool IsDodgeRolling);
	void OnJumped();
	void OnCharacterFreeFallStarted();
	void OnWeaponInventoryChanged();
	void BuildWeaponStateChanged(class AKSWeapon* Weapon, EWeaponStateNew OldState, EWeaponStateNew NewState);
	void GadgetWeaponStateChanged(class AKSWeapon* Weapon, EWeaponStateNew OldState, EWeaponStateNew NewState);
	void ResetObjectiveVO();
	void OnStartReviveOther(class AKSCharacter* Reviver, class AKSCharacter* Revivee, float ReviveTime, bool bRemote);
	void AnnounceBombSpotted(bool Armed);
	void OnDeathStateChanged();
	void OnSprintChanged(bool IsSprinting);
	void FinalExhaleTimerSet();
	void DoOnceResetDefusing();
	void DoOnceResetInteractObj();
	void DoOnceResetPlanting();
	void ModFailedToActivate(class UKSModInst_Activated* AttemptedMod, EKSAbilityUsageFailureType AbilityFailureType);
	void BindToPlayerStateEvents(class AKSPlayerState* PlayerState);
	void BindToActivatableModEvents(class UKSModInst_Activated* ActivatableMod);
	void BindToEvents();
	void BindToTeamStateEvents(class AKSTeamState* TeamState);
	void BindToPlayerControllerEvents(class AKSPlayerController* PlayerController);
	void OnJobChanged();
	void ShopItemChanged(const struct FShopItem& ShopItem);
	void OnPlayerDownedChanged(class AKSPlayerState* PlayerState);
	void ModTriggered();
	void ModSetup();
	void ModActivated(bool bActive);
	void ExecuteUbergraph_MainCharacterVOComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
