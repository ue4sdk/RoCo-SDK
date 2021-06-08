// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ResupplyCrate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResupplyCrate.ResupplyCrate_C.CheckNetRelevance
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AActor*                  Viewer                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AResupplyCrate_C::CheckNetRelevance(class AActor* Viewer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyCrate.ResupplyCrate_C.CheckNetRelevance");

	struct
	{
		class AActor*                  Viewer;
		bool                           ReturnValue;
	} params;

	params.Viewer = Viewer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResupplyCrate.ResupplyCrate_C.CheckOverlapRelevance
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AActor*                  OverlappingActor               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AResupplyCrate_C::CheckOverlapRelevance(class AActor* OverlappingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyCrate.ResupplyCrate_C.CheckOverlapRelevance");

	struct
	{
		class AActor*                  OverlappingActor;
		bool                           ReturnValue;
	} params;

	params.OverlappingActor = OverlappingActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResupplyCrate.ResupplyCrate_C.OnPickedUp
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PickingUpActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AResupplyCrate_C::OnPickedUp(class AActor* PickingUpActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyCrate.ResupplyCrate_C.OnPickedUp");

	struct
	{
		class AActor*                  PickingUpActor;
	} params;

	params.PickingUpActor = PickingUpActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ResupplyCrate.ResupplyCrate_C.OnProximityOverlap
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKSActorProximityInfo   ProximityInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AResupplyCrate_C::OnProximityOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FKSActorProximityInfo& ProximityInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyCrate.ResupplyCrate_C.OnProximityOverlap");

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComponent;
		struct FKSActorProximityInfo   ProximityInfo;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.ProximityInfo = ProximityInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ResupplyCrate.ResupplyCrate_C.ExecuteUbergraph_ResupplyCrate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AResupplyCrate_C::ExecuteUbergraph_ResupplyCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyCrate.ResupplyCrate_C.ExecuteUbergraph_ResupplyCrate");

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
