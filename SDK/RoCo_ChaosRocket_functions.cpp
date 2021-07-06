// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosRocket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChaosRocket.ChaosRocket_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AChaosRocket_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocket.ChaosRocket_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChaosRocket.ChaosRocket_C.OnProjectileStopped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AChaosRocket_C::OnProjectileStopped(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocket.ChaosRocket_C.OnProjectileStopped");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChaosRocket.ChaosRocket_C.ProjectileStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AChaosRocket_C::ProjectileStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocket.ChaosRocket_C.ProjectileStopped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocket.ChaosRocket_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AChaosRocket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocket.ChaosRocket_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocket.ChaosRocket_C.ExecuteUbergraph_ChaosRocket
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocket_C::ExecuteUbergraph_ChaosRocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocket.ChaosRocket_C.ExecuteUbergraph_ChaosRocket");

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
