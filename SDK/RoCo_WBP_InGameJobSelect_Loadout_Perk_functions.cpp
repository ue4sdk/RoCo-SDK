// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_Loadout_Perk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.Get Shop Item Type
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_Perk_C::Get_Shop_Item_Type(EShopItemType* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.Get Shop Item Type");

	struct
	{
		EShopItemType                  Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.SetItemSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_Perk_C::SetItemSlot(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.SetItemSlot");

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.PurchaseAcknowledge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_Perk_C::PurchaseAcknowledge()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.PurchaseAcknowledge");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.RefreshData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerShop*           Player_Shop                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_Perk_C::RefreshData(class AKSPlayerShop* Player_Shop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.RefreshData");

	struct
	{
		class AKSPlayerShop*           Player_Shop;
	} params;

	params.Player_Shop = Player_Shop;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_Perk_C::ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_Perk_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.OnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_Perk_C::OnHovered__DelegateSignature(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C.OnHovered__DelegateSignature");

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
