#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_MediaAssets_enums.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_CoreUObject_classes.hpp"
#include "RoCo_MediaUtils_classes.hpp"
#include "RoCo_AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                      // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008
struct FMediaSoundComponentSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
