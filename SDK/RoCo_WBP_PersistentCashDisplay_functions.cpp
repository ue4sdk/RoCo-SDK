// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PersistentCashDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PersistentCashDisplay.WBP_PersistentCashDisplay_C.SetCurrentCash
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewCashTotal                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CashChange                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PersistentCashDisplay_C::SetCurrentCash(int NewCashTotal, int CashChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersistentCashDisplay.WBP_PersistentCashDisplay_C.SetCurrentCash");

	struct
	{
		int                            NewCashTotal;
		int                            CashChange;
	} params;

	params.NewCashTotal = NewCashTotal;
	params.CashChange = CashChange;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
