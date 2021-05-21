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

// Enum KillstreakUINew.EEOMProgressionType
enum class EEOMProgressionType : uint8_t
{
	Unknown                        = 0,
	Account_XP                     = 1,
	Reputation                     = 2,
	Rogue_Mastery_XP               = 3,
	Mini_Battlepass_XP             = 4,
	Ranked_XP                      = 5,
	Placement_Matches              = 6,
	Battlepass_XP                  = 7,
	Event_Challenge                = 8,
	EEOMProgressionType_MAX        = 9
};


// Enum KillstreakUINew.EKSPlayerQueryError
enum class EKSPlayerQueryError : uint8_t
{
	EKSPlayerQueryError__None      = 0,
	EKSPlayerQueryError__NoResults = 1,
	EKSPlayerQueryError__TimedOut  = 2,
	EKSPlayerQueryError__QueryError = 3,
	EKSPlayerQueryError__EKSPlayerQueryError_MAX = 4
};


// Enum KillstreakUINew.EPerkTreeNodeState
enum class EPerkTreeNodeState : uint8_t
{
	EPerkTreeNodeState__NODE_OFF   = 0,
	EPerkTreeNodeState__NODE_ERROR = 1,
	EPerkTreeNodeState__NODE_UNREACHABLE = 2,
	EPerkTreeNodeState__NODE_UNAFFORDABLE = 3,
	EPerkTreeNodeState__NODE_UNLOCKABLE = 4,
	EPerkTreeNodeState__NODE_OWNED = 5,
	EPerkTreeNodeState__NODE_OWNED_EQUIPPED = 6,
	EPerkTreeNodeState__NODE_MAX   = 7
};


// Enum KillstreakUINew.ESpecialtyItemType
enum class ESpecialtyItemType : uint8_t
{
	ESpecialtyItemType__ESpecItemType_SpecialtyPerk = 0,
	ESpecialtyItemType__ESpecItemType_GlobalPerk = 1,
	ESpecialtyItemType__ESpecItemType_Killstreak = 2,
	ESpecialtyItemType__ESpecItemType_Gadget = 3,
	ESpecialtyItemType__ESpecItemType_PistolAttachment = 4,
	ESpecialtyItemType__ESpecItemType_Pistol = 5,
	ESpecialtyItemType__ESpecItemType_Specialty = 6,
	ESpecialtyItemType__ESpecItemType_AutoEquippedPerk = 7,
	ESpecialtyItemType__ESpecItemType_SecondaryAbility = 8,
	ESpecialtyItemType__ESpecItemType_LoadoutClass = 9,
	ESpecialtyItemType__ESpecItemType_LoadoutBundle = 10,
	ESpecialtyItemType__ESpecItemType_MAX = 11
};


// Enum KillstreakUINew.ERewardState
enum class ERewardState : uint8_t
{
	ERewardState__locked           = 0,
	ERewardState__available        = 1,
	ERewardState__claimed          = 2,
	ERewardState__ERewardState_MAX = 3
};


// Enum KillstreakUINew.EQueueType
enum class EQueueType : uint8_t
{
	EQueueType__QT_Test            = 0,
	EQueueType__QT_Training        = 1,
	EQueueType__QT_PVP             = 2,
	EQueueType__QT_PVE             = 3,
	EQueueType__QT_Custom          = 4,
	EQueueType__QT_Ranked          = 5,
	EQueueType__QT_LimitedTime     = 6,
	EQueueType__QT_None            = 7,
	EQueueType__QT_MAX             = 8
};


