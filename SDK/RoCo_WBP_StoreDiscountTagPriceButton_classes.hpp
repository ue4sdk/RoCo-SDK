#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreDiscountTagPriceButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_StoreDiscountTagPriceButton.WBP_StoreDiscountTagPriceButton_C
// 0x0008 (0x0240 - 0x0238)
class UWBP_StoreDiscountTagPriceButton_C : public UUserWidget
{
public:
	class UTextBlock*                                  DiscountTag;                                              // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_StoreDiscountTagPriceButton.WBP_StoreDiscountTagPriceButton_C");
		return ptr;
	}


	void SetSaleMessage();
	void SetDiscountPercentage(int Percentage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
