// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SeekerBow_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeekerBow_ABP.SeekerBow_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void USeekerBow_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function SeekerBow_ABP.SeekerBow_ABP_C.SetCombatState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECombatState                   CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USeekerBow_ABP_C::SetCombatState(ECombatState CombatState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.SetCombatState");

	struct
	{
		ECombatState                   CombatState;
	} params;

	params.CombatState = CombatState;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_ABP.SeekerBow_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USeekerBow_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_ABP.SeekerBow_ABP_C.SetWeaponState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      OwningWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USeekerBow_ABP_C::SetWeaponState(class UKSWeaponComponent* OwningWeaponComponent, EWeaponStateNew OldState, EWeaponStateNew NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.SetWeaponState");

	struct
	{
		class UKSWeaponComponent*      OwningWeaponComponent;
		EWeaponStateNew                OldState;
		EWeaponStateNew                NewState;
	} params;

	params.OwningWeaponComponent = OwningWeaponComponent;
	params.OldState = OldState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_ABP.SeekerBow_ABP_C.AnimNotify_ArrowHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USeekerBow_ABP_C::AnimNotify_ArrowHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.AnimNotify_ArrowHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_ABP.SeekerBow_ABP_C.AnimNotify_ArrowUnHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USeekerBow_ABP_C::AnimNotify_ArrowUnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.AnimNotify_ArrowUnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_ABP.SeekerBow_ABP_C.ExecuteUbergraph_SeekerBow_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USeekerBow_ABP_C::ExecuteUbergraph_SeekerBow_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_ABP.SeekerBow_ABP_C.ExecuteUbergraph_SeekerBow_ABP");

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