// Enum KillstreakUINew.EKSSocialOverlaySection
enum class EKSSocialOverlaySection : uint8_t
{
	EKSSocialOverlaySection__Invalid = 0,
	EKSSocialOverlaySection__PartyMembers = 1,
	EKSSocialOverlaySection__MatchTeamMembers = 2,
	EKSSocialOverlaySection__PartyInvitations = 3,
	EKSSocialOverlaySection__FriendInvites = 4,
	EKSSocialOverlaySection__OnlineMctsFriends = 5,
	EKSSocialOverlaySection__OnlinePortalFriends = 6,
	EKSSocialOverlaySection__OfflineMctsFriends = 7,
	EKSSocialOverlaySection__Blocked = 8,
	EKSSocialOverlaySection__SearchResults = 9,
	EKSSocialOverlaySection__Pending = 10,
	EKSSocialOverlaySection__RecentlyPlayed = 11,
	EKSSocialOverlaySection__SuggestedFriends = 12,
	EKSSocialOverlaySection__MAX   = 13
};


// Enum KillstreakUINew.EKSInviteSelectResult
enum class EKSInviteSelectResult : uint8_t
{
	EKSInviteSelectResult__NoChange = 0,
	EKSInviteSelectResult__Selected = 1,
	EKSInviteSelectResult__Deselected = 2,
	EKSInviteSelectResult__EKSInviteSelectResult_MAX = 3
};


// Enum KillstreakUINew.EKSInviteCloseAction
enum class EKSInviteCloseAction : uint8_t
{
	EKSInviteCloseAction__None     = 0,
	EKSInviteCloseAction__Submit   = 1,
	EKSInviteCloseAction__EKSInviteCloseAction_MAX = 2
};


// Enum KillstreakUINew.EKSVoiceActivityAudioState
enum class EKSVoiceActivityAudioState : uint8_t
{
	EKSVoiceActivityAudioState__Disconnected = 0,
	EKSVoiceActivityAudioState__Connecting = 1,
	EKSVoiceActivityAudioState__Connected = 2,
	EKSVoiceActivityAudioState__Disconnecting = 3,
	EKSVoiceActivityAudioState__EKSVoiceActivityAudioState_MAX = 4
};


// Enum KillstreakUINew.ECombatEventType
enum class ECombatEventType : uint8_t
{
	ECombatEventType__CombatEvent_Down = 0,
	ECombatEventType__CombatEvent_Elim = 1,
	ECombatEventType__CombatEvent_MAX = 2
};


// Enum KillstreakUINew.EConfigPropertyGuidedCalloutScenes
enum class EConfigPropertyGuidedCalloutScenes : uint8_t
{
	EConfigPropertyGuidedCalloutScenes__NONE = 0,
	EConfigPropertyGuidedCalloutScenes__ROGUE_SCENE = 1,
	EConfigPropertyGuidedCalloutScenes__ROGUE_CUSTOMIZATION = 2,
	EConfigPropertyGuidedCalloutScenes__QUEUE_SELECT = 3,
	EConfigPropertyGuidedCalloutScenes__MAX_DO_NOT_GO_OVER = 4,
	EConfigPropertyGuidedCalloutScenes__EConfigPropertyGuidedCalloutScenes_MAX = 5
};


// Enum KillstreakUINew.EAllyMarkerState
enum class EAllyMarkerState : uint8_t
{
	EAllyMarkerState__Normal       = 0,
	EAllyMarkerState__Downed       = 1,
	EAllyMarkerState__Reviving     = 2,
	EAllyMarkerState__Dead         = 3,
	EAllyMarkerState__Hidden       = 4,
	EAllyMarkerState__EAllyMarkerState_MAX = 5
};


// Enum KillstreakUINew.EChallengeEntryCardState
enum class EChallengeEntryCardState : uint8_t
{
	EChallengeEntryCardState__Empty = 0,
	EChallengeEntryCardState__Incomplete = 1,
	EChallengeEntryCardState__Complete = 2,
	EChallengeEntryCardState__Locked = 3,
	EChallengeEntryCardState__EChallengeEntryCardState_MAX = 4
};


// Enum KillstreakUINew.EContextPromptAnchoring
enum class EContextPromptAnchoring : uint8_t
{
	EContextPromptAnchoring__AnchorLeft = 0,
	EContextPromptAnchoring__AnchorRight = 1,
	EContextPromptAnchoring__AnchorCenter = 2,
	EContextPromptAnchoring__EContextPromptAnchoring_MAX = 3
};


