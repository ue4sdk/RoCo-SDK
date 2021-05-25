// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KSCosmeticItemSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_KSCosmeticItemSelector_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticDetails                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::OnCosmeticHover(const struct FCosmeticSlotDetails& CosmeticDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover");

	struct
	{
		struct FCosmeticSlotDetails    CosmeticDetails;
		bool                           IsGamepad;
		class UWBP_KSCosmeticItemDisplay_C* Widget;
	} params;

	params.CosmeticDetails = CosmeticDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnCosmeticUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::OnCosmeticClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* Widget;
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
	} params;

	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSCosmeticItemSelector_C::SetSlotActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::SetItemOwned(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::ExecuteUbergraph_WBP_KSCosmeticItemSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::OnPurchaseItem__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature");

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::OnItemSelected__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature");

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UPUMG_StoreItem*         StoreItem;
		class UWidget*                 Widget;
		struct FCosmeticSlotDetails    CosmeticSlot;
	} params;

	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;
	params.Widget = Widget;
	params.CosmeticSlot = CosmeticSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSCosmeticItemSelector_C::OnItemUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticDetails                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSCosmeticItemSelector_C::OnItemHovered__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature");

	struct
	{
		struct FCosmeticSlotDetails    CosmeticDetails;
		class UPlatformInventoryItem*  PlatformItem;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.CosmeticDetails = CosmeticDetails;
	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
