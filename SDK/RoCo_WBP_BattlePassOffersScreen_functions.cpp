// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassOffersScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.Handle on Offer Panel Clicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         BattlePassOffer                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOffersScreen_C::Handle_on_Offer_Panel_Clicked(class UPUMG_StoreItem* BattlePassOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.Handle on Offer Panel Clicked");

	struct
	{
		class UPUMG_StoreItem*         BattlePassOffer;
	} params;

	params.BattlePassOffer = BattlePassOffer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_BattlePassOfferPanel_C*> Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOffersScreen_C::GetNavigationWidgets(TArray<class UWBP_BattlePassOfferPanel_C*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.GetNavigationWidgets");

	struct
	{
		TArray<class UWBP_BattlePassOfferPanel_C*> Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BattlePassOffersScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassOffersScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOffersScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassOffersScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassOffersScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.ExecuteUbergraph_WBP_BattlePassOffersScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassOffersScreen_C::ExecuteUbergraph_WBP_BattlePassOffersScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.ExecuteUbergraph_WBP_BattlePassOffersScreen");

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
