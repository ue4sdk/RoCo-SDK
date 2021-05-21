// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PopupManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupManager.PopupManager_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPopupManager_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnKeyUp");

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


// Function PopupManager.PopupManager_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPopupManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnKeyDown");

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


// Function PopupManager.PopupManager_C.SetupSubHeaderText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewSubHeaderText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPopupManager_C::SetupSubHeaderText(const struct FText& NewSubHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupSubHeaderText");

	struct
	{
		struct FText                   NewSubHeaderText;
	} params;

	params.NewSubHeaderText = NewSubHeaderText;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.SetupButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PopupButtonConfig> ButtonInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UPopupManager_C::SetupButtons(TArray<struct FPUMG_PopupButtonConfig>* ButtonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupButtons");

	struct
	{
		TArray<struct FPUMG_PopupButtonConfig> ButtonInfo;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ButtonInfo != nullptr)
		*ButtonInfo = params.ButtonInfo;
}


// Function PopupManager.PopupManager_C.SetupTextEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasTextEntry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   DefaultEntryText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPopupManager_C::SetupTextEntry(bool HasTextEntry, const struct FText& DefaultEntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupTextEntry");

	struct
	{
		bool                           HasTextEntry;
		struct FText                   DefaultEntryText;
	} params;

	params.HasTextEntry = HasTextEntry;
	params.DefaultEntryText = DefaultEntryText;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.SetupWarningText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewWarningText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPopupManager_C::SetupWarningText(const struct FText& NewWarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupWarningText");

	struct
	{
		struct FText                   NewWarningText;
	} params;

	params.NewWarningText = NewWarningText;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.SetupDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewDescText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPopupManager_C::SetupDescription(const struct FText& NewDescText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupDescription");

	struct
	{
		struct FText                   NewDescText;
	} params;

	params.NewDescText = NewDescText;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.SetupHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewHeaderText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPopupManager_C::SetupHeader(const struct FText& NewHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.SetupHeader");

	struct
	{
		struct FText                   NewHeaderText;
	} params;

	params.NewHeaderText = NewHeaderText;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPopupManager_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PopupManager.PopupManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.ShowPopup
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_PopupConfig       popupData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void UPopupManager_C::ShowPopup(const struct FPUMG_PopupConfig& popupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.ShowPopup");

	struct
	{
		struct FPUMG_PopupConfig       popupData;
	} params;

	params.popupData = popupData;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.HidePopup
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPopupManager_C::HidePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.HidePopup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.ButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupManager_C::ButtonPressed(class UWidget* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.ButtonPressed");

	struct
	{
		class UWidget*                 Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupManager_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupManager_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupManager_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.HandleCancelButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupManager_C::HandleCancelButtonClicked(class UWidget* InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.HandleCancelButtonClicked");

	struct
	{
		class UWidget*                 InIndex;
	} params;

	params.InIndex = InIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupManager_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupManager_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.OnBackButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupManager_C::OnBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.OnBackButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPopupManager_C::ExecuteUbergraph_PopupManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager");

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
