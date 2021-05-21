// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueCutomizationSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetSelectedStoreItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::GetSelectedStoreItem(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetSelectedStoreItem");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StoreItem != nullptr)
		*StoreItem = params.StoreItem;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetPrimaryItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::GetPrimaryItem(class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetPrimaryItem");

	struct
	{
		class UKSItem*                 KSItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (KSItem != nullptr)
		*KSItem = params.KSItem;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.CanChangeTab
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueCutomizationSelector_C::CanChangeTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.CanChangeTab");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Create Cosmetic Item Selector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::Create_Cosmetic_Item_Selector(class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Create Cosmetic Item Selector");

	struct
	{
		class UKSItem*                 KSItem;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.KSItem = KSItem;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SoundPlayCosmeticEquip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMercCosmeticSlot              CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SoundPlayCosmeticEquip(EMercCosmeticSlot CosmeticType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SoundPlayCosmeticEquip");

	struct
	{
		EMercCosmeticSlot              CosmeticType;
	} params;

	params.CosmeticType = CosmeticType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetActiveTabFocusGroup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ActiveTabFocusGroup            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::GetActiveTabFocusGroup(int* ActiveTabFocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetActiveTabFocusGroup");

	struct
	{
		int                            ActiveTabFocusGroup;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ActiveTabFocusGroup != nullptr)
		*ActiveTabFocusGroup = params.ActiveTabFocusGroup;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ReevaluateGamepadTabImageVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ReevaluateGamepadTabImageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ReevaluateGamepadTabImageVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetAdjustedCosmeticSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPlatformInventoryItem*  OriginalItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EMercCosmeticSlot              OriginalCosmeticSlot           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EMercCosmeticSlot              AdjustedCosmeticSlot           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::GetAdjustedCosmeticSlot(class UPlatformInventoryItem* OriginalItem, EMercCosmeticSlot OriginalCosmeticSlot, EMercCosmeticSlot* AdjustedCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.GetAdjustedCosmeticSlot");

	struct
	{
		class UPlatformInventoryItem*  OriginalItem;
		EMercCosmeticSlot              OriginalCosmeticSlot;
		EMercCosmeticSlot              AdjustedCosmeticSlot;
	} params;

	params.OriginalItem = OriginalItem;
	params.OriginalCosmeticSlot = OriginalCosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	if (AdjustedCosmeticSlot != nullptr)
		*AdjustedCosmeticSlot = params.AdjustedCosmeticSlot;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddActiveCosmeticSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMercCosmeticSlot              NewCosmeticSlot                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::AddActiveCosmeticSlot(EMercCosmeticSlot NewCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddActiveCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              NewCosmeticSlot;
	} params;

	params.NewCosmeticSlot = NewCosmeticSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ChangeCosmeticSlotTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::ChangeCosmeticSlotTab(class UKSNavTabWidget* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ChangeCosmeticSlotTab");

	struct
	{
		class UKSNavTabWidget*         Tab;
	} params;

	params.Tab = Tab;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetupCosmeticSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::SetupCosmeticSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetupCosmeticSlots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSortRarityDescNameAsc
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueCutomizationSelector_C::OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSortRarityDescNameAsc");

	struct
	{
		class UWidget*                 LHS;
		class UWidget*                 RHS;
		bool                           ReturnValue;
	} params;

	params.LHS = LHS;
	params.RHS = RHS;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsEquipAllAllowed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanEquipAll                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueCutomizationSelector_C::IsEquipAllAllowed(class UKSItem* Item, bool* CanEquipAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsEquipAllAllowed");

	struct
	{
		class UKSItem*                 Item;
		bool                           CanEquipAll;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (CanEquipAll != nullptr)
		*CanEquipAll = params.CanEquipAll;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.DisplayEquipAllPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::DisplayEquipAllPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.DisplayEquipAllPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipAll
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnEquipAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipAll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_RogueCutomizationSelector_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteModel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetEmoteModel(class UKSItem* CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteModel");

	struct
	{
		class UKSItem*                 CosmeticItem;
	} params;

	params.CosmeticItem = CosmeticItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquippedItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEquipped                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetEquippedItem(bool IsEquipped, class UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot, class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquippedItem");

	struct
	{
		bool                           IsEquipped;
		class UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot;
		class UKSItem*                 KSItem;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.IsEquipped = IsEquipped;
	params.CosmeticItemSlot = CosmeticItemSlot;
	params.KSItem = KSItem;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetOwnedItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetOwnedItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetOwnedItem");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnPurchaseItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::OnPurchaseItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnPurchaseItem");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddClearCosmeticSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSortableGridPanel*    ItemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::AddClearCosmeticSlot(class UKSSortableGridPanel* ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddClearCosmeticSlot");

	struct
	{
		class UKSSortableGridPanel*    ItemContainer;
	} params;

	params.ItemContainer = ItemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEquipped                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueCutomizationSelector_C::IsItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsItemEquipped");

	struct
	{
		class UKSItem*                 KSItem;
		bool                           IsEquipped;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Active States
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemSelector_C* ActiveWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::Set_Active_States(class UWBP_KSCosmeticItemSelector_C* ActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Active States");

	struct
	{
		class UWBP_KSCosmeticItemSelector_C* ActiveWidget;
	} params;

	params.ActiveWidget = ActiveWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquipBtn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::SetEquipBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquipBtn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWingSuitModel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetWingSuitModel(class UKSItem* CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWingSuitModel");

	struct
	{
		class UKSItem*                 CosmeticItem;
	} params;

	params.CosmeticItem = CosmeticItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetSprayIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetSprayIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetSprayIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetModels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Skip_Character                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueCutomizationSelector_C::ResetModels(bool Skip_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetModels");

	struct
	{
		bool                           Skip_Character;
	} params;

	params.Skip_Character = Skip_Character;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetEmoteImage(class UKSItem* CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteImage");

	struct
	{
		class UKSItem*                 CosmeticItem;
	} params;

	params.CosmeticItem = CosmeticItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCharacter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWeapon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponSlot                    WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetWeapon(class UKSItem* CosmeticItem, class UKSJobItem* JobItem, EWeaponSlot WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWeapon");

	struct
	{
		class UKSItem*                 CosmeticItem;
		class UKSJobItem*              JobItem;
		EWeaponSlot                    WeaponSlot;
	} params;

	params.CosmeticItem = CosmeticItem;
	params.JobItem = JobItem;
	params.WeaponSlot = WeaponSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Model Viewer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticDetail                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::Set_Model_Viewer(class UPlatformInventoryItem* CosmeticItem, const struct FCosmeticSlotDetails& CosmeticDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Model Viewer");

	struct
	{
		class UPlatformInventoryItem*  CosmeticItem;
		struct FCosmeticSlotDetails    CosmeticDetail;
	} params;

	params.CosmeticItem = CosmeticItem;
	params.CosmeticDetail = CosmeticDetail;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCharacterSkin
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetCharacterSkin(class UKSItem* CosmeticItem, class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCharacterSkin");

	struct
	{
		class UKSItem*                 CosmeticItem;
		class UKSJobItem*              JobItem;
	} params;

	params.CosmeticItem = CosmeticItem;
	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueCutomizationSelector_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetContextBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.UpdateNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::UpdateNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.UpdateNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.RegisterNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::RegisterNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.RegisterNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCosmeticSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ResetCosmeticSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCosmeticSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCosmeticSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* CosmeticDisplayBtn             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::SetCosmeticSelection(class UWBP_KSCosmeticItemDisplay_C* CosmeticDisplayBtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCosmeticSelection");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* CosmeticDisplayBtn;
	} params;

	params.CosmeticDisplayBtn = CosmeticDisplayBtn;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ClearDataOnInitialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ClearDataOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ClearDataOnInitialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticDetails                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::OnHover(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHover");

	struct
	{
		struct FCosmeticSlotDetails    CosmeticDetails;
		class UPlatformInventoryItem*  PlatformItem;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.CosmeticDetails = CosmeticDetails;
	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSelectCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticDetails                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::OnSelectCosmetic(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSelectCosmetic");

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UPUMG_StoreItem*         StoreItem;
		class UWidget*                 Widget;
		struct FCosmeticSlotDetails    CosmeticDetails;
	} params;

	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;
	params.Widget = Widget;
	params.CosmeticDetails = CosmeticDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.EquipCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::EquipCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.EquipCosmetic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.On Close Button Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::On_Close_Button_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.On Close Button Clicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnItemGamepadHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueCutomizationSelector_C::OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnItemGamepadHovered");

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           bHovered;
	} params;

	params.Widget = Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Return To Job Preview Model
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::Return_To_Job_Preview_Model()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Return To Job Preview Model");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Hide Preview Character
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::Hide_Preview_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Hide Preview Character");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Show Preview Character
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::Show_Preview_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Show Preview Character");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ChangeToNewTab
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCutomizationSelector_C::ChangeToNewTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ChangeToNewTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ExecuteUbergraph_WBP_RogueCutomizationSelector
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::ExecuteUbergraph_WBP_RogueCutomizationSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ExecuteUbergraph_WBP_RogueCutomizationSelector");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipCosmeticItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMercCosmeticSlot              SlotType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SlotIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCutomizationSelector_C::OnEquipCosmeticItem__DelegateSignature(EMercCosmeticSlot SlotType, int SlotIndex, class UKSItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipCosmeticItem__DelegateSignature");

	struct
	{
		EMercCosmeticSlot              SlotType;
		int                            SlotIndex;
		class UKSItem*                 Item;
	} params;

	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
