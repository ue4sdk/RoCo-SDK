#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_MovieScene_classes.hpp"
#include "RoCo_LiveLinkInterface_classes.hpp"
#include "RoCo_CoreUObject_classes.hpp"
#include "RoCo_MovieSceneTracks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// 0x0058
struct FLiveLinkPropertyData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>             FloatChannel;                                             // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneStringChannel>            StringChannel;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneIntegerChannel>           IntegerChannel;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBoolChannel>              BoolChannel;                                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneByteChannel>              ByteChannel;                                              // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// 0x0010
struct FLiveLinkSubSectionData
{
	TArray<struct FLiveLinkPropertyData>               Properties;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// 0x0080 (0x00C8 - 0x0048)
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FLiveLinkSubjectPreset                      SubjectPreset;                                            // 0x0048(0x0038) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<bool>                                       ChannelMask;                                              // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkSubSectionData>             SubSectionsData;                                          // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
