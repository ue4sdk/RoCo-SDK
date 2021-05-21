// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeTutorialWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.LaunchTutorial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Force_Close_Screen             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFirstTimeTutorialWidget_C::LaunchTutorial(bool Force_Close_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.LaunchTutorial");

	struct
	{
		bool                           Force_Close_Screen;
	} params;

	params.Force_Close_Screen = Force_Close_Screen;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeTutorialWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeTutorialWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFirstTimeTutorialWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeTutorialWidget_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeTutorialWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UFirstTimeTutorialWidget_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeTutorialWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.ExecuteUbergraph_FirstTimeTutorialWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeTutorialWidget_C::ExecuteUbergraph_FirstTimeTutorialWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.ExecuteUbergraph_FirstTimeTutorialWidget");

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
