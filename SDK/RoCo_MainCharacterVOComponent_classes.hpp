#pragma once

// Rogue Company (0.6X) SDK

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
// 0x09C0 (0x0B40 - 0x0180)
class UMainCharacterVOComponent_C : public UKSVOComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FKSVoicelineEvent                           UnderFire;                                                // 0x0188(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           TakingDamage;                                             // 0x01C0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	float                                              AngleThresholdForShotFromBehind;                          // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	struct FKSVoicelineEvent                           ShotFromBehind;                                           // 0x0200(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           AbilityOnCooldown;                                        // 0x0238(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           PrimaryPickedUp;                                          // 0x0270(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           GadgetPickedUp;                                           // 0x02A8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           MeleePickedUp;                                            // 0x02E0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           MedPackPickedUp;                                          // 0x0318(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Revived;                                                  // 0x0350(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           RevivedOther;                                             // 0x0388(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           RevivedOtherRemote;                                       // 0x03C0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           LastManStanding;                                          // 0x03F8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Zipline;                                                  // 0x0430(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Upline;                                                   // 0x0468(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Landed;                                                   // 0x04A0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Mantle;                                                   // 0x04D8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Jumped;                                                   // 0x0510(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           DodgeRoll;                                                // 0x0548(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           GetObjective;                                             // 0x0580(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Victory;                                                  // 0x05B8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Skydive;                                                  // 0x05F0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           LethalGadget;                                             // 0x0628(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           UtilityGadget;                                            // 0x0660(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           UtilityDeployable;                                        // 0x0698(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           LethalDeployable;                                         // 0x06D0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           InteractObjective;                                        // 0x0708(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Select;                                                   // 0x0740(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           ShopPurchase;                                             // 0x0778(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UKSShopRuleComponent*                        ShopRuleComponent;                                        // 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Intro;                                                    // 0x07B8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           ReviveMe;                                                 // 0x07F0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           Acknowledged;                                             // 0x0828(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           CancelThat;                                               // 0x0860(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           SuddenDeath;                                              // 0x0898(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TMap<EPingMessage, struct FKSVoicelineEvent>       PingVOMap;                                                // 0x08D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombPickedUp;                                             // 0x0920(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombPlant;                                                // 0x0958(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombSpottedArmed;                                         // 0x0990(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombSpottedUnarmed;                                       // 0x09C8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           BombDefusing;                                             // 0x0A00(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class AKSPlayerState*                              PlayerState;                                              // 0x0A38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSVoicelineEvent                           SprintStart;                                              // 0x0A40(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FKSVoicelineEvent                           SprintEnd;                                                // 0x0A78(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               SprintStarted;                                            // 0x0AB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0AB1(0x0007) MISSED OFFSET
	struct FKSVoicelineEvent                           SprintEndStop;                                            // 0x0AB8(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               SprintPlaying;                                            // 0x0AF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	float                                              SprintingTimer;                                           // 0x0AF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SprintTimerExhale;                                        // 0x0AF8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	struct FTimerHandle                                SprintTimerHandle;                                        // 0x0B00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Ouch;                                                     // 0x0B08(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C");
		return ptr;
	}


	void On_Take_Damage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void EnemyBehind(class AActor* EnemyActor, bool* Behind);
	void BindToGameStateEvents(class AKSGameState* GameState);
	void OnLastManStanding(class AKSPlayerState* LastPlayer);
	void OnWinnerSet(int TeamNumber);
	void OnRoundSetup(const struct FRoundInitState& RoundInitState);
	void OnPhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void BindToPingManagerEvents(class UKSPingManager* PingManager);
	void PingAdded(const struct FPingInfo& PingInfo);
	void PingAcknowledged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	void SentVoiceLineOnly(EPingMessage PingMessage, class AKSPlayerState* SendingPlayer);
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
