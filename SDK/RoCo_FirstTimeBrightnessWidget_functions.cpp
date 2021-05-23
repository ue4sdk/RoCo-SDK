// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeBrightnessWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeBrightnessWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeBrightnessWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeBrightnessWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFirstTimeBrightnessWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeBrightnessWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFirstTimeBrightnessWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.ExecuteUbergraph_FirstTimeBrightnessWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFirstTimeBrightnessWidget_C::ExecuteUbergraph_FirstTimeBrightnessWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.ExecuteUbergraph_FirstTimeBrightnessWidget"));

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
