#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Killstreak.EItemSourceType
enum class EItemSourceType : uint8_t
{
	EItemSourceType__Unknown       = 0,
	EItemSourceType__AbilityUse    = 1,
	EItemSourceType__Cheat         = 2,
	EItemSourceType__InitialInventory = 3,
	EItemSourceType__LobbyAnimation = 4,
	EItemSourceType__PickupInteraction = 5,
	EItemSourceType__Refund        = 6,
	EItemSourceType__RestoreInventory = 7,
	EItemSourceType__StorePurchase = 8,
	EItemSourceType__WeaponSwap    = 9,
	EItemSourceType__ServerTravel  = 10,
	EItemSourceType__EItemSourceType_MAX = 11
};


// Enum Killstreak.EKSCharacterAimMode
enum class EKSCharacterAimMode : uint8_t
{
	EKSCharacterAimMode__Default   = 0,
	EKSCharacterAimMode__TransitionToDefault = 1,
	EKSCharacterAimMode__Shoulder  = 2,
	EKSCharacterAimMode__TransitionToShoulder = 3,
	EKSCharacterAimMode__AimDownSights = 4,
	EKSCharacterAimMode__TransitionToAimDownSights = 5,
	EKSCharacterAimMode__Alternate = 6,
	EKSCharacterAimMode__TransitionToAlternate = 7,
	EKSCharacterAimMode__EKSCharacterAimMode_MAX = 8
};


// Enum Killstreak.EKSEmotion
enum class EKSEmotion : uint8_t
{
	EKSEmotion__Neutral            = 0,
	EKSEmotion__Focused            = 1,
	EKSEmotion__Pain               = 2,
	EKSEmotion__Wounded            = 3,
	EKSEmotion__Dead               = 4,
	EKSEmotion__MAX                = 5
};


// Enum Killstreak.EAmmoType
enum class EAmmoType : uint8_t
{
	EAmmoType__NINE_MM             = 0,
	EAmmoType__SEVEN               = 1,
	EAmmoType__FIVE                = 2,
	EAmmoType__TWELVE_G            = 3,
	EAmmoType__FORTY_FIVE          = 4,
	EAmmoType__THREE_HUND          = 5,
	EAmmoType__TWENTY_TWO          = 6,
	EAmmoType__FIFTY               = 7,
	EAmmoType__NONE                = 8,
	EAmmoType__EAmmoType_MAX       = 9
};


// Enum Killstreak.ECharacterBehaviorState
enum class ECharacterBehaviorState : uint8_t
{
	ECharacterBehaviorState__Combat = 0,
	ECharacterBehaviorState__Idle  = 1,
	ECharacterBehaviorState__Skydive = 2,
	ECharacterBehaviorState__ECharacterBehaviorState_MAX = 3
};


// Enum Killstreak.EKSAbilityUsageFailureType
enum class EKSAbilityUsageFailureType : uint8_t
{
	EKSAbilityUsageFailureType__Unknown = 0,
	EKSAbilityUsageFailureType__Dead = 1,
	EKSAbilityUsageFailureType__Downed = 2,
	EKSAbilityUsageFailureType__EMP = 3,
	EKSAbilityUsageFailureType__NoFireZone = 4,
	EKSAbilityUsageFailureType__AlreadyActivating = 5,
	EKSAbilityUsageFailureType__Driving = 6,
	EKSAbilityUsageFailureType__Stunned = 7,
	EKSAbilityUsageFailureType__BlockingMovement = 8,
	EKSAbilityUsageFailureType__HardLanding = 9,
	EKSAbilityUsageFailureType__OutOfBounds = 10,
	EKSAbilityUsageFailureType__Locked = 11,
	EKSAbilityUsageFailureType__AltLocked = 12,
	EKSAbilityUsageFailureType__NotEnoughCharge = 13,
	EKSAbilityUsageFailureType__NoBountyTarget = 14,
	EKSAbilityUsageFailureType__NoLinkTarget = 15,
	EKSAbilityUsageFailureType__AlreadyHasWeapon = 16,
	EKSAbilityUsageFailureType__WeaponBusy = 17,
	EKSAbilityUsageFailureType__RoundNotInProgress = 18,
	EKSAbilityUsageFailureType__EKSAbilityUsageFailureType_MAX = 19
};


// Enum Killstreak.EKSItemUsageFailureType
enum class EKSItemUsageFailureType : uint8_t
{
	EKSItemUsageFailureType__Unknown = 0,
	EKSItemUsageFailureType__NotEnoughQuantity = 1,
	EKSItemUsageFailureType__BlockingAction = 2,
	EKSItemUsageFailureType__NoEffect = 3,
	EKSItemUsageFailureType__EMP   = 4,
	EKSItemUsageFailureType__EKSItemUsageFailureType_MAX = 5
};


// Enum Killstreak.EShotgunHitResult
enum class EShotgunHitResult : uint8_t
{
	EShotgunHitResult__Miss        = 0,
	EShotgunHitResult__Hit         = 1,
	EShotgunHitResult__Headshot    = 2,
	EShotgunHitResult__EShotgunHitResult_MAX = 3
};


// Enum Killstreak.EWeaponStateNew
enum class EWeaponStateNew : uint8_t
{
	EWeaponStateNew__Idle          = 0,
	EWeaponStateNew__Buildup       = 1,
	EWeaponStateNew__PreFire       = 2,
	EWeaponStateNew__PostFire      = 3,
	EWeaponStateNew__Cooldown      = 4,
	EWeaponStateNew__PreReload     = 5,
	EWeaponStateNew__PostReload    = 6,
	EWeaponStateNew__ReloadCooldown = 7,
	EWeaponStateNew__Retrieve      = 8,
	EWeaponStateNew__Holster       = 9,
	EWeaponStateNew__Inactive      = 10,
	EWeaponStateNew__NotValid      = 11,
	EWeaponStateNew__EWeaponStateNew_MAX = 12
};


// Enum Killstreak.EShopItemType
enum class EShopItemType : uint8_t
{
	EShopItemType__None            = 0,
	EShopItemType__PrimaryOne      = 1,
	EShopItemType__PrimaryTwo      = 2,
	EShopItemType__SecondaryOne    = 3,
	EShopItemType__SecondaryTwo    = 4,
	EShopItemType__GadgetOne       = 5,
	EShopItemType__GadgetTwo       = 6,
	EShopItemType__Melee           = 7,
	EShopItemType__PerkOne         = 8,
	EShopItemType__PerkTwo         = 9,
	EShopItemType__PerkThree       = 10,
	EShopItemType__PerkFour        = 11,
	EShopItemType__PerkFive        = 12,
	EShopItemType__PerkSix         = 13,
	EShopItemType__GambitOne       = 14,
	EShopItemType__GambitTwo       = 15,
	EShopItemType__GambitThree     = 16,
	EShopItemType__GambitFour      = 17,
	EShopItemType__GambitFive      = 18,
	EShopItemType__GambitSix       = 19,
	EShopItemType__GlobalPerk1     = 20,
	EShopItemType__GlobalPerk2     = 21,
	EShopItemType__GlobalPerk3     = 22,
	EShopItemType__GlobalPerk4     = 23,
	EShopItemType__GlobalPerk5     = 24,
	EShopItemType__GlobalPerk6     = 25,
	EShopItemType__GlobalPerk7     = 26,
	EShopItemType__GlobalPerk8     = 27,
	EShopItemType__GlobalPerk9     = 28,
	EShopItemType__GlobalPerk10    = 29,
	EShopItemType__GlobalPerk11    = 30,
	EShopItemType__GlobalPerk12    = 31,
	EShopItemType__GlobalPerk13    = 32,
	EShopItemType__GlobalPerk14    = 33,
	EShopItemType__GlobalPerk15    = 34,
	EShopItemType__MAX             = 35
};


// Enum Killstreak.EProjectileExplosionType
enum class EProjectileExplosionType : uint8_t
{
	EProjectileExplosionType__Impact = 0,
	EProjectileExplosionType__Fizzle = 1,
	EProjectileExplosionType__FuseExpired = 2,
	EProjectileExplosionType__EProjectileExplosionType_MAX = 3
};


// Enum Killstreak.EModViewModeStateChangeReason
enum class EModViewModeStateChangeReason : uint8_t
{
	EModViewModeStateChangeReason__Activated = 0,
	EModViewModeStateChangeReason__SpectatorChange = 1,
	EModViewModeStateChangeReason__Timeout = 2,
	EModViewModeStateChangeReason__Death = 3,
	EModViewModeStateChangeReason__EModViewModeStateChangeReason_MAX = 4
};


// Enum Killstreak.EModViewModeState
enum class EModViewModeState : uint8_t
{
	EModViewModeState__Off         = 0,
	EModViewModeState__OnButUnviewed = 1,
	EModViewModeState__OnAndViewed = 2,
	EModViewModeState__EModViewModeState_MAX = 3
};


// Enum Killstreak.ETrackedActorType
enum class ETrackedActorType : uint8_t
{
	ETrackedActorType__Unknown     = 0,
	ETrackedActorType__ShieldWeapon = 1,
	ETrackedActorType__MagGloveTarget = 2,
	ETrackedActorType__CoopEscapePoint = 3,
	ETrackedActorType__BountyTarget = 4,
	ETrackedActorType__BombDrop    = 5,
	ETrackedActorType__CashDrop    = 6,
	ETrackedActorType__Projectile  = 7,
	ETrackedActorType__HackTablet  = 8,
	ETrackedActorType__ETrackedActorType_MAX = 9
};


// Enum Killstreak.ELootSiteRarity
enum class ELootSiteRarity : uint8_t
{
	ELootSiteRarity__Personal      = 0,
	ELootSiteRarity__Normal        = 1,
	ELootSiteRarity__Uncommon      = 2,
	ELootSiteRarity__Epic          = 3,
	ELootSiteRarity__Rare          = 4,
	ELootSiteRarity__Legendary     = 5,
	ELootSiteRarity__NonWeapons    = 6,
	ELootSiteRarity__ChildSpawner  = 7,
	ELootSiteRarity__CarePackage   = 8,
	ELootSiteRarity__MedPack       = 9,
	ELootSiteRarity__StartingDrop  = 10,
	ELootSiteRarity__GameMode      = 11,
	ELootSiteRarity__PowerUp       = 12,
	ELootSiteRarity__ELootSiteRarity_MAX = 13
};


// Enum Killstreak.EHitLocationType
enum class EHitLocationType : uint8_t
{
	EHitLocationType__Body         = 0,
	EHitLocationType__Head         = 1,
	EHitLocationType__Limb         = 2,
	EHitLocationType__None         = 3,
	EHitLocationType__EHitLocationType_MAX = 4
};


// Enum Killstreak.EKSVoicelineType
enum class EKSVoicelineType : uint8_t
{
	EKSVoicelineType__Standard     = 0,
	EKSVoicelineType__Quip         = 1,
	EKSVoicelineType__Communication = 2,
	EKSVoicelineType__EKSVoicelineType_MAX = 3
};


// Enum Killstreak.EKSVoicelineAudience
enum class EKSVoicelineAudience : uint8_t
{
	EKSVoicelineAudience__Self     = 0,
	EKSVoicelineAudience__Nearby   = 1,
	EKSVoicelineAudience__NearbyFriendlies = 2,
	EKSVoicelineAudience__AllFriendlies = 3,
	EKSVoicelineAudience__Enemies  = 4,
	EKSVoicelineAudience__EKSVoicelineAudience_MAX = 5
};


// Enum Killstreak.EAccoladeEventType
enum class EAccoladeEventType : uint8_t
{
	EAccoladeEventType__AccoladeEvent_Unknown = 0,
	EAccoladeEventType__AccoladeEvent_Elim = 1,
	EAccoladeEventType__AccoladeEvent_Downed = 2,
	EAccoladeEventType__AccoladeEvent_Revived = 3,
	EAccoladeEventType__AccoladeEvent_DownAssist = 4,
	EAccoladeEventType__AccoladeEvent_CombatEvent = 5,
	EAccoladeEventType__AccoladeEvent_MAX = 6
};


