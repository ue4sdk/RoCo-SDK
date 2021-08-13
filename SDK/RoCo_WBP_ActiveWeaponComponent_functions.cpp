// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ActiveWeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetAmmoInClipDisplaySize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::SetAmmoInClipDisplaySize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetAmmoInClipDisplaySize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetClipCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::SetClipCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetClipCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.DetermineLowAmmo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::DetermineLowAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.DetermineLowAmmo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.OnAmmoChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveWeaponComponent_C::OnAmmoChange(class UKSWeaponComponent* WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.OnAmmoChange");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
	} params;

	params.WeaponComponent = WeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetReserveAmmo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReserveAmmo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveWeaponComponent_C::SetReserveAmmo(int ReserveAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.SetReserveAmmo");

	struct
	{
		int                            ReserveAmmo;
	} params;

	params.ReserveAmmo = ReserveAmmo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PostSetActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PostSetActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PreClearActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.PreClearActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ActiveWeaponComponent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.ExecuteUbergraph_WBP_ActiveWeaponComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveWeaponComponent_C::ExecuteUbergraph_WBP_ActiveWeaponComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveWeaponComponent.WBP_ActiveWeaponComponent_C.ExecuteUbergraph_WBP_ActiveWeaponComponent");

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
