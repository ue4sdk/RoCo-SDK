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

// Enum PlatformUMG.EPUMG_TextFilterStatus
enum class EPUMG_TextFilterStatus : uint8_t
{
	EPUMG_TextFilterStatus__Unchecked = 0,
	EPUMG_TextFilterStatus__CheckingNow = 1,
	EPUMG_TextFilterStatus__Filtered = 2,
	EPUMG_TextFilterStatus__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_ChatPhase
enum class EPUMG_ChatPhase : uint8_t
{
	EPUMG_ChatPhase__PortalAllowed = 0,
	EPUMG_ChatPhase__PlayerNamesExist = 1,
	EPUMG_ChatPhase__LocalFilters  = 2,
	EPUMG_ChatPhase__PortalAllowedOtherUser = 3,
	EPUMG_ChatPhase__PortalTextFilter = 4,
	EPUMG_ChatPhase__ChannelAlreadyHasPending = 5,
	EPUMG_ChatPhase__Ready         = 6,
	EPUMG_ChatPhase__EPUMG_MAX     = 7
};


// Enum PlatformUMG.EPUMG_ChatChannel
enum class EPUMG_ChatChannel : uint8_t
{
	EPUMG_ChatChannel__UNKNOWN     = 0,
	EPUMG_ChatChannel__PERSONAL    = 1,
	EPUMG_ChatChannel__CLAN        = 2,
	EPUMG_ChatChannel__GLOBAL      = 3,
	EPUMG_ChatChannel__MATCH       = 4,
	EPUMG_ChatChannel__LOCAL_TEAM  = 5,
	EPUMG_ChatChannel__PARTY       = 6,
	EPUMG_ChatChannel__CITY        = 7,
	EPUMG_ChatChannel__PRIVATE     = 8,
	EPUMG_ChatChannel__EOM_LOBBY   = 9,
	EPUMG_ChatChannel__SYSTEM      = 10,
	EPUMG_ChatChannel__TRADE       = 11,
	EPUMG_ChatChannel__LFG         = 12,
	EPUMG_ChatChannel__LFG01       = 13,
	EPUMG_ChatChannel__HELP        = 14,
	EPUMG_ChatChannel__VOIP_NEWS   = 15,
	EPUMG_ChatChannel__GM          = 16,
	EPUMG_ChatChannel__VIP         = 17,
	EPUMG_ChatChannel__LFG02       = 18,
	EPUMG_ChatChannel__VOIP_ECHO   = 19,
	EPUMG_ChatChannel__VOIP_CONF   = 20,
	EPUMG_ChatChannel__COMBAT      = 21,
	EPUMG_ChatChannel__EMOTE       = 22,
	EPUMG_ChatChannel__NUM_CHAT_CHANNELS = 23,
	EPUMG_ChatChannel__EPUMG_MAX   = 24
};


// Enum PlatformUMG.EViewManagerLayer
enum class EViewManagerLayer : uint8_t
{
	EViewManagerLayer__Base        = 0,
	EViewManagerLayer__Modal       = 1,
	EViewManagerLayer__EViewManagerLayer_MAX = 2
};


// Enum PlatformUMG.EPUMG_LoginState
enum class EPUMG_LoginState : uint8_t
{
	EPUMG_LoginState__ELS_LoggedOut = 0,
	EPUMG_LoginState__ELS_Eula     = 1,
	EPUMG_LoginState__ELS_CreateName = 2,
	EPUMG_LoginState__ELS_LoggingIn = 3,
	EPUMG_LoginState__ELS_LoggedIn = 4,
	EPUMG_LoginState__ELS_TwoFactor = 5,
	EPUMG_LoginState__ELS_LinkOffer = 6,
	EPUMG_LoginState__ELS_Unknown  = 7,
	EPUMG_LoginState__ELS_MAX      = 8
};


// Enum PlatformUMG.EPUMG_MatchStatus
enum class EPUMG_MatchStatus : uint8_t
{
	EPUMG_MatchStatus__NotQueued   = 0,
	EPUMG_MatchStatus__Declined    = 1,
	EPUMG_MatchStatus__Queued      = 2,
	EPUMG_MatchStatus__Invited     = 3,
	EPUMG_MatchStatus__Accepted    = 4,
	EPUMG_MatchStatus__Matching    = 5,
	EPUMG_MatchStatus__Waiting     = 6,
	EPUMG_MatchStatus__InGame      = 7,
	EPUMG_MatchStatus__SpectatorLobby = 8,
	EPUMG_MatchStatus__SpectatorGame = 9,
	EPUMG_MatchStatus__EPUMG_MAX   = 10
};


// Enum PlatformUMG.EPUMG_CustomMatchPermission
enum class EPUMG_CustomMatchPermission : uint8_t
{
	EPUMG_CustomMatchPermission__None = 0,
	EPUMG_CustomMatchPermission__Inviter = 1,
	EPUMG_CustomMatchPermission__Leader = 2,
	EPUMG_CustomMatchPermission__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_SettingUIType
enum class EPUMG_SettingUIType : uint8_t
{
	EPUMG_SettingUIType__Header    = 0,
	EPUMG_SettingUIType__Slider    = 1,
	EPUMG_SettingUIType__OptionStepper = 2,
	EPUMG_SettingUIType__Checkbox  = 3,
	EPUMG_SettingUIType__Button    = 4,
	EPUMG_SettingUIType__Dropdown  = 5,
	EPUMG_SettingUIType__KeyBinding = 6,
	EPUMG_SettingUIType__EPUMG_MAX = 7
};


// Enum PlatformUMG.EPUMG_LastInputType
enum class EPUMG_LastInputType : uint8_t
{
	EPUMG_LastInputType__EPUMG_LastInputType_Up = 0,
	EPUMG_LastInputType__EPUMG_LastInputType_Down = 1,
	EPUMG_LastInputType__EPUMG_LastInputType_Left = 2,
	EPUMG_LastInputType__EPUMG_LastInputType_Right = 3,
	EPUMG_LastInputType__EPUMG_LastInputType_MAX = 4
};


// Enum PlatformUMG.EPUMG_CannotLoginNowReason
enum class EPUMG_CannotLoginNowReason : uint8_t
{
	EPUMG_CannotLoginNowReason__None = 0,
	EPUMG_CannotLoginNowReason__PartialInstall = 1,
	EPUMG_CannotLoginNowReason__EPUMG_MAX = 2
};


// Enum PlatformUMG.EPUMG_PartyInviteRightsMode
enum class EPUMG_PartyInviteRightsMode : uint8_t
{
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_OnlyLeader = 0,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_LeaderStartingCanGrant = 1,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_AllMembers = 2,
	EPUMG_PartyInviteRightsMode__EPUMG_PIRM_MAX = 3
};


// Enum PlatformUMG.EPUMG_PopupButtonType
enum class EPUMG_PopupButtonType : uint8_t
{
	EPUMG_PopupButtonType__Confirm = 0,
	EPUMG_PopupButtonType__Cancel  = 1,
	EPUMG_PopupButtonType__Default = 2,
	EPUMG_PopupButtonType__EPUMG_MAX = 3
};


// Enum PlatformUMG.EPUMG_CustomMatchInviteError
enum class EPUMG_CustomMatchInviteError : uint8_t
{
	EPUMG_CustomMatchInviteError__None = 0,
	EPUMG_CustomMatchInviteError__NotInvitable = 1,
	EPUMG_CustomMatchInviteError__Banned = 2,
	EPUMG_CustomMatchInviteError__NotAccepted = 3,
	EPUMG_CustomMatchInviteError__EPUMG_MAX = 4
};


// Enum PlatformUMG.EPUMG_CustomMatchError
enum class EPUMG_CustomMatchError : uint8_t
{
	EPUMG_CustomMatchError__None   = 0,
	EPUMG_CustomMatchError__TeamEmpty = 1,
	EPUMG_CustomMatchError__TeamUnderCapacity = 2,
	EPUMG_CustomMatchError__TeamOverCapacity = 3,
	EPUMG_CustomMatchError__EPUMG_MAX = 4
};


// Enum PlatformUMG.EViewRouteRedirectionPhase
enum class EViewRouteRedirectionPhase : uint8_t
{
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_None = 0,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_ApplicationLaunch = 1,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_AccountLogin = 2,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_AlwaysCheck = 3,
	EViewRouteRedirectionPhase__VIEW_ROUTE_REDIRECT_MAX = 4
};


// Enum PlatformUMG.EViewManagerTransitionState
enum class EViewManagerTransitionState : uint8_t
{
	EViewManagerTransitionState__Idle = 0,
	EViewManagerTransitionState__Loading = 1,
	EViewManagerTransitionState__AnimatingHide = 2,
	EViewManagerTransitionState__AnimatingShow = 3,
	EViewManagerTransitionState__Locked = 4,
	EViewManagerTransitionState__EViewManagerTransitionState_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