// Enum Killstreak.EAccoladeCategory
enum class EAccoladeCategory : uint8_t
{
	EAccoladeCategory__AccoladeCategory_DownsElims = 0,
	EAccoladeCategory__AccoladeCategory_MultiKill = 1,
	EAccoladeCategory__AccoladeCategory_Support = 2,
	EAccoladeCategory__AccoladeCategory_MAX = 3
};


// Enum Killstreak.EDisplayType
enum class EDisplayType : uint8_t
{
	EDisplayType__Mini             = 0,
	EDisplayType__Full             = 1,
	EDisplayType__Overlay          = 2,
	EDisplayType__EDisplayType_MAX = 3
};


// Enum Killstreak.EJobUniquenessRule
enum class EJobUniquenessRule : uint8_t
{
	EJobUniquenessRule__DuplicatesAllowed = 0,
	EJobUniquenessRule__UniqueToTeam = 1,
	EJobUniquenessRule__UniversallyUnique = 2,
	EJobUniquenessRule__EJobUniquenessRule_MAX = 3
};


// Enum Killstreak.EJobSelectionState
enum class EJobSelectionState : uint8_t
{
	EJobSelectionState__Available  = 0,
	EJobSelectionState__Unavailable = 1,
	EJobSelectionState__OtherSelected = 2,
	EJobSelectionState__Selected   = 3,
	EJobSelectionState__OtherLockedIn = 4,
	EJobSelectionState__LockedIn   = 5,
	EJobSelectionState__Banned     = 6,
	EJobSelectionState__EJobSelectionState_MAX = 7
};


// Enum Killstreak.EKSJobSelectPreviewLoadState
enum class EKSJobSelectPreviewLoadState : uint8_t
{
	EKSJobSelectPreviewLoadState__NoPreview = 0,
	EKSJobSelectPreviewLoadState__PreviewActive = 1,
	EKSJobSelectPreviewLoadState__PreviewLoadingNoVisible = 2,
	EKSJobSelectPreviewLoadState__PreviewLoadingActiveVisible = 3,
	EKSJobSelectPreviewLoadState__EKSJobSelectPreviewLoadState_MAX = 4
};


// Enum Killstreak.ECombatState
enum class ECombatState : uint8_t
{
	ECombatState__Combat           = 0,
	ECombatState__Engaged          = 1,
	ECombatState__NonCombat        = 2,
	ECombatState__BuildUp          = 3,
	ECombatState__ECombatState_MAX = 4
};


// Enum Killstreak.EKSNeutralBombState
enum class EKSNeutralBombState : uint8_t
{
	EKSNeutralBombState__Spawned   = 0,
	EKSNeutralBombState__Reset     = 1,
	EKSNeutralBombState__Held      = 2,
	EKSNeutralBombState__Dropped   = 3,
	EKSNeutralBombState__Arming    = 4,
	EKSNeutralBombState__Armed     = 5,
	EKSNeutralBombState__Disarming = 6,
	EKSNeutralBombState__Disarmed  = 7,
	EKSNeutralBombState__Deactivated = 8,
	EKSNeutralBombState__Exploded  = 9,
	EKSNeutralBombState__EKSNeutralBombState_MAX = 10
};


// Enum Killstreak.EKSRevealPriority
enum class EKSRevealPriority : uint8_t
{
	EKSRevealPriority__None        = 0,
	EKSRevealPriority__Lowest      = 1,
	EKSRevealPriority__VeryLow     = 2,
	EKSRevealPriority__Low         = 3,
	EKSRevealPriority__Medium      = 4,
	EKSRevealPriority__High        = 5,
	EKSRevealPriority__VeryHigh    = 6,
	EKSRevealPriority__Highest     = 7,
	EKSRevealPriority__EKSRevealPriority_MAX = 8
};


// Enum Killstreak.EKSRevealSource
enum class EKSRevealSource : uint8_t
{
	EKSRevealSource__None          = 0,
	EKSRevealSource__AimedAt       = 1,
	EKSRevealSource__Mod           = 2,
	EKSRevealSource__Gadget        = 3,
	EKSRevealSource__KilledBy      = 4,
	EKSRevealSource__Objective     = 5,
	EKSRevealSource__FriendlyVisibility = 6,
	EKSRevealSource__EKSRevealSource_MAX = 7
};


// Enum Killstreak.ETargetAudience
enum class ETargetAudience : uint8_t
{
	ETargetAudience__None          = 0,
	ETargetAudience__SelfOnly      = 1,
	ETargetAudience__Friendlies    = 2,
	ETargetAudience__FriendliesExcludingSelf = 3,
	ETargetAudience__Enemies       = 4,
	ETargetAudience__All           = 5,
	ETargetAudience__ETargetAudience_MAX = 6
};


// Enum Killstreak.ECombatEventFriendlyFireType
enum class ECombatEventFriendlyFireType : uint8_t
{
	ECombatEventFriendlyFireType__Enemy = 0,
	ECombatEventFriendlyFireType__Friendly = 1,
	ECombatEventFriendlyFireType__ReverseFriendly = 2,
	ECombatEventFriendlyFireType__Self = 3,
	ECombatEventFriendlyFireType__ECombatEventFriendlyFireType_MAX = 4
};


// Enum Killstreak.EFubarDisplayReason
enum class EFubarDisplayReason : uint8_t
{
	EFubarDisplayReason__NotFubar  = 0,
	EFubarDisplayReason__SystemFubar = 1,
	EFubarDisplayReason__AbsentPlayers = 2,
	EFubarDisplayReason__EFubarDisplayReason_MAX = 3
};


// Enum Killstreak.EMercCosmeticSlot
enum class EMercCosmeticSlot : uint8_t
{
	EMercCosmeticSlot__EMOTE_SLOT  = 0,
	EMercCosmeticSlot__SKIN_BUNDLE_SLOT = 1,
	EMercCosmeticSlot__WINGSUIT_SLOT = 2,
	EMercCosmeticSlot__WEAPON_WRAP_SLOT = 3,
	EMercCosmeticSlot__QUIP_SLOT   = 4,
	EMercCosmeticSlot__COMMUNICATION_SLOT = 5,
	EMercCosmeticSlot__SPRAY_SLOT  = 6,
	EMercCosmeticSlot__EMercCosmeticSlot_MAX = 7
};


// Enum Killstreak.EPingFailedType
enum class EPingFailedType : uint8_t
{
	EPingFailedType__None          = 0,
	EPingFailedType__Throttled     = 1,
	EPingFailedType__NoTarget      = 2,
	EPingFailedType__InvalidPingType = 3,
	EPingFailedType__EPingFailedType_MAX = 4
};


// Enum Killstreak.EPingMessage
enum class EPingMessage : uint8_t
{
	EPingMessage__None             = 0,
	EPingMessage__GoHere           = 1,
	EPingMessage__EnemyHere        = 2,
	EPingMessage__DefendHere       = 3,
	EPingMessage__HoldPosition     = 4,
	EPingMessage__FallBack         = 5,
	EPingMessage__PushForward      = 6,
	EPingMessage__GroupUp          = 7,
	EPingMessage__HelpMe           = 8,
	EPingMessage__EnemiesMoving    = 9,
	EPingMessage__Understood       = 10,
	EPingMessage__AllClear         = 11,
	EPingMessage__CancelThat       = 12,
	EPingMessage__ReviveMe         = 13,
	EPingMessage__Task1            = 14,
	EPingMessage__Task2            = 15,
	EPingMessage__Task3            = 16,
	EPingMessage__Task4            = 17,
	EPingMessage__Task5            = 18,
	EPingMessage__WatchOut         = 19,
	EPingMessage__EPingMessage_MAX = 20
};


// Enum Killstreak.EPingType
enum class EPingType : uint8_t
{
	EPingType__None                = 0,
	EPingType__PointAlly           = 1,
	EPingType__PointEnemy          = 2,
	EPingType__Self                = 3,
	EPingType__SelfEmergency       = 4,
	EPingType__Target              = 5,
	EPingType__Cancel              = 6,
	EPingType__Task                = 7,
	EPingType__NoPing              = 8,
	EPingType__EPingType_MAX       = 9
};


// Enum Killstreak.ESplineBehaviourType
enum class ESplineBehaviourType : uint8_t
{
	ESplineBehaviourType__OneShot  = 0,
	ESplineBehaviourType__OneShot_Reverse = 1,
	ESplineBehaviourType__Loop_Reset = 2,
	ESplineBehaviourType__PingPong = 3,
	ESplineBehaviourType__ESplineBehaviourType_MAX = 4
};


// Enum Killstreak.ETeamAlignment
enum class ETeamAlignment : uint8_t
{
	ETeamAlignment__TMAL_Neutral   = 0,
	ETeamAlignment__TMAL_Enemy     = 1,
	ETeamAlignment__TMAL_Friendly  = 2,
	ETeamAlignment__TMAL_MAX       = 3
};


// Enum Killstreak.EAnnouncementType
enum class EAnnouncementType : uint8_t
{
	EAnnouncementType__ANMT_Uknown = 0,
	EAnnouncementType__ANMT_ObjectiveMilestone = 1,
	EAnnouncementType__ANMT_PlayersLeft = 2,
	EAnnouncementType__ANMT_LastPlayerStanding = 3,
	EAnnouncementType__ANMT_RoyalePhase = 4,
	EAnnouncementType__ANMT_MAX    = 5
};


// Enum Killstreak.EGameResult
enum class EGameResult : uint8_t
{
	EGameResult__Victory           = 0,
	EGameResult__Defeat            = 1,
	EGameResult__Draw              = 2,
	EGameResult__EGameResult_MAX   = 3
};


// Enum Killstreak.EKSInteractionResult
enum class EKSInteractionResult : uint8_t
{
	EKSInteractionResult__None     = 0,
	EKSInteractionResult__Success  = 1,
	EKSInteractionResult__Interrupted = 2,
	EKSInteractionResult__Failed   = 3,
	EKSInteractionResult__EKSInteractionResult_MAX = 4
};


// Enum Killstreak.EKSReviveDroneAbilityState
enum class EKSReviveDroneAbilityState : uint8_t
{
	EKSReviveDroneAbilityState__Unavailable = 0,
	EKSReviveDroneAbilityState__Available = 1,
	EKSReviveDroneAbilityState__Deployed = 2,
	EKSReviveDroneAbilityState__Reviving = 3,
	EKSReviveDroneAbilityState__Success = 4,
	EKSReviveDroneAbilityState__Refunded = 5,
	EKSReviveDroneAbilityState__Destroyed = 6,
	EKSReviveDroneAbilityState__EKSReviveDroneAbilityState_MAX = 7
};


// Enum Killstreak.EKSPingType
enum class EKSPingType : uint8_t
{
	EKSPingType__PING_DEFAULT      = 0,
	EKSPingType__PING_RADAR        = 1,
	EKSPingType__PING_INTEL        = 2,
	EKSPingType__PING_TRACKER      = 3,
	EKSPingType__PING_BOMB_HOLDER  = 4,
	EKSPingType__PING_MAX          = 5
};


// Enum Killstreak.ESurfaceTargetErrorReason
enum class ESurfaceTargetErrorReason : uint8_t
{
	ESurfaceTargetErrorReason__None = 0,
	ESurfaceTargetErrorReason__TooFar = 1,
	ESurfaceTargetErrorReason__TooHigh = 2,
	ESurfaceTargetErrorReason__NoRoomAtOrigin = 3,
	ESurfaceTargetErrorReason__InvalidSurface = 4,
	ESurfaceTargetErrorReason__TooClose = 5,
	ESurfaceTargetErrorReason__AimBlocked = 6,
	ESurfaceTargetErrorReason__ESurfaceTargetErrorReason_MAX = 7
};


