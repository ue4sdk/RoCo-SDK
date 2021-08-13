#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlatformGameFramework.EGameLocalizationType
enum class EGameLocalizationType : uint8_t
{
	EGameLocalizationType__Unknown = 0,
	EGameLocalizationType__PC      = 1,
	EGameLocalizationType__XboxOne = 2,
	EGameLocalizationType__PS4_SIEA = 3,
	EGameLocalizationType__PS4_SIEE = 4,
	EGameLocalizationType__Switch  = 5,
	EGameLocalizationType__Mobile  = 6,
	EGameLocalizationType__EGameLocalizationType_MAX = 7
};


// Enum PlatformGameFramework.EGameBits
enum class EGameBits : uint8_t
{
	EGameBits__NoStoreUI           = 0,
	EGameBits__UseAltUI            = 1,
	EGameBits__UseAltQueueUI       = 2,
	EGameBits__UseSpectator        = 3,
	EGameBits__EGameBits_MAX       = 4
};


// Enum PlatformGameFramework.EPGame_CustomMovement
enum class EPGame_CustomMovement : uint8_t
{
	PLATMOVE_Tween                 = 0,
	PLATMOVE_Charge                = 1,
	PLATMOVE_MAX                   = 2
};


// Enum PlatformGameFramework.ECombatLogType
enum class ECombatLogType : uint8_t
{
	ECombatLogType__JSON           = 0,
	ECombatLogType__AWS            = 1,
	ECombatLogType__DEFAULT        = 2,
	ECombatLogType__ECombatLogType_MAX = 3
};


// Enum PlatformGameFramework.EEffectGroupApplicationRule
enum class EEffectGroupApplicationRule : uint8_t
{
	EEffectGroupApplicationRule__STACKABLE = 0,
	EEffectGroupApplicationRule__NEWEST = 1,
	EEffectGroupApplicationRule__STRONGEST = 2,
	EEffectGroupApplicationRule__REFRESH = 3,
	EEffectGroupApplicationRule__STACK_IN_PLACE = 4,
	EEffectGroupApplicationRule__STACK_IN_PLACE_INSTIGATOR = 5,
	EEffectGroupApplicationRule__STRONGEST_BEFORE_NEWEST = 6,
	EEffectGroupApplicationRule__EEffectGroupApplicationRule_MAX = 7
};


// Enum PlatformGameFramework.EFubarRewardRecipients
enum class EFubarRewardRecipients : uint8_t
{
	EFubarRewardRecipients__None   = 0,
	EFubarRewardRecipients__PostedPlayers = 1,
	EFubarRewardRecipients__PostLoginPlayers = 2,
	EFubarRewardRecipients__EFubarRewardRecipients_MAX = 3
};


// Enum PlatformGameFramework.EFubarReason
enum class EFubarReason : uint8_t
{
	EFubarReason__NotFubar         = 0,
	EFubarReason__CPUSaturation    = 1,
	EFubarReason__GameModePlayersDisconnectedBothSides = 2,
	EFubarReason__GameModePlayersDisconnected = 3,
	EFubarReason__GameModeGeneral  = 4,
	EFubarReason__MultipleBadConnections = 5,
	EFubarReason__Test             = 6,
	EFubarReason__DefaultMapLoadFailure = 7,
	EFubarReason__FailedToListenForConnections = 8,
	EFubarReason__EFubarReason_MAX = 9
};


// Enum PlatformGameFramework.EPGame_EPropertyType
enum class EPGame_EPropertyType : uint8_t
{
	PROPTYPE_Modifier              = 0,
	PROPTYPE_Percent               = 1,
	PROPTYPE_Value                 = 2,
	PROPTYPE_Delta                 = 3,
	PROPTYPE_MAX                   = 4
};


// Enum PlatformGameFramework.ESonyMatchState
enum class ESonyMatchState : uint8_t
{
	ESonyMatchState__NotStarted    = 0,
	ESonyMatchState__MatchIdRequested = 1,
	ESonyMatchState__Playing       = 2,
	ESonyMatchState__SendPauseOrCancelMatch = 3,
	ESonyMatchState__SendCompleteMatch = 4,
	ESonyMatchState__Complete      = 5,
	ESonyMatchState__ESonyMatchState_MAX = 6
};


// Enum PlatformGameFramework.PGAME_INPUT_STATE
enum class EPGAME_INPUT_STATE : uint8_t
{
	PIS_KEYMOUSE                   = 0,
	PIS_GAMEPAD                    = 1,
	PIS_TOUCH                      = 2,
	PIS_UNKNOWN                    = 3,
	PIS_MAX                        = 4
};


// Enum PlatformGameFramework.EPositionHistoryRecordMode
enum class EPositionHistoryRecordMode : uint8_t
{
	EPositionHistoryRecordMode__OnTick = 0,
	EPositionHistoryRecordMode__Manual = 1,
	EPositionHistoryRecordMode__EPositionHistoryRecordMode_MAX = 2
};


// Enum PlatformGameFramework.EPGame_ReplicateTimerState
enum class EPGame_ReplicateTimerState : uint8_t
{
	EPGame_ReplicateTimerState__Inactive = 0,
	EPGame_ReplicateTimerState__Active = 1,
	EPGame_ReplicateTimerState__Overtime = 2,
	EPGame_ReplicateTimerState__Unlimited = 3,
	EPGame_ReplicateTimerState__Paused = 4,
	EPGame_ReplicateTimerState__EPGame_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
