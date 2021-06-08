// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SelectiveAkAudioEventCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStopToAkComponent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkComponent*            AkComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USelectiveAkGameplayStatics::PostSelectiveEventStopToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStopToAkComponent");

	struct
	{
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class UAkComponent*            AkComponent;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStop
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USelectiveAkGameplayStatics::PostSelectiveEventStop(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStop");

	struct
	{
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlayToAkComponent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkComponent*            AkComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USelectiveAkGameplayStatics::PostSelectiveEventPlayToAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlayToAkComponent");

	struct
	{
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class UAkComponent*            AkComponent;
		int                            ReturnValue;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlay
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USelectiveAkGameplayStatics::PostSelectiveEventPlay(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlay");

	struct
	{
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
		int                            ReturnValue;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEventForAkComponent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FSelectiveEventStopPair> OutStopEvents                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkComponent*            AkComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USelectiveAkGameplayStatics::GetStopEventsFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent, TArray<struct FSelectiveEventStopPair>* OutStopEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEventForAkComponent");

	struct
	{
		TArray<struct FSelectiveEventStopPair> OutStopEvents;
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class UAkComponent*            AkComponent;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutStopEvents != nullptr)
		*OutStopEvents = params.OutStopEvents;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FSelectiveEventStopPair> OutStopEvents                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USelectiveAkGameplayStatics::GetStopEventsFromSelectiveEvent(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, TArray<struct FSelectiveEventStopPair>* OutStopEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEvent");

	struct
	{
		TArray<struct FSelectiveEventStopPair> OutStopEvents;
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class AActor*                  Actor;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutStopEvents != nullptr)
		*OutStopEvents = params.OutStopEvents;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEventForAkComponent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkComponent*            AkComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OutEventName                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* USelectiveAkGameplayStatics::GetPlayEventFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent* SelectiveEvent, class UAkComponent* AkComponent, struct FString* OutEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEventForAkComponent");

	struct
	{
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class UAkComponent*            AkComponent;
		struct FString                 OutEventName;
		class UAkAudioEvent*           ReturnValue;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;

	return params.ReturnValue;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USelectiveAkAudioEvent*  SelectiveEvent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OutEventName                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* USelectiveAkGameplayStatics::GetPlayEventFromSelectiveEvent(class USelectiveAkAudioEvent* SelectiveEvent, class AActor* Actor, struct FString* OutEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEvent");

	struct
	{
		class USelectiveAkAudioEvent*  SelectiveEvent;
		class AActor*                  Actor;
		struct FString                 OutEventName;
		class UAkAudioEvent*           ReturnValue;
	} params;

	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