// Enum Killstreak.EAimDataMode
enum class EAimDataMode : uint8_t
{
	EAimDataMode__NoEndTrace       = 0,
	EAimDataMode__EndTraceFromStartTrace = 1,
	EAimDataMode__EndTraceFromViewPoint = 2,
	EAimDataMode__Shotgun          = 3,
	EAimDataMode__EAimDataMode_MAX = 4
};


// Enum Killstreak.EKSAcquisitionType
enum class EKSAcquisitionType : uint8_t
{
	EKSAcquisitionType__None       = 0,
	EKSAcquisitionType__Voucher    = 1,
	EKSAcquisitionType__BattlePass = 2,
	EKSAcquisitionType__ActiveBoost = 3,
	EKSAcquisitionType__EventGrandPrize = 4,
	EKSAcquisitionType__MAX        = 5
};


// Enum Killstreak.EKSBattlePassProgressionActivityType
enum class EKSBattlePassProgressionActivityType : uint8_t
{
	EKSBattlePassProgressionActivityType__None = 0,
	EKSBattlePassProgressionActivityType__MiniBattlePass1 = 1,
	EKSBattlePassProgressionActivityType__BattlePass1 = 2,
	EKSBattlePassProgressionActivityType__BattlePass2 = 3,
	EKSBattlePassProgressionActivityType__MAX = 4
};


// Enum Killstreak.EKSActivityTimeQueryType
enum class EKSActivityTimeQueryType : uint8_t
{
	EKSActivityTimeQueryType__All  = 0,
	EKSActivityTimeQueryType__OnlyFinished = 1,
	EKSActivityTimeQueryType__OnlyUnfinished = 2,
	EKSActivityTimeQueryType__EKSActivityTimeQueryType_MAX = 3
};


// Enum Killstreak.EKSActivityManagerSetupPhase
enum class EKSActivityManagerSetupPhase : uint8_t
{
	EKSActivityManagerSetupPhase__None = 0,
	EKSActivityManagerSetupPhase__InitialAssetScan = 1,
	EKSActivityManagerSetupPhase__RequestStoreVendors = 2,
	EKSActivityManagerSetupPhase__RequestXpTables = 3,
	EKSActivityManagerSetupPhase__LoadActivities = 4,
	EKSActivityManagerSetupPhase__WaitForSelectionPhaseFinished = 5,
	EKSActivityManagerSetupPhase__AttemptInitialActivityCreation = 6,
	EKSActivityManagerSetupPhase__Done = 7,
	EKSActivityManagerSetupPhase__EKSActivityManagerSetupPhase_MAX = 8
};


// Enum Killstreak.EKSActivityInstanceQueryType
enum class EKSActivityInstanceQueryType : uint8_t
{
	EKSActivityInstanceQueryType__LowestProgress = 0,
	EKSActivityInstanceQueryType__HighestProgress = 1,
	EKSActivityInstanceQueryType__LowestTier = 2,
	EKSActivityInstanceQueryType__HighestTier = 3,
	EKSActivityInstanceQueryType__EKSActivityInstanceQueryType_MAX = 4
};


// Enum Killstreak.EKSActivityClientNotifyFrequency
enum class EKSActivityClientNotifyFrequency : uint8_t
{
	EKSActivityClientNotifyFrequency__None = 0,
	EKSActivityClientNotifyFrequency__OnProgressCompleted = 1,
	EKSActivityClientNotifyFrequency__OnProgressTierReached = 2,
	EKSActivityClientNotifyFrequency__OnProgressIncremented = 3,
	EKSActivityClientNotifyFrequency__EKSActivityClientNotifyFrequency_MAX = 4
};


// Enum Killstreak.EKSActivityProgressDisplayType
enum class EKSActivityProgressDisplayType : uint8_t
{
	EKSActivityProgressDisplayType__Default = 0,
	EKSActivityProgressDisplayType__RawProgress = 1,
	EKSActivityProgressDisplayType__PercentToNextTier = 2,
	EKSActivityProgressDisplayType__PercentToMaxTier = 3,
	EKSActivityProgressDisplayType__MinutesAsDuration = 4,
	EKSActivityProgressDisplayType__CurrentTier = 5,
	EKSActivityProgressDisplayType__None = 6,
	EKSActivityProgressDisplayType__EKSActivityProgressDisplayType_MAX = 7
};


// Enum Killstreak.EReviveDroneFlightPath
enum class EReviveDroneFlightPath : uint8_t
{
	EReviveDroneFlightPath__Drop   = 0,
	EReviveDroneFlightPath__Left   = 1,
	EReviveDroneFlightPath__Right  = 2,
	EReviveDroneFlightPath__EReviveDroneFlightPath_MAX = 3
};


// Enum Killstreak.EReviveDroneState
enum class EReviveDroneState : uint8_t
{
	EReviveDroneState__Release     = 0,
	EReviveDroneState__Transit     = 1,
	EReviveDroneState__Arrival     = 2,
	EReviveDroneState__Hover       = 3,
	EReviveDroneState__Leave       = 4,
	EReviveDroneState__EReviveDroneState_MAX = 5
};


// Enum Killstreak.EAgentRefundMethod
enum class EAgentRefundMethod : uint8_t
{
	EAgentRefundMethod__GiveWeaponAsset = 0,
	EAgentRefundMethod__BroadcastDelegate = 1,
	EAgentRefundMethod__EAgentRefundMethod_MAX = 2
};


// Enum Killstreak.EKSAimAssistInputFlag
enum class EKSAimAssistInputFlag : uint8_t
{
	EKSAimAssistInputFlag__GamepadOnly = 0,
	EKSAimAssistInputFlag__GamepadAndTouch = 1,
	EKSAimAssistInputFlag__AllInputModes = 2,
	EKSAimAssistInputFlag__EKSAimAssistInputFlag_MAX = 3
};


// Enum Killstreak.EKSAimAssistActivationType
enum class EKSAimAssistActivationType : uint8_t
{
	EKSAimAssistActivationType__AIMASSIST_DEFAULT = 0,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSON = 1,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSOFF = 2,
	EKSAimAssistActivationType__AIMASSIST_MAX = 3
};


// Enum Killstreak.EKSAnalogStickType
enum class EKSAnalogStickType : uint8_t
{
	EKSAnalogStickType__Unknown    = 0,
	EKSAnalogStickType__Left       = 1,
	EKSAnalogStickType__Right      = 2,
	EKSAnalogStickType__EKSAnalogStickType_MAX = 3
};


// Enum Killstreak.EGameplayAudioEvent
enum class EGameplayAudioEvent : uint8_t
{
	EGameplayAudioEvent__Unknown   = 0,
	EGameplayAudioEvent__GameStarted = 1,
	EGameplayAudioEvent__LoggedIn  = 2,
	EGameplayAudioEvent__QueueingStarted = 3,
	EGameplayAudioEvent__QueueingCanceled = 4,
	EGameplayAudioEvent__MatchFound = 5,
	EGameplayAudioEvent__LoadingScreenStarted = 6,
	EGameplayAudioEvent__EndOfMatchLobbyStarted = 7,
	EGameplayAudioEvent__EndOfMatchLobbyEnded = 8,
	EGameplayAudioEvent__EndOfMatchLobbySkipped = 9,
	EGameplayAudioEvent__EnteredMatch = 10,
	EGameplayAudioEvent__BanStarted = 11,
	EGameplayAudioEvent__BanEndedEarly = 12,
	EGameplayAudioEvent__RogueSelectionStarted = 13,
	EGameplayAudioEvent__RogueSelectionEnded = 14,
	EGameplayAudioEvent__RogueSelectionFadeOut = 15,
	EGameplayAudioEvent__TeamCinematicStarted = 16,
	EGameplayAudioEvent__EstablishingShotStarted = 17,
	EGameplayAudioEvent__HoldingPenStarted = 18,
	EGameplayAudioEvent__DropshipDoorOpened = 19,
	EGameplayAudioEvent__SkydiveStarted = 20,
	EGameplayAudioEvent__SkydiveEnded = 21,
	EGameplayAudioEvent__ObjectiveArmed = 22,
	EGameplayAudioEvent__ObjectiveTime_30SecondsLeft = 23,
	EGameplayAudioEvent__ObjectiveCaptured = 24,
	EGameplayAudioEvent__LastManStanding = 25,
	EGameplayAudioEvent__SuddenDeath = 26,
	EGameplayAudioEvent__KillcamStarted = 27,
	EGameplayAudioEvent__RoundReset = 28,
	EGameplayAudioEvent__RoundWon  = 29,
	EGameplayAudioEvent__RoundLost = 30,
	EGameplayAudioEvent__MatchWon  = 31,
	EGameplayAudioEvent__MatchLost = 32,
	EGameplayAudioEvent__ReturnToLobby = 33,
	EGameplayAudioEvent__Max       = 34
};


// Enum Killstreak.EKSItemBattlePassSource
enum class EKSItemBattlePassSource : uint8_t
{
	EKSItemBattlePassSource__None  = 0,
	EKSItemBattlePassSource__InstantUnlock = 1,
	EKSItemBattlePassSource__FreeTrackUnlock = 2,
	EKSItemBattlePassSource__PremiumTrackUnlock = 3,
	EKSItemBattlePassSource__MAX   = 4
};


// Enum Killstreak.EPlayerBehaviorChangeReact
enum class EPlayerBehaviorChangeReact : uint8_t
{
	EPlayerBehaviorChangeReact__SkipReact = 0,
	EPlayerBehaviorChangeReact__SendNewOnly = 1,
	EPlayerBehaviorChangeReact__SendFullSetIfChanged = 2,
	EPlayerBehaviorChangeReact__SendFullSetRegardless = 3,
	EPlayerBehaviorChangeReact__EPlayerBehaviorChangeReact_MAX = 4
};


// Enum Killstreak.EBoostDurationCategory
enum class EBoostDurationCategory : uint8_t
{
	EBoostDurationCategory__Minutes15 = 0,
	EBoostDurationCategory__Minutes30 = 1,
	EBoostDurationCategory__Minutes45 = 2,
	EBoostDurationCategory__Hours1 = 3,
	EBoostDurationCategory__Hours2 = 4,
	EBoostDurationCategory__Hours4 = 5,
	EBoostDurationCategory__Hours8 = 6,
	EBoostDurationCategory__EBoostDurationCategory_MAX = 7
};


// Enum Killstreak.EBoostCategory
enum class EBoostCategory : uint8_t
{
	EBoostCategory__GlobalAccount  = 0,
	EBoostCategory__EBoostCategory_MAX = 1
};


// Enum Killstreak.EAbilityExecutionType
enum class EAbilityExecutionType : uint8_t
{
	EAbilityExecutionType__InstantActivate = 0,
	EAbilityExecutionType__RandomActivate = 1,
	EAbilityExecutionType__AimFireActivate = 2,
	EAbilityExecutionType__IngressPointActivate = 3,
	EAbilityExecutionType__UniqueActivation = 4,
	EAbilityExecutionType__EAbilityExecutionType_MAX = 5
};


// Enum Killstreak.EActorFocalPoint
enum class EActorFocalPoint : uint8_t
{
	EActorFocalPoint__ActorFocalPoint_None = 0,
	EActorFocalPoint__ActorFocalPoint_Head = 1,
	EActorFocalPoint__ActorFocalPoint_Body = 2,
	EActorFocalPoint__ActorFocalPoint_LeftShoulder = 3,
	EActorFocalPoint__ActorFocalPoint_RightShoulder = 4,
	EActorFocalPoint__ActorFocalPoint_MAX = 5
};


