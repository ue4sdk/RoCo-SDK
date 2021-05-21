#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DataTableSkinsCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DataTableSkinsCommon.DynamicSkinTable
// 0x0270 (0x0298 - 0x0028)
class UDynamicSkinTable : public UObject
{
public:
	TArray<struct FDataTableInfo>                      ActiveDataTables;                                         // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FDataTableInfo>                      InactiveDataTables;                                       // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                             // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x220];                                     // 0x0058(0x0220) MISSED OFFSET
	unsigned char                                      bWantsToBeRecycled : 1;                                   // 0x0278(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	TScriptInterface<class USkinTagAssetInterface>     SkinTagAsset;                                             // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.DynamicSkinTable");
		return ptr;
	}


	void RemoveDataTables(TArray<class UDataTable*> InTables);
	void RemoveDataTable(class UDataTable* InTable);
	bool IsTablePendingAssetLoad();
	class UTexture* GetTexture(const struct FName& RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(const struct FName& RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(const struct FName& RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(const struct FName& RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(const struct FName& RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(const struct FName& RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(const struct FName& RowName, int* Priority);
	struct FName GetNameField(const struct FName& RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(const struct FName& RowName, int* Priority);
	struct FLinearColor GetLinearColor(const struct FName& RowName, int* Priority);
	int GetInt(const struct FName& RowName, int* Priority);
	float GetFloat(const struct FName& RowName, int* Priority);
	class UClass* GetClass(const struct FName& RowName, int* Priority);
	bool GetBool(const struct FName& RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(const struct FName& RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(const struct FName& RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(const struct FName& RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(const struct FName& RowName, int* Priority);
	class UAnimationAsset* GetAnimationAsset(const struct FName& RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(const struct FName& RowName, int* Priority);
	void GetAllKeywords();
	void AddDataTableWithQuery(class UDataTable* InTable, int InPriority, const struct FGameplayTagQuery& InQuery);
	void AddDataTables(TArray<struct FDataTableInfo> InTableInfos);
	void AddDataTable(class UDataTable* InTable, int InPriority);
};


// Class DataTableSkinsCommon.MultiSkinObject
// 0x01A8 (0x01D0 - 0x0028)
class UMultiSkinObject : public UObject
{
public:
	TArray<class UMultiSkinObject*>                    ParentSkinnedObjects;                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UMultiSkinObject>>     ChildSkinnedObjects;                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: SubscribedKeywords
	unsigned char                                      UnknownData01[0x50];                                      // 0x0098(0x0050) UNKNOWN PROPERTY: SubscribedMaterialPrefixes
	unsigned char                                      bSubscribeToAllKeywords : 1;                              // 0x00E8(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bWantsToBeRecycled : 1;                                   // 0x00E8(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x00E9(0x001F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                             // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0118(0x0018) MISSED OFFSET
	TMap<int, struct FDynamicSkinTableMapEntry>        DynamicSkinTables;                                        // 0x0130(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FCachedRowsEntry>        CachedRows;                                               // 0x0180(0x0050) (CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.MultiSkinObject");
		return ptr;
	}


	void UnsubscribeToKeywords(TArray<struct FName> InKeywords);
	void UnsubscribeToKeyword(const struct FName& InKeyword);
	void UnsubscribeToAllKeywords();
	void SubscribeToKeywords(TArray<struct FName> InKeywords);
	void SubscribeToKeyword(const struct FName& InKeyword);
	void SubscribeToAllKeywords();
	void RemoveParent(class UMultiSkinObject* InParent);
	class UTexture* GetTexture(const struct FName& RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(const struct FName& RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(const struct FName& RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(const struct FName& RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(const struct FName& RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(const struct FName& RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(const struct FName& RowName, int* Priority);
	struct FName GetNameField(const struct FName& RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(const struct FName& RowName, int* Priority);
	struct FLinearColor GetLinearColor(const struct FName& RowName, int* Priority);
	int GetInt(const struct FName& RowName, int* Priority);
	float GetFloat(const struct FName& RowName, int* Priority);
	class UClass* GetClass(const struct FName& RowName, int* Priority);
	bool GetBool(const struct FName& RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(const struct FName& RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(const struct FName& RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(const struct FName& RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(const struct FName& RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(const struct FName& RowName, int* Priority);
	void GetAllSkinKeywords();
	void AddParent(class UMultiSkinObject* InParent);
};


// Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent
// 0x0150 (0x0CE0 - 0x0B90)
class USkinnableSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	bool                                               bDelaySkinUpdatesUntilTick;                               // 0x0B90(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSkinUpdateIsQueued;                                      // 0x0B91(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B92(0x0002) MISSED OFFSET
	struct FName                                       SkeletalMeshKeyword;                                      // 0x0B94(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               FailSafeSkeletalMesh;                                     // 0x0BA0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       PhysicsAssetKeyword;                                      // 0x0BA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPhysicsAsset*                               FailSafePhysicsAsset;                                     // 0x0BB0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       AnimInstanceClassKeyword;                                 // 0x0BB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      FailSafeAnimClass;                                        // 0x0BC0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      LastSkinnedAnimClass;                                     // 0x0BC8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bForceAnimationUpdateOnSkinUpdate;                        // 0x0BD0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0BD1(0x0007) MISSED OFFSET
	class UMultiSkinObject*                            SkinObject;                                               // 0x0BD8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAnimInitializedOnSkinnableMeshDel;                      // 0x0BE0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0BF0(0x0030) MISSED OFFSET
	bool                                               bAllowMaterialSkinning;                                   // 0x0C20(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0C21(0x0007) MISSED OFFSET
	TArray<struct FString>                             MaterialSkinningPrefixes;                                 // 0x0C28(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0C38(0x0050) UNKNOWN PROPERTY: MaterialSkinningPrefixes_New
	unsigned char                                      UnknownData06[0x48];                                      // 0x0C88(0x0048) MISSED OFFSET
	int                                                ForcedLodModel_Skinned;                                   // 0x0CD0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0CD4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent");
		return ptr;
	}


	static void StaticSetForcedLOD(class USkinnedMeshComponent* InMeshComp, int InForcedLOD);
	void SetSkeletalMeshKeyword(const struct FName& InKeyword, class USkeletalMesh* InFailSafeSkeletalMesh);
	void SetPhysicsAssetKeyword(const struct FName& InKeyword, class UPhysicsAsset* InFailSafePhysicsAsset);
	int SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue);
	int SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue);
	void SetForcedLOD_Skinned(int InNewForcedLOD);
	void SetAnimClassKeyword(const struct FName& InKeyword, class UClass* InFailSafeAnimClass);
	void RemovePersistentMaterialParameter(int ParameterId);
	class UMultiSkinObject* GetSkinObject();
	void ForwardAnimInitialized();
};


// Class DataTableSkinsCommon.SkinnableMergedMeshComponent
// 0x0040 (0x0D20 - 0x0CE0)
class USkinnableMergedMeshComponent : public USkinnableSkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0CE0(0x0008) MISSED OFFSET
	bool                                               bAlwaysUseTheFailsafeMeshWhileMerging;                    // 0x0CE8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CE9(0x0003) MISSED OFFSET
	struct FName                                       MeshNeedsCPUAccessKeyword;                                // 0x0CEC(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDelayFullSkinUpdateUntilMeshMergingIsComplete;           // 0x0CF4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CF5(0x0003) MISSED OFFSET
	class USkeletalMesh*                               BestPlaceHolderMesh;                                      // 0x0CF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMergeMarkedComplete;                                     // 0x0D00(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D01(0x0007) MISSED OFFSET
	class USkeletalMesh*                               CachedMergeResult;                                        // 0x0D08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0D10(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.SkinnableMergedMeshComponent");
		return ptr;
	}


	void SetSkeletalMeshKeywords(TArray<struct FName> InKeywords, class USkeletalMesh* InFailSafeSkeletalMesh);
	void RemoveSkeletalMeshKeyword(const struct FName& InKeyword);
	void AddSkeletalMeshKeyword(const struct FName& InKeyword);
};


// Class DataTableSkinsCommon.SkinnableStaticMeshComponent
// 0x00C0 (0x05B0 - 0x04F0)
class USkinnableStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	class UStaticMesh*                                 FailSafeStaticMesh;                                       // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMultiSkinObject*                            SkinObject;                                               // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bAllowMaterialSkinning;                                   // 0x0508(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x0509(0x0050) UNKNOWN PROPERTY: MaterialSkinningPrefixes
	unsigned char                                      UnknownData03[0x50];                                      // 0x0560(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.SkinnableStaticMeshComponent");
		return ptr;
	}


	void SetStaticMeshKeyword(const struct FName& InKeyword, class UStaticMesh* InFailSafeStaticMesh);
	int SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue);
	int SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue);
	void RemovePersistentMaterialParameter(int ParameterId);
	class UMultiSkinObject* GetSkinObject();
};


// Class DataTableSkinsCommon.SkinObjectManagerComponent
// 0x00A0 (0x0150 - 0x00B0)
class USkinObjectManagerComponent : public UActorComponent
{
public:
	TMap<struct FName, class UMultiSkinObject*>        SkinObjects;                                              // 0x00B0(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) UNKNOWN PROPERTY: SkinObjectsSet

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.SkinObjectManagerComponent");
		return ptr;
	}

};


// Class DataTableSkinsCommon.SkinTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class USkinTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DataTableSkinsCommon.SkinTagAssetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