// Enum KillstreakUINew.EViewSide
enum class EViewSide : uint8_t
{
	EViewSide__Left                = 0,
	EViewSide__Right               = 1,
	EViewSide__None                = 2,
	EViewSide__EViewSide_MAX       = 3
};


// Enum KillstreakUINew.EQueueDataFactoryAction
enum class EQueueDataFactoryAction : uint8_t
{
	EQueueDataFactoryAction__SwapPlayerCustomMatch = 0,
	EQueueDataFactoryAction__KickFromCustomMatch = 1,
	EQueueDataFactoryAction__EQueueDataFactoryAction_MAX = 2
};


// Enum KillstreakUINew.EPartyDataFactoryAction
enum class EPartyDataFactoryAction : uint8_t
{
	EPartyDataFactoryAction__KickMember = 0,
	EPartyDataFactoryAction__PromoteToLeader = 1,
	EPartyDataFactoryAction__AcceptInvite = 2,
	EPartyDataFactoryAction__DenyInvite = 3,
	EPartyDataFactoryAction__LeaveParty = 4,
	EPartyDataFactoryAction__EPartyDataFactoryAction_MAX = 5
};


// Enum KillstreakUINew.EFriendDataFactoryAction
enum class EFriendDataFactoryAction : uint8_t
{
	EFriendDataFactoryAction__AddFriend = 0,
	EFriendDataFactoryAction__RemoveFriend = 1,
	EFriendDataFactoryAction__CancelFriendRequest = 2,
	EFriendDataFactoryAction__AcceptFriendRequest = 3,
	EFriendDataFactoryAction__RejectFriendRequest = 4,
	EFriendDataFactoryAction__EFriendDataFactoryAction_MAX = 5
};


// Enum KillstreakUINew.EPlayerContextOptions
enum class EPlayerContextOptions : uint8_t
{
	EPlayerContextOptions__AddFriend = 0,
	EPlayerContextOptions__AddRoCoFriend = 1,
	EPlayerContextOptions__PartyInvite = 2,
	EPlayerContextOptions__LobbySwapTeam = 3,
	EPlayerContextOptions__LobbyKickPlayer = 4,
	EPlayerContextOptions__LobbyPromotePlayer = 5,
	EPlayerContextOptions__PartyKick = 6,
	EPlayerContextOptions__Whisper = 7,
	EPlayerContextOptions__ViewProfile = 8,
	EPlayerContextOptions__ViewPlatformProfile = 9,
	EPlayerContextOptions__RemoveFriend = 10,
	EPlayerContextOptions__CancelRequest = 11,
	EPlayerContextOptions__AcceptFriendRequest = 12,
	EPlayerContextOptions__RejectFriendRequest = 13,
	EPlayerContextOptions__PromotePartyLeader = 14,
	EPlayerContextOptions__AcceptPartyInvite = 15,
	EPlayerContextOptions__DeclinePartyInvite = 16,
	EPlayerContextOptions__LeaveParty = 17,
	EPlayerContextOptions__Mute    = 18,
	EPlayerContextOptions__Unmute  = 19,
	EPlayerContextOptions__ReportPlayer = 20,
	EPlayerContextOptions__None    = 21,
	EPlayerContextOptions__EPlayerContextOptions_MAX = 22
};


// Enum KillstreakUINew.EPlayerContextMenuContext
enum class EPlayerContextMenuContext : uint8_t
{
	EPlayerContextMenuContext__Friends = 0,
	EPlayerContextMenuContext__Party = 1,
	EPlayerContextMenuContext__CustomLobby = 2,
	EPlayerContextMenuContext__InGame = 3,
	EPlayerContextMenuContext__Default = 4,
	EPlayerContextMenuContext__EPlayerContextMenuContext_MAX = 5
};


// Enum KillstreakUINew.EKSCategoryOpenMode
enum class EKSCategoryOpenMode : uint8_t
{
	EKSCategoryOpenMode__ClosedByDefault = 0,
	EKSCategoryOpenMode__OpenByDefault = 1,
	EKSCategoryOpenMode__EKSCategoryOpenMode_MAX = 2
};


