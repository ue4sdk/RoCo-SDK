// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReplenishModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplenishModInst.ReplenishModInst_C.Get Replenish Reload Info
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Can_Reload                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Ammo_Count                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EAmmoType                      Ammo_Type                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplenishModInst_C::Get_Replenish_Reload_Info(bool* Can_Reload, int* Ammo_Count, EAmmoType* Ammo_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.Get Replenish Reload Info");

	struct
	{
		bool                           Can_Reload;
		int                            Ammo_Count;
		EAmmoType                      Ammo_Type;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Can_Reload != nullptr)
		*Can_Reload = params.Can_Reload;
	if (Ammo_Count != nullptr)
		*Ammo_Count = params.Ammo_Count;
	if (Ammo_Type != nullptr)
		*Ammo_Type = params.Ammo_Type;
}


// Function ReplenishModInst.ReplenishModInst_C.GetWeaponToReplenish
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSWeapon*               Weapon_To_Replenish            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplenishModInst_C::GetWeaponToReplenish(class AKSWeapon** Weapon_To_Replenish)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.GetWeaponToReplenish");

	struct
	{
		class AKSWeapon*               Weapon_To_Replenish;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Weapon_To_Replenish != nullptr)
		*Weapon_To_Replenish = params.Weapon_To_Replenish;
}


// Function ReplenishModInst.ReplenishModInst_C.TryToReplenish
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplenishModInst_C::TryToReplenish()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.TryToReplenish");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplenishModInst.ReplenishModInst_C.ReloadAlert
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplenishModInst_C::ReloadAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.ReloadAlert");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplenishModInst.ReplenishModInst_C.OnDownOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplenishModInst_C::OnDownOther(class AKSCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.OnDownOther");

	struct
	{
		class AKSCharacter*            Other;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplenishModInst.ReplenishModInst_C.OnEliminateOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplenishModInst_C::OnEliminateOther(class AKSCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.OnEliminateOther");

	struct
	{
		class AKSCharacter*            Other;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplenishModInst.ReplenishModInst_C.OnAssistEliminateOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplenishModInst_C::OnAssistEliminateOther(class AKSCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.OnAssistEliminateOther");

	struct
	{
		class AKSCharacter*            Other;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplenishModInst.ReplenishModInst_C.ExecuteUbergraph_ReplenishModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplenishModInst_C::ExecuteUbergraph_ReplenishModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplenishModInst.ReplenishModInst_C.ExecuteUbergraph_ReplenishModInst");

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
