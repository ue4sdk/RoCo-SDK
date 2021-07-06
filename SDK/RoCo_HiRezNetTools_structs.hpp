#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_CoreUObject_classes.hpp"
#include "RoCo_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HiRezNetTools.ReplicatedLog
// 0x0070
struct FReplicatedLog
{
	int                                                MaxEntryReplication;                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxHistory;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TailRepIndex;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HeadRepIndex;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ItemArrayTail;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ItemArrayHead;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct HiRezNetTools.ReplicatedLogItem
// 0x0001
struct FReplicatedLogItem
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct HiRezNetTools.RepPreloaderItem
// 0x002C (0x0038 - 0x000C)
struct FRepPreloaderItem : public FFastArraySerializerItem
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x000C(0x0010) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       BundleName;                                               // 0x001C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEntryWasReplicated;                                      // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0025(0x0013) MISSED OFFSET
};

// ScriptStruct HiRezNetTools.ReplicatedPreloader
// 0x00D8 (0x01E0 - 0x0108)
struct FReplicatedPreloader : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) MISSED OFFSET
	TArray<struct FRepPreloaderItem>                   RepArray;                                                 // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FName>                               AlwaysIncludeBundles;                                     // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0178(0x0068) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
