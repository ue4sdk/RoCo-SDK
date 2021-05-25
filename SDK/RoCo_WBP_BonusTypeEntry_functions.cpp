// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BonusTypeEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.DisplayEventDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BonusTypeEntry_C::DisplayEventDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.DisplayEventDetails");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BonusTypeEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.ExecuteUbergraph_WBP_BonusTypeEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BonusTypeEntry_C::ExecuteUbergraph_WBP_BonusTypeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.ExecuteUbergraph_WBP_BonusTypeEntry");

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