// Enum Killstreak.EKSBuildInteractionType
enum class EKSBuildInteractionType : uint8_t
{
	EKSBuildInteractionType__Reclaim = 0,
	EKSBuildInteractionType__Custom = 1,
	EKSBuildInteractionType__None  = 2,
	EKSBuildInteractionType__EKSBuildInteractionType_MAX = 3
};


// Enum Killstreak.EKSArmVisibilityType
enum class EKSArmVisibilityType : uint8_t
{
	EKSArmVisibilityType__HideNothing = 0,
	EKSArmVisibilityType__ArmAndWeapon = 1,
	EKSArmVisibilityType__WeaponOnly = 2,
	EKSArmVisibilityType__EKSArmVisibilityType_MAX = 3
};


// Enum Killstreak.EKSPlayerHand
enum class EKSPlayerHand : uint8_t
{
	EKSPlayerHand__LeftHand        = 0,
	EKSPlayerHand__RightHand       = 1,
	EKSPlayerHand__EKSPlayerHand_MAX = 2
};


// Enum Killstreak.EKSMaterialHideType
enum class EKSMaterialHideType : uint8_t
{
	EKSMaterialHideType__CastsShadowWhenHidden = 0,
	EKSMaterialHideType__DoesNotCastShadowWhenHidden = 1,
	EKSMaterialHideType__EKSMaterialHideType_MAX = 2
};


// Enum Killstreak.EKSVehicleState
enum class EKSVehicleState : uint8_t
{
	EKSVehicleState__Outside       = 0,
	EKSVehicleState__Entering      = 1,
	EKSVehicleState__Driver        = 2,
	EKSVehicleState__Passenger     = 3,
	EKSVehicleState__Exiting       = 4,
	EKSVehicleState__EKSVehicleState_MAX = 5
};


// Enum Killstreak.EAimDownSightsMode
enum class EAimDownSightsMode : uint8_t
{
	EAimDownSightsMode__Toggle     = 0,
	EAimDownSightsMode__PressAndHold = 1,
	EAimDownSightsMode__EAimDownSightsMode_MAX = 2
};


// Enum Killstreak.EKSQualitySwitch
enum class EKSQualitySwitch : uint8_t
{
	EKSQualitySwitch__LocomotionCached = 0,
	EKSQualitySwitch__SecondLocomotionCached = 1,
	EKSQualitySwitch__PreAimArray  = 2,
	EKSQualitySwitch__PostWingSuit = 3,
	EKSQualitySwitch__Finalized3p  = 4,
	EKSQualitySwitch__PreFacialAnimation = 5,
	EKSQualitySwitch__PostFacialAnimation = 6,
	EKSQualitySwitch__PrePowSlide_SklController = 7,
	EKSQualitySwitch__PreHitReactions = 8,
	EKSQualitySwitch__PostFootIK   = 9,
	EKSQualitySwitch__PostZiplinePullyLocks = 10,
	EKSQualitySwitch__PostZiplineSkeletalControllers = 11,
	EKSQualitySwitch__PreRecoil    = 12,
	EKSQualitySwitch__PostRecoil   = 13,
	EKSQualitySwitch__PreCounterRotate = 14,
	EKSQualitySwitch__SkeletalControllersPostIK = 15,
	EKSQualitySwitch__PreVaulting_SKLController = 16,
	EKSQualitySwitch__PostVaulting_SKLController = 17,
	EKSQualitySwitch__EKSQualitySwitch_MAX = 18
};


// Enum Killstreak.EKSTurnInPlaceAnimationVariant
enum class EKSTurnInPlaceAnimationVariant : uint8_t
{
	EKSTurnInPlaceAnimationVariant__Left90 = 0,
	EKSTurnInPlaceAnimationVariant__Left180 = 1,
	EKSTurnInPlaceAnimationVariant__Right90 = 2,
	EKSTurnInPlaceAnimationVariant__Right180 = 3,
	EKSTurnInPlaceAnimationVariant__EKSTurnInPlaceAnimationVariant_MAX = 4
};


// Enum Killstreak.EKSLocomotionState
enum class EKSLocomotionState : uint8_t
{
	EKSLocomotionState__Idle       = 0,
	EKSLocomotionState__InMotion   = 1,
	EKSLocomotionState__Stopping   = 2,
	EKSLocomotionState__Pivoting   = 3,
	EKSLocomotionState__EKSLocomotionState_MAX = 4
};


// Enum Killstreak.EKSQueuedMovement
enum class EKSQueuedMovement : uint8_t
{
	EKSQueuedMovement__Jump        = 0,
	EKSQueuedMovement__DodgeRoll   = 1,
	EKSQueuedMovement__None        = 2,
	EKSQueuedMovement__EKSQueuedMovement_MAX = 3
};


// Enum Killstreak.EKSDeathState
enum class EKSDeathState : uint8_t
{
	EKSDeathState__NotDead         = 0,
	EKSDeathState__NormalDeath     = 1,
	EKSDeathState__EKSDeathState_MAX = 2
};


// Enum Killstreak.ECosmeticStateSimulationType
enum class ECosmeticStateSimulationType : uint8_t
{
	ECosmeticStateSimulationType__Authoritative = 0,
	ECosmeticStateSimulationType__LocalSimulation = 1,
	ECosmeticStateSimulationType__GlobalSimulation = 2,
	ECosmeticStateSimulationType__ECosmeticStateSimulationType_MAX = 3
};


// Enum Killstreak.ECosmeticStateTriggerType
enum class ECosmeticStateTriggerType : uint8_t
{
	ECosmeticStateTriggerType__Count = 0,
	ECosmeticStateTriggerType__CountWithZeroFloor = 1,
	ECosmeticStateTriggerType__OnOff = 2,
	ECosmeticStateTriggerType__Event = 3,
	ECosmeticStateTriggerType__ECosmeticStateTriggerType_MAX = 4
};


// Enum Killstreak.EFlashBangIntensity
enum class EFlashBangIntensity : uint8_t
{
	EFlashBangIntensity__Min       = 0,
	EFlashBangIntensity__Half      = 1,
	EFlashBangIntensity__Max       = 2
};


// Enum Killstreak.EKSEventChallengesDisplayState
enum class EKSEventChallengesDisplayState : uint8_t
{
	EKSEventChallengesDisplayState__None = 0,
	EKSEventChallengesDisplayState__HasSelectedChallenge = 1,
	EKSEventChallengesDisplayState__AdditionalChallengesLocked = 2,
	EKSEventChallengesDisplayState__AllChallengesFinished = 3,
	EKSEventChallengesDisplayState__MAX = 4
};


// Enum Killstreak.EKSTeamAssignmentType
enum class EKSTeamAssignmentType : uint8_t
{
	EKSTeamAssignmentType__AllOnOne = 0,
	EKSTeamAssignmentType__EvenlyDistributed = 1,
	EKSTeamAssignmentType__EKSTeamAssignmentType_MAX = 2
};


// Enum Killstreak.EKSBotNameGeneration
enum class EKSBotNameGeneration : uint8_t
{
	EKSBotNameGeneration__None     = 0,
	EKSBotNameGeneration__RandomNames = 1,
	EKSBotNameGeneration__DefaultClassNames = 2,
	EKSBotNameGeneration__EKSBotNameGeneration_MAX = 3
};


// Enum Killstreak.EKSLootRespawnMode
enum class EKSLootRespawnMode : uint8_t
{
	EKSLootRespawnMode__RespawnActiveSites = 0,
	EKSLootRespawnMode__RespawnRandomSites = 1,
	EKSLootRespawnMode__EKSLootRespawnMode_MAX = 2
};


// Enum Killstreak.EKSRewardType
enum class EKSRewardType : uint8_t
{
	EKSRewardType__MatchInProgress = 0,
	EKSRewardType__Winner          = 1,
	EKSRewardType__Loser           = 2,
	EKSRewardType__Draw            = 3,
	EKSRewardType__EKSRewardType_MAX = 4
};


// Enum Killstreak.EKSControlTieBreakerMode
enum class EKSControlTieBreakerMode : uint8_t
{
	EKSControlTieBreakerMode__Overtime = 0,
	EKSControlTieBreakerMode__SuddenDeath = 1,
	EKSControlTieBreakerMode__AllowTie = 2,
	EKSControlTieBreakerMode__EKSControlTieBreakerMode_MAX = 3
};


// Enum Killstreak.EChangeAdditionalActionCondition
enum class EChangeAdditionalActionCondition : uint8_t
{
	EChangeAdditionalActionCondition__NeverDo = 0,
	EChangeAdditionalActionCondition__DoIfChanged = 1,
	EChangeAdditionalActionCondition__AlwaysDo = 2,
	EChangeAdditionalActionCondition__EChangeAdditionalActionCondition_MAX = 3
};


// Enum Killstreak.EPlayerInfoInventoryRestoreType
enum class EPlayerInfoInventoryRestoreType : uint8_t
{
	EPlayerInfoInventoryRestoreType__ResetToStartingInventory = 0,
	EPlayerInfoInventoryRestoreType__KeepInventory = 1,
	EPlayerInfoInventoryRestoreType__KeepInventoryIfNotDead = 2,
	EPlayerInfoInventoryRestoreType__KeepGunsOnly = 3,
	EPlayerInfoInventoryRestoreType__UseNewMethod = 4,
	EPlayerInfoInventoryRestoreType__EPlayerInfoInventoryRestoreType_MAX = 5
};


// Enum Killstreak.EKillCamStatus
enum class EKillCamStatus : uint8_t
{
	EKillCamStatus__KillCamEnabled = 0,
	EKillCamStatus__KillCamDisabled = 1,
	EKillCamStatus__EKillCamStatus_MAX = 2
};


// Enum Killstreak.EKSGamepadIcons
enum class EKSGamepadIcons : uint8_t
{
	EKSGamepadIcons__XboxOne       = 0,
	EKSGamepadIcons__PlayStation4  = 1,
	EKSGamepadIcons__NintendoSwitch = 2,
	EKSGamepadIcons__EKSGamepadIcons_MAX = 3
};


// Enum Killstreak.ERadialWheelMode
enum class ERadialWheelMode : uint8_t
{
	ERadialWheelMode__Hold         = 0,
	ERadialWheelMode__Toggle       = 1,
	ERadialWheelMode__ERadialWheelMode_MAX = 2
};


// Enum Killstreak.EGyroMode
enum class EGyroMode : uint8_t
{
	EGyroMode__None                = 0,
	EGyroMode__AimOnly             = 1,
	EGyroMode__Always              = 2,
	EGyroMode__EGyroMode_MAX       = 3
};


// Enum Killstreak.EADSMode
enum class EADSMode : uint8_t
{
	EADSMode__Hold                 = 0,
	EADSMode__Toggle               = 1,
	EADSMode__Both                 = 2,
	EADSMode__EADSMode_MAX         = 3
};


// Enum Killstreak.EKSInteractableGroup
enum class EKSInteractableGroup : uint8_t
{
	EKSInteractableGroup__Generic  = 0,
	EKSInteractableGroup__Bomb     = 1,
	EKSInteractableGroup__Objective = 2,
	EKSInteractableGroup__DropOffZone = 3,
	EKSInteractableGroup__Vehicle  = 4,
	EKSInteractableGroup__Projectile = 5,
	EKSInteractableGroup__ZipLine  = 6,
	EKSInteractableGroup__Pawn     = 7,
	EKSInteractableGroup__EKSInteractableGroup_MAX = 8
};


// Enum Killstreak.EKSLabelAndHighlightState
enum class EKSLabelAndHighlightState : uint8_t
{
	EKSLabelAndHighlightState__NotTargeted = 0,
	EKSLabelAndHighlightState__Targeted = 1,
	EKSLabelAndHighlightState__EKSLabelAndHighlightState_MAX = 2
};


