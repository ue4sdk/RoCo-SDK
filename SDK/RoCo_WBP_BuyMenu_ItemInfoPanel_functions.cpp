// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BuyMenu_ItemInfoPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.Update Stat Bar Count
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            New_Instance_Count             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_C::Update_Stat_Bar_Count(int New_Instance_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.Update Stat Bar Count");

	struct
	{
		int                            New_Instance_Count;
	} params;

	params.New_Instance_Count = New_Instance_Count;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.Set From Item
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               Shop_Item                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsAffordable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsToggleItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            OverrideCurrIndex              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_C::Set_From_Item(const struct FShopItem& Shop_Item, bool IsAffordable, bool IsToggleItem, bool IsLocked, int OverrideCurrIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.Set From Item");

	struct
	{
		struct FShopItem               Shop_Item;
		bool                           IsAffordable;
		bool                           IsToggleItem;
		bool                           IsLocked;
		int                            OverrideCurrIndex;
	} params;

	params.Shop_Item = Shop_Item;
	params.IsAffordable = IsAffordable;
	params.IsToggleItem = IsToggleItem;
	params.IsLocked = IsLocked;
	params.OverrideCurrIndex = OverrideCurrIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.Handle Purchase Level Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenu_ItemInfoPanel_C::Handle_Purchase_Level_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.Handle Purchase Level Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_C::ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel.WBP_BuyMenu_ItemInfoPanel_C.ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel");

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
