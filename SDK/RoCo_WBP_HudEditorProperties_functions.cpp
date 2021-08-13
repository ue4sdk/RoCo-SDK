// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_HudEditorProperties_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.OnOpacityChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewOpacity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::OnOpacityChanged(float NewOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.OnOpacityChanged");

	struct
	{
		float                          NewOpacity;
	} params;

	params.NewOpacity = NewOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.OnSizeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::OnSizeChanged(float NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.OnSizeChanged");

	struct
	{
		float                          NewSize;
	} params;

	params.NewSize = NewSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.OnChecked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HudEditorProperties_C::OnChecked(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.OnChecked");

	struct
	{
		bool                           IsChecked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsChecked != nullptr)
		*IsChecked = params.IsChecked;
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HudEditorProperties_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HudEditorProperties_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetButtonVisibilityEditable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSHudEditableWidget*    HudEditableWidget              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsEditable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bNewVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HudEditorProperties_C::SetButtonVisibilityEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetButtonVisibilityEditable");

	struct
	{
		class UKSHudEditableWidget*    HudEditableWidget;
		bool                           bIsEditable;
		bool                           bNewVisibility;
	} params;

	params.HudEditableWidget = HudEditableWidget;
	params.bIsEditable = bIsEditable;
	params.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleCheckedBP
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Checked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HudEditorProperties_C::HandleCheckedBP(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleCheckedBP");

	struct
	{
		bool                           Checked;
	} params;

	params.Checked = Checked;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleCheckedNative
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HudEditorProperties_C::HandleCheckedNative(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleCheckedNative");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetButtonScaleEditable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSHudEditableWidget*    HudEditableWidget              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsEditable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          NewScale                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::SetButtonScaleEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetButtonScaleEditable");

	struct
	{
		class UKSHudEditableWidget*    HudEditableWidget;
		bool                           bIsEditable;
		float                          NewScale;
	} params;

	params.HudEditableWidget = HudEditableWidget;
	params.bIsEditable = bIsEditable;
	params.NewScale = NewScale;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetOpacityEditable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSHudEditableWidget*    HudEditableWidget              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsEditable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          NewOpacity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::SetOpacityEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, float NewOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetOpacityEditable");

	struct
	{
		class UKSHudEditableWidget*    HudEditableWidget;
		bool                           bIsEditable;
		float                          NewOpacity;
	} params;

	params.HudEditableWidget = HudEditableWidget;
	params.bIsEditable = bIsEditable;
	params.NewOpacity = NewOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetSelectedHudEditableWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSHudEditableWidget*    NewWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::SetSelectedHudEditableWidget(class UKSHudEditableWidget* NewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.SetSelectedHudEditableWidget");

	struct
	{
		class UKSHudEditableWidget*    NewWidget;
	} params;

	params.NewWidget = NewWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleOpacityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::HandleOpacityChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleOpacityChanged");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::HandleSizeChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.HandleSizeChanged");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.ExecuteUbergraph_WBP_HudEditorProperties
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HudEditorProperties_C::ExecuteUbergraph_WBP_HudEditorProperties(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HudEditorProperties.WBP_HudEditorProperties_C.ExecuteUbergraph_WBP_HudEditorProperties");

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
