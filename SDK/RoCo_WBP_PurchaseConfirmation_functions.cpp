// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PurchaseConfirmation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateBundleScrollIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::UpdateBundleScrollIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateBundleScrollIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisablePurchaseButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PurchaseConfirmation_C::DisablePurchaseButtons(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisablePurchaseButtons");

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.CanNavigateToNextBundleItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanNavigate                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PurchaseConfirmation_C::CanNavigateToNextBundleItem(int Direction, bool* CanNavigate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.CanNavigateToNextBundleItem");

	struct
	{
		int                            Direction;
		bool                           CanNavigate;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);

	if (CanNavigate != nullptr)
		*CanNavigate = params.CanNavigate;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutBattlePassPurchase
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::LayoutBattlePassPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutBattlePassPurchase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutPurchaseItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::LayoutPurchaseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutPurchaseItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayBasicItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::DisplayBasicItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayBasicItem");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySlowPurchaseWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::DisplaySlowPurchaseWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySlowPurchaseWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SplashFound                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FSoftObjectPath         FullSplashSoftImagePath        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::GetFullScreenSplashImage(bool* SplashFound, struct FSoftObjectPath* FullSplashSoftImagePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage");

	struct
	{
		bool                           SplashFound;
		struct FSoftObjectPath         FullSplashSoftImagePath;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SplashFound != nullptr)
		*SplashFound = params.SplashFound;
	if (FullSplashSoftImagePath != nullptr)
		*FullSplashSoftImagePath = params.FullSplashSoftImagePath;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMsg                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_PurchaseConfirmation_C::OnAcquisitionFailed(const struct FText& ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed");

	struct
	{
		struct FText                   ErrorMsg;
	} params;

	params.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_PurchaseConfirmation_C::TryHandleRightStickKeyDown(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown");

	struct
	{
		struct FKey                    Key;
		struct FEventReply             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::OnBundleItemHoveredGamepad(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad");

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


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnToggleViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::OnInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::SetSubDetails(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::OnBundleItemClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* Widget;
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
	} params;

	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::PopulateBundleContentsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnNextBundlePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnPreviousBundlePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::GoBackToItemDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnViewBundleContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_PurchaseConfirmation_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown");

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


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_PurchaseConfirmation_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp");

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


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnNextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnPreviousItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::PopulateItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnAcquisition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PortalOffer*       PortalOffer                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::PurchaseItemWithPortalOffer(class UPUMG_PortalOffer* PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer");

	struct
	{
		class UPUMG_PortalOffer*       PortalOffer;
	} params;

	params.PortalOffer = PortalOffer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice*    Price                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::PurchaseItemWithPrice(class UPUMG_StoreItemPrice* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice");

	struct
	{
		class UPUMG_StoreItemPrice*    Price;
	} params;

	params.Price = Price;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::DisplaySingleItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PurchaseConfirmation_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PurchaseConfirmation_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::SetScrollValueUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::SetScrollValueDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::ClearScrollValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::UpdateScrollPromptVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Handle View State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Handle View State Changed");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   PreviousRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmation_C::BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmation_C::ExecuteUbergraph_WBP_PurchaseConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation");

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
