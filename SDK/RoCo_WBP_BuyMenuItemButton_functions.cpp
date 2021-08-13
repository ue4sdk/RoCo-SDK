// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BuyMenuItemButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Refresh Action Prompt Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::Refresh_Action_Prompt_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Refresh Action Prompt Visibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GetPurchaseLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsMaxed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenuItemButton_C::GetPurchaseLevel(int* Return_Value, bool* IsMaxed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GetPurchaseLevel");

	struct
	{
		int                            Return_Value;
		bool                           IsMaxed;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (IsMaxed != nullptr)
		*IsMaxed = params.IsMaxed;
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.IsPurchased
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenuItemButton_C::IsPurchased(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.IsPurchased");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.IsEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenuItemButton_C::IsEquipped(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.IsEquipped");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GetHitTarget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UButton*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UButton* UWBP_BuyMenuItemButton_C::GetHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GetHitTarget");

	struct
	{
		class UButton*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::ButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::ButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::ButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.DisplayShopItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ShopItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsAffordable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsToggleSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsSwapDisplay                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenuItemButton_C::DisplayShopItem(const struct FShopItem& ShopItem, bool IsAffordable, bool IsToggleSlot, bool IsSwapDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.DisplayShopItem");

	struct
	{
		struct FShopItem               ShopItem;
		bool                           IsAffordable;
		bool                           IsToggleSlot;
		bool                           IsSwapDisplay;
	} params;

	params.ShopItem = ShopItem;
	params.IsAffordable = IsAffordable;
	params.IsToggleSlot = IsToggleSlot;
	params.IsSwapDisplay = IsSwapDisplay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonPressed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::ButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Pressed State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::Pressed_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Pressed State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Unpressed State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::Unpressed_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.Unpressed State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::ButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ButtonReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.NavigateConfirmCancelled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BuyMenuItemButton_C::NavigateConfirmCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.NavigateConfirmCancelled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ExecuteUbergraph_WBP_BuyMenuItemButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenuItemButton_C::ExecuteUbergraph_WBP_BuyMenuItemButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenuItemButton.WBP_BuyMenuItemButton_C.ExecuteUbergraph_WBP_BuyMenuItemButton");

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
