// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AlphaDisclaimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlphaDisclaimer.AlphaDisclaimer_C.HideScrollCallout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::HideScrollCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.HideScrollCallout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ShowArrows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAlphaDisclaimer_C::ShowArrows(float Value, float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ShowArrows");

	struct
	{
		float                          Value;
		float                          MaxValue;
	} params;

	params.Value = Value;
	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAlphaDisclaimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAlphaDisclaimer_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::ScrollUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::ScrollDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAlphaDisclaimer_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.CalloutTimerFunction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::CalloutTimerFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.CalloutTimerFunction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAlphaDisclaimer_C::BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAlphaDisclaimer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ExecuteUbergraph_AlphaDisclaimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAlphaDisclaimer_C::ExecuteUbergraph_AlphaDisclaimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ExecuteUbergraph_AlphaDisclaimer");

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
