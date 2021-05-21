// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EventBuyThroughScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_EventBuyThroughScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnKeyUp");

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


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PreviewBundleItemAtIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PreviewIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceUpdate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventBuyThroughScreen_C::PreviewBundleItemAtIndex(int PreviewIndex, bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PreviewBundleItemAtIndex");

	struct
	{
		int                            PreviewIndex;
		bool                           ForceUpdate;
	} params;

	params.PreviewIndex = PreviewIndex;
	params.ForceUpdate = ForceUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.DisplayMissionSelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::DisplayMissionSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.DisplayMissionSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.DisplayRulesWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::DisplayRulesWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.DisplayRulesWindow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.GetNavigationWidgets");

	struct
	{
		TArray<class UPUMG_Widget*>    Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PurchaseBundle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         BundleItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::PurchaseBundle(class UPUMG_StoreItem* BundleItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PurchaseBundle");

	struct
	{
		class UPUMG_StoreItem*         BundleItem;
	} params;

	params.BundleItem = BundleItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PopulateBundlePreviewItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         BundleItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::PopulateBundlePreviewItems(class UPUMG_StoreItem* BundleItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PopulateBundlePreviewItems");

	struct
	{
		class UPUMG_StoreItem*         BundleItem;
	} params;

	params.BundleItem = BundleItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_EventBuyThroughScreen_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleItemHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::OnBundleItemHovered(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleItemHovered");

	struct
	{
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
		bool                           IsGamepad;
		class UWBP_KSCosmeticItemDisplay_C* Widget;
	} params;

	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleItemClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::OnBundleItemClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleItemClicked");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* Widget;
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
	} params;

	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.Select Bundle Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EventBundleItem_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::Select_Bundle_Widget(class UWBP_EventBundleItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.Select Bundle Widget");

	struct
	{
		class UWBP_EventBundleItem_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnGrandPrizeClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EventGrandPrizeItem_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::OnGrandPrizeClicked(class UWBP_EventGrandPrizeItem_C* Widget, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnGrandPrizeClicked");

	struct
	{
		class UWBP_EventGrandPrizeItem_C* Widget;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.Widget = Widget;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.RefreshScene
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::RefreshScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.RefreshScene");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_EventBuyThroughScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleUnlockButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EventBundleItem_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::OnBundleUnlockButtonClicked(class UWBP_EventBundleItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleUnlockButtonClicked");

	struct
	{
		class UWBP_EventBundleItem_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnRulesPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventBuyThroughScreen_C::OnRulesPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnRulesPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.FocusGroupNavigateRightFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.FocusGroupNavigateLeftFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.ExecuteUbergraph_WBP_EventBuyThroughScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventBuyThroughScreen_C::ExecuteUbergraph_WBP_EventBuyThroughScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.ExecuteUbergraph_WBP_EventBuyThroughScreen");

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
