// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PopupButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupButton.PopupButton_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPopupButton_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PopupButton.PopupButton_C.ToggleGamepadCallout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPopupButton_C::ToggleGamepadCallout(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.ToggleGamepadCallout"));

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.SetDisplayText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPopupButton_C::SetDisplayText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.SetDisplayText"));

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.SetButtonCalloutImage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InActionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupButton_C::SetButtonCalloutImage(const struct FName& InActionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.SetButtonCalloutImage"));

	struct
	{
		struct FName                   InActionName;
	} params;

	params.InActionName = InActionName;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.SetFontSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            In_Font_Size                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupButton_C::SetFontSize(int In_Font_Size)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.SetFontSize"));

	struct
	{
		int                            In_Font_Size;
	} params;

	params.In_Font_Size = In_Font_Size;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPopupButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PopupButton.PopupButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPopupButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.GamepadPress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupButton_C::GamepadPress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.GamepadPress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.OnNavBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupButton_C::OnNavBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.OnNavBack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupButton_C::ExecuteUbergraph_PopupButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupButton_C::OnNavigateBackAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupButton.PopupButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupButton_C::OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PopupButton.PopupButton_C.OnClicked__DelegateSignature"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
