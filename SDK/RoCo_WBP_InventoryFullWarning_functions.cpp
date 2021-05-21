// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InventoryFullWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InventoryFullWarning_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeaponAssetDrop*      WeaponAssetDrop                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InventoryFullWarning_C::Handle_Inventory_Full(class AKSWeaponAssetDrop* WeaponAssetDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.Handle Inventory Full");

	struct
	{
		class AKSWeaponAssetDrop*      WeaponAssetDrop;
	} params;

	params.WeaponAssetDrop = WeaponAssetDrop;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InventoryFullWarning_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InventoryFullWarning_C::ExecuteUbergraph_WBP_InventoryFullWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InventoryFullWarning.WBP_InventoryFullWarning_C.ExecuteUbergraph_WBP_InventoryFullWarning");

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
