#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByDedicatedServer
// 0x0028 (0x0040 - 0x0018)
struct FAnimNode_BlendByDedicatedServer : public FAnimNode_Base
{
	struct FPoseLink                                   NotDedicatedServer;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FPoseLink                                   DedicatedServer;                                          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByLOD
// 0x0008 (0x00A8 - 0x00A0)
struct FAnimNode_BlendByLOD : public FAnimNode_BlendListBase
{
	int                                                LOD;                                                      // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_RigidBodySkipServer
// 0x0000 (0x05A0 - 0x05A0)
struct FAnimNode_RigidBodySkipServer : public FAnimNode_RigidBody
{
	bool                                               bIsDedicatedServer;                                       // 0x0598(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
