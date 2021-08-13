#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SkinnableAnimNotifies_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SkinnableAnimNotifies.AnimNotifyState_SkinnedPropBase
// 0x0058 (0x0088 - 0x0030)
class UAnimNotifyState_SkinnedPropBase : public UAnimNotifyState
{
public:
	struct FName                                       SkinObjectName;                                           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MeshSkinKeyword;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ComponentClassSkinKeyword;                                // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       PropIdentifier;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExtendedLifetime;                                         // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FPoolAttachmentInfo                         PropAttachmentInfo;                                       // 0x0054(0x0030) (CPF_Edit, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimNotifies.AnimNotifyState_SkinnedPropBase");
		return ptr;
	}

};


// Class SkinnableAnimNotifies.AnimNotifyState_SkinnedSkelProp
// 0x0010 (0x0098 - 0x0088)
class UAnimNotifyState_SkinnedSkelProp : public UAnimNotifyState_SkinnedPropBase
{
public:
	struct FName                                       AnimClassSkinKeyword;                                     // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                ActivationMontage;                                        // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimNotifies.AnimNotifyState_SkinnedSkelProp");
		return ptr;
	}

};


// Class SkinnableAnimNotifies.AnimNotifyState_SkinStaticProp
// 0x0000 (0x0088 - 0x0088)
class UAnimNotifyState_SkinStaticProp : public UAnimNotifyState_SkinnedPropBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimNotifies.AnimNotifyState_SkinStaticProp");
		return ptr;
	}

};


// Class SkinnableAnimNotifies.SkelPropManagerComponent
// 0x0140 (0x01F0 - 0x00B0)
class USkelPropManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00B0(0x00D8) MISSED OFFSET
	TArray<struct FActiveSkelProp>                     ActiveNamelessProps;                                      // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FPropIdentifier, struct FActiveSkelProp> ActiveProps;                                              // 0x0198(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	bool                                               bAllowSpawnerPooling;                                     // 0x01E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	float                                              SpawnerPoolingLifespan;                                   // 0x01EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimNotifies.SkelPropManagerComponent");
		return ptr;
	}

};


// Class SkinnableAnimNotifies.StaticPropManagerComponent
// 0x0140 (0x01F0 - 0x00B0)
class UStaticPropManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00B0(0x00D8) MISSED OFFSET
	TArray<struct FActiveStaticProp>                   ActiveNamelessProps;                                      // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FPropIdentifier, struct FActiveStaticProp> ActiveProps;                                              // 0x0198(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	bool                                               bAllowSpawnerPooling;                                     // 0x01E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	float                                              SpawnerPoolingLifespan;                                   // 0x01EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SkinnableAnimNotifies.StaticPropManagerComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
