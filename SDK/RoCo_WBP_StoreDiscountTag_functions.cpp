// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreDiscountTag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetSaleMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreDiscountTag_C::SetSaleMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetSaleMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreDiscountTag_C::SetDiscountPercentage(int Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage");

	struct
	{
		int                            Percentage;
	} params;

	params.Percentage = Percentage;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
