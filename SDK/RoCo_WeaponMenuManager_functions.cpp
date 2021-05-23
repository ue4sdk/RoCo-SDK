// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WeaponMenuManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMenuManager.WeaponMenuManager_C.IsFocusEnabled
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWeaponMenuManager_C::IsFocusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.IsFocusEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WeaponMenuManager.WeaponMenuManager_C.Close All
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMenuManager_C::Close_All()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.Close All"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponMenuManager.WeaponMenuManager_C.PostSetWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponMenuManager_C::PostSetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.PostSetWeapon"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponMenuManager.WeaponMenuManager_C.OtherWeaponUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponMenuManager_C::OtherWeaponUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.OtherWeaponUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponMenuManager.WeaponMenuManager_C.PreClearWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponMenuManager_C::PreClearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.PreClearWeapon"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponMenuManager.WeaponMenuManager_C.InventoryChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMenuManager_C::InventoryChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.InventoryChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponMenuManager.WeaponMenuManager_C.Display Target List
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon_Targeted*      TargetingWeapon                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AActor*>          PotentialTargets               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWeaponMenuManager_C::Display_Target_List(class AKSWeapon_Targeted* TargetingWeapon, TArray<class AActor*> PotentialTargets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.Display Target List"));

	struct
	{
		class AKSWeapon_Targeted*      TargetingWeapon;
		TArray<class AActor*>          PotentialTargets;
	} params;

	params.TargetingWeapon = TargetingWeapon;
	params.PotentialTargets = PotentialTargets;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponMenuManager.WeaponMenuManager_C.ExecuteUbergraph_WeaponMenuManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponMenuManager_C::ExecuteUbergraph_WeaponMenuManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuManager.WeaponMenuManager_C.ExecuteUbergraph_WeaponMenuManager"));

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