// Enum Killstreak.EJobLoadoutSlot
enum class EJobLoadoutSlot : uint8_t
{
	EJobLoadoutSlot__JobSlot_Unknown = 0,
	EJobLoadoutSlot__JobSlot_JobItem = 1,
	EJobLoadoutSlot__JobSlot_UniqueItem = 2,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon = 3,
	EJobLoadoutSlot__JobSlot_PrimaryWeaponAttachment = 4,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon = 5,
	EJobLoadoutSlot__JobSlot_SecondaryWeaponAttachment = 6,
	EJobLoadoutSlot__JobSlot_Gadget = 7,
	EJobLoadoutSlot__JobSlot_PerkOne = 8,
	EJobLoadoutSlot__JobSlot_PerkTwo = 9,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon_Alt = 10,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon_Alt = 11,
	EJobLoadoutSlot__JobSlot_Gadget_Alt = 12,
	EJobLoadoutSlot__JobSlot_Melee = 13,
	EJobLoadoutSlot__JobSlot_QuickMelee = 14,
	EJobLoadoutSlot__JobSlot_MAX   = 15
};


// Enum Killstreak.ESelectionActivityState
enum class ESelectionActivityState : uint8_t
{
	ESelectionActivityState__Inactive = 0,
	ESelectionActivityState__Waiting = 1,
	ESelectionActivityState__Selecting = 2,
	ESelectionActivityState__Banning = 3,
	ESelectionActivityState__ESelectionActivityState_MAX = 4
};


// Enum Killstreak.EAllowUnownedJobsState
enum class EAllowUnownedJobsState : uint8_t
{
	EAllowUnownedJobsState__Unknown = 0,
	EAllowUnownedJobsState__AllowUnowned = 1,
	EAllowUnownedJobsState__DoNotAllowUnowned = 2,
	EAllowUnownedJobsState__EAllowUnownedJobsState_MAX = 3
};


// Enum Killstreak.EPlayerAccountSlot
enum class EPlayerAccountSlot : uint8_t
{
	EPlayerAccountSlot__AVATAR_SLOT = 0,
	EPlayerAccountSlot__BANNER_SLOT = 1,
	EPlayerAccountSlot__PREFERRED_MERC_SLOT = 2,
	EPlayerAccountSlot__BORDER_SLOT = 3,
	EPlayerAccountSlot__TITLE_SLOT = 4,
	EPlayerAccountSlot__EPlayerAccountSlot_MAX = 5
};


// Enum Killstreak.EKSLobbyCharacterAnimationPose
enum class EKSLobbyCharacterAnimationPose : uint8_t
{
	EKSLobbyCharacterAnimationPose__Lobby_Idle = 0,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_01 = 1,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_02 = 2,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_03 = 3,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_04 = 4,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_05 = 5,
	EKSLobbyCharacterAnimationPose__Lobby_MAX = 6
};


// Enum Killstreak.ELobbyCharacterIndex
enum class ELobbyCharacterIndex : uint8_t
{
	ELobbyCharacterIndex__LobbyCharacter_Unknown = 0,
	ELobbyCharacterIndex__LobbyCharacter_LocalPlayer = 1,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberOne = 2,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberTwo = 3,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberThree = 4,
	ELobbyCharacterIndex__LobbyCharacter_RogueScreen = 5,
	ELobbyCharacterIndex__LobbyCharacter_PurchaseConfirmation = 6,
	ELobbyCharacterIndex__LobbyCharacter_EventScreen = 7,
	ELobbyCharacterIndex__LobbyCharacter_BattlePassScreen = 8,
	ELobbyCharacterIndex__LobbyCharacter_MAX = 9
};


// Enum Killstreak.ELobbyCharacterAnimState
enum class ELobbyCharacterAnimState : uint8_t
{
	ELobbyCharacterAnimState__LobbyAnim_Unknown = 0,
	ELobbyCharacterAnimState__LobbyAnim_Login = 1,
	ELobbyCharacterAnimState__LobbyAnim_Default = 2,
	ELobbyCharacterAnimState__LobbyAnim_Hidden = 3,
	ELobbyCharacterAnimState__LobbyAnim_Idle = 4,
	ELobbyCharacterAnimState__LobbyAnim_IntroWalk = 5,
	ELobbyCharacterAnimState__LobbyAnim_EmoteOne = 6,
	ELobbyCharacterAnimState__LobbyAnim_EmoteTwo = 7,
	ELobbyCharacterAnimState__LobbyAnim_EmoteThree = 8,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFour = 9,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFive = 10,
	ELobbyCharacterAnimState__LobbyAnim_PreMatchWalk = 11,
	ELobbyCharacterAnimState__LobbyAnim_EOMBackground = 12,
	ELobbyCharacterAnimState__LobbyAnim_PostMatchWalk = 13,
	ELobbyCharacterAnimState__LobbyAnim_MidSequence = 14,
	ELobbyCharacterAnimState__LobbyAnim_MAX = 15
};


// Enum Killstreak.ELobbyPresenceState
enum class ELobbyPresenceState : uint8_t
{
	ELobbyPresenceState__ELobbyPresence_Unknown = 0,
	ELobbyPresenceState__ELobbyPresence_NotPresent = 1,
	ELobbyPresenceState__ELobbyPresence_PendingInvite = 2,
	ELobbyPresenceState__ELobbyPresence_Idle = 3,
	ELobbyPresenceState__ELobbyPresence_MAX = 4
};


// Enum Killstreak.ELobbyLevelSequenceTag
enum class ELobbyLevelSequenceTag : uint8_t
{
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_Login = 0,
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_MAX = 1
};


// Enum Killstreak.ELobbyCameraActorTag
enum class ELobbyCameraActorTag : uint8_t
{
	ELobbyCameraActorTag__ELobbyCamTag_Home = 0,
	ELobbyCameraActorTag__ELobbyCamTag_CustomizeLoadout = 1,
	ELobbyCameraActorTag__ELobbyCamTag_LobbyMain = 2,
	ELobbyCameraActorTag__ELobbyCamTag_MAX = 3
};


// Enum Killstreak.ELootSiteAlignment
enum class ELootSiteAlignment : uint8_t
{
	ELootSiteAlignment__Attack     = 0,
	ELootSiteAlignment__Defend     = 1,
	ELootSiteAlignment__Contested  = 2,
	ELootSiteAlignment__ELootSiteAlignment_MAX = 3
};


// Enum Killstreak.EKSMantleScaleType
enum class EKSMantleScaleType : uint8_t
{
	EKSMantleScaleType__ScaleDistOnly = 0,
	EKSMantleScaleType__ScaleDistAndTime = 1,
	EKSMantleScaleType__ShaveIntro = 2,
	EKSMantleScaleType__EKSMantleScaleType_MAX = 3
};


// Enum Killstreak.ETeamRole
enum class ETeamRole : uint8_t
{
	ETeamRole__Roleless            = 0,
	ETeamRole__Attacker            = 1,
	ETeamRole__Defender            = 2,
	ETeamRole__ETeamRole_MAX       = 3
};


// Enum Killstreak.EKSRelativeMinimapHeight
enum class EKSRelativeMinimapHeight : uint8_t
{
	EKSRelativeMinimapHeight__Below = 0,
	EKSRelativeMinimapHeight__SameLevel = 1,
	EKSRelativeMinimapHeight__Above = 2,
	EKSRelativeMinimapHeight__EKSRelativeMinimapHeight_MAX = 3
};


// Enum Killstreak.EThrowDirection
enum class EThrowDirection : uint8_t
{
	EThrowDirection__Back          = 0,
	EThrowDirection__Front         = 1,
	EThrowDirection__Left          = 2,
	EThrowDirection__Right         = 3,
	EThrowDirection__EThrowDirection_MAX = 4
};


// Enum Killstreak.EWillToSurviveTimerType
enum class EWillToSurviveTimerType : uint8_t
{
	EWillToSurviveTimerType__ShotAtTimer = 0,
	EWillToSurviveTimerType__ModActivatedTimer = 1,
	EWillToSurviveTimerType__CooldownTimer = 2,
	EWillToSurviveTimerType__EWillToSurviveTimerType_MAX = 3
};


// Enum Killstreak.EWillToSurviveModState
enum class EWillToSurviveModState : uint8_t
{
	EWillToSurviveModState__Inactive = 0,
	EWillToSurviveModState__WaitForShotAt = 1,
	EWillToSurviveModState__WaitForDodgeRollEnd = 2,
	EWillToSurviveModState__ModActivated = 3,
	EWillToSurviveModState__Cooldown = 4,
	EWillToSurviveModState__EWillToSurviveModState_MAX = 5
};


// Enum Killstreak.EKSReviveDroneEvent
enum class EKSReviveDroneEvent : uint8_t
{
	EKSReviveDroneEvent__ReviveStarted = 0,
	EKSReviveDroneEvent__ReviveFinished = 1,
	EKSReviveDroneEvent__TargetRevived = 2,
	EKSReviveDroneEvent__TargetDied = 3,
	EKSReviveDroneEvent__DroneAborted = 4,
	EKSReviveDroneEvent__DroneDestroyed = 5,
	EKSReviveDroneEvent__EKSReviveDroneEvent_MAX = 6
};


// Enum Killstreak.EKSObjectiveState
enum class EKSObjectiveState : uint8_t
{
	EKSObjectiveState__None        = 0,
	EKSObjectiveState__Spawned     = 1,
	EKSObjectiveState__Reset       = 2,
	EKSObjectiveState__Held        = 3,
	EKSObjectiveState__Dropped     = 4,
	EKSObjectiveState__Arming      = 5,
	EKSObjectiveState__Armed       = 6,
	EKSObjectiveState__Disarming   = 7,
	EKSObjectiveState__Disarmed    = 8,
	EKSObjectiveState__Deactivated = 9,
	EKSObjectiveState__Exploded    = 10,
	EKSObjectiveState__EKSObjectiveState_MAX = 11
};


// Enum Killstreak.EObjectiveIconType
enum class EObjectiveIconType : uint8_t
{
	EObjectiveIconType__Hack       = 0,
	EObjectiveIconType__Pickup     = 1,
	EObjectiveIconType__EObjectiveIconType_MAX = 2
};


// Enum Killstreak.EObjectiveType
enum class EObjectiveType : uint8_t
{
	EObjectiveType__None           = 0,
	EObjectiveType__ExtractionPC   = 1,
	EObjectiveType__BombZone       = 2,
	EObjectiveType__ControlPoint   = 3,
	EObjectiveType__EObjectiveType_MAX = 4
};


// Enum Killstreak.EKSNavAreaType
enum class EKSNavAreaType : uint8_t
{
	EKSNavAreaType__UnusedDefault  = 0,
	EKSNavAreaType__Jump           = 1,
	EKSNavAreaType__Hazard         = 2,
	EKSNavAreaType__StartZipline   = 3,
	EKSNavAreaType__TravelZipline  = 4,
	EKSNavAreaType__Swim           = 5,
	EKSNavAreaType__InteractiveObstacle = 6,
	EKSNavAreaType__EKSNavAreaType_MAX = 7
};


// Enum Killstreak.EKSPlatformType
enum class EKSPlatformType : uint8_t
{
	EKSPlatformType__PC            = 0,
	EKSPlatformType__XboxOne       = 1,
	EKSPlatformType__Playstation4  = 2,
	EKSPlatformType__Switch        = 3,
	EKSPlatformType__ConsoleGeneric = 4,
	EKSPlatformType__Epic          = 5,
	EKSPlatformType__Steam         = 6,
	EKSPlatformType__IOS           = 7,
	EKSPlatformType__Android       = 8,
	EKSPlatformType__MobileGeneric = 9,
	EKSPlatformType__EKSPlatformType_MAX = 10
};


// Enum Killstreak.EKSPlayerInputType
enum class EKSPlayerInputType : uint8_t
{
	EKSPlayerInputType__PIT_Unknown = 0,
	EKSPlayerInputType__PIT_KeyboardMouse = 1,
	EKSPlayerInputType__PIT_Gamepad = 2,
	EKSPlayerInputType__PIT_Touch  = 3,
	EKSPlayerInputType__PIT_MAX    = 4
};


