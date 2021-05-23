// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MRMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::StopReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.StopReconstruction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::StartReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.StartReconstruction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::PauseReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.PauseReconstruction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (FUNC_Native, FUNC_Public)

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UMRMeshComponent*        Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        Mesh;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Confidence                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature"));

	struct
	{
		int                            Index;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<float>                  Confidence;
	} params;

	params.Index = Index;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MRMeshComponent.IsConnected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMRMeshComponent::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.IsConnected"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMRMeshComponent::ForceNavMeshUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MRMeshComponent.Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMRMeshComponent::Clear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.Clear"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
