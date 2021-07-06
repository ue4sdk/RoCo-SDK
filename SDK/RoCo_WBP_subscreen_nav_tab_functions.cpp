// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_subscreen_nav_tab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_subscreen_nav_tab_C::SetSelected(bool bNewSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetSelected");

	struct
	{
		bool                           bNewSelected;
	} params;

	params.bNewSelected = bNewSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetDisabled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewDisabled                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_subscreen_nav_tab_C::SetDisabled(bool bNewDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetDisabled");

	struct
	{
		bool                           bNewDisabled;
	} params;

	params.bNewDisabled = bNewDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.TryCreateCalloutWidget
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Created                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_subscreen_nav_tab_C::TryCreateCalloutWidget(bool* Created)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.TryCreateCalloutWidget");

	struct
	{
		bool                           Created;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Created != nullptr)
		*Created = params.Created;
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetShowCallout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_subscreen_nav_tab_C::SetShowCallout(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetShowCallout");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabClickedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::SettingsSubScreenNavTabClickedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabClickedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabHoveredSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::SettingsSubScreenNavTabHoveredSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabHoveredSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetButtonText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_subscreen_nav_tab_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetButtonText");

	struct
	{
		struct FText                   ButtonText;
	} params;

	params.ButtonText = ButtonText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_subscreen_nav_tab_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_subscreen_nav_tab_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SelectNavTab
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::SelectNavTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SelectNavTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.UnselectNavTab
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_subscreen_nav_tab_C::UnselectNavTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.UnselectNavTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Handle View State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_subscreen_nav_tab_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Handle View State Changed");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   PreviousRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ExecuteUbergraph_WBP_subscreen_nav_tab
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_subscreen_nav_tab_C::ExecuteUbergraph_WBP_subscreen_nav_tab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ExecuteUbergraph_WBP_subscreen_nav_tab");

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
