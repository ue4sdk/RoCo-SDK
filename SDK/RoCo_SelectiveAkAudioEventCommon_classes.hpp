#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SelectiveAkAudioEventCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_SelectiveAkEvent : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USelectiveAkAudioEvent*                      Event;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFollow;                                                  // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent
// 0x0000 (0x0028 - 0x0028)
class USelectiveAkAudioEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class USelectiveAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics");
		return ptr;
	}


	static void PostSelectiveEventStopToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent);
	static void PostSelectiveEventStop(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static int PostSelectiveEventPlayToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent);
	static int PostSelectiveEventPlay(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static void GetStopEventsFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent, TArray<struct FSelectiveEventStopPair>* OutStopEvents);
	static void GetStopEventsFromSelectiveEvent(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, TArray<struct FSelectiveEventStopPair>* OutStopEvents);
	static class UAkAudioEvent* GetPlayEventFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent, struct FString* OutEventName);
	static class UAkAudioEvent* GetPlayEventFromSelectiveEvent(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, struct FString* OutEventName);
};


// Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent
// 0x0028 (0x0050 - 0x0028)
class UViewDependentAkAudioEvent : public USelectiveAkAudioEvent
{
public:
	class UClass*                                      Rules;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoClear, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               FirstPersonAkEventPlay;                                   // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ThirdPersonAkEventPlay;                                   // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               FirstPersonAkEventStop;                                   // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ThirdPersonAkEventStop;                                   // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules
// 0x0000 (0x0028 - 0x0028)
class UViewDependentAkEventRules : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget
// 0x0000 (0x0028 - 0x0028)
class UViewDependentRules_IsViewTarget : public UViewDependentAkEventRules
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
