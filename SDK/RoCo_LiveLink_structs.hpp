#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_LiveLink_enums.hpp"
#include "RoCo_LiveLinkInterface_classes.hpp"
#include "RoCo_CoreUObject_classes.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_TimeManagement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.ProviderPollResult
// 0x0038
struct FProviderPollResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MachineName;                                              // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	double                                             MachineTimeOffset;                                        // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// 0x0028
struct FLiveLinkRoleProjectSetting
{
	class UClass*                                      Role;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      SettingClass;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      FrameInterpolationProcessor;                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass*>                              FramePreProcessors;                                       // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0040 (0x0060 - 0x0020)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                        LiveLinkSubjectName;                                      // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      RetargetAsset;                                            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0060 (0x0740 - 0x06E0)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	struct FAnimNode_LiveLinkPose                      PoseNode;                                                 // 0x06E0(0x0060) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0001
struct FLiveLinkRetargetAssetReference
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
