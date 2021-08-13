// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformGameFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent*   SkinnedMeshComponent           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MaterialID                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            LODIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_BlueprintFunctionLibrary::ShowSkinnedMeshMaterialSection(class USkinnedMeshComponent* SkinnedMeshComponent, int MaterialID, int SectionIndex, bool bShow, int LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection");

	struct
	{
		class USkinnedMeshComponent*   SkinnedMeshComponent;
		int                            MaterialID;
		int                            SectionIndex;
		bool                           bShow;
		int                            LODIndex;
	} params;

	params.SkinnedMeshComponent = SkinnedMeshComponent;
	params.MaterialID = MaterialID;
	params.SectionIndex = SectionIndex;
	params.bShow = bShow;
	params.LODIndex = LODIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLightingChannels       NewLightingChannels            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPGame_BlueprintFunctionLibrary::SetLightingChannels(class UPrimitiveComponent* PrimitiveComponent, const struct FLightingChannels& NewLightingChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels");

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		struct FLightingChannels       NewLightingChannels;
	} params;

	params.PrimitiveComponent = PrimitiveComponent;
	params.NewLightingChannels = NewLightingChannels;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravelWithGameMode
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UWorld>   Map                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UClass>   GameMode                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         Options                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSeamless                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::ServerTravelWithGameMode(class UObject* WorldContextObject, TSoftObjectPtr<class UWorld> Map, TSoftObjectPtr<class UClass> GameMode, TArray<struct FString> Options, bool bSeamless)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravelWithGameMode");

	struct
	{
		class UObject*                 WorldContextObject;
		TSoftObjectPtr<class UWorld>   Map;
		TSoftObjectPtr<class UClass>   GameMode;
		TArray<struct FString>         Options;
		bool                           bSeamless;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Map = Map;
	params.GameMode = GameMode;
	params.Options = Options;
	params.bSeamless = bSeamless;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravel
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UWorld>   Map                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UClass>   GameMode                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         Options                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSeamless                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bPreserveCurrentOptions        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::ServerTravel(class UObject* WorldContextObject, TSoftObjectPtr<class UWorld> Map, TSoftObjectPtr<class UClass> GameMode, TArray<struct FString> Options, bool bSeamless, bool bPreserveCurrentOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravel");

	struct
	{
		class UObject*                 WorldContextObject;
		TSoftObjectPtr<class UWorld>   Map;
		TSoftObjectPtr<class UClass>   GameMode;
		TArray<struct FString>         Options;
		bool                           bSeamless;
		bool                           bPreserveCurrentOptions;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Map = Map;
	params.GameMode = GameMode;
	params.Options = Options;
	params.bSeamless = bSeamless;
	params.bPreserveCurrentOptions = bPreserveCurrentOptions;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::IsSteamClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           IsConsole                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPC                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsMobile                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::IsPlatformType(bool IsConsole, bool IsPC, bool IsMobile)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType");

	struct
	{
		bool                           IsConsole;
		bool                           IsPC;
		bool                           IsMobile;
		bool                           ReturnValue;
	} params;

	params.IsConsole = IsConsole;
	params.IsPC = IsPC;
	params.IsMobile = IsMobile;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           IsXboxOne                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPS4                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsSwitch                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsWindows                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsMac                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsLinux                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsIOS                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsAndroid                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsXSX                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPS5                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::IsPlatform(bool IsXboxOne, bool IsPS4, bool IsSwitch, bool IsWindows, bool IsMac, bool IsLinux, bool IsIOS, bool IsAndroid, bool IsXSX, bool IsPS5)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform");

	struct
	{
		bool                           IsXboxOne;
		bool                           IsPS4;
		bool                           IsSwitch;
		bool                           IsWindows;
		bool                           IsMac;
		bool                           IsLinux;
		bool                           IsIOS;
		bool                           IsAndroid;
		bool                           IsXSX;
		bool                           IsPS5;
		bool                           ReturnValue;
	} params;

	params.IsXboxOne = IsXboxOne;
	params.IsPS4 = IsPS4;
	params.IsSwitch = IsSwitch;
	params.IsWindows = IsWindows;
	params.IsMac = IsMac;
	params.IsLinux = IsLinux;
	params.IsIOS = IsIOS;
	params.IsAndroid = IsAndroid;
	params.IsXSX = IsXSX;
	params.IsPS5 = IsPS5;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EGameBits                      GameBit                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::IsGameBit(EGameBits GameBit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit");

	struct
	{
		EGameBits                      GameBit;
		bool                           ReturnValue;
	} params;

	params.GameBit = GameBit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::IsAnonymousLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPGame_Property         Prop                           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UPGame_BlueprintFunctionLibrary::GetPropertyClampedValue(const struct FPGame_Property& Prop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue");

	struct
	{
		struct FPGame_Property         Prop;
		float                          ReturnValue;
	} params;

	params.Prop = Prop;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EGameLocalizationType          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGameLocalizationType UPGame_BlueprintFunctionLibrary::GetGameLocalizationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType");

	struct
	{
		EGameLocalizationType          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NumFramesToDelay               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPGame_BlueprintFunctionLibrary::FrameDelay(class UObject* WorldContextObject, int NumFramesToDelay, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay");

	struct
	{
		class UObject*                 WorldContextObject;
		int                            NumFramesToDelay;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.NumFramesToDelay = NumFramesToDelay;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPGame_BlueprintableLightingChannels BlueprintableLightingChannels  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FLightingChannels       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FLightingChannels UPGame_BlueprintFunctionLibrary::ConvertToEngineLightingChannels(const struct FPGame_BlueprintableLightingChannels& BlueprintableLightingChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels");

	struct
	{
		struct FPGame_BlueprintableLightingChannels BlueprintableLightingChannels;
		struct FLightingChannels       ReturnValue;
	} params;

	params.BlueprintableLightingChannels = BlueprintableLightingChannels;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLightingChannels       EngineLightChannels            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FPGame_BlueprintableLightingChannels ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FPGame_BlueprintableLightingChannels UPGame_BlueprintFunctionLibrary::ConvertToBlueprintableLightingChannels(const struct FLightingChannels& EngineLightChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels");

	struct
	{
		struct FLightingChannels       EngineLightChannels;
		struct FPGame_BlueprintableLightingChannels ReturnValue;
	} params;

	params.EngineLightChannels = EngineLightChannels;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMeshComponent*          InMeshComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::AreMeshComponentTexturesFullyStreamedIn(class UMeshComponent* InMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn");

	struct
	{
		class UMeshComponent*          InMeshComponent;
		bool                           ReturnValue;
	} params;

	params.InMeshComponent = InMeshComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_BlueprintFunctionLibrary::AreActorTexturesFullyStreamedIn(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn");

	struct
	{
		class AActor*                  InActor;
		bool                           ReturnValue;
	} params;

	params.InActor = InActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_Character.OnRep_Tween
// (FUNC_Native, FUNC_Protected)

void APGame_Character::OnRep_Tween()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Character.OnRep_Tween");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_Character.OnRep_Charge
// (FUNC_Native, FUNC_Protected)

void APGame_Character::OnRep_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Character.OnRep_Charge");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween
// (FUNC_Native, FUNC_Public)

void UPGame_CharacterMovementComponent::StopTween()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge
// (FUNC_Native, FUNC_Public)

void UPGame_CharacterMovementComponent::StopCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// unsigned char                  TweenType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TweenDestination               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TweenTime                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CharacterMovementComponent::StartTween(unsigned char TweenType, const struct FVector& TweenDestination, float TweenTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween");

	struct
	{
		unsigned char                  TweenType;
		struct FVector                 TweenDestination;
		float                          TweenTime;
	} params;

	params.TweenType = TweenType;
	params.TweenDestination = TweenDestination;
	params.TweenTime = TweenTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// unsigned char                  ChargeType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ChargeInitialYaw               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ChargeInitialLocation          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ChargeSpeed                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ChargeRange                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CharacterMovementComponent::StartCharge(unsigned char ChargeType, float ChargeInitialYaw, const struct FVector& ChargeInitialLocation, float ChargeSpeed, float ChargeRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge");

	struct
	{
		unsigned char                  ChargeType;
		float                          ChargeInitialYaw;
		struct FVector                 ChargeInitialLocation;
		float                          ChargeSpeed;
		float                          ChargeRange;
	} params;

	params.ChargeType = ChargeType;
	params.ChargeInitialYaw = ChargeInitialYaw;
	params.ChargeInitialLocation = ChargeInitialLocation;
	params.ChargeSpeed = ChargeSpeed;
	params.ChargeRange = ChargeRange;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FTweenInfo              TweenInfo                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPGame_CharacterMovementComponent::OnRep_Tween(const struct FTweenInfo& TweenInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween");

	struct
	{
		struct FTweenInfo              TweenInfo;
	} params;

	params.TweenInfo = TweenInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FChargeInfo             ChargeInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPGame_CharacterMovementComponent::OnRep_Charge(const struct FChargeInfo& ChargeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge");

	struct
	{
		struct FChargeInfo             ChargeInfo;
	} params;

	params.ChargeInfo = ChargeInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPostLogin
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void UPGame_CheatComponent::TestFubarRewardPostLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPostLogin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPosted
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void UPGame_CheatComponent::TestFubarRewardPosted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPosted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.TestFubar
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void UPGame_CheatComponent::TestFubar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.TestFubar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPostLogin
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void UPGame_CheatComponent::ServerTestFubarRewardPostLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPostLogin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPosted
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void UPGame_CheatComponent::ServerTestFubarRewardPosted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPosted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubar
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void UPGame_CheatComponent::ServerTestFubar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 request                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CheatComponent::ServerExecCall(const struct FString& request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall");

	struct
	{
		struct FString                 request;
	} params;

	params.request = request;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerExec
// (FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 request                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CheatComponent::ServerExec(const struct FString& request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerExec");

	struct
	{
		struct FString                 request;
	} params;

	params.request = request;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.Logout
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void UPGame_CheatComponent::Logout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.Logout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CheatComponent::gmJoinQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.gmCommand
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 request                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CheatComponent::gmCommand(const struct FString& request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmCommand");

	struct
	{
		struct FString                 request;
	} params;

	params.request = request;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.gmC
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 request                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_CheatComponent::gmC(const struct FString& request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmC");

	struct
	{
		struct FString                 request;
	} params;

	params.request = request;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.DumpAnimationStats
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void UPGame_CheatComponent::DumpAnimationStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.DumpAnimationStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CheatComponent.CustomForceStart
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void UPGame_CheatComponent::CustomForceStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.CustomForceStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APGame_CombatLogVisualizer::Visualize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog
// (FUNC_Final, FUNC_Native, FUNC_Public)

void APGame_CombatLogVisualizer::LoadCombatLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APGame_CombatLogVisualizer::ClearVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData
// (FUNC_Native, FUNC_Public)

void UPGame_EffectManagerComponent::OnRep_EffectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FPGame_InstantEffectRepData repData                        (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPGame_EffectManagerComponent::InstantEffectBroadcast(const struct FPGame_InstantEffectRepData& repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast");

	struct
	{
		struct FPGame_InstantEffectRepData repData;
	} params;

	params.repData = repData;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            PropertyId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPGame_EffectManagerComponent::GetPropertyValueIntFromBlueprint(int PropertyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint");

	struct
	{
		int                            PropertyId;
		int                            ReturnValue;
	} params;

	params.PropertyId = PropertyId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            PropertyId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UPGame_EffectManagerComponent::GetPropertyValueFromBlueprint(int PropertyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint");

	struct
	{
		int                            PropertyId;
		float                          ReturnValue;
	} params;

	params.PropertyId = PropertyId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// struct FPGame_PersistentEffectRepData repData                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UPGame_EffectGroupPersistent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPGame_EffectGroupPersistent* UPGame_EffectManagerComponent::GetDefaultEffectGroupForPersistentRepData(const struct FPGame_PersistentEffectRepData& repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData");

	struct
	{
		struct FPGame_PersistentEffectRepData repData;
		class UPGame_EffectGroupPersistent* ReturnValue;
	} params;

	params.repData = repData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// struct FPGame_InstantEffectRepData repData                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UPGame_EffectGroupInstant* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPGame_EffectGroupInstant* UPGame_EffectManagerComponent::GetDefaultEffectGroupForInstantRepData(const struct FPGame_InstantEffectRepData& repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData");

	struct
	{
		struct FPGame_InstantEffectRepData repData;
		class UPGame_EffectGroupInstant* ReturnValue;
	} params;

	params.repData = repData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FPGame_PersistentEffectRepData repData                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UPGame_EffectAttachment* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPGame_EffectAttachment* UPGame_EffectManagerComponent::CreatePersistentAttachment(const struct FPGame_PersistentEffectRepData& repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment");

	struct
	{
		struct FPGame_PersistentEffectRepData repData;
		class UPGame_EffectAttachment* ReturnValue;
	} params;

	params.repData = repData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FPGame_InstantEffectRepData repData                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPGame_EffectManagerComponent::CreateInstantAttachment(const struct FPGame_InstantEffectRepData& repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment");

	struct
	{
		struct FPGame_InstantEffectRepData repData;
	} params;

	params.repData = repData;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            propIdInt                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPGame_Effectable::GetIntPropertyValue(int propIdInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue");

	struct
	{
		int                            propIdInt;
		int                            ReturnValue;
	} params;

	params.propIdInt = propIdInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            propIdInt                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UPGame_Effectable::GetFloatPropertyValue(int propIdInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue");

	struct
	{
		int                            propIdInt;
		float                          ReturnValue;
	} params;

	params.propIdInt = propIdInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_GameInstance.ProvideSonyMatchFeedback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bReviewTeamOnly                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_GameInstance::ProvideSonyMatchFeedback(bool bReviewTeamOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameInstance.ProvideSonyMatchFeedback");

	struct
	{
		bool                           bReviewTeamOnly;
	} params;

	params.bReviewTeamOnly = bReviewTeamOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameInstance.HasValidSonyMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPGame_GameInstance::HasValidSonyMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameInstance.HasValidSonyMatch");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_GameInstance::EndLoadingScreen(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen");

	struct
	{
		class UWorld*                  World;
	} params;

	params.World = World;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen
// (FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 mapName                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_GameInstance::BeginLoadingScreen(const struct FString& mapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen");

	struct
	{
		struct FString                 mapName;
	} params;

	params.mapName = mapName;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameMode.OnFubarShutdownTimeout
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void APGame_GameMode::OnFubarShutdownTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameMode.OnFubarShutdownTimeout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APGame_GameMode::InactivePlayerStateDestroyed(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed");

	struct
	{
		class AActor*                  InActor;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameMode.FinalShutdown
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void APGame_GameMode::FinalShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameMode.FinalShutdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded
// (FUNC_Native, FUNC_Protected)

void APGame_GameMode::FinalizeMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_GameState.OnRep_SonyMatchIdForPlayerFeedback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void APGame_GameState::OnRep_SonyMatchIdForPlayerFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameState.OnRep_SonyMatchIdForPlayerFeedback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UPGame_LandingPanelJSONHandler::RequestNewJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchOwnerEligibility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// bool                           bIsEligible                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APGame_PlayerController::ServerUpdateSonyMatchOwnerEligibility(bool bIsEligible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchOwnerEligibility");

	struct
	{
		bool                           bIsEligible;
	} params;

	params.bIsEligible = bIsEligible;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// struct FString                 InMatchId                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APGame_PlayerController::ServerUpdateSonyMatchData(const struct FString& InMatchId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchData");

	struct
	{
		struct FString                 InMatchId;
	} params;

	params.InMatchId = InMatchId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PlayerController.ClientUpdateSonyMatchData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FString                 InMatchId                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InActivityId                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APGame_PlayerController::ClientUpdateSonyMatchData(const struct FString& InMatchId, const struct FString& InActivityId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PlayerController.ClientUpdateSonyMatchData");

	struct
	{
		struct FString                 InMatchId;
		struct FString                 InActivityId;
	} params;

	params.InMatchId = InMatchId;
	params.InActivityId = InActivityId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PlayerController.ClientGameFubared
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// EFubarReason                   Reason                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APGame_PlayerController::ClientGameFubared(EFubarReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PlayerController.ClientGameFubared");

	struct
	{
		EFubarReason                   Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PlayerController.ClientCheckSonyMatchOwnerEligibility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void APGame_PlayerController::ClientCheckSonyMatchOwnerEligibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PlayerController.ClientCheckSonyMatchOwnerEligibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InPrimitive                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_PositionHistoryComponent::RemoveTrackedPrimitive(class UPrimitiveComponent* InPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive");

	struct
	{
		class UPrimitiveComponent*     InPrimitive;
	} params;

	params.InPrimitive = InPrimitive;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InPrimitive                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPGame_PositionHistoryComponent::AddTrackedPrimitive(class UPrimitiveComponent* InPrimitive, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive");

	struct
	{
		class UPrimitiveComponent*     InPrimitive;
		int                            Priority;
	} params;

	params.InPrimitive = InPrimitive;
	params.Priority = Priority;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
