// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDrone_WeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnDroneDestroy__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UMedicDrone_WeaponComponent_C::OnDroneDestroy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnDroneDestroy__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.ReviveDroneAbilityStateChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EKSReviveDroneAbilityState     bpp__ReviveDroneState__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMedicDrone_WeaponComponent_C::ReviveDroneAbilityStateChanged(EKSReviveDroneAbilityState bpp__ReviveDroneState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.ReviveDroneAbilityStateChanged");

	struct
	{
		EKSReviveDroneAbilityState     bpp__ReviveDroneState__pf;
	} params;

	params.bpp__ReviveDroneState__pf = bpp__ReviveDroneState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnDroneDestroy
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMedicDrone_WeaponComponent_C::OnDroneDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnDroneDestroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.FindAndBindModInstance
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacter*            bpp__KSCharacter__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMedicDrone_WeaponComponent_C::FindAndBindModInstance(class AKSCharacter* bpp__KSCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.FindAndBindModInstance");

	struct
	{
		class AKSCharacter*            bpp__KSCharacter__pf;
	} params;

	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnReviveDroneAbilityStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// EKSReviveDroneAbilityState     bpp__ReviveDroneAbilityState__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMedicDrone_WeaponComponent_C::OnReviveDroneAbilityStateChanged__DelegateSignature(EKSReviveDroneAbilityState bpp__ReviveDroneAbilityState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnReviveDroneAbilityStateChanged__DelegateSignature");

	struct
	{
		EKSReviveDroneAbilityState     bpp__ReviveDroneAbilityState__pf;
	} params;

	params.bpp__ReviveDroneAbilityState__pf = bpp__ReviveDroneAbilityState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnModsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMedicDrone_WeaponComponent_C::OnModsUpdated__DelegateSignature(class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C.OnModsUpdated__DelegateSignature");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
