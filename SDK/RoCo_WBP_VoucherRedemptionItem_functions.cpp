// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VoucherRedemptionItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.SetPanelDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VoucherRedemptionItem_C::SetPanelDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.SetPanelDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VoucherRedemptionItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.ExecuteUbergraph_WBP_VoucherRedemptionItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoucherRedemptionItem_C::ExecuteUbergraph_WBP_VoucherRedemptionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.ExecuteUbergraph_WBP_VoucherRedemptionItem"));

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
