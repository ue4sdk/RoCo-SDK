// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BoosterInventoryItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BoosterInventoryItem_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BoosterInventoryItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BoosterInventoryItem_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BoosterInventoryItem_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.BndEvt__WBP_ButtonSlot_Cosmetic_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BoosterInventoryItem_C::BndEvt__WBP_ButtonSlot_Cosmetic_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.BndEvt__WBP_ButtonSlot_Cosmetic_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.View_SetFromItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FAccountConsumableDetails ItemDetails                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_BoosterInventoryItem_C::View_SetFromItem(const struct FAccountConsumableDetails& ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.View_SetFromItem"));

	struct
	{
		struct FAccountConsumableDetails ItemDetails;
	} params;

	params.ItemDetails = ItemDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.PlayBoostConfirmationSound
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BoosterInventoryItem_C::PlayBoostConfirmationSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.PlayBoostConfirmationSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.ExecuteUbergraph_WBP_BoosterInventoryItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BoosterInventoryItem_C::ExecuteUbergraph_WBP_BoosterInventoryItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.ExecuteUbergraph_WBP_BoosterInventoryItem"));

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
