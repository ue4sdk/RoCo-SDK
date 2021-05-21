#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_PlatformCommon_enums.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_OnlineSubsystemUtils_classes.hpp"
#include "RoCo_PacketHandler_classes.hpp"
#include "RoCo_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformCommon.SerializedMctsNetId
// 0x0008
struct FSerializedMctsNetId
{
	uint64_t                                           A;                                                        // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct PlatformCommon.SerializedInstanceId
// 0x0010
struct FSerializedInstanceId
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
