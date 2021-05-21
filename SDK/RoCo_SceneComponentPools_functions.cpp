// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SceneComponentPools_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UParticleSystemComponent* InPSC                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UParticleSystemPoolComponentBase::OnPSCFinished(class UParticleSystemComponent* InPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished");

	struct
	{
		class UParticleSystemComponent* InPSC;
	} params;

	params.InPSC = InPSC;

	UObject::ProcessEvent(fn, &params);
}


// Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPoolableDecalComponent::ForceReturnToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMesh*             Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPoolAttachmentInfo     AttachInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UStaticMeshComponent* USceneComponentPoolStatics::SpawnStaticMeshAttached(class UStaticMesh* Mesh, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached");

	struct
	{
		class UStaticMesh*             Mesh;
		class USceneComponent*         AttachToComponent;
		struct FPoolAttachmentInfo     AttachInfo;
		class UStaticMeshComponent*    ReturnValue;
	} params;

	params.Mesh = Mesh;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMesh*           Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  AnimClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPoolAttachmentInfo     AttachInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USkeletalMeshComponent* USceneComponentPoolStatics::SpawnSkeletalMeshAttached(class USkeletalMesh* Mesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached");

	struct
	{
		class USkeletalMesh*           Mesh;
		class UClass*                  AnimClass;
		class USceneComponent*         AttachToComponent;
		struct FPoolAttachmentInfo     AttachInfo;
		class USkeletalMeshComponent*  ReturnValue;
	} params;

	params.Mesh = Mesh;
	params.AnimClass = AnimClass;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UParticleSystemComponent* USceneComponentPoolStatics::SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached");

	struct
	{
		class UParticleSystem*         EmitterTemplate;
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		struct FRotator                Rotation;
		struct FVector                 Scale;
		TEnumAsByte<EAttachLocation>   LocationType;
		class UParticleSystemComponent* ReturnValue;
	} params;

	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.LocationType = LocationType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystem*         EmitterTemplate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UParticleSystemComponent* USceneComponentPoolStatics::SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation");

	struct
	{
		class UObject*                 WorldContextObject;
		class UParticleSystem*         EmitterTemplate;
		struct FVector                 Location;
		struct FRotator                Rotation;
		struct FVector                 Scale;
		class UParticleSystemComponent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInterface*      DecalMaterial                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 DecalSize                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Lifespan                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseGunshotDecalPool           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPoolableDecalComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPoolableDecalComponent* USceneComponentPoolStatics::SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float Lifespan, bool bUseGunshotDecalPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached");

	struct
	{
		class UMaterialInterface*      DecalMaterial;
		struct FVector                 DecalSize;
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		struct FRotator                Rotation;
		TEnumAsByte<EAttachLocation>   LocationType;
		float                          Lifespan;
		bool                           bUseGunshotDecalPool;
		class UPoolableDecalComponent* ReturnValue;
	} params;

	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.Lifespan = Lifespan;
	params.bUseGunshotDecalPool = bUseGunshotDecalPool;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMaterialInterface*      DecalMaterial                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 DecalSize                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Lifespan                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseGunshotDecalPool           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPoolableDecalComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPoolableDecalComponent* USceneComponentPoolStatics::SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float Lifespan, bool bUseGunshotDecalPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation");

	struct
	{
		class UObject*                 WorldContextObject;
		class UMaterialInterface*      DecalMaterial;
		struct FVector                 DecalSize;
		struct FVector                 Location;
		struct FRotator                Rotation;
		float                          Lifespan;
		bool                           bUseGunshotDecalPool;
		class UPoolableDecalComponent* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.DecalMaterial = DecalMaterial;
	params.DecalSize = DecalSize;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Lifespan = Lifespan;
	params.bUseGunshotDecalPool = bUseGunshotDecalPool;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedStaticMeshes(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent");

	struct
	{
		class UStaticMeshComponent*    StaticMeshComponent;
	} params;

	params.StaticMeshComponent = StaticMeshComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMesh*             StaticMeshComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPoolAttachmentInfo     AttachInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedStaticMesh(class UStaticMesh* StaticMeshComponent, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh");

	struct
	{
		class UStaticMesh*             StaticMeshComponent;
		class USceneComponent*         AttachToComponent;
		struct FPoolAttachmentInfo     AttachInfo;
	} params;

	params.StaticMeshComponent = StaticMeshComponent;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedSkeletalMeshes(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent");

	struct
	{
		class USkeletalMeshComponent*  SkeletalMeshComponent;
	} params;

	params.SkeletalMeshComponent = SkeletalMeshComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  AnimClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPoolAttachmentInfo     AttachInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedSkeletalMesh(class USkeletalMesh* SkeletalMesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh");

	struct
	{
		class USkeletalMesh*           SkeletalMesh;
		class UClass*                  AnimClass;
		class USceneComponent*         AttachToComponent;
		struct FPoolAttachmentInfo     AttachInfo;
	} params;

	params.SkeletalMesh = SkeletalMesh;
	params.AnimClass = AnimClass;
	params.AttachToComponent = AttachToComponent;
	params.AttachInfo = AttachInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedEmitters(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedDecals(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
