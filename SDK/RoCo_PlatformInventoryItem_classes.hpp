#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformInventoryItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlatformInventoryItem.PInv_AssetManager
// 0x01E8 (0x0628 - 0x0440)
class UPInv_AssetManager : public UAssetManager
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0440(0x00A0) MISSED OFFSET
	bool                                               bHasCompletedInitialAssetScan;                            // 0x04E0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x147];                                     // 0x04E1(0x0147) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlatformInventoryItem.PInv_AssetManager"));
		return ptr;
	}

};


// Class PlatformInventoryItem.PlatformInventoryItem
// 0x0188 (0x01B8 - 0x0030)
class UPlatformInventoryItem : public UPrimaryDataAsset
{
public:
	int                                                ItemId;                                                   // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       ItemDisplayName;                                          // 0x0038(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_DuplicateTransient, CPF_AssetRegistrySearchable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       ItemDescription;                                          // 0x0050(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_DuplicateTransient, CPF_AssetRegistrySearchable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FString                                     FriendlySearchName;                                       // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_DuplicateTransient, CPF_AssetRegistrySearchable, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsOwnableInventoryItem;                                   // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<int64_t>                                    DisplayableLootIds;                                       // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   ItemIcon;                                                 // 0x0090(0x0028) (CPF_Deprecated, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSoftObjectPath                             ItemIconPath;                                             // 0x00B8(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   LegacyItemIconTexture;                                    // 0x00D0(0x0028) (CPF_Transient, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FIconReference>                      Icons;                                                    // 0x00F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       CollectionContainer;                                      // 0x0108(0x0020) (CPF_Edit, CPF_Config, CPF_DisableEditOnInstance, CPF_AssetRegistrySearchable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<EExternalSkuSource, struct FString>           ExternalProductSkus;                                      // 0x0128(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               OnlyDisplayAcqusitionIfWhitelisted;                       // 0x0178(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	TArray<int64_t>                                    BlackListedLootIds;                                       // 0x0180(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0190(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlatformInventoryItem.PlatformInventoryItem"));
		return ptr;
	}


	bool ShouldDisplayToUser(int64_t LootId);
	void SetFriendlySearchName(const struct FString& InFriendlyName);
	void SetCollectionContainer(const struct FGameplayTagContainer& InContainer);
	bool IsItemTempDisabled();
	bool IsItemDisabled(bool bIncludeTempDisabled);
	void GetTextureAsync(const struct FScriptDelegate& IconLoadedEvent, TSoftObjectPtr<class UTexture2D>* Texture);
	struct FSoftObjectPath GetSoftItemIconAsPath();
	TSoftObjectPtr<class UTexture2D> GetSoftItemIcon();
	bool GetSoftIconByName(const struct FName& IconType, TSoftObjectPtr<class UTexture2D>* Icon);
	bool GetSoftIconAsPathByName(const struct FName& IconType, struct FSoftObjectPath* Icon);
	struct FString GetItemNameAsString();
	struct FText GetItemName();
	int GetItemId();
	struct FString GetItemDescriptionAsString();
	struct FText GetItemDescription();
	static TSoftObjectPtr<class UPlatformInventoryItem> GetItemByFriendlyName(const struct FString& InFriendlyName);
	struct FGameplayTagContainer GetCollectionContainer();
};


// Class PlatformInventoryItem.PlatformStoreAsset
// 0x0010 (0x01C8 - 0x01B8)
class UPlatformStoreAsset : public UPlatformInventoryItem
{
public:
	int                                                LootId;                                                   // 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AssetRegistrySearchable, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x01BC(0x000C) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlatformInventoryItem.PlatformStoreAsset"));
		return ptr;
	}


	int GetLootId();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
