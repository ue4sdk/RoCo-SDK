#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SkinnableAnimGraphRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect
// 0x0010 (0x00A0 - 0x0090)
class UAnimNotify_PlaySkinnedParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:
	struct FName                                       SkinKeyword;                                              // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_SkinnedAkEvent : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               Event;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFollow;                                                  // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SkinKeyword;                                              // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent
// 0x0008 (0x0058 - 0x0050)
class UAnimNotify_SkinSelectiveAkEvent : public UAnimNotify_SelectiveAkEvent
{
public:
	struct FName                                       SkinKeyword;                                              // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.SkinnedAnimInstance
// 0x0060 (0x02D0 - 0x0270)
class USkinnedAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0270(0x0048) MISSED OFFSET
	class UMultiSkinObject*                            SkinObject;                                               // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimGraphRuntime.SkinnedAnimInstance");
		return ptr;
	}


	class UMultiSkinObject* GetSkinObject();
	class UBlendSpace* GetSkinnedBlendSpace(const struct FName& Keyword, class UBlendSpace* Default, bool* bHasOverride);
	class UAnimSequence* GetSkinnedAnimSequence(const struct FName& Keyword, class UAnimSequence* Default, bool* bHasOverride);
	class UAimOffsetBlendSpace* GetSkinnedAnimOffset(const struct FName& Keyword, class UAimOffsetBlendSpace* Default, bool* bHasOverride);
	class UAnimMontage* GetSkinnedAnimMontage(const struct FName& Keyword, class UAnimMontage* Default, bool* bHasOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