// Enum KillstreakUINew.EConsoleCommandParamType
enum class EConsoleCommandParamType : uint8_t
{
	EConsoleCommandParamType__None = 0,
	EConsoleCommandParamType__Bool = 1,
	EConsoleCommandParamType__String = 2,
	EConsoleCommandParamType__EConsoleCommandParamType_MAX = 3
};


// Enum KillstreakUINew.ESocialMessageType
enum class ESocialMessageType : uint8_t
{
	ESocialMessageType__EInvite    = 0,
	ESocialMessageType__EInviteResponse = 1,
	ESocialMessageType__EInviteExpired = 2,
	ESocialMessageType__EInviteError = 3,
	ESocialMessageType__EGenericMsg = 4,
	ESocialMessageType__ESocialMessageType_MAX = 5
};


// Enum KillstreakUINew.ELowAmmoState
enum class ELowAmmoState : uint8_t
{
	ELowAmmoState__Normal          = 0,
	ELowAmmoState__NeedsReload     = 1,
	ELowAmmoState__LowAmmo         = 2,
	ELowAmmoState__NoAmmo          = 3,
	ELowAmmoState__ELowAmmoState_MAX = 4
};


// Enum KillstreakUINew.EIconMarkerScreenRegion
enum class EIconMarkerScreenRegion : uint8_t
{
	EIconMarkerScreenRegion__Normal = 0,
	EIconMarkerScreenRegion__Center = 1,
	EIconMarkerScreenRegion__Edge  = 2,
	EIconMarkerScreenRegion__EIconMarkerScreenRegion_MAX = 3
};


// Enum KillstreakUINew.EIconHoverState
enum class EIconHoverState : uint8_t
{
	EIconHoverState__Unhovered     = 0,
	EIconHoverState__Hovering      = 1,
	EIconHoverState__Hovered       = 2,
	EIconHoverState__Unhovering    = 3,
	EIconHoverState__EIconHoverState_MAX = 4
};


// Enum KillstreakUINew.EMinimapWidgetClampStyle
enum class EMinimapWidgetClampStyle : uint8_t
{
	EMinimapWidgetClampStyle__Circular = 0,
	EMinimapWidgetClampStyle__Square = 1,
	EMinimapWidgetClampStyle__SquareByAngle = 2,
	EMinimapWidgetClampStyle__SquareByProjection = 3,
	EMinimapWidgetClampStyle__EMinimapWidgetClampStyle_MAX = 4
};


// Enum KillstreakUINew.ENewsActions
enum class ENewsActions : uint8_t
{
	ENewsActions__ENewsActions_Unknown = 0,
	ENewsActions__ENewsActions_ExternalURL = 1,
	ENewsActions__ENewsActions_NavToRoute = 2,
	ENewsActions__ENewsActions_MAX = 3
};


// Enum KillstreakUINew.EPerkTreeEdgeState
enum class EPerkTreeEdgeState : uint8_t
{
	EPerkTreeEdgeState__EDGE_OFF   = 0,
	EPerkTreeEdgeState__EDGE_ERROR = 1,
	EPerkTreeEdgeState__EDGE_UNREACHABLE = 2,
	EPerkTreeEdgeState__EDGE_TO_UNLOCKABLE = 3,
	EPerkTreeEdgeState__EDGE_OWNED = 4,
	EPerkTreeEdgeState__EDGE_MAX   = 5
};


// Enum KillstreakUINew.EPerkTreeEdgeType
enum class EPerkTreeEdgeType : uint8_t
{
	EPerkTreeEdgeType__EDGE_TOP    = 0,
	EPerkTreeEdgeType__EDGE_LEFT   = 1,
	EPerkTreeEdgeType__EDGE_DIAGONAL = 2,
	EPerkTreeEdgeType__EDGE_BACK_DIAGONAL = 3,
	EPerkTreeEdgeType__EDGE_MAX    = 4
};


