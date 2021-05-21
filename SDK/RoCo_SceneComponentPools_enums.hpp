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

// Enum SceneComponentPools.EPoolOverflowHandling
enum class EPoolOverflowHandling : uint8_t
{
	EPoolOverflowHandling__IgnoreNewRequest = 0,
	EPoolOverflowHandling__KillExistingRequest = 1,
	EPoolOverflowHandling__CreateStandaloneInstance = 2,
	EPoolOverflowHandling__EPoolOverflowHandling_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
