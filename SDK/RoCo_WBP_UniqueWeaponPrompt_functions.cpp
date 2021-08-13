// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_UniqueWeaponPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.CleanUpWeaponPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      InactiveWeapon                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::CleanUpWeaponPrompt(class UKSWeaponComponent* InactiveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.CleanUpWeaponPrompt");

	struct
	{
		class UKSWeaponComponent*      InactiveWeapon;
	} params;

	params.InactiveWeapon = InactiveWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.SetUpWeaponPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      ActiveWeapon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::SetUpWeaponPrompt(class UKSWeaponComponent* ActiveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.SetUpWeaponPrompt");

	struct
	{
		class UKSWeaponComponent*      ActiveWeapon;
	} params;

	params.ActiveWeapon = ActiveWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.Finished_004258744317629FEEB1E5873FEB9A5D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_UniqueWeaponPrompt_C::Finished_004258744317629FEEB1E5873FEB9A5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.Finished_004258744317629FEEB1E5873FEB9A5D");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.EquipmentAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      AddedEquipment                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::EquipmentAdded(class UKSWeaponComponent* AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.EquipmentAdded");

	struct
	{
		class UKSWeaponComponent*      AddedEquipment;
	} params;

	params.AddedEquipment = AddedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.EquipmentRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      RemovedEquipment               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.EquipmentRemoved");

	struct
	{
		class UKSWeaponComponent*      RemovedEquipment;
	} params;

	params.RemovedEquipment = RemovedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.AddActiveWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      ActiveWeapon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::AddActiveWeapon(class UKSWeaponComponent* ActiveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.AddActiveWeapon");

	struct
	{
		class UKSWeaponComponent*      ActiveWeapon;
	} params;

	params.ActiveWeapon = ActiveWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.WeaponWithPromptChangedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::WeaponWithPromptChangedState(class UKSWeaponComponent* WeaponComponent, EWeaponStateNew OldState, EWeaponStateNew NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.WeaponWithPromptChangedState");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
		EWeaponStateNew                OldState;
		EWeaponStateNew                NewState;
	} params;

	params.WeaponComponent = WeaponComponent;
	params.OldState = OldState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.OnRoundOver
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_UniqueWeaponPrompt_C::OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.OnRoundOver");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.RemoveInactiveWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      InactiveWeapon                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::RemoveInactiveWeapon(class UKSWeaponComponent* InactiveWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.RemoveInactiveWeapon");

	struct
	{
		class UKSWeaponComponent*      InactiveWeapon;
	} params;

	params.InactiveWeapon = InactiveWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.BulwarkSidearmFailedToFire
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSAbilityUsageFailureType     FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::BulwarkSidearmFailedToFire(class AKSWeapon* Weapon, EKSAbilityUsageFailureType FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.BulwarkSidearmFailedToFire");

	struct
	{
		class AKSWeapon*               Weapon;
		EKSAbilityUsageFailureType     FailureType;
	} params;

	params.Weapon = Weapon;
	params.FailureType = FailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.ExecuteUbergraph_WBP_UniqueWeaponPrompt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_UniqueWeaponPrompt_C::ExecuteUbergraph_WBP_UniqueWeaponPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_UniqueWeaponPrompt.WBP_UniqueWeaponPrompt_C.ExecuteUbergraph_WBP_UniqueWeaponPrompt");

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
