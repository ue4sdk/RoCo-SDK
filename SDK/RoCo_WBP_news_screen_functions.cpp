// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_news_screen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_news_screen.WBP_news_screen_C.SetNavigationFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_screen_C::SetNavigationFocus(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.SetNavigationFocus");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.PopulateFullScreenSection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWhatsNewPanel*        Panel                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_screen_C::PopulateFullScreenSection(class UKSWhatsNewPanel* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.PopulateFullScreenSection");

	struct
	{
		class UKSWhatsNewPanel*        Panel;
	} params;

	params.Panel = Panel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.PopulateCardPanelsSection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSWhatsNewPanel*> Panels                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_news_screen_C::PopulateCardPanelsSection(TArray<class UKSWhatsNewPanel*>* Panels)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.PopulateCardPanelsSection");

	struct
	{
		TArray<class UKSWhatsNewPanel*> Panels;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Panels != nullptr)
		*Panels = params.Panels;
}


// Function WBP_news_screen.WBP_news_screen_C.InitializeScreens
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_screen_C::InitializeScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.InitializeScreens");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.SetCloseBtnPrompt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_screen_C::SetCloseBtnPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.SetCloseBtnPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.GoBack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_screen_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.GoBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.PopulateNewsCards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_screen_C::PopulateNewsCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.PopulateNewsCards");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_screen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_news_screen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_news_screen_C::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               NewLoginState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_screen_C::HandleLoginStateChange(EPUMG_LoginState NewLoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange");

	struct
	{
		EPUMG_LoginState               NewLoginState;
	} params;

	params.NewLoginState = NewLoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.HandleCloseBtnClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_news_screen_C::HandleCloseBtnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.HandleCloseBtnClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_news_screen_C::ExecuteUbergraph_WBP_news_screen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen");

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
