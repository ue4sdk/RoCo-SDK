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

// Enum VivoxCore.DeviceType
enum class EDeviceType : uint8_t
{
	DeviceType__NullDevice         = 0,
	DeviceType__SpecificDevice     = 1,
	DeviceType__DefaultSystemDevice = 2,
	DeviceType__DefaultCommunicationDevice = 3,
	DeviceType__DeviceType_MAX     = 4
};


// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8_t
{
	EAudioFadeModel__InverseByDistance = 0,
	EAudioFadeModel__LinearByDistance = 1,
	EAudioFadeModel__ExponentialByDistance = 2,
	EAudioFadeModel__EAudioFadeModel_MAX = 3
};


// Enum VivoxCore.ChannelType
enum class EChannelType : uint8_t
{
	ChannelType__NonPositional     = 0,
	ChannelType__Positional        = 1,
	ChannelType__Echo              = 2,
	ChannelType__ChannelType_MAX   = 3
};


// Enum VivoxCore.ConnectionState
enum class EConnectionState : uint8_t
{
	ConnectionState__Disconnected  = 0,
	ConnectionState__Connecting    = 1,
	ConnectionState__Connected     = 2,
	ConnectionState__Disconnecting = 3,
	ConnectionState__ConnectionState_MAX = 4
};


// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class EParticipantSpeakingUpdateRate : uint8_t
{
	ParticipantSpeakingUpdateRate__StateChange = 0,
	ParticipantSpeakingUpdateRate__Never = 1,
	ParticipantSpeakingUpdateRate__Update1Hz = 2,
	ParticipantSpeakingUpdateRate__Update5Hz = 3,
	ParticipantSpeakingUpdateRate__Update10Hz = 4,
	ParticipantSpeakingUpdateRate__ParticipantSpeakingUpdateRate_MAX = 5
};


// Enum VivoxCore.TransmissionMode
enum class ETransmissionMode : uint8_t
{
	TransmissionMode__None         = 0,
	TransmissionMode__Single       = 1,
	TransmissionMode__All          = 2,
	TransmissionMode__TransmissionMode_MAX = 3
};


// Enum VivoxCore.SubscriptionReply
enum class ESubscriptionReply : uint8_t
{
	SubscriptionReply__Allow       = 0,
	SubscriptionReply__Block       = 1,
	SubscriptionReply__SubscriptionReply_MAX = 2
};


// Enum VivoxCore.SubscriptionMode
enum class ESubscriptionMode : uint8_t
{
	SubscriptionMode__Accept       = 0,
	SubscriptionMode__Block        = 1,
	SubscriptionMode__Defer        = 2,
	SubscriptionMode__SubscriptionMode_MAX = 3
};


// Enum VivoxCore.LoginState
enum class ELoginState : uint8_t
{
	LoginState__LoggedOut          = 0,
	LoginState__LoggingIn          = 1,
	LoginState__LoggedIn           = 2,
	LoginState__LoggingOut         = 3,
	LoginState__LoginState_MAX     = 4
};


// Enum VivoxCore.TTSMessageState
enum class ETTSMessageState : uint8_t
{
	TTSMessageState__Playing       = 0,
	TTSMessageState__Enqueued      = 1,
	TTSMessageState__TTSMessageState_MAX = 2
};


// Enum VivoxCore.TTSDestination
enum class ETTSDestination : uint8_t
{
	TTSDestination__Default        = 0,
	TTSDestination__RemoteTransmission = 1,
	TTSDestination__LocalPlayback  = 2,
	TTSDestination__RemoteTransmissionWithLocalPlayback = 3,
	TTSDestination__QueuedRemoteTransmission = 4,
	TTSDestination__QueuedLocalPlayback = 5,
	TTSDestination__QueuedRemoteTransmissionWithLocalPlayback = 6,
	TTSDestination__ScreenReader   = 7,
	TTSDestination__TTSDestination_MAX = 8
};


// Enum VivoxCore.PresenceStatus
enum class EPresenceStatus : uint8_t
{
	PresenceStatus__Unavailable    = 0,
	PresenceStatus__Available      = 1,
	PresenceStatus__Chat           = 2,
	PresenceStatus__DoNotDisturb   = 3,
	PresenceStatus__Away           = 4,
	PresenceStatus__ExtendedAway   = 5,
	PresenceStatus__PresenceStatus_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
