// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Master_Melee_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Master_Melee_ABP.Master_Melee_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMaster_Melee_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_Melee_ABP.Master_Melee_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Master_Melee_ABP.Master_Melee_ABP_C.Set Weapon State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWeaponStateNew                Weapon_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaster_Melee_ABP_C::Set_Weapon_State(EWeaponStateNew Weapon_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_Melee_ABP.Master_Melee_ABP_C.Set Weapon State");

	struct
	{
		EWeaponStateNew                Weapon_State;
	} params;

	params.Weapon_State = Weapon_State;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_Melee_ABP.Master_Melee_ABP_C.InitSetWeaponState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWeaponStateNew                NewWeaponState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaster_Melee_ABP_C::InitSetWeaponState(EWeaponStateNew NewWeaponState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_Melee_ABP.Master_Melee_ABP_C.InitSetWeaponState");

	struct
	{
		EWeaponStateNew                NewWeaponState;
	} params;

	params.NewWeaponState = NewWeaponState;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_Melee_ABP.Master_Melee_ABP_C.ExecuteUbergraph_Master_Melee_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMaster_Melee_ABP_C::ExecuteUbergraph_Master_Melee_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_Melee_ABP.Master_Melee_ABP_C.ExecuteUbergraph_Master_Melee_ABP");

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
