// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeLanguageWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeLanguageWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeLanguageWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeLanguageWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFirstTimeLanguageWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeLanguageWidget_C::HandleInputState(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFirstTimeLanguageWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeLanguageWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFirstTimeLanguageWidget_C::OnSettingSelected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeLanguageWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeLanguageWidget_C::ExecuteUbergraph_FirstTimeLanguageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget"));

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
