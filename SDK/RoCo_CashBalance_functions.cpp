// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CashBalance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CashBalance.CashBalance_C.SetPlayerShop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerShop*           KSPlayerShop                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashBalance_C::SetPlayerShop(class AKSPlayerShop* KSPlayerShop)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.SetPlayerShop");

	struct
	{
		class AKSPlayerShop*           KSPlayerShop;
	} params;

	params.KSPlayerShop = KSPlayerShop;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.BindToCashChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCashBalance_C::BindToCashChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.BindToCashChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.SetCurrentCash
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewCashTotal                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CashChange                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashBalance_C::SetCurrentCash(int NewCashTotal, int CashChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.SetCurrentCash");

	struct
	{
		int                            NewCashTotal;
		int                            CashChange;
	} params;

	params.NewCashTotal = NewCashTotal;
	params.CashChange = CashChange;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCashBalance_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashBalance_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashBalance_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.OnShopEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerShop*           KSPlayerShop                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashBalance_C::OnShopEnabled(class AKSPlayerShop* KSPlayerShop)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.OnShopEnabled");

	struct
	{
		class AKSPlayerShop*           KSPlayerShop;
	} params;

	params.KSPlayerShop = KSPlayerShop;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.WaitForValidPlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCashBalance_C::WaitForValidPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.WaitForValidPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCashBalance_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.ExecuteUbergraph_CashBalance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCashBalance_C::ExecuteUbergraph_CashBalance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.ExecuteUbergraph_CashBalance");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function CashBalance.CashBalance_C.NewEventDispatcher_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCashBalance_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CashBalance.CashBalance_C.NewEventDispatcher_0__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
