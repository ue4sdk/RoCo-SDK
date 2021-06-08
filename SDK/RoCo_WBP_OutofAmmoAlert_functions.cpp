// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_OutofAmmoAlert_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.IsValidWeaponType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsValidWeaponType              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_OutOfAmmoAlert_C::IsValidWeaponType(bool* IsValidWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.IsValidWeaponType");

	struct
	{
		bool                           IsValidWeaponType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.HandleAmmoChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_OutOfAmmoAlert_C::HandleAmmoChanged(class UKSWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.HandleAmmoChanged");

	struct
	{
		class UKSWeaponComponent*      Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.BindToAmmoUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::BindToAmmoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.BindToAmmoUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PostSetActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PostSetActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PreClearActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.PreClearActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_OutOfAmmoAlert_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.ExecuteUbergraph_WBP_OutOfAmmoAlert
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_OutOfAmmoAlert_C::ExecuteUbergraph_WBP_OutOfAmmoAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C.ExecuteUbergraph_WBP_OutOfAmmoAlert");

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
