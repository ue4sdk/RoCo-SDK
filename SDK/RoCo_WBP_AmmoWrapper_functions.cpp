// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AmmoWrapper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_AmmoCount_C*> AmmoWidgtes                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_AmmoWrapper_C::GetAmmoWidgets(TArray<class UWBP_AmmoCount_C*>* AmmoWidgtes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets"));

	struct
	{
		TArray<class UWBP_AmmoCount_C*> AmmoWidgtes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AmmoWidgtes != nullptr)
		*AmmoWidgtes = params.AmmoWidgtes;
}


// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AmmoWrapper_C::OnAmmoChanged(class UKSWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged"));

	struct
	{
		class UKSWeaponComponent*      Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AmmoWrapper_C::SetInitialAmmoCount(class UKSWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount"));

	struct
	{
		class UKSWeaponComponent*      Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AmmoWrapper_C::AddAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
