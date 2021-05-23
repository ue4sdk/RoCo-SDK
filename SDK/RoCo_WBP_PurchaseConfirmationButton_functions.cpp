// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PurchaseConfirmationButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Can Prompt Store Redirect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PurchaseConfirmationButton_C::Can_Prompt_Store_Redirect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Can Prompt Store Redirect"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Store Redirect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::Store_Redirect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Store Redirect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.DisableButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PurchaseConfirmationButton_C::DisableButton(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.DisableButton"));

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::StartConfirmHold()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::ClearConfirmHold()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::UpdateGamepadPromptDisplay(TEnumAsByte<EPGAME_INPUT_STATE> InputMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputMode;
	} params;

	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PurchaseConfirmationButton_C::OnButtonHovered(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered"));

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PortalOffer*       PortalOffer                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::SetPortalOffer(class UPUMG_PortalOffer* PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer"));

	struct
	{
		class UPUMG_PortalOffer*       PortalOffer;
	} params;

	params.PortalOffer = PortalOffer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_PurchaseConfirmationButton_C::SetRawText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText"));

	struct
	{
		struct FText                   ButtonText;
	} params;

	params.ButtonText = ButtonText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice*    ItemPrice                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ItemPurchaseQuantity           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::SetStorePrice(class UPUMG_StoreItemPrice* ItemPrice, int ItemPurchaseQuantity, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice"));

	struct
	{
		class UPUMG_StoreItemPrice*    ItemPrice;
		int                            ItemPurchaseQuantity;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.ItemPrice = ItemPrice;
	params.ItemPurchaseQuantity = ItemPurchaseQuantity;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PurchaseConfirmationButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::ExecuteUbergraph_WBP_PurchaseConfirmationButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchaseConfirmationButton_C::OnRawClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PortalOffer*       PortalOffer                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::PurcaseItemWithPortalOffer__DelegateSignature(class UPUMG_PortalOffer* PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature"));

	struct
	{
		class UPUMG_PortalOffer*       PortalOffer;
	} params;

	params.PortalOffer = PortalOffer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice*    Price                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchaseConfirmationButton_C::PurcaseItemWithPrice__DelegateSignature(class UPUMG_StoreItemPrice* Price)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature"));

	struct
	{
		class UPUMG_StoreItemPrice*    Price;
	} params;

	params.Price = Price;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
