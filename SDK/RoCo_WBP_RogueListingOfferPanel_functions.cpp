// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueListingOfferPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.SetItemDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSCurrency*             KSCurrency                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListingOfferPanel_C::SetItemDisplay(class UKSCurrency* KSCurrency, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.SetItemDisplay");

	struct
	{
		class UKSCurrency*             KSCurrency;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.KSCurrency = KSCurrency;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueListingOfferPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueListingOfferPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueListingOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueListingOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RogueListingOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListingOfferPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListingOfferPanel_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.ExecuteUbergraph_WBP_RogueListingOfferPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListingOfferPanel_C::ExecuteUbergraph_WBP_RogueListingOfferPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.ExecuteUbergraph_WBP_RogueListingOfferPanel");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.OnOfferClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListingOfferPanel_C::OnOfferClicked__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.OnOfferClicked__DelegateSignature");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