// Enum KillstreakUINew.EPlayerSelectionState
enum class EPlayerSelectionState : uint8_t
{
	EPlayerSelectionState__EPlayerState_Selecting = 0,
	EPlayerSelectionState__EPlayerState_Selected = 1,
	EPlayerSelectionState__EPlayerState_LockedIn = 2,
	EPlayerSelectionState__EPlayerState_MAX = 3
};


// Enum KillstreakUINew.EPointObjectiveMarkerTeamState
enum class EPointObjectiveMarkerTeamState : uint8_t
{
	EPointObjectiveMarkerTeamState__Neutral = 0,
	EPointObjectiveMarkerTeamState__AllyOwned = 1,
	EPointObjectiveMarkerTeamState__EnemyOwned = 2,
	EPointObjectiveMarkerTeamState__Contested = 3,
	EPointObjectiveMarkerTeamState__EPointObjectiveMarkerTeamState_MAX = 4
};


// Enum KillstreakUINew.EPointObjectiveMarkerObjectiveState
enum class EPointObjectiveMarkerObjectiveState : uint8_t
{
	EPointObjectiveMarkerObjectiveState__Locked = 0,
	EPointObjectiveMarkerObjectiveState__Unlocked = 1,
	EPointObjectiveMarkerObjectiveState__Capturing = 2,
	EPointObjectiveMarkerObjectiveState__Captured = 3,
	EPointObjectiveMarkerObjectiveState__Recapturing = 4,
	EPointObjectiveMarkerObjectiveState__EPointObjectiveMarkerObjectiveState_MAX = 5
};


// Enum KillstreakUINew.EKSQueueJoinError
enum class EKSQueueJoinError : uint8_t
{
	EKSQueueJoinError__None        = 0,
	EKSQueueJoinError__SystemError = 1,
	EKSQueueJoinError__QueueUnavailable = 2,
	EKSQueueJoinError__DeserterPenaltyActive = 3,
	EKSQueueJoinError__PlayerLevelRequirement = 4,
	EKSQueueJoinError__PartyMemberLevelRequirement = 5,
	EKSQueueJoinError__PartyMinMemberRequirement = 6,
	EKSQueueJoinError__PartyMaxMemberRequirement = 7,
	EKSQueueJoinError__InQueue     = 8,
	EKSQueueJoinError__PartyMemberRankRequirement = 9,
	EKSQueueJoinError__PartyMemberPlatformRequirement = 10,
	EKSQueueJoinError__EKSQueueJoinError_MAX = 11
};


// Enum KillstreakUINew.EQueueTimerState
enum class EQueueTimerState : uint8_t
{
	EQueueTimerState__Unknown      = 0,
	EQueueTimerState__DeserterPenaltyActive = 1,
	EQueueTimerState__WaitingForLeader = 2,
	EQueueTimerState__Queued       = 3,
	EQueueTimerState__EnteringMatch = 4,
	EQueueTimerState__EQueueTimerState_MAX = 5
};


// Enum KillstreakUINew.EQuickPlayQueueState
enum class EQuickPlayQueueState : uint8_t
{
	EQuickPlayQueueState__Unknown  = 0,
	EQuickPlayQueueState__NoQueuesAvailable = 1,
	EQuickPlayQueueState__NoSelectedQueue = 2,
	EQuickPlayQueueState__SelectedQueueUnavailable = 3,
	EQuickPlayQueueState__DeserterPenaltyActive = 4,
	EQuickPlayQueueState__SelectedQueuePartyMinLimit = 5,
	EQuickPlayQueueState__SelectedQueuePartyMaxLimit = 6,
	EQuickPlayQueueState__ReadyToJoin = 7,
	EQuickPlayQueueState__WaitingForLeader = 8,
	EQuickPlayQueueState__Queued   = 9,
	EQuickPlayQueueState__EnteringMatch = 10,
	EQuickPlayQueueState__ReadyToRejoin = 11,
	EQuickPlayQueueState__PlayerLevelRequirement = 12,
	EQuickPlayQueueState__PartyLevelRequirement = 13,
	EQuickPlayQueueState__PartyRankRequirement = 14,
	EQuickPlayQueueState__PartyPlatformRequirement = 15,
	EQuickPlayQueueState__EQuickPlayQueueState_MAX = 16
};


