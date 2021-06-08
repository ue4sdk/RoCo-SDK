// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BuyMenuItemWidgetInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerShop*           Player_Shop                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenuItemWidgetInterface_C::RefreshData(class AKSPlayerShop* Player_Shop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData");

	struct
	{
		class AKSPlayerShop*           Player_Shop;
	} params;

	params.Player_Shop = Player_Shop;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenuItemWidgetInterface_C::PurchaseAcknowledge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenuItemWidgetInterface_C::Get_Shop_Item_Type(EShopItemType* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type");

	struct
	{
		EShopItemType                  Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
