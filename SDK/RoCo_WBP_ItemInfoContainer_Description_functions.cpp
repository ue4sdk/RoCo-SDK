// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemInfoContainer_Description_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetAlignment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemInfoContainer_Description_C::SetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetAlignment"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetItemRarityInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoContainer_Description_C::SetItemRarityInfo(class UPlatformInventoryItem* CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetItemRarityInfo"));

	struct
	{
		class UPlatformInventoryItem*  CosmeticItem;
	} params;

	params.CosmeticItem = CosmeticItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetInfoFieldData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Quantity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoContainer_Description_C::SetInfoFieldData(class UPUMG_StoreItem* StoreItem, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetInfoFieldData"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
		int                            Quantity;
	} params;

	params.StoreItem = StoreItem;
	params.Quantity = Quantity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemInfoContainer_Description_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemInfoContainer_Description_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.ExecuteUbergraph_WBP_ItemInfoContainer_Description
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoContainer_Description_C::ExecuteUbergraph_WBP_ItemInfoContainer_Description(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.ExecuteUbergraph_WBP_ItemInfoContainer_Description"));

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
