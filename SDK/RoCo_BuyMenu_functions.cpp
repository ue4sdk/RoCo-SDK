// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BuyMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuyMenu.BuyMenu_C.On Shop Options Changed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::On_Shop_Options_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.On Shop Options Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.GetItemButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_BuyMenuItemButton_C*> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UBuyMenu_C::GetItemButtons(TArray<class UWBP_BuyMenuItemButton_C*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.GetItemButtons");

	struct
	{
		TArray<class UWBP_BuyMenuItemButton_C*> Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BuyMenu.BuyMenu_C.Initialize Item Widgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::Initialize_Item_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Initialize Item Widgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBuyMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BuyMenu.BuyMenu_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBuyMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BuyMenu.BuyMenu_C.PurchasedFailedSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::PurchasedFailedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.PurchasedFailedSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.CloseShopMenuSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::CloseShopMenuSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.CloseShopMenuSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.OpenShopMenuSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::OpenShopMenuSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.OpenShopMenuSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.PurchasedSucceededSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  Shop_Item_Type                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::PurchasedSucceededSound(EShopItemType Shop_Item_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.PurchasedSucceededSound");

	struct
	{
		EShopItemType                  Shop_Item_Type;
	} params;

	params.Shop_Item_Type = Shop_Item_Type;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.EquipShopMenuSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::EquipShopMenuSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.EquipShopMenuSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.ShopHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::ShopHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.ShopHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Handle Back Button Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::Handle_Back_Button_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Handle Back Button Clicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.SetShopContent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::SetShopContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.SetShopContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.SetShopState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBuyMenu_C::SetShopState(bool IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.SetShopState");

	struct
	{
		bool                           IsOpen;
	} params;

	params.IsOpen = IsOpen;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.SetCashValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            CashValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::SetCashValue(int CashValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.SetCashValue");

	struct
	{
		int                            CashValue;
	} params;

	params.CashValue = CashValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBuyMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.SetPromptShow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShowPrompt               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBuyMenu_C::SetPromptShow(bool ShouldShowPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.SetPromptShow");

	struct
	{
		bool                           ShouldShowPrompt;
	} params;

	params.ShouldShowPrompt = ShouldShowPrompt;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.SetIsPrepareRound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UBuyMenu_C::SetIsPrepareRound(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.SetIsPrepareRound");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Handle Match Timer Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::Handle_Match_Timer_Tick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Handle Match Timer Tick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBuyMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.PurchaseAcknowledge
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  ShopItemType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::PurchaseAcknowledge(EShopItemType ShopItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.PurchaseAcknowledge");

	struct
	{
		EShopItemType                  ShopItemType;
	} params;

	params.ShopItemType = ShopItemType;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.ShopItemChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ChangedItem                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBuyMenu_C::ShopItemChanged(const struct FShopItem& ChangedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.ShopItemChanged");

	struct
	{
		struct FShopItem               ChangedItem;
	} params;

	params.ChangedItem = ChangedItem;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Handle Shop Selection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  SelectedShopSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::Handle_Shop_Selection(EShopItemType SelectedShopSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Handle Shop Selection");

	struct
	{
		EShopItemType                  SelectedShopSlot;
	} params;

	params.SelectedShopSlot = SelectedShopSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Handle Shop Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  SelectedShopSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::Handle_Shop_Hover(EShopItemType SelectedShopSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Handle Shop Hover");

	struct
	{
		EShopItemType                  SelectedShopSlot;
	} params;

	params.SelectedShopSlot = SelectedShopSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBuyMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.Undo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::Undo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.Undo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.On Respawn Timer Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::On_Respawn_Timer_Tick(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.On Respawn Timer Tick");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.On Respawn Timer Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuyMenu_C::On_Respawn_Timer_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.On Respawn Timer Complete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.On Respawn Timer Active
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBuyMenu_C::On_Respawn_Timer_Active(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.On Respawn Timer Active");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BuyMenu.BuyMenu_C.ExecuteUbergraph_BuyMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBuyMenu_C::ExecuteUbergraph_BuyMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenu.BuyMenu_C.ExecuteUbergraph_BuyMenu");

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
