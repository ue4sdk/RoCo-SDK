// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoginEula_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginEula.LoginEula_C.ShowArrows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::ShowArrows(float Value, float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ShowArrows");

	struct
	{
		float                          Value;
		float                          MaxValue;
	} params;

	params.Value = Value;
	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.ChangeFontSizeText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::ChangeFontSizeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ChangeFontSizeText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.HandleCalloutSwitcher
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::HandleCalloutSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.HandleCalloutSwitcher");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginEula_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginEula_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginEula_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.ScrollUpPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollUpPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.ScrollDownPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollDownPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.ScrollUpReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::ScrollUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollUpReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.ScrollDownReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::ScrollDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollDownReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.SetActiveScrollCallout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginEula_C::SetActiveScrollCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.SetActiveScrollCallout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Checked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoginEula_C::BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature");

	struct
	{
		bool                           Checked;
	} params;

	params.Checked = Checked;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginEula_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginEula_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginEula_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginEula_C::ExecuteUbergraph_LoginEula(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula");

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