// Enum Killstreak.EKSPlayerOnlineStatus
enum class EKSPlayerOnlineStatus : uint8_t
{
	EKSPlayerOnlineStatus__FGS_InParty = 0,
	EKSPlayerOnlineStatus__FGS_PendingParty = 1,
	EKSPlayerOnlineStatus__FGS_InGame = 2,
	EKSPlayerOnlineStatus__FGS_InMatch = 3,
	EKSPlayerOnlineStatus__FGS_InQueue = 4,
	EKSPlayerOnlineStatus__FGS_Online = 5,
	EKSPlayerOnlineStatus__FGS_DND = 6,
	EKSPlayerOnlineStatus__FGS_Offline = 7,
	EKSPlayerOnlineStatus__FGS_FriendRequest = 8,
	EKSPlayerOnlineStatus__FGS_PendingInvite = 9,
	EKSPlayerOnlineStatus__FGS_MAX = 10
};


// Enum Killstreak.EKSInputType
enum class EKSInputType : uint8_t
{
	EKSInputType__KBM              = 0,
	EKSInputType__GP               = 1,
	EKSInputType__Touch            = 2,
	EKSInputType__EKSInputType_MAX = 3
};


// Enum Killstreak.EKSKeyBindType
enum class EKSKeyBindType : uint8_t
{
	EKSKeyBindType__ActionMapping  = 0,
	EKSKeyBindType__AxisMapping    = 1,
	EKSKeyBindType__EKSKeyBindType_MAX = 2
};


// Enum Killstreak.EModPriorityResolution
enum class EModPriorityResolution : uint8_t
{
	EModPriorityResolution__TakeValue1 = 0,
	EModPriorityResolution__TakeValue2 = 1,
	EModPriorityResolution__Stack  = 2,
	EModPriorityResolution__EModPriorityResolution_MAX = 3
};


// Enum Killstreak.EPlayerModType
enum class EPlayerModType : uint8_t
{
	EPlayerModType__Perk           = 0,
	EPlayerModType__GlobalPerk     = 1,
	EPlayerModType__Activated      = 2,
	EPlayerModType__Passive        = 3,
	EPlayerModType__TemporaryBuff  = 4,
	EPlayerModType__TemporaryDebuff = 5,
	EPlayerModType__Hidden         = 6,
	EPlayerModType__Unknown        = 7,
	EPlayerModType__EPlayerModType_MAX = 8
};


// Enum Killstreak.EModInterferenceType
enum class EModInterferenceType : uint8_t
{
	EModInterferenceType__Defer    = 0,
	EModInterferenceType__Stack    = 1,
	EModInterferenceType__WeakestWins = 2,
	EModInterferenceType__StrongestWins = 3,
	EModInterferenceType__BonusWins = 4,
	EModInterferenceType__PenaltyWins = 5,
	EModInterferenceType__EModInterferenceType_MAX = 6
};


// Enum Killstreak.EEliminationState
enum class EEliminationState : uint8_t
{
	EEliminationState__NotInPlay   = 0,
	EEliminationState__Playing     = 1,
	EEliminationState__Eliminated  = 2,
	EEliminationState__EEliminationState_MAX = 3
};


// Enum Killstreak.EIsPlayer
enum class EIsPlayer : uint8_t
{
	EIsPlayer__Unknown             = 0,
	EIsPlayer__Player              = 1,
	EIsPlayer__NotPlayer           = 2,
	EIsPlayer__EIsPlayer_MAX       = 3
};


// Enum Killstreak.EKSStimulateTarget
enum class EKSStimulateTarget : uint8_t
{
	EKSStimulateTarget__OnlyEnemies = 0,
	EKSStimulateTarget__OnlyAllies = 1,
	EKSStimulateTarget__AllPlayers = 2,
	EKSStimulateTarget__EKSStimulateTarget_MAX = 3
};


// Enum Killstreak.EPollAudience
enum class EPollAudience : uint8_t
{
	EPollAudience__AllPlayerPoll   = 0,
	EPollAudience__TeamPoll        = 1,
	EPollAudience__EPollAudience_MAX = 2
};


// Enum Killstreak.EProjectileReclaimPermission
enum class EProjectileReclaimPermission : uint8_t
{
	EProjectileReclaimPermission__OwnerOnly = 0,
	EProjectileReclaimPermission__TeammatesOnly = 1,
	EProjectileReclaimPermission__Anyone = 2,
	EProjectileReclaimPermission__EProjectileReclaimPermission_MAX = 3
};


// Enum Killstreak.EProjectilePredictionType
enum class EProjectilePredictionType : uint8_t
{
	EProjectilePredictionType__PassThrough = 0,
	EProjectilePredictionType__Bounce = 1,
	EProjectilePredictionType__Stop = 2,
	EProjectilePredictionType__EProjectilePredictionType_MAX = 3
};


// Enum Killstreak.EProjectileVisibilityType
enum class EProjectileVisibilityType : uint8_t
{
	EProjectileVisibilityType__Owner = 0,
	EProjectileVisibilityType__Ally = 1,
	EProjectileVisibilityType__All = 2,
	EProjectileVisibilityType__EProjectileVisibilityType_MAX = 3
};


// Enum Killstreak.EProjectileWeaponComponentType
enum class EProjectileWeaponComponentType : uint8_t
{
	EProjectileWeaponComponentType__None = 0,
	EProjectileWeaponComponentType__Self = 1,
	EProjectileWeaponComponentType__Parent = 2,
	EProjectileWeaponComponentType__EProjectileWeaponComponentType_MAX = 3
};


// Enum Killstreak.EProjectileClusterSpreadType
enum class EProjectileClusterSpreadType : uint8_t
{
	EProjectileClusterSpreadType__AimRelative = 0,
	EProjectileClusterSpreadType__ImpactRelative = 1,
	EProjectileClusterSpreadType__EProjectileClusterSpreadType_MAX = 2
};


// Enum Killstreak.EKSProjectileTargetingHitComponentType
enum class EKSProjectileTargetingHitComponentType : uint8_t
{
	EKSProjectileTargetingHitComponentType__Decal = 0,
	EKSProjectileTargetingHitComponentType__Mesh = 1,
	EKSProjectileTargetingHitComponentType__EKSProjectileTargetingHitComponentType_MAX = 2
};


// Enum Killstreak.EBadBehaviorType
enum class EBadBehaviorType : uint8_t
{
	EBadBehaviorType__None         = 0,
	EBadBehaviorType__QuitEarly    = 1,
	EBadBehaviorType__Disconnected = 2,
	EBadBehaviorType__AFK          = 3,
	EBadBehaviorType__EBadBehaviorType_MAX = 4
};


// Enum Killstreak.ERadialMenuItemInterruptNotifyBehaviorType
enum class ERadialMenuItemInterruptNotifyBehaviorType : uint8_t
{
	ERadialMenuItemInterruptNotifyBehaviorType__NoNotify = 0,
	ERadialMenuItemInterruptNotifyBehaviorType__OnlyIfMarkedPlaying = 1,
	ERadialMenuItemInterruptNotifyBehaviorType__ERadialMenuItemInterruptNotifyBehaviorType_MAX = 2
};


// Enum Killstreak.EKSRadialMenuItemInterruptReason
enum class EKSRadialMenuItemInterruptReason : uint8_t
{
	EKSRadialMenuItemInterruptReason__Unknown = 0,
	EKSRadialMenuItemInterruptReason__NoCharacter = 1,
	EKSRadialMenuItemInterruptReason__Walking = 2,
	EKSRadialMenuItemInterruptReason__Sprinting = 3,
	EKSRadialMenuItemInterruptReason__Crouching = 4,
	EKSRadialMenuItemInterruptReason__Downed = 5,
	EKSRadialMenuItemInterruptReason__Dead = 6,
	EKSRadialMenuItemInterruptReason__Interacting = 7,
	EKSRadialMenuItemInterruptReason__Zipline = 8,
	EKSRadialMenuItemInterruptReason__SkyDiving = 9,
	EKSRadialMenuItemInterruptReason__DodgeRolling = 10,
	EKSRadialMenuItemInterruptReason__Falling = 11,
	EKSRadialMenuItemInterruptReason__NonRadialMenuItemEquipment = 12,
	EKSRadialMenuItemInterruptReason__RadialMenuItemActivated = 13,
	EKSRadialMenuItemInterruptReason__RadialMenuItemCooldown = 14,
	EKSRadialMenuItemInterruptReason__InvalidTargeting = 15,
	EKSRadialMenuItemInterruptReason__DistFromOrigin = 16,
	EKSRadialMenuItemInterruptReason__Throttled = 17,
	EKSRadialMenuItemInterruptReason__Truncated = 18,
	EKSRadialMenuItemInterruptReason__EKSRadialMenuItemInterruptReason_MAX = 19
};


// Enum Killstreak.ERecoilStart2
enum class ERecoilStart2 : uint8_t
{
	ERS_Zero2                      = 0,
	ERS_Random2                    = 1,
	ERS_MAX                        = 2
};


// Enum Killstreak.ERewardSource
enum class ERewardSource : uint8_t
{
	ERewardSource__UNKNOWN         = 0,
	ERewardSource__Base            = 1,
	ERewardSource__MatchWin        = 2,
	ERewardSource__BoosterBonusProgression = 3,
	ERewardSource__QueueBonusProgression = 4,
	ERewardSource__EventBonusProgression = 5,
	ERewardSource__ERewardSource_MAX = 6
};


// Enum Killstreak.EPlayerStatType
enum class EPlayerStatType : uint8_t
{
	EPlayerStatType__UNKNOWN       = 0,
	EPlayerStatType__Kills         = 1,
	EPlayerStatType__Deaths        = 2,
	EPlayerStatType__Assists       = 3,
	EPlayerStatType__Downs         = 4,
	EPlayerStatType__Revives       = 5,
	EPlayerStatType__Eliminations  = 6,
	EPlayerStatType__RoundsPlayed  = 7,
	EPlayerStatType__Hacks         = 8,
	EPlayerStatType__Dehacks       = 9,
	EPlayerStatType__RawDamageDealt = 10,
	EPlayerStatType__MitigatedDamageDealt = 11,
	EPlayerStatType__RawDamageReceived = 12,
	EPlayerStatType__MitigatedDamageReceived = 13,
	EPlayerStatType__TimeAlive     = 14,
	EPlayerStatType__Rank          = 15,
	EPlayerStatType__TimePlayed    = 16,
	EPlayerStatType__Score         = 17,
	EPlayerStatType__Cash          = 18,
	EPlayerStatType__Headshots     = 19,
	EPlayerStatType__EPlayerStatType_MAX = 20
};


// Enum Killstreak.ELimitPerRound
enum class ELimitPerRound : uint8_t
{
	ELimitPerRound__None           = 0,
	ELimitPerRound__OneActive      = 1,
	ELimitPerRound__OnePerRound    = 2,
	ELimitPerRound__ELimitPerRound_MAX = 3
};


// Enum Killstreak.ELocalRequirements
enum class ELocalRequirements : uint8_t
{
	ELocalRequirements__None       = 0,
	ELocalRequirements__Controlled = 1,
	ELocalRequirements__Viewed     = 2,
	ELocalRequirements__ControlledOrViewed = 3,
	ELocalRequirements__ELocalRequirements_MAX = 4
};


// Enum Killstreak.EPlayerShopTransactionType
enum class EPlayerShopTransactionType : uint8_t
{
	EPlayerShopTransactionType__Purchase = 0,
	EPlayerShopTransactionType__SetActive = 1,
	EPlayerShopTransactionType__Refund = 2,
	EPlayerShopTransactionType__EPlayerShopTransactionType_MAX = 3
};


