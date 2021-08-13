// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BuyMenu_ItemInfoPanel_UpgradeEntry.WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C.Set From Item
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopSubItem            Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Upgrade_Level                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Owned_Level                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Affordable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Base_Item_Equipped             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C::Set_From_Item(const struct FShopSubItem& Item, int Upgrade_Level, int Owned_Level, bool Affordable, bool Base_Item_Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_UpgradeEntry.WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C.Set From Item");

	struct
	{
		struct FShopSubItem            Item;
		int                            Upgrade_Level;
		int                            Owned_Level;
		bool                           Affordable;
		bool                           Base_Item_Equipped;
	} params;

	params.Item = Item;
	params.Upgrade_Level = Upgrade_Level;
	params.Owned_Level = Owned_Level;
	params.Affordable = Affordable;
	params.Base_Item_Equipped = Base_Item_Equipped;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_UpgradeEntry.WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_UpgradeEntry.WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_UpgradeEntry.WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C.ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel_UpgradeEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C::ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel_UpgradeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_UpgradeEntry.WBP_BuyMenu_ItemInfoPanel_UpgradeEntry_C.ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel_UpgradeEntry");

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
