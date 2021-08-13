// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BuyMenuItemUpgradeSegment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.SetState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopSubItem            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           IsNextUpgrade                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Base_Purchased                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Base_Equipped                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsAffordable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenuItemUpgradeSegment_C::SetState(const struct FShopSubItem& Upgrade, bool IsNextUpgrade, bool Base_Purchased, bool Base_Equipped, bool IsAffordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.SetState");

	struct
	{
		struct FShopSubItem            Upgrade;
		bool                           IsNextUpgrade;
		bool                           Base_Purchased;
		bool                           Base_Equipped;
		bool                           IsAffordable;
	} params;

	params.Upgrade = Upgrade;
	params.IsNextUpgrade = IsNextUpgrade;
	params.Base_Purchased = Base_Purchased;
	params.Base_Equipped = Base_Equipped;
	params.IsAffordable = IsAffordable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.Play Purchase Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemUpgradeSegment_C::Play_Purchase_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.Play Purchase Animation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.Skip Purchase Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemUpgradeSegment_C::Skip_Purchase_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.Skip Purchase Animation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.Undo Purchase Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemUpgradeSegment_C::Undo_Purchase_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.Undo Purchase Animation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.ExecuteUbergraph_WBP_BuyMenuItemUpgradeSegment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenuItemUpgradeSegment_C::ExecuteUbergraph_WBP_BuyMenuItemUpgradeSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemUpgradeSegment.WBP_BuyMenuItemUpgradeSegment_C.ExecuteUbergraph_WBP_BuyMenuItemUpgradeSegment");

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