// Enum Killstreak.ESpecialtyRoleType
enum class ESpecialtyRoleType : uint8_t
{
	ESpecialtyRoleType__Unknown    = 0,
	ESpecialtyRoleType__Attack     = 1,
	ESpecialtyRoleType__Defense    = 2,
	ESpecialtyRoleType__Support    = 3,
	ESpecialtyRoleType__Movement   = 4,
	ESpecialtyRoleType__ESpecialtyRoleType_MAX = 5
};


// Enum Killstreak.EStoreItemCollectionMode
enum class EStoreItemCollectionMode : uint8_t
{
	StoreItems                     = 0,
	BlockedItems                   = 1,
	RefundedItems                  = 2,
	EStoreItemCollectionMode_MAX   = 3
};


// Enum Killstreak.EStoreSectionTypes
enum class EStoreSectionTypes : uint8_t
{
	NewSection                     = 0,
	DLCSection                     = 1,
	FeaturedSection                = 2,
	RogueBucksSection              = 3,
	DailySection                   = 4,
	BoostsSection                  = 5,
	LimitedTimeOfferSection        = 6,
	SpecialPromotionsSection       = 7,
	DLCSectionOnSale               = 8,
	CustomMessage                  = 9,
	DisplayOnCustomizationScreenOnly = 10,
	EStoreSectionTypes_MAX         = 11
};


// Enum Killstreak.EKSEquipmentType
enum class EKSEquipmentType : uint8_t
{
	EKSEquipmentType__Normal       = 0,
	EKSEquipmentType__Prop         = 1,
	EKSEquipmentType__EKSEquipmentType_MAX = 2
};


// Enum Killstreak.ETopbarTicketDisplaySide
enum class ETopbarTicketDisplaySide : uint8_t
{
	ETopbarTicketDisplaySide__Both = 0,
	ETopbarTicketDisplaySide__ShowAttacker = 1,
	ETopbarTicketDisplaySide__ShowDefender = 2,
	ETopbarTicketDisplaySide__ETopbarTicketDisplaySide_MAX = 3
};


// Enum Killstreak.ETopbarPointsBarType
enum class ETopbarPointsBarType : uint8_t
{
	ETopbarPointsBarType__Neither  = 0,
	ETopbarPointsBarType__Score    = 1,
	ETopbarPointsBarType__Ticket   = 2,
	ETopbarPointsBarType__ETopbarPointsBarType_MAX = 3
};


// Enum Killstreak.EWeaponSlot
enum class EWeaponSlot : uint8_t
{
	EWeaponSlot__NONE              = 0,
	EWeaponSlot__PRIMARY_ONE_SLOT  = 1,
	EWeaponSlot__PRIMARY_TWO_SLOT  = 2,
	EWeaponSlot__SECONDARY_SLOT    = 3,
	EWeaponSlot__MELEE_SLOT        = 4,
	EWeaponSlot__EWeaponSlot_MAX   = 5
};


// Enum Killstreak.ECharacterRole
enum class ECharacterRole : uint8_t
{
	ECharacterRole__None           = 0,
	ECharacterRole__Attacker       = 1,
	ECharacterRole__Defender       = 2,
	ECharacterRole__Max            = 3
};


// Enum Killstreak.ERestoreInfoInitRestoreType
enum class ERestoreInfoInitRestoreType : uint8_t
{
	ERestoreInfoInitRestoreType__Normal = 0,
	ERestoreInfoInitRestoreType__RestoreSelfOnComplete = 1,
	ERestoreInfoInitRestoreType__RestoreSelfAndChildrenOnComplete = 2,
	ERestoreInfoInitRestoreType__ERestoreInfoInitRestoreType_MAX = 3
};


// Enum Killstreak.ERestoreInfoInitBindType
enum class ERestoreInfoInitBindType : uint8_t
{
	ERestoreInfoInitBindType__Normal = 0,
	ERestoreInfoInitBindType__BindSelfOnComplete = 1,
	ERestoreInfoInitBindType__BindSelfAndChildrenOnComplete = 2,
	ERestoreInfoInitBindType__ERestoreInfoInitBindType_MAX = 3
};


// Enum Killstreak.EKSSocketCrouchHandling
enum class EKSSocketCrouchHandling : uint8_t
{
	EKSSocketCrouchHandling__MaintainCapsuleBottomOffset = 0,
	EKSSocketCrouchHandling__MaintainCapsuleCenterOffset = 1,
	EKSSocketCrouchHandling__ApplyCustomOffset = 2,
	EKSSocketCrouchHandling__EKSSocketCrouchHandling_MAX = 3
};


// Enum Killstreak.EKSSocketOffsetType
enum class EKSSocketOffsetType : uint8_t
{
	EKSSocketOffsetType__KeepRelativeToParent = 0,
	EKSSocketOffsetType__KeepRelativeToMesh = 1,
	EKSSocketOffsetType__KeepRelativeToCylinder = 2,
	EKSSocketOffsetType__EKSSocketOffsetType_MAX = 3
};


// Enum Killstreak.ECameraShoulder
enum class ECameraShoulder : uint8_t
{
	ECameraShoulder__Right         = 0,
	ECameraShoulder__Left          = 1,
	ECameraShoulder__ECameraShoulder_MAX = 2
};


// Enum Killstreak.EInputReleaseType
enum class EInputReleaseType : uint8_t
{
	EInputReleaseType__All         = 0,
	EInputReleaseType__RadialMenu  = 1,
	EInputReleaseType__EscapeMenu  = 2,
	EInputReleaseType__Scoreboard  = 3,
	EInputReleaseType__Map         = 4,
	EInputReleaseType__RadialMenuClose = 5,
	EInputReleaseType__EInputReleaseType_MAX = 6
};


// Enum Killstreak.EKSContextualActionButtonMode
enum class EKSContextualActionButtonMode : uint8_t
{
	EKSContextualActionButtonMode__HoldUse = 0,
	EKSContextualActionButtonMode__HoldReload = 1,
	EKSContextualActionButtonMode__HoldNone = 2,
	EKSContextualActionButtonMode__EKSContextualActionButtonMode_MAX = 3
};


// Enum Killstreak.EKSInputActionType
enum class EKSInputActionType : uint8_t
{
	EKSInputActionType__Press      = 0,
	EKSInputActionType__Hold       = 1,
	EKSInputActionType__Repeat     = 2,
	EKSInputActionType__EKSInputActionType_MAX = 3
};


// Enum Killstreak.EControllerInputType
enum class EControllerInputType : uint8_t
{
	EControllerInputType__None     = 0,
	EControllerInputType__ADSBit   = 1,
	EControllerInputType__KeyboardMouse = 2,
	EControllerInputType__KeyboardMouseADS = 3,
	EControllerInputType__Gamepad  = 4,
	EControllerInputType__GamepadADS = 5,
	EControllerInputType__JoyCon   = 6,
	EControllerInputType__JoyConADS = 7,
	EControllerInputType__Touch    = 8,
	EControllerInputType__TouchADS = 9,
	EControllerInputType__PCGamepad = 10,
	EControllerInputType__PCGamepadADS = 11,
	EControllerInputType__EControllerInputType_MAX = 12
};


// Enum Killstreak.EOcclusionType
enum class EOcclusionType : uint8_t
{
	EOcclusionType__None           = 0,
	EOcclusionType__Simple         = 1,
	EOcclusionType__Advanced       = 2,
	EOcclusionType__EOcclusionType_MAX = 3
};


// Enum Killstreak.EMuteMode
enum class EMuteMode : uint8_t
{
	EMuteMode__VoicechatOnly       = 0,
	EMuteMode__VoicechatAndQuips   = 1,
	EMuteMode__VoicechatAndCommunications = 2,
	EMuteMode__VoicechatQuipsCommunications = 3,
	EMuteMode__EMuteMode_MAX       = 4
};


// Enum Killstreak.EKSPowerSlideEndReason
enum class EKSPowerSlideEndReason : uint8_t
{
	EKSPowerSlideEndReason__Expired = 0,
	EKSPowerSlideEndReason__Collide = 1,
	EKSPowerSlideEndReason__Fall   = 2,
	EKSPowerSlideEndReason__Action = 3,
	EKSPowerSlideEndReason__Interrupted = 4,
	EKSPowerSlideEndReason__FaceAway = 5,
	EKSPowerSlideEndReason__Unknown = 6,
	EKSPowerSlideEndReason__EKSPowerSlideEndReason_MAX = 7
};


// Enum Killstreak.EKSGame_CustomMovement
enum class EKSGame_CustomMovement : uint8_t
{
	KSMOVE_Vaulting                = 0,
	KSMOVE_DiveFreeFall            = 1,
	KSMOVE_DiveParachute           = 2,
	KSMOVE_DodgeRoll               = 3,
	KSMOVE_ZipLine                 = 4,
	KSMOVE_FlightRecovery          = 5,
	KSMOVE_Ability                 = 6,
	KSMOVE_PowerSlide              = 7,
	KSMOVE_Kick                    = 8,
	KSMOVE_MAX                     = 9
};


// Enum Killstreak.EScreenLogType
enum class EScreenLogType : uint8_t
{
	EScreenLogType__CombatLog      = 0,
	EScreenLogType__RadialMenuItemLog = 1,
	EScreenLogType__EScreenLogType_MAX = 2
};


// Enum Killstreak.EEmoteCameraPositionType
enum class EEmoteCameraPositionType : uint8_t
{
	EEmoteCameraPositionType__None = 0,
	EEmoteCameraPositionType__Stand = 1,
	EEmoteCameraPositionType__Crouch = 2,
	EEmoteCameraPositionType__Prone = 3,
	EEmoteCameraPositionType__EEmoteCameraPositionType_MAX = 4
};


// Enum Killstreak.EKSRevealType
enum class EKSRevealType : uint8_t
{
	EKSRevealType__NotRevealed     = 0,
	EKSRevealType__Normal          = 1,
	EKSRevealType__Permanent       = 2,
	EKSRevealType__EKSRevealType_MAX = 3
};


// Enum Killstreak.EExtractionTeamType
enum class EExtractionTeamType : uint8_t
{
	EExtractionTeamType__NotSet    = 0,
	EExtractionTeamType__Attacker  = 1,
	EExtractionTeamType__Defender  = 2,
	EExtractionTeamType__EExtractionTeamType_MAX = 3
};


// Enum Killstreak.EKSRespawnMode
enum class EKSRespawnMode : uint8_t
{
	EKSRespawnMode__NoRespawn      = 0,
	EKSRespawnMode__QueueRespawn   = 1,
	EKSRespawnMode__TicketRespawn  = 2,
	EKSRespawnMode__AlwaysRespawn  = 3,
	EKSRespawnMode__EKSRespawnMode_MAX = 4
};


// Enum Killstreak.EKSGameTicketDisplayType
enum class EKSGameTicketDisplayType : uint8_t
{
	EKSGameTicketDisplayType__Respawns = 0,
	EKSGameTicketDisplayType__BombPoints = 1,
	EKSGameTicketDisplayType__EKSGameTicketDisplayType_MAX = 2
};


// Enum Killstreak.EKSPerSecondChargeMode
enum class EKSPerSecondChargeMode : uint8_t
{
	EKSPerSecondChargeMode__OverrideNone = 0,
	EKSPerSecondChargeMode__OverrideChargeable = 1,
	EKSPerSecondChargeMode__OverrideUnchargeable = 2,
	EKSPerSecondChargeMode__OverrideAll = 3,
	EKSPerSecondChargeMode__EKSPerSecondChargeMode_MAX = 4
};


// Enum Killstreak.EKSMovementDirection
enum class EKSMovementDirection : uint8_t
{
	EKSMovementDirection__Forward  = 0,
	EKSMovementDirection__Right    = 1,
	EKSMovementDirection__Back     = 2,
	EKSMovementDirection__Left     = 3,
	EKSMovementDirection__EKSMovementDirection_MAX = 4
};


