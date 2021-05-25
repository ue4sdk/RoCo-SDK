// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AcquistionItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::OnSlotHovered(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered");

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


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::OnSlotClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* Widget;
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
	} params;

	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAcquisitionItemData*    SlotItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::SetSlotItem(class UAcquisitionItemData* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem");

	struct
	{
		class UAcquisitionItemData*    SlotItem;
	} params;

	params.SlotItem = SlotItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::ExecuteUbergraph_WBP_AcquistionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAcquisitionItemData*    AcquisitionItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::OnSlotHover__DelegateSignature(class UAcquisitionItemData* AcquisitionItem, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature");

	struct
	{
		class UAcquisitionItemData*    AcquisitionItem;
		class UKSWidget*               Widget;
	} params;

	params.AcquisitionItem = AcquisitionItem;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAcquisitionItemData*    AcquisitionItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AcquistionItem_C::OnSlotSelected__DelegateSignature(class UAcquisitionItemData* AcquisitionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature");

	struct
	{
		class UAcquisitionItemData*    AcquisitionItem;
	} params;

	params.AcquisitionItem = AcquisitionItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
