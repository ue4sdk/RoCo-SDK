// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassOfferPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BattlePassOfferPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.Display Battle Pass Bundle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         Bundle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOfferPanel_C::Display_Battle_Pass_Bundle(class UPUMG_StoreItem* Bundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.Display Battle Pass Bundle");

	struct
	{
		class UPUMG_StoreItem*         Bundle;
	} params;

	params.Bundle = Bundle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_BattlePassOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.OnGamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassOfferPanel_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.OnGamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassOfferPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassOfferPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.ExecuteUbergraph_WBP_BattlePassOfferPanel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOfferPanel_C::ExecuteUbergraph_WBP_BattlePassOfferPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.ExecuteUbergraph_WBP_BattlePassOfferPanel");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.OnOfferPanelClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         BattlePassOffer                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOfferPanel_C::OnOfferPanelClicked__DelegateSignature(class UPUMG_StoreItem* BattlePassOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.OnOfferPanelClicked__DelegateSignature");

	struct
	{
		class UPUMG_StoreItem*         BattlePassOffer;
	} params;

	params.BattlePassOffer = BattlePassOffer;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
