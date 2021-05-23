// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformInventoryItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        LootId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPlatformInventoryItem::ShouldDisplayToUser(int64_t LootId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser"));

	struct
	{
		int64_t                        LootId;
		bool                           ReturnValue;
	} params;

	params.LootId = LootId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InFriendlyName                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlatformInventoryItem::SetFriendlySearchName(const struct FString& InFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName"));

	struct
	{
		struct FString                 InFriendlyName;
	} params;

	params.InFriendlyName = InFriendlyName;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InContainer                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UPlatformInventoryItem::SetCollectionContainer(const struct FGameplayTagContainer& InContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer"));

	struct
	{
		struct FGameplayTagContainer   InContainer;
	} params;

	params.InContainer = InContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformInventoryItem.PlatformInventoryItem.IsItemTempDisabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPlatformInventoryItem::IsItemTempDisabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.IsItemTempDisabled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.IsItemDisabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIncludeTempDisabled           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPlatformInventoryItem::IsItemDisabled(bool bIncludeTempDisabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.IsItemDisabled"));

	struct
	{
		bool                           bIncludeTempDisabled;
		bool                           ReturnValue;
	} params;

	params.bIncludeTempDisabled = bIncludeTempDisabled;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture                        (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         IconLoadedEvent                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPlatformInventoryItem::GetTextureAsync(const struct FScriptDelegate& IconLoadedEvent, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> Texture;
		struct FScriptDelegate         IconLoadedEvent;
	} params;

	params.IconLoadedEvent = IconLoadedEvent;

	UObject::ProcessEvent(fn, &params);

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIconAsPath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSoftObjectPath         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FSoftObjectPath UPlatformInventoryItem::GetSoftItemIconAsPath()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIconAsPath"));

	struct
	{
		struct FSoftObjectPath         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TSoftObjectPtr<class UTexture2D> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UPlatformInventoryItem::GetSoftItemIcon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   IconType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPlatformInventoryItem::GetSoftIconByName(const struct FName& IconType, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName"));

	struct
	{
		struct FName                   IconType;
		TSoftObjectPtr<class UTexture2D> Icon;
		bool                           ReturnValue;
	} params;

	params.IconType = IconType;

	UObject::ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconAsPathByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   IconType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSoftObjectPath         Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPlatformInventoryItem::GetSoftIconAsPathByName(const struct FName& IconType, struct FSoftObjectPath* Icon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconAsPathByName"));

	struct
	{
		struct FName                   IconType;
		struct FSoftObjectPath         Icon;
		bool                           ReturnValue;
	} params;

	params.IconType = IconType;

	UObject::ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPlatformInventoryItem::GetItemNameAsString()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPlatformInventoryItem::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetItemName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPlatformInventoryItem::GetItemId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetItemId"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPlatformInventoryItem::GetItemDescriptionAsString()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPlatformInventoryItem::GetItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InFriendlyName                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UPlatformInventoryItem> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TSoftObjectPtr<class UPlatformInventoryItem> UPlatformInventoryItem::GetItemByFriendlyName(const struct FString& InFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName"));

	struct
	{
		struct FString                 InFriendlyName;
		TSoftObjectPtr<class UPlatformInventoryItem> ReturnValue;
	} params;

	params.InFriendlyName = InFriendlyName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayTagContainer UPlatformInventoryItem::GetCollectionContainer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer"));

	struct
	{
		struct FGameplayTagContainer   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformStoreAsset.GetLootId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPlatformStoreAsset::GetLootId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformInventoryItem.PlatformStoreAsset.GetLootId"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
