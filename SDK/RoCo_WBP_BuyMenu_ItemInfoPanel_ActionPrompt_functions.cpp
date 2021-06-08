// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BuyMenu_ItemInfoPanel_ActionPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.SetVisualState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               Shop_Item                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Affordable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenu_ItemInfoPanel_ActionPrompt_C::SetVisualState(const struct FShopItem& Shop_Item, bool Affordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.SetVisualState");

	struct
	{
		struct FShopItem               Shop_Item;
		bool                           Affordable;
	} params;

	params.Shop_Item = Shop_Item;
	params.Affordable = Affordable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BuyMenu_ItemInfoPanel_ActionPrompt_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BuyMenu_ItemInfoPanel_ActionPrompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_ActionPrompt_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_ActionPrompt_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel_ActionPrompt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BuyMenu_ItemInfoPanel_ActionPrompt_C::ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel_ActionPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BuyMenu_ItemInfoPanel_ActionPrompt.WBP_BuyMenu_ItemInfoPanel_ActionPrompt_C.ExecuteUbergraph_WBP_BuyMenu_ItemInfoPanel_ActionPrompt");

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
