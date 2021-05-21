// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreItemInterior_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPlatformInventoryItem*  InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSoftObjectPath         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FSoftObjectPath UWBP_StoreItemInterior_C::GetStoreIconForSize(class UPlatformInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize");

	struct
	{
		class UPlatformInventoryItem*  InventoryItem;
		struct FSoftObjectPath         ReturnValue;
	} params;

	params.InventoryItem = InventoryItem;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreItemInterior_C::SetRarityDisplay(class UPlatformInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay");

	struct
	{
		class UPlatformInventoryItem*  InventoryItem;
	} params;

	params.InventoryItem = InventoryItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSStorePanelItem*       StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreItemInterior_C::SetStoreItem(class UKSStorePanelItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem");

	struct
	{
		class UKSStorePanelItem*       StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StoreItemInterior_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreItemInterior_C::OnParentHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreItemInterior_C::OnParentUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreItemInterior_C::ExecuteUbergraph_WBP_StoreItemInterior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior");

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
