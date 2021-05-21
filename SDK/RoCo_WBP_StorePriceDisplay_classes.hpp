#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StorePriceDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C
// 0x0008 (0x0240 - 0x0238)
class UWBP_StorePriceDisplay_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PricesBox;                                                // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C");
		return ptr;
	}


	void SetStorePrices(class UPUMG_StoreItem* StoreItem, TArray<class UPUMG_StoreItemPrice*>* Prices, TArray<class UPUMG_PortalOffer*>* PortalOffers);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
