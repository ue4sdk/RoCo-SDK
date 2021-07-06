// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StorePriceTag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice*    PriceInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_PortalOffer*       PortalOffer                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PurchaseQuantity               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StorePriceTag_C::SetPriceDisplay(class UPUMG_StoreItemPrice* PriceInfo, class UPUMG_PortalOffer* PortalOffer, int PurchaseQuantity, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay");

	struct
	{
		class UPUMG_StoreItemPrice*    PriceInfo;
		class UPUMG_PortalOffer*       PortalOffer;
		int                            PurchaseQuantity;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.PriceInfo = PriceInfo;
	params.PortalOffer = PortalOffer;
	params.PurchaseQuantity = PurchaseQuantity;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
