// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InWorld_ReticleComponents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetWeaponComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_ReticleComponents_C::SetWeaponComponent(class UKSWeaponComponent* WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
	} params;

	params.WeaponComponent = WeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetPlayerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_ReticleComponents_C::SetPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetPlayerState");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetAmmoColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InWorld_ReticleComponents_C::SetAmmoColor(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetAmmoColor");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnPossession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_ReticleComponents_C::OnPossession(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnPossession");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnWeaponSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_ReticleComponents_C::OnWeaponSet(class UKSWeaponComponent* WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnWeaponSet");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
	} params;

	params.WeaponComponent = WeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InWorld_ReticleComponents_C::OnModActivated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnModActivated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InWorld_ReticleComponents_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InWorld_ReticleComponents_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.ExecuteUbergraph_WBP_InWorld_ReticleComponents
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_ReticleComponents_C::ExecuteUbergraph_WBP_InWorld_ReticleComponents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.ExecuteUbergraph_WBP_InWorld_ReticleComponents");

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
