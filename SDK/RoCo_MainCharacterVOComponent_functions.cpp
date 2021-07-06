// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainCharacterVOComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  EnemyActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Behind                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::EnemyBehind(class AActor* EnemyActor, bool* Behind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind");

	struct
	{
		class AActor*                  EnemyActor;
		bool                           Behind;
	} params;

	params.EnemyActor = EnemyActor;

	UObject::ProcessEvent(fn, &params);

	if (Behind != nullptr)
		*Behind = params.Behind;
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToGameStateEvents(class AKSGameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents");

	struct
	{
		class AKSGameState*            GameState;
	} params;

	params.GameState = GameState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          LastPlayer                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnLastManStanding(class AKSPlayerState* LastPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding");

	struct
	{
		class AKSPlayerState*          LastPlayer;
	} params;

	params.LastPlayer = LastPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnWinnerSet(int TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet");

	struct
	{
		int                            TeamNumber;
	} params;

	params.TeamNumber = TeamNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UMainCharacterVOComponent_C::OnRoundSetup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UMainCharacterVOComponent_C::OnPhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSPingManager*          PingManager                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToPingManagerEvents(class UKSPingManager* PingManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents");

	struct
	{
		class UKSPingManager*          PingManager;
	} params;

	params.PingManager = PingManager;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPingInfo               PingInfo                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMainCharacterVOComponent_C::PingAdded(const struct FPingInfo& PingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded");

	struct
	{
		struct FPingInfo               PingInfo;
	} params;

	params.PingInfo = PingInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAcknowledged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PingId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          PingingPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          AcknowledgingPlayer            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::PingAcknowledged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAcknowledged");

	struct
	{
		int                            PingId;
		class AKSPlayerState*          PingingPlayer;
		class AKSPlayerState*          AcknowledgingPlayer;
	} params;

	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;
	params.AcknowledgingPlayer = AcknowledgingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.SentVoiceLineOnly
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          SendingPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::SentVoiceLineOnly(EPingMessage PingMessage, class AKSPlayerState* SendingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.SentVoiceLineOnly");

	struct
	{
		EPingMessage                   PingMessage;
		class AKSPlayerState*          SendingPlayer;
	} params;

	params.PingMessage = PingMessage;
	params.SendingPlayer = SendingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnTakeDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnTakeDamage");

	struct
	{
		class AActor*                  DamagedActor;
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params;

	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSItemDrop*             ItemDrop                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnItemPickedUp(class AKSCharacter* Character, class AKSItemDrop* ItemDrop, class UKSItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp");

	struct
	{
		class AKSCharacter*            Character;
		class AKSItemDrop*             ItemDrop;
		class UKSItem*                 Item;
	} params;

	params.Character = Character;
	params.ItemDrop = ItemDrop;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Reviver                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacter*            Revivee                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnReviveCompleted(class AKSCharacter* Reviver, class AKSCharacter* Revivee)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted");

	struct
	{
		class AKSCharacter*            Reviver;
		class AKSCharacter*            Revivee;
	} params;

	params.Reviver = Reviver;
	params.Revivee = Revivee;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToCharacterEvents(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnInteractStart(class AActor* Target, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart");

	struct
	{
		class AActor*                  Target;
		float                          Duration;
	} params;

	params.Target = Target;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnLanded(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded");

	struct
	{
		struct FVector                 Velocity;
	} params;

	params.Velocity = Velocity;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMantling                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::OnMantleChanged(bool IsMantling)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged");

	struct
	{
		bool                           IsMantling;
	} params;

	params.IsMantling = IsMantling;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDodgeRolling                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::OnDOdgeRollChanged(bool IsDodgeRolling)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged");

	struct
	{
		bool                           IsDodgeRolling;
	} params;

	params.IsDodgeRolling = IsDodgeRolling;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::OnCharacterFreeFallStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::OnWeaponInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BuildWeaponStateChanged(class AKSWeapon* Weapon, EWeaponStateNew OldState, EWeaponStateNew NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged");

	struct
	{
		class AKSWeapon*               Weapon;
		EWeaponStateNew                OldState;
		EWeaponStateNew                NewState;
	} params;

	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::GadgetWeaponStateChanged(class AKSWeapon* Weapon, EWeaponStateNew OldState, EWeaponStateNew NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged");

	struct
	{
		class AKSWeapon*               Weapon;
		EWeaponStateNew                OldState;
		EWeaponStateNew                NewState;
	} params;

	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::ResetObjectiveVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Reviver                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacter*            Revivee                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReviveTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bRemote                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::OnStartReviveOther(class AKSCharacter* Reviver, class AKSCharacter* Revivee, float ReviveTime, bool bRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther");

	struct
	{
		class AKSCharacter*            Reviver;
		class AKSCharacter*            Revivee;
		float                          ReviveTime;
		bool                           bRemote;
	} params;

	params.Reviver = Reviver;
	params.Revivee = Revivee;
	params.ReviveTime = ReviveTime;
	params.bRemote = bRemote;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.AnnounceBombSpotted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Armed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::AnnounceBombSpotted(bool Armed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.AnnounceBombSpotted");

	struct
	{
		bool                           Armed;
	} params;

	params.Armed = Armed;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDeathStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDeathStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnSprintChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSprinting                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::OnSprintChanged(bool IsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnSprintChanged");

	struct
	{
		bool                           IsSprinting;
	} params;

	params.IsSprinting = IsSprinting;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.FinalExhaleTimerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::FinalExhaleTimerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.FinalExhaleTimerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetDefusing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::DoOnceResetDefusing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetDefusing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetInteractObj
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::DoOnceResetInteractObj()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetInteractObj");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetPlanting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::DoOnceResetPlanting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetPlanting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    AttemptedMod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSAbilityUsageFailureType     AbilityFailureType             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::ModFailedToActivate(class UKSModInst_Activated* AttemptedMod, EKSAbilityUsageFailureType AbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate");

	struct
	{
		class UKSModInst_Activated*    AttemptedMod;
		EKSAbilityUsageFailureType     AbilityFailureType;
	} params;

	params.AttemptedMod = AttemptedMod;
	params.AbilityFailureType = AbilityFailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToPlayerStateEvents(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    ActivatableMod                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToActivatableModEvents(class UKSModInst_Activated* ActivatableMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents");

	struct
	{
		class UKSModInst_Activated*    ActivatableMod;
	} params;

	params.ActivatableMod = ActivatableMod;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::BindToEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToTeamStateEvents(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::BindToPlayerControllerEvents(class AKSPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents");

	struct
	{
		class AKSPlayerController*     PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::OnJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ShopItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMainCharacterVOComponent_C::ShopItemChanged(const struct FShopItem& ShopItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged");

	struct
	{
		struct FShopItem               ShopItem;
	} params;

	params.ShopItem = ShopItem;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::OnPlayerDownedChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModTriggered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::ModTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModTriggered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModSetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainCharacterVOComponent_C::ModSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModSetup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainCharacterVOComponent_C::ModActivated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModActivated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainCharacterVOComponent_C::ExecuteUbergraph_MainCharacterVOComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
