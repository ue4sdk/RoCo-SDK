// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NewsRotatorWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_NewsRotatorWidget_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasFocus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NewsRotatorWidget_C::UpdatePrompts(unsigned char InputState, bool HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts"));

	struct
	{
		unsigned char                  InputState;
		bool                           HasFocus;
	} params;

	params.InputState = InputState;
	params.HasFocus = HasFocus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets"));

	struct
	{
		TArray<class UPUMG_Widget*>    Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewPanelIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::ShowPanel(int NewPanelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel"));

	struct
	{
		int                            NewPanelIndex;
	} params;

	params.NewPanelIndex = NewPanelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::UpdateRotatorButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::ShowPrevPanel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::ShowNextPanel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::PopulateData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::OnItemClicked(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked"));

	struct
	{
		int                            ButtonIndex;
	} params;

	params.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::OnActionClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NewsRotatorWidget_C::OnActionButtonHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered"));

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           bHovered;
	} params;

	params.Widget = Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  CurrentState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::OnInputModeChange(unsigned char CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange"));

	struct
	{
		unsigned char                  CurrentState;
	} params;

	params.CurrentState = CurrentState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::BindInputActions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::UnbindInputActions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NewsRotatorWidget_C::HandleGamepadHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered"));

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           bHovered;
	} params;

	params.Widget = Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_NewsRotatorWidget_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NewsRotatorWidget_C::ExecuteUbergraph_WBP_NewsRotatorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NewsRotatorWidget_C::NewsVisibilityUpdated__DelegateSignature(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature"));

	struct
	{
		bool                           Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
