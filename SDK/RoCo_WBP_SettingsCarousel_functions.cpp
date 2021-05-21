// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsCarousel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Make_Indicator_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Add_Indicator_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::SetAnimationTextToIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::SetDisplayTextToIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::GetDirtyIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Desired_Index                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Index_Changed                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsCarousel_C::SetDesiredIndex(int Desired_Index, bool* Index_Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex");

	struct
	{
		int                            Desired_Index;
		bool                           Index_Changed;
	} params;

	params.Desired_Index = Desired_Index;

	UObject::ProcessEvent(fn, &params);

	if (Index_Changed != nullptr)
		*Index_Changed = params.Index_Changed;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Text_Widget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::SetTextToIndex(class UTextBlock* Text_Widget, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex");

	struct
	{
		class UTextBlock*              Text_Widget;
		int                            Index;
	} params;

	params.Text_Widget = Text_Widget;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::SettingsCarouselHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::SettingsCarouselClickedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Master_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Master_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::OnWidgetConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset_Indicator_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset_Indicator_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnSettingsInfoValueChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bChangedExternally             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsCarousel_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnSettingsInfoValueChanged");

	struct
	{
		bool                           bChangedExternally;
	} params;

	params.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_C::ExecuteUbergraph_WBP_SettingsCarousel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel");

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
