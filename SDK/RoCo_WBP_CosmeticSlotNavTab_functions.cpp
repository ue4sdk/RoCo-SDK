// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CosmeticSlotNavTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CosmeticSlotNavTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C.ExecuteUbergraph_WBP_CosmeticSlotNavTab
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CosmeticSlotNavTab_C::ExecuteUbergraph_WBP_CosmeticSlotNavTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C.ExecuteUbergraph_WBP_CosmeticSlotNavTab"));

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
