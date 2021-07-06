// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StorePriceDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StorePriceDisplay.WBP_StorePriceDisplay_C.SetStorePrices
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_StoreItemPrice*> Prices                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<class UPUMG_PortalOffer*> PortalOffers                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StorePriceDisplay_C::SetStorePrices(class UPUMG_StoreItem* StoreItem, TArray<class UPUMG_StoreItemPrice*>* Prices, TArray<class UPUMG_PortalOffer*>* PortalOffers)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePriceDisplay.WBP_StorePriceDisplay_C.SetStorePrices");

	struct
	{
		TArray<class UPUMG_StoreItemPrice*> Prices;
		TArray<class UPUMG_PortalOffer*> PortalOffers;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);

	if (Prices != nullptr)
		*Prices = params.Prices;
	if (PortalOffers != nullptr)
		*PortalOffers = params.PortalOffers;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
