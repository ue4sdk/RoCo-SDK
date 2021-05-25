// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsSlider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.IsSliderKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           IsKey                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsSlider_C::IsSliderKey(const struct FKey& InKey, bool* IsKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.IsSliderKey");

	struct
	{
		struct FKey                    InKey;
		bool                           IsKey;
	} params;

	params.InKey = InKey;

	UObject::ProcessEvent(fn, &params);

	if (IsKey != nullptr)
		*IsKey = params.IsKey;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ResetCurrentAcceleration
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::ResetCurrentAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.ResetCurrentAcceleration");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.IncreaseCurrentAcceleration
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::IncreaseCurrentAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.IncreaseCurrentAcceleration");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_SettingsSlider_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_SettingsSlider_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::Step_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Multiplier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Step(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step");

	struct
	{
		float                          Multiplier;
	} params;

	params.Multiplier = Multiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::Step_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::Set_Display_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::Set_Desired_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::Position_Slider_To_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Slider_To_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value");

	struct
	{
		float                          Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Max_Value                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::GetMaxSliderValue(float* Max_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue");

	struct
	{
		float                          Max_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Max_Value != nullptr)
		*Max_Value = params.Max_Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Min_Value                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::GetMinSliderValue(float* Min_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue");

	struct
	{
		float                          Min_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Min_Value != nullptr)
		*Min_Value = params.Min_Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Slider_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Value_To_Slider(float* Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider");

	struct
	{
		float                          Slider_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Slider_Value != nullptr)
		*Slider_Value = params.Slider_Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Get_Dirty_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value");

	struct
	{
		float                          Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SettingsSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SettingsSlider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsSlider_C::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnSettingsInfoValueChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bChangedExternally             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsSlider_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnSettingsInfoValueChanged");

	struct
	{
		bool                           bChangedExternally;
	} params;

	params.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSlider_C::ExecuteUbergraph_WBP_SettingsSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider");

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
