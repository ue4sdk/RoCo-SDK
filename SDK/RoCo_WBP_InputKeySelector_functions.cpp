// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InputKeySelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetMouseWheel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          WheelDelta                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::SetMouseWheel(float WheelDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetMouseWheel");

	struct
	{
		float                          WheelDelta;
	} params;

	params.WheelDelta = WheelDelta;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_InputKeySelector_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseWheel");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_InputKeySelector_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp");

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


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::InputKeySelectorInputSelectedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::InputKeySelectorClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::InputKeySelectorHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             SelectedKey;
	} params;

	params.SelectedKey = SelectedKey;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Selected_Key                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::Set_Selected_Key(const struct FInputChord& Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key");

	struct
	{
		struct FInputChord             Selected_Key;
	} params;

	params.Selected_Key = Selected_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InputKeySelector_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InputKeySelector_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::SetDisabledText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Selected_Key                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FInputChord             Selected_Combo_Key             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::SetComboGamepadKey(const struct FInputChord& Selected_Key, const struct FInputChord& Selected_Combo_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey");

	struct
	{
		struct FInputChord             Selected_Key;
		struct FInputChord             Selected_Combo_Key;
	} params;

	params.Selected_Key = Selected_Key;
	params.Selected_Combo_Key = Selected_Combo_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCapture                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeySelector_C::Capture_Combo(bool bCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo");

	struct
	{
		bool                           bCapture;
	} params;

	params.bCapture = bCapture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::TabRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::ExecuteUbergraph_WBP_InputKeySelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Combo_Key                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::OnComboKeySelected__DelegateSignature(const struct FInputChord& Combo_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             Combo_Key;
	} params;

	params.Combo_Key = Combo_Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeySelector_C::OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             Selected_Key                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             Selected_Key;
	} params;

	params.Selected_Key = Selected_Key;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
