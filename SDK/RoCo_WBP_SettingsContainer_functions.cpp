// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWidget*               PreviewWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContainer_C::GetPreviewWidget(class UKSWidget** PreviewWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget"));

	struct
	{
		class UKSWidget*               PreviewWidget;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PreviewWidget != nullptr)
		*PreviewWidget = params.PreviewWidget;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsWidget*       Setting_Widget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContainer_C::Add_Setting_Widget_To_Box(class UKSSettingsWidget* Setting_Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box"));

	struct
	{
		class UKSSettingsWidget*       Setting_Widget;
	} params;

	params.Setting_Widget = Setting_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContainer_C::SettingsContainerHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsContainer_C::OnContainerConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsWidget*       SettingsWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContainer_C::AddSettingsWidget(class UKSSettingsWidget* SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget"));

	struct
	{
		class UKSSettingsWidget*       SettingsWidget;
	} params;

	params.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SettingsContainer_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SettingsContainer_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContainer_C::PlayHoverAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContainer_C::PlayUnhoverAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPreview*      PreviewWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContainer_C::AddPreviewWidget(class UKSSettingsPreview* PreviewWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget"));

	struct
	{
		class UKSSettingsPreview*      PreviewWidget;
	} params;

	params.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContainer_C::ExecuteUbergraph_WBP_SettingsContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               PreviewWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContainer_C::OnAddToPreview__DelegateSignature(class UKSWidget* PreviewWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature"));

	struct
	{
		class UKSWidget*               PreviewWidget;
	} params;

	params.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
