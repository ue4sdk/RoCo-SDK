// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SeekerBow_WeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.VOAbilityC_Fire
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USeekerBow_WeaponComponent_C::VOAbilityC_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.VOAbilityC_Fire");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.VOAbilityB_MaxDraw
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USeekerBow_WeaponComponent_C::VOAbilityB_MaxDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.VOAbilityB_MaxDraw");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.VOAbilityA_Equip
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USeekerBow_WeaponComponent_C::VOAbilityA_Equip()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.VOAbilityA_Equip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.Set Combat State
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECombatState                   bpp__NewxCombatxState__pfTT    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USeekerBow_WeaponComponent_C::Set_Combat_State(ECombatState bpp__NewxCombatxState__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.Set Combat State");

	struct
	{
		ECombatState                   bpp__NewxCombatxState__pfTT;
	} params;

	params.bpp__NewxCombatxState__pfTT = bpp__NewxCombatxState__pfTT;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.MaxDrawFullyCookSFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USeekerBow_WeaponComponent_C::MaxDrawFullyCookSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.MaxDrawFullyCookSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.IsSwimming
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bIsSwimming__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USeekerBow_WeaponComponent_C::IsSwimming(bool bpp__bIsSwimming__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.IsSwimming");

	struct
	{
		bool                           bpp__bIsSwimming__pf;
	} params;

	params.bpp__bIsSwimming__pf = bpp__bIsSwimming__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.CustomEvent_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USeekerBow_WeaponComponent_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.CustomEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.OnSwimmingChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__bIsSwimming__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USeekerBow_WeaponComponent_C::OnSwimmingChanged__DelegateSignature(bool bpp__bIsSwimming__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction SeekerBow_WeaponComponent.SeekerBow_WeaponComponent_C.OnSwimmingChanged__DelegateSignature");

	struct
	{
		bool                           bpp__bIsSwimming__pf;
	} params;

	params.bpp__bIsSwimming__pf = bpp__bIsSwimming__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
