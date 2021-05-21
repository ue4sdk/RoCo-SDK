// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryRewardIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetRewardItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryRewardIcon_C::SetRewardItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetRewardItem");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
