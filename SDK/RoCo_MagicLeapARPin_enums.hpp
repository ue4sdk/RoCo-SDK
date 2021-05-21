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

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration = 0,
	EMagicLeapAutoPinType__Always  = 1,
	EMagicLeapAutoPinType__Never   = 2,
	EMagicLeapAutoPinType__EMagicLeapAutoPinType_MAX = 3
};


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None = 0,
	EMagicLeapPassableWorldError__LowMapQuality = 1,
	EMagicLeapPassableWorldError__UnableToLocalize = 2,
	EMagicLeapPassableWorldError__Unavailable = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied = 4,
	EMagicLeapPassableWorldError__InvalidParam = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending = 7,
	EMagicLeapPassableWorldError__StartupPending = 8,
	EMagicLeapPassableWorldError__NotImplemented = 9,
	EMagicLeapPassableWorldError__PinNotFound = 10,
	EMagicLeapPassableWorldError__EMagicLeapPassableWorldError_MAX = 11
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
