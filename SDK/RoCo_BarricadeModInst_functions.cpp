// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarricadeModInst.BarricadeModInst_C.OnFullyCharged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBarricadeModInst_C::OnFullyCharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeModInst.BarricadeModInst_C.OnFullyCharged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeModInst.BarricadeModInst_C.BuildSpawned
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSBuild*                SpawnedBuild                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBarricadeModInst_C::BuildSpawned(class AKSBuild* SpawnedBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeModInst.BarricadeModInst_C.BuildSpawned");

	struct
	{
		class AKSBuild*                SpawnedBuild;
	} params;

	params.SpawnedBuild = SpawnedBuild;

	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeModInst.BarricadeModInst_C.BuildDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBarricadeModInst_C::BuildDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeModInst.BarricadeModInst_C.BuildDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeModInst.BarricadeModInst_C.BuildComponentDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSBuild*                Build                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     DestroyedComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBarricadeModInst_C::BuildComponentDestroyed(class AKSBuild* Build, class UPrimitiveComponent* DestroyedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeModInst.BarricadeModInst_C.BuildComponentDestroyed");

	struct
	{
		class AKSBuild*                Build;
		class UPrimitiveComponent*     DestroyedComponent;
	} params;

	params.Build = Build;
	params.DestroyedComponent = DestroyedComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeModInst.BarricadeModInst_C.ExecuteUbergraph_BarricadeModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBarricadeModInst_C::ExecuteUbergraph_BarricadeModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeModInst.BarricadeModInst_C.ExecuteUbergraph_BarricadeModInst");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
