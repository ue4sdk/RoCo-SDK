// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Guided_Tutorial_Tips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Guided_Tutorial_Tips_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::GuidedTutorialShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGuidedMenuCalloutData*  CalloutData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Tips_C::SetTipMode(class UGuidedMenuCalloutData* CalloutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode");

	struct
	{
		class UGuidedMenuCalloutData*  CalloutData;
	} params;

	params.CalloutData = CalloutData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Tips_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Tips_C::HandleCloseHovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Tips_C::HandleCLoseUnhovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Guided_Tutorial_Tips_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::CloseScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Tips_C::BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Guided_Tutorial_Tips_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Tips_C::ExecuteUbergraph_WBP_Guided_Tutorial_Tips(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips");

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
