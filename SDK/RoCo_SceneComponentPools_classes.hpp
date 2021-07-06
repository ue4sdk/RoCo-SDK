#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SceneComponentPools_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SceneComponentPools.BasePoolComponent
// 0x0020 (0x00D0 - 0x00B0)
class UBasePoolComponent : public UActorComponent
{
public:
	int                                                MaxPoolSize;                                              // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StartingPoolSize;                                         // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ComponentClassName;                                       // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPoolOverflowHandling                              OverflowType;                                             // 0x00C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.BasePoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.DecalPoolComponent
// 0x0078 (0x0148 - 0x00D0)
class UDecalPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UClass*                                      PooledDecalComponentClass;                                // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UPoolableDecalComponent*>             UnusedComponentsArray;                                    // 0x00E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: UsedComponentsSet
	class UPoolableDecalComponent*                     PeekedDecalComponent;                                     // 0x0140(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.DecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.GunshotDecalPoolComponent
// 0x0000 (0x0148 - 0x0148)
class UGunshotDecalPoolComponent : public UDecalPoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.GunshotDecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.ParticleSystemPoolComponentBase
// 0x0080 (0x0150 - 0x00D0)
class UParticleSystemPoolComponentBase : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UClass*                                      PooledParticleSystemComponentClass;                       // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UParticleSystemComponent*>            UnusedComponentsArray;                                    // 0x00E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: UsedComponentsSet
	class UParticleSystemComponent*                    PeekedParticleSystemComponent;                            // 0x0140(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bClearTemplateWhenReturnedToPool;                         // 0x0148(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.ParticleSystemPoolComponentBase");
		return ptr;
	}


	void OnPSCFinished(class UParticleSystemComponent* InPSC);
};


// Class SceneComponentPools.ParticleSystemPoolComponent
// 0x0000 (0x0150 - 0x0150)
class UParticleSystemPoolComponent : public UParticleSystemPoolComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.ParticleSystemPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.PoolableDecalComponent
// 0x0030 (0x0280 - 0x0250)
class UPoolableDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDecalReturnedToPoolDelegate;                            // 0x0260(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0250(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bInUse;                                                   // 0x0270(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0271(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.PoolableDecalComponent");
		return ptr;
	}


	void ForceReturnToPool();
};


// Class SceneComponentPools.SceneComponentPoolStatics
// 0x0000 (0x0028 - 0x0028)
class USceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.SceneComponentPoolStatics");
		return ptr;
	}


	static class UStaticMeshComponent* SpawnStaticMeshAttached(class UStaticMesh* Mesh, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	static class USkeletalMeshComponent* SpawnSkeletalMeshAttached(class USkeletalMesh* Mesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	static class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType);
	static class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	static class UPoolableDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float Lifespan, bool bUseGunshotDecalPool);
	static class UPoolableDecalComponent* SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float Lifespan, bool bUseGunshotDecalPool);
	static void ReleaseSpawnedStaticMeshes(class UObject* WorldContextObject);
	static void ReleaseSpawnedStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent);
	static void ReleaseSpawnedStaticMesh(class UStaticMesh* StaticMeshComponent, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	static void ReleaseSpawnedSkeletalMeshes(class UObject* WorldContextObject);
	static void ReleaseSpawnedSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
	static void ReleaseSpawnedSkeletalMesh(class USkeletalMesh* SkeletalMesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	static void ReleaseSpawnedEmitters(class UObject* WorldContextObject);
	static void ReleaseSpawnedDecals(class UObject* WorldContextObject);
};


// Class SceneComponentPools.SkeletalMeshPoolComponent
// 0x0078 (0x0148 - 0x00D0)
class USkeletalMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              UnusedComponentsArray;                                    // 0x00D8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: UsedComponentsSet
	class USkeletalMeshComponent*                      PeekedSkeletalMeshComponent;                              // 0x0138(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      PooledSkeletalMeshComponentClass;                         // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.SkeletalMeshPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.StaticMeshPoolComponent
// 0x0078 (0x0148 - 0x00D0)
class UStaticMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                UnusedComponentsArray;                                    // 0x00D8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: UsedComponentsSet
	class UStaticMeshComponent*                        PeekedStaticMeshComponent;                                // 0x0138(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass*                                      PooledStaticMeshComponentClass;                           // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SceneComponentPools.StaticMeshPoolComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
