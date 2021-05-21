// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DataTableSkinsCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UDataTable*>      InTables                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDynamicSkinTable::RemoveDataTables(TArray<class UDataTable*> InTables)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables");

	struct
	{
		TArray<class UDataTable*>      InTables;
	} params;

	params.InTables = InTables;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              InTable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDynamicSkinTable::RemoveDataTable(class UDataTable* InTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable");

	struct
	{
		class UDataTable*              InTable;
	} params;

	params.InTable = InTable;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDynamicSkinTable::IsTablePendingAssetLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture* UDynamicSkinTable::GetTexture(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetTexture");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UTexture*                ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UStaticMesh*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UStaticMesh* UDynamicSkinTable::GetStaticMesh(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UStaticMesh*             ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USkeletalMesh* UDynamicSkinTable::GetSkeletalMesh(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class USkeletalMesh*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USelectiveAkAudioEvent*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USelectiveAkAudioEvent* UDynamicSkinTable::GetSelectiveAudioEvent(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class USelectiveAkAudioEvent*  ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPoseAsset*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPoseAsset* UDynamicSkinTable::GetPoseAsset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UPoseAsset*              ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPhysicsAsset*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPhysicsAsset* UDynamicSkinTable::GetPhysicsAsset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UPhysicsAsset*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UParticleSystem* UDynamicSkinTable::GetParticleSystem(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UParticleSystem*         ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetNameField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UDynamicSkinTable::GetNameField(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetNameField");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		struct FName                   ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInterface* UDynamicSkinTable::GetMaterialInterface(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UMaterialInterface*      ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UDynamicSkinTable::GetLinearColor(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		struct FLinearColor            ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UDynamicSkinTable::GetInt(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetInt");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		int                            ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UDynamicSkinTable::GetFloat(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetFloat");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		float                          ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* UDynamicSkinTable::GetClass(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetClass");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UClass*                  ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDynamicSkinTable::GetBool(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetBool");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		bool                           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* UDynamicSkinTable::GetAudioEvent(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAkAudioEvent*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequence*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimSequence* UDynamicSkinTable::GetAnimSequence(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAnimSequence*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMontage* UDynamicSkinTable::GetAnimMontage(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAnimMontage*            ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UBlendSpace*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpace* UDynamicSkinTable::GetAnimBlendSpace(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UBlendSpace*             ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimationAsset*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimationAsset* UDynamicSkinTable::GetAnimationAsset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAnimationAsset*         ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAimOffsetBlendSpace*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAimOffsetBlendSpace* UDynamicSkinTable::GetAnimAimOffset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAimOffsetBlendSpace*    ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)

void UDynamicSkinTable::GetAllKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              InTable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InPriority                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       InQuery                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UDynamicSkinTable::AddDataTableWithQuery(class UDataTable* InTable, int InPriority, const struct FGameplayTagQuery& InQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery");

	struct
	{
		class UDataTable*              InTable;
		int                            InPriority;
		struct FGameplayTagQuery       InQuery;
	} params;

	params.InTable = InTable;
	params.InPriority = InPriority;
	params.InQuery = InQuery;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FDataTableInfo>  InTableInfos                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDynamicSkinTable::AddDataTables(TArray<struct FDataTableInfo> InTableInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables");

	struct
	{
		TArray<struct FDataTableInfo>  InTableInfos;
	} params;

	params.InTableInfos = InTableInfos;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              InTable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InPriority                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDynamicSkinTable::AddDataTable(class UDataTable* InTable, int InPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable");

	struct
	{
		class UDataTable*              InTable;
		int                            InPriority;
	} params;

	params.InTable = InTable;
	params.InPriority = InPriority;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           InKeywords                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiSkinObject::UnsubscribeToKeywords(TArray<struct FName> InKeywords)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords");

	struct
	{
		TArray<struct FName>           InKeywords;
	} params;

	params.InKeywords = InKeywords;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiSkinObject::UnsubscribeToKeyword(const struct FName& InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword");

	struct
	{
		struct FName                   InKeyword;
	} params;

	params.InKeyword = InKeyword;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMultiSkinObject::UnsubscribeToAllKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           InKeywords                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiSkinObject::SubscribeToKeywords(TArray<struct FName> InKeywords)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords");

	struct
	{
		TArray<struct FName>           InKeywords;
	} params;

	params.InKeywords = InKeywords;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiSkinObject::SubscribeToKeyword(const struct FName& InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword");

	struct
	{
		struct FName                   InKeyword;
	} params;

	params.InKeyword = InKeyword;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMultiSkinObject::SubscribeToAllKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.RemoveParent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMultiSkinObject*        InParent                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiSkinObject::RemoveParent(class UMultiSkinObject* InParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.RemoveParent");

	struct
	{
		class UMultiSkinObject*        InParent;
	} params;

	params.InParent = InParent;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.GetTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture* UMultiSkinObject::GetTexture(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetTexture");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UTexture*                ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UStaticMesh*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UStaticMesh* UMultiSkinObject::GetStaticMesh(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UStaticMesh*             ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USkeletalMesh* UMultiSkinObject::GetSkeletalMesh(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class USkeletalMesh*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USelectiveAkAudioEvent*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USelectiveAkAudioEvent* UMultiSkinObject::GetSelectiveAudioEvent(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class USelectiveAkAudioEvent*  ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPoseAsset*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPoseAsset* UMultiSkinObject::GetPoseAsset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UPoseAsset*              ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPhysicsAsset*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPhysicsAsset* UMultiSkinObject::GetPhysicsAsset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UPhysicsAsset*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UParticleSystem* UMultiSkinObject::GetParticleSystem(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UParticleSystem*         ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetNameField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UMultiSkinObject::GetNameField(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetNameField");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		struct FName                   ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMaterialInterface* UMultiSkinObject::GetMaterialInterface(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UMaterialInterface*      ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UMultiSkinObject::GetLinearColor(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		struct FLinearColor            ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMultiSkinObject::GetInt(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetInt");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		int                            ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMultiSkinObject::GetFloat(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetFloat");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		float                          ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* UMultiSkinObject::GetClass(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetClass");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UClass*                  ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMultiSkinObject::GetBool(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetBool");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		bool                           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* UMultiSkinObject::GetAudioEvent(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAkAudioEvent*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequence*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimSequence* UMultiSkinObject::GetAnimSequence(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAnimSequence*           ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMontage* UMultiSkinObject::GetAnimMontage(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAnimMontage*            ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UBlendSpace*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpace* UMultiSkinObject::GetAnimBlendSpace(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UBlendSpace*             ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAimOffsetBlendSpace*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAimOffsetBlendSpace* UMultiSkinObject::GetAnimAimOffset(const struct FName& RowName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset");

	struct
	{
		struct FName                   RowName;
		int                            Priority;
		class UAimOffsetBlendSpace*    ReturnValue;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)

void UMultiSkinObject::GetAllSkinKeywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.MultiSkinObject.AddParent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMultiSkinObject*        InParent                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMultiSkinObject::AddParent(class UMultiSkinObject* InParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.MultiSkinObject.AddParent");

	struct
	{
		class UMultiSkinObject*        InParent;
	} params;

	params.InParent = InParent;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.StaticSetForcedLOD
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent*   InMeshComp                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InForcedLOD                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableSkeletalMeshComponent::StaticSetForcedLOD(class USkinnedMeshComponent* InMeshComp, int InForcedLOD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.StaticSetForcedLOD");

	struct
	{
		class USkinnedMeshComponent*   InMeshComp;
		int                            InForcedLOD;
	} params;

	params.InMeshComp = InMeshComp;
	params.InForcedLOD = InForcedLOD;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           InFailSafeSkeletalMesh         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableSkeletalMeshComponent::SetSkeletalMeshKeyword(const struct FName& InKeyword, class USkeletalMesh* InFailSafeSkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword");

	struct
	{
		struct FName                   InKeyword;
		class USkeletalMesh*           InFailSafeSkeletalMesh;
	} params;

	params.InKeyword = InKeyword;
	params.InFailSafeSkeletalMesh = InFailSafeSkeletalMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPhysicsAsset*           InFailSafePhysicsAsset         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableSkeletalMeshComponent::SetPhysicsAssetKeyword(const struct FName& InKeyword, class UPhysicsAsset* InFailSafePhysicsAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword");

	struct
	{
		struct FName                   InKeyword;
		class UPhysicsAsset*           InFailSafePhysicsAsset;
	} params;

	params.InKeyword = InKeyword;
	params.InFailSafePhysicsAsset = InFailSafePhysicsAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableSkeletalMeshComponent::SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials");

	struct
	{
		struct FName                   ParameterName;
		struct FLinearColor            ParameterValue;
		int                            ReturnValue;
	} params;

	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            MaterialSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableSkeletalMeshComponent::SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter");

	struct
	{
		int                            MaterialSlot;
		struct FName                   ParameterName;
		struct FLinearColor            ParameterValue;
		int                            ReturnValue;
	} params;

	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableSkeletalMeshComponent::SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials");

	struct
	{
		struct FName                   ParameterName;
		class UTexture*                ParameterValue;
		int                            ReturnValue;
	} params;

	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaterialSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableSkeletalMeshComponent::SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter");

	struct
	{
		int                            MaterialSlot;
		struct FName                   ParameterName;
		class UTexture*                ParameterValue;
		int                            ReturnValue;
	} params;

	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableSkeletalMeshComponent::SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials");

	struct
	{
		struct FName                   ParameterName;
		float                          ParameterValue;
		int                            ReturnValue;
	} params;

	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaterialSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableSkeletalMeshComponent::SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter");

	struct
	{
		int                            MaterialSlot;
		struct FName                   ParameterName;
		float                          ParameterValue;
		int                            ReturnValue;
	} params;

	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetForcedLOD_Skinned
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InNewForcedLOD                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableSkeletalMeshComponent::SetForcedLOD_Skinned(int InNewForcedLOD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetForcedLOD_Skinned");

	struct
	{
		int                            InNewForcedLOD;
	} params;

	params.InNewForcedLOD = InNewForcedLOD;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  InFailSafeAnimClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableSkeletalMeshComponent::SetAnimClassKeyword(const struct FName& InKeyword, class UClass* InFailSafeAnimClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword");

	struct
	{
		struct FName                   InKeyword;
		class UClass*                  InFailSafeAnimClass;
	} params;

	params.InKeyword = InKeyword;
	params.InFailSafeAnimClass = InFailSafeAnimClass;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ParameterId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableSkeletalMeshComponent::RemovePersistentMaterialParameter(int ParameterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter");

	struct
	{
		int                            ParameterId;
	} params;

	params.ParameterId = ParameterId;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMultiSkinObject*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMultiSkinObject* USkinnableSkeletalMeshComponent::GetSkinObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject");

	struct
	{
		class UMultiSkinObject*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized
// (FUNC_Final, FUNC_Native, FUNC_Private)

void USkinnableSkeletalMeshComponent::ForwardAnimInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           InKeywords                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           InFailSafeSkeletalMesh         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableMergedMeshComponent::SetSkeletalMeshKeywords(TArray<struct FName> InKeywords, class USkeletalMesh* InFailSafeSkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords");

	struct
	{
		TArray<struct FName>           InKeywords;
		class USkeletalMesh*           InFailSafeSkeletalMesh;
	} params;

	params.InKeywords = InKeywords;
	params.InFailSafeSkeletalMesh = InFailSafeSkeletalMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableMergedMeshComponent::RemoveSkeletalMeshKeyword(const struct FName& InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword");

	struct
	{
		struct FName                   InKeyword;
	} params;

	params.InKeyword = InKeyword;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableMergedMeshComponent::AddSkeletalMeshKeyword(const struct FName& InKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword");

	struct
	{
		struct FName                   InKeyword;
	} params;

	params.InKeyword = InKeyword;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetStaticMeshKeyword
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InKeyword                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UStaticMesh*             InFailSafeStaticMesh           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableStaticMeshComponent::SetStaticMeshKeyword(const struct FName& InKeyword, class UStaticMesh* InFailSafeStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetStaticMeshKeyword");

	struct
	{
		struct FName                   InKeyword;
		class UStaticMesh*             InFailSafeStaticMesh;
	} params;

	params.InKeyword = InKeyword;
	params.InFailSafeStaticMesh = InFailSafeStaticMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentVectorParameterOnAllMaterials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableStaticMeshComponent::SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentVectorParameterOnAllMaterials");

	struct
	{
		struct FName                   ParameterName;
		struct FLinearColor            ParameterValue;
		int                            ReturnValue;
	} params;

	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            MaterialSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableStaticMeshComponent::SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentVectorParameter");

	struct
	{
		int                            MaterialSlot;
		struct FName                   ParameterName;
		struct FLinearColor            ParameterValue;
		int                            ReturnValue;
	} params;

	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentTextureParameterOnAllMaterials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableStaticMeshComponent::SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentTextureParameterOnAllMaterials");

	struct
	{
		struct FName                   ParameterName;
		class UTexture*                ParameterValue;
		int                            ReturnValue;
	} params;

	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentTextureParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaterialSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture*                ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableStaticMeshComponent::SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentTextureParameter");

	struct
	{
		int                            MaterialSlot;
		struct FName                   ParameterName;
		class UTexture*                ParameterValue;
		int                            ReturnValue;
	} params;

	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentScalarParameterOnAllMaterials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableStaticMeshComponent::SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentScalarParameterOnAllMaterials");

	struct
	{
		struct FName                   ParameterName;
		float                          ParameterValue;
		int                            ReturnValue;
	} params;

	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentScalarParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaterialSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ParameterValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USkinnableStaticMeshComponent::SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.SetPersistentScalarParameter");

	struct
	{
		int                            MaterialSlot;
		struct FName                   ParameterName;
		float                          ParameterValue;
		int                            ReturnValue;
	} params;

	params.MaterialSlot = MaterialSlot;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.RemovePersistentMaterialParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ParameterId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkinnableStaticMeshComponent::RemovePersistentMaterialParameter(int ParameterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.RemovePersistentMaterialParameter");

	struct
	{
		int                            ParameterId;
	} params;

	params.ParameterId = ParameterId;

	UObject::ProcessEvent(fn, &params);
}


// Function DataTableSkinsCommon.SkinnableStaticMeshComponent.GetSkinObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMultiSkinObject*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMultiSkinObject* USkinnableStaticMeshComponent::GetSkinObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSkinsCommon.SkinnableStaticMeshComponent.GetSkinObject");

	struct
	{
		class UMultiSkinObject*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