// Enum KillstreakUINew.EAmmoState
enum class EAmmoState : uint8_t
{
	EAmmoState__EAmmoState_Full    = 0,
	EAmmoState__EAmmoState_NeedsReload = 1,
	EAmmoState__EAmmoState_LowAmmo = 2,
	EAmmoState__EAmmoState_CriticallyLowAmmo = 3,
	EAmmoState__EAmmoState_NoAmmo  = 4,
	EAmmoState__EAmmoState_MAX     = 5
};


// Enum KillstreakUINew.EKSSettingType
enum class EKSSettingType : uint8_t
{
	EKSSettingType__Bool           = 0,
	EKSSettingType__Int            = 1,
	EKSSettingType__Float          = 2,
	EKSSettingType__Key            = 3,
	EKSSettingType__Invalid        = 4,
	EKSSettingType__EKSSettingType_MAX = 5
};


// Enum KillstreakUINew.EPUMG_ShopItemUpgradeSegmentType
enum class EPUMG_ShopItemUpgradeSegmentType : uint8_t
{
	EPUMG_ShopItemUpgradeSegmentType__Single = 0,
	EPUMG_ShopItemUpgradeSegmentType__First = 1,
	EPUMG_ShopItemUpgradeSegmentType__Middle = 2,
	EPUMG_ShopItemUpgradeSegmentType__Last = 3,
	EPUMG_ShopItemUpgradeSegmentType__EPUMG_MAX = 4
};


// Enum KillstreakUINew.EKSSocialFriendSection
enum class EKSSocialFriendSection : uint8_t
{
	EKSSocialFriendSection__Invalid = 0,
	EKSSocialFriendSection__PartyMembers = 1,
	EKSSocialFriendSection__MatchTeamMembers = 2,
	EKSSocialFriendSection__PartyInvitations = 3,
	EKSSocialFriendSection__OnlineMctsFriends = 4,
	EKSSocialFriendSection__OnlinePortalFriends = 5,
	EKSSocialFriendSection__OfflineMctsFriends = 6,
	EKSSocialFriendSection__Blocked = 7,
	EKSSocialFriendSection__Pending = 8,
	EKSSocialFriendSection__MAX    = 9
};


// Enum KillstreakUINew.EKSSocialPanelDisplayOption
enum class EKSSocialPanelDisplayOption : uint8_t
{
	EKSSocialPanelDisplayOption__HideIfEmpty = 0,
	EKSSocialPanelDisplayOption__ShowIfEmpty = 1,
	EKSSocialPanelDisplayOption__EKSSocialPanelDisplayOption_MAX = 2
};


// Enum KillstreakUINew.EStoreItemWidgetType
enum class EStoreItemWidgetType : uint8_t
{
	ELargePanel                    = 0,
	ETallPanel                     = 1,
	ESmallPanel                    = 2,
	STORE_WIDGET_TYPE_MAX          = 3,
	EStoreItemWidgetType_MAX       = 4
};


// Enum KillstreakUINew.ETargetMarkerViewState
enum class ETargetMarkerViewState : uint8_t
{
	ETargetMarkerViewState__Hidden = 0,
	ETargetMarkerViewState__Showing = 1,
	ETargetMarkerViewState__Shown  = 2,
	ETargetMarkerViewState__HidingNeutral = 3,
	ETargetMarkerViewState__HidingActivated = 4,
	ETargetMarkerViewState__HidingFailed = 5,
	ETargetMarkerViewState__ETargetMarkerViewState_MAX = 6
};