// Enum Killstreak.EKSApparelGender
enum class EKSApparelGender : uint8_t
{
	EKSApparelGender__Unisex       = 0,
	EKSApparelGender__Male         = 1,
	EKSApparelGender__Female       = 2,
	EKSApparelGender__EKSApparelGender_MAX = 3
};


// Enum Killstreak.EKSCharacterGender
enum class EKSCharacterGender : uint8_t
{
	EKSCharacterGender__Unknown    = 0,
	EKSCharacterGender__Male       = 1,
	EKSCharacterGender__Female     = 2,
	EKSCharacterGender__EKSCharacterGender_MAX = 3
};


// Enum Killstreak.EPerceivedAlignmentType
enum class EPerceivedAlignmentType : uint8_t
{
	EPerceivedAlignmentType__Neutral = 0,
	EPerceivedAlignmentType__Friendly = 1,
	EPerceivedAlignmentType__Enemy = 2,
	EPerceivedAlignmentType__EPerceivedAlignmentType_MAX = 3
};


// Enum Killstreak.EPlayerSilhouetteQualifier
enum class EPlayerSilhouetteQualifier : uint8_t
{
	EPlayerSilhouetteQualifier__NotSet = 0,
	EPlayerSilhouetteQualifier__Objective = 1,
	EPlayerSilhouetteQualifier__EPlayerSilhouetteQualifier_MAX = 2
};


// Enum Killstreak.EPlayerSilhouetteType
enum class EPlayerSilhouetteType : uint8_t
{
	EPlayerSilhouetteType__None    = 0,
	EPlayerSilhouetteType__Neutral = 1,
	EPlayerSilhouetteType__Selected = 2,
	EPlayerSilhouetteType__Friendly = 3,
	EPlayerSilhouetteType__Enemy   = 4,
	EPlayerSilhouetteType__EPlayerSilhouetteType_MAX = 5
};


// Enum Killstreak.EDamageCategory
enum class EDamageCategory : uint8_t
{
	EDamageCategory__Default       = 0,
	EDamageCategory__NonDamage     = 1,
	EDamageCategory__Firearm       = 2,
	EDamageCategory__Impact        = 3,
	EDamageCategory__Explosion     = 4,
	EDamageCategory__Melee         = 5,
	EDamageCategory__ThrownMelee   = 6,
	EDamageCategory__InstantDeath  = 7,
	EDamageCategory__Environmental = 8,
	EDamageCategory__Bleed         = 9,
	EDamageCategory__Fire          = 10,
	EDamageCategory__Poison        = 11,
	EDamageCategory__EDamageCategory_MAX = 12
};


// Enum Killstreak.ELoadoutSlot
enum class ELoadoutSlot : uint8_t
{
	ELoadoutSlot__LoadoutSlot_None = 0,
	ELoadoutSlot__LoadoutSlot_SpecialtyOne = 1,
	ELoadoutSlot__LoadoutSlot_SpecialtyTwo = 2,
	ELoadoutSlot__LoadoutSlot_PerkOne = 3,
	ELoadoutSlot__LoadoutSlot_PerkTwo = 4,
	ELoadoutSlot__LoadoutSlot_PerkFour = 5,
	ELoadoutSlot__LoadoutSlot_KillstreakOne = 6,
	ELoadoutSlot__LoadoutSlot_KillstreakTwo = 7,
	ELoadoutSlot__LoadoutSlot_Pistol = 8,
	ELoadoutSlot__LoadoutSlot_PistolAttachOne = 9,
	ELoadoutSlot__LoadoutSlot_PistolAttachTwo = 10,
	ELoadoutSlot__LoadoutSlot_PistolAttachThree = 11,
	ELoadoutSlot__LoadoutSlot_PrimaryWeapon = 12,
	ELoadoutSlot__LoadoutSlot_PerkThree = 13,
	ELoadoutSlot__LoadoutSlot_GadgetOne = 14,
	ELoadoutSlot__LoadoutSlot_PassiveOne = 15,
	ELoadoutSlot__LoadoutSlot_PassiveTwo = 16,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityOne = 17,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityTwo = 18,
	ELoadoutSlot__LoadoutSlot_LoadoutBundleId = 19,
	ELoadoutSlot__LoadoutSlot_MAX  = 20
};


// Enum Killstreak.TG_EQUIP_POINT
enum class ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_OFFHAND03                  = 5,
	EQP_RECALL                     = 6,
	EQP_PASSIVE                    = 7,
	EQP_ACTIVE                     = 8,
	EQP_ACTIVE01                   = 9,
	EQP_ACTIVE02                   = 10,
	EQP_CONSUMABLE                 = 11,
	EQP_CONSUMABLE01               = 12,
	EQP_UNUSED                     = 13,
	EQP_UNUSED01                   = 14,
	EQP_UNUSED02                   = 15,
	EQP_UNUSED03                   = 16,
	EQP_UNUSED04                   = 17,
	EQP_UNUSED05                   = 18,
	EQP_ITEM_STORE                 = 19,
	EQP_ITEM_STORE01               = 20,
	EQP_ITEM_STORE02               = 21,
	EQP_ITEM_STORE03               = 22,
	EQP_ITEM_STORE04               = 23,
	EQP_OVER_DRAW                  = 24,
	EQP_MAX                        = 25
};


// Enum Killstreak.EKSWeaponDestroyReason
enum class EKSWeaponDestroyReason : uint8_t
{
	EKSWeaponDestroyReason__None   = 0,
	EKSWeaponDestroyReason__RemoveNoReplace = 1,
	EKSWeaponDestroyReason__RemoveWithReplace = 2,
	EKSWeaponDestroyReason__DropNoReplace = 3,
	EKSWeaponDestroyReason__DropWithReplace = 4,
	EKSWeaponDestroyReason__EKSWeaponDestroyReason_MAX = 5
};


// Enum Killstreak.EReloadReplicationFlags
enum class EReloadReplicationFlags : uint8_t
{
	EReloadReplicationFlags__MinimumReplication = 0,
	EReloadReplicationFlags__ReplicateAmmo = 1,
	EReloadReplicationFlags__EReloadReplicationFlags_MAX = 2
};


// Enum Killstreak.EFiredReplicationFlags
enum class EFiredReplicationFlags : uint8_t
{
	EFiredReplicationFlags__MinimumReplication = 0,
	EFiredReplicationFlags__ReplicateAmmo = 1,
	EFiredReplicationFlags__ReplicateAim = 2,
	EFiredReplicationFlags__ReplicateAimAndAmmo = 3,
	EFiredReplicationFlags__ReplicateAllFireParameters = 4,
	EFiredReplicationFlags__EFiredReplicationFlags_MAX = 5
};


// Enum Killstreak.EKSBuildState
enum class EKSBuildState : uint8_t
{
	EKSBuildState__BUILD_PENDING_VALID = 0,
	EKSBuildState__BUILD_PENDING_INVALID = 1,
	EKSBuildState__BUILD_SUCCEEDED = 2,
	EKSBuildState__BUILD_FAILED    = 3,
	EKSBuildState__BUILD_MAX       = 4
};


// Enum Killstreak.EThirdPersonAimOriginType
enum class EThirdPersonAimOriginType : uint8_t
{
	EThirdPersonAimOriginType__ActorEyes = 0,
	EThirdPersonAimOriginType__FixedRelativeLocation = 1,
	EThirdPersonAimOriginType__ComponentByTag = 2,
	EThirdPersonAimOriginType__SocketOnCharacterMesh = 3,
	EThirdPersonAimOriginType__EThirdPersonAimOriginType_MAX = 4
};


// Enum Killstreak.EReticleType
enum class EReticleType : uint8_t
{
	EReticleType__Pistol           = 0,
	EReticleType__Rifle            = 1,
	EReticleType__Shotgun          = 2,
	EReticleType__DualAR           = 3,
	EReticleType__ChaosLauncher    = 4,
	EReticleType__None             = 5,
	EReticleType__EReticleType_MAX = 6
};


// Enum Killstreak.EReloadType
enum class EReloadType : uint8_t
{
	EReloadType__Clip              = 0,
	EReloadType__SingleShot        = 1,
	EReloadType__EReloadType_MAX   = 2
};


// Enum Killstreak.EWeaponCastType
enum class EWeaponCastType : uint8_t
{
	EWeaponCastType__UseSettings   = 0,
	EWeaponCastType__AlwaysQuickCast = 1,
	EWeaponCastType__AlwaysNormalCast = 2,
	EWeaponCastType__EWeaponCastType_MAX = 3
};


// Enum Killstreak.EFireModeType
enum class EFireModeType : uint8_t
{
	EFireModeType__Single          = 0,
	EFireModeType__Burst           = 1,
	EFireModeType__SemiAuto        = 2,
	EFireModeType__EFireModeType_MAX = 3
};


// Enum Killstreak.EKSWeaponEquipType
enum class EKSWeaponEquipType : uint8_t
{
	EKSWeaponEquipType__Normal     = 0,
	EKSWeaponEquipType__Special    = 1,
	EKSWeaponEquipType__GameMode   = 2,
	EKSWeaponEquipType__Gambit     = 3,
	EKSWeaponEquipType__EKSWeaponEquipType_MAX = 4
};


// Enum Killstreak.EExtendedMagazineRounding
enum class EExtendedMagazineRounding : uint8_t
{
	EExtendedMagazineRounding__NearestInteger = 0,
	EExtendedMagazineRounding__RoundUp = 1,
	EExtendedMagazineRounding__RoundDown = 2,
	EExtendedMagazineRounding__EExtendedMagazineRounding_MAX = 3
};


// Enum Killstreak.EKSVariableScopeType
enum class EKSVariableScopeType : uint8_t
{
	EKSVariableScopeType__FixedFOV = 0,
	EKSVariableScopeType__ScopeMultiplier = 1,
	EKSVariableScopeType__EKSVariableScopeType_MAX = 2
};


// Enum Killstreak.EBundledAmmoType
enum class EBundledAmmoType : uint8_t
{
	EBundledAmmoType__FullClip     = 0,
	EBundledAmmoType__DefaultAmmoFromAsset = 1,
	EBundledAmmoType__Override     = 2,
	EBundledAmmoType__EBundledAmmoType_MAX = 3
};


// Enum Killstreak.EWeaponComponentAttachmentType
enum class EWeaponComponentAttachmentType : uint8_t
{
	EWeaponComponentAttachmentType__AttachToCharacter = 0,
	EWeaponComponentAttachmentType__AttachToMesh = 1,
	EWeaponComponentAttachmentType__EWeaponComponentAttachmentType_MAX = 2
};


// Enum Killstreak.EGamepadTriggerType
enum class EGamepadTriggerType : uint8_t
{
	EGamepadTriggerType__RightTrigger = 0,
	EGamepadTriggerType__LeftTrigger = 1,
	EGamepadTriggerType__EGamepadTriggerType_MAX = 2
};


// Enum Killstreak.ESkinObjectParentingType
enum class ESkinObjectParentingType : uint8_t
{
	ESkinObjectParentingType__Never = 0,
	ESkinObjectParentingType__ActiveAndMainHand = 1,
	ESkinObjectParentingType__Active = 2,
	ESkinObjectParentingType__InAction = 3,
	ESkinObjectParentingType__Always = 4,
	ESkinObjectParentingType__ESkinObjectParentingType_MAX = 5
};


// Enum Killstreak.EWeaponComponentTickType
enum class EWeaponComponentTickType : uint8_t
{
	EWeaponComponentTickType__NeverTick = 0,
	EWeaponComponentTickType__TickWhenPrimary = 1,
	EWeaponComponentTickType__TickWhenActive = 2,
	EWeaponComponentTickType__AlwaysTick = 3,
	EWeaponComponentTickType__EWeaponComponentTickType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
