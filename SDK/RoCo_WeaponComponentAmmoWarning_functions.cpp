// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WeaponComponentAmmoWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Get Ammo Warning Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   AmmoText                       (CPF_Parm, CPF_OutParm)

void UWeaponComponentAmmoWarning_C::Get_Ammo_Warning_Text(struct FText* AmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Get Ammo Warning Text");

	struct
	{
		struct FText                   AmmoText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AmmoText != nullptr)
		*AmmoText = params.AmmoText;
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Update Visibility And State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponComponentAmmoWarning_C::Update_Visibility_And_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.Update Visibility And State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponComponentAmmoWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponComponentAmmoWarning_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PawnHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponComponentAmmoWarning_C::PawnHealthChanged(class AKSCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PawnHealthChanged");

	struct
	{
		class AKSCharacterBase*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.AmmoStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponComponentAmmoWarning_C::AmmoStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.AmmoStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponComponentAmmoWarning_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.PostSetActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.ExecuteUbergraph_WeaponComponentAmmoWarning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponComponentAmmoWarning_C::ExecuteUbergraph_WeaponComponentAmmoWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponComponentAmmoWarning.WeaponComponentAmmoWarning_C.ExecuteUbergraph_WeaponComponentAmmoWarning");

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