// Enum KillstreakUINew.EToastCategory
enum class EToastCategory : uint8_t
{
	EToastCategory__ETOAST_INFO    = 0,
	EToastCategory__ETOAST_ERROR   = 1,
	EToastCategory__ETOAST_FRIEND  = 2,
	EToastCategory__ETOAST_PARTY   = 3,
	EToastCategory__ETOAST_CHALLENGE = 4,
	EToastCategory__ETOAST_MERC_MASTERY = 5,
	EToastCategory__ETOAST_ITEM_UNLOCK = 6,
	EToastCategory__ETOAST_AWARD   = 7,
	EToastCategory__ETOAST_BATTLEPASS_TIER = 8,
	EToastCategory__ETOAST_BOOST_ACTIVATION = 9,
	EToastCategory__ETOAST_PLAYER_LEVEL = 10,
	EToastCategory__ETOAST_EVENT_CHALLENGE = 11,
	EToastCategory__ETOAST_MAX     = 12
};


// Enum KillstreakUINew.EReportPlayerReason
enum class EReportPlayerReason : uint8_t
{
	EReportPlayerReason__Unknown_None = 0,
	EReportPlayerReason__Harassment = 1,
	EReportPlayerReason__Cheating  = 2,
	EReportPlayerReason__Teaming   = 3,
	EReportPlayerReason__IntentionalFeeding = 4,
	EReportPlayerReason__StreamSniping = 5,
	EReportPlayerReason__LeavingTheGame_AFK = 6,
	EReportPlayerReason__OtherReason = 7,
	EReportPlayerReason__EReportPlayerReason_MAX = 8
};


// Enum KillstreakUINew.EExperimentalFeatureName
enum class EExperimentalFeatureName : uint8_t
{
	EExperimentalFeatureName__Unknown_None = 0,
	EExperimentalFeatureName__Ranked_V2 = 1,
	EExperimentalFeatureName__Json_Store = 2,
	EExperimentalFeatureName__BattlePass_Season2 = 3,
	EExperimentalFeatureName__Monthly_Login = 4,
	EExperimentalFeatureName__EExperimentalFeatureName_MAX = 5
};


// Enum KillstreakUINew.EKSVendorTypes
enum class EKSVendorTypes : uint8_t
{
	EKSVendorTypes__Unknown        = 0,
	EKSVendorTypes__Equipment      = 1,
	EKSVendorTypes__Specialty      = 2,
	EKSVendorTypes__SpecialtyItem  = 3,
	EKSVendorTypes__StarterSpecLoadout = 4,
	EKSVendorTypes__Apparel        = 5,
	EKSVendorTypes__StarterApparelLoadout = 6,
	EKSVendorTypes__MalwearApparelLoadout = 7,
	EKSVendorTypes__MercTwoApparelLoadout = 8,
	EKSVendorTypes__HitmanApparelLoadout = 9,
	EKSVendorTypes__EKSVendorTypes_MAX = 10
};


// Enum KillstreakUINew.EDamageTargetType
enum class EDamageTargetType : uint8_t
{
	EDamageTargetType__None        = 0,
	EDamageTargetType__Character   = 1,
	EDamageTargetType__Gadget      = 2,
	EDamageTargetType__EDamageTargetType_MAX = 3
};


// Enum KillstreakUINew.EDamageModifier
enum class EDamageModifier : uint8_t
{
	EDamageModifier__None          = 0,
	EDamageModifier__Reduced       = 1,
	EDamageModifier__Resisted      = 2,
	EDamageModifier__Shielded      = 3,
	EDamageModifier__EDamageModifier_MAX = 4
};


// Enum KillstreakUINew.EDamageFlourishType
enum class EDamageFlourishType : uint8_t
{
	EDamageFlourishType__None      = 0,
	EDamageFlourishType__Headshot  = 1,
	EDamageFlourishType__Lethal    = 2,
	EDamageFlourishType__EDamageFlourishType_MAX = 3
};


// Enum KillstreakUINew.EDamageBaseType
enum class EDamageBaseType : uint8_t
{
	EDamageBaseType__Normal        = 0,
	EDamageBaseType__Armored       = 1,
	EDamageBaseType__Lethal        = 2,
	EDamageBaseType__Special       = 3,
	EDamageBaseType__EDamageBaseType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
