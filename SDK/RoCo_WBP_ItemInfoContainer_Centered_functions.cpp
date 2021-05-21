// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemInfoContainer_Centered_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemInfoContainer_Centered_C::Refresh_Rarity_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   RarityTag                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemInfoContainer_Centered_C::SetItemRarityInfo(const struct FGameplayTagContainer& RarityTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo");

	struct
	{
		struct FGameplayTagContainer   RarityTag;
	} params;

	params.RarityTag = RarityTag;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Quantity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoContainer_Centered_C::SetInfoFieldData(class UPUMG_StoreItem* StoreItem, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
		int                            Quantity;
	} params;

	params.StoreItem = StoreItem;
	params.Quantity = Quantity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemInfoContainer_Centered_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoContainer_Centered_C::ExecuteUbergraph_WBP_ItemInfoContainer_Centered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered");

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
