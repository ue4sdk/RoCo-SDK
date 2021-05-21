// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NavBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NavBar.WBP_NavBar_C.ClearIndeces
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NavBar_C::ClearIndeces()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.ClearIndeces");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.GetActiveIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::GetActiveIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.GetActiveIndex");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_NavBar.WBP_NavBar_C.HandleNavRightFromIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PreviousIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::HandleNavRightFromIndex(int PreviousIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleNavRightFromIndex");

	struct
	{
		int                            PreviousIndex;
	} params;

	params.PreviousIndex = PreviousIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.HandleNavLeftFromIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PreviousIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::HandleNavLeftFromIndex(int PreviousIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleNavLeftFromIndex");

	struct
	{
		int                            PreviousIndex;
	} params;

	params.PreviousIndex = PreviousIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.HandleInput
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Handled                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NavBar_C::HandleInput(const struct FKey& InKey, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleInput");

	struct
	{
		struct FKey                    InKey;
		bool                           Handled;
	} params;

	params.InKey = InKey;

	UObject::ProcessEvent(fn, &params);

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function WBP_NavBar.WBP_NavBar_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_NavBar_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnKeyUp");

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


// Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::SetButtonIndexActive(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive");

	struct
	{
		int                            ButtonIndex;
	} params;

	params.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.HandleNavRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NavBar_C::HandleNavRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleNavRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NavBar_C::HandleNavLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NavBar_C::SetupGamepadCallouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.SetNavButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FNavButtonData>  Buttons                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::SetNavButtons(TArray<struct FNavButtonData>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.SetNavButtons");

	struct
	{
		TArray<struct FNavButtonData>  Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_NavBar.WBP_NavBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_NavBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               ButtonClicked                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::OnButtonClicked(class UKSWidget* ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked");

	struct
	{
		class UKSWidget*               ButtonClicked;
	} params;

	params.ButtonClicked = ButtonClicked;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::ExecuteUbergraph_WBP_NavBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NavBar_C::OnButtonsCreated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NavBar_C::OnButtonSelected__DelegateSignature(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature");

	struct
	{
		int                            ButtonIndex;
	} params;

	params.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
