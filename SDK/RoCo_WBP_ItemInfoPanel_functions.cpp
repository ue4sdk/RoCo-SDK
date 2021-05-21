// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemInfoPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemInfoPanel.WBP_ItemInfoPanel_C.SetInfoFieldData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPlayerAccountSlot             ItemSlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoPanel_C::SetInfoFieldData(class UPlatformInventoryItem* CosmeticItem, EPlayerAccountSlot ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel.WBP_ItemInfoPanel_C.SetInfoFieldData");

	struct
	{
		class UPlatformInventoryItem*  CosmeticItem;
		EPlayerAccountSlot             ItemSlot;
	} params;

	params.CosmeticItem = CosmeticItem;
	params.ItemSlot = ItemSlot;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
