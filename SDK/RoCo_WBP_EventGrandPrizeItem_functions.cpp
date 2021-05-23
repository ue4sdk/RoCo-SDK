// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EventGrandPrizeItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetIsSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventGrandPrizeItem_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetIsSelected"));

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_EventGrandPrizeItem_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetGrandPrizeProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGrandPrizeProgression  GrandPrizeProgress             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_EventGrandPrizeItem_C::SetGrandPrizeProgress(const struct FGrandPrizeProgression& GrandPrizeProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetGrandPrizeProgress"));

	struct
	{
		struct FGrandPrizeProgression  GrandPrizeProgress;
	} params;

	params.GrandPrizeProgress = GrandPrizeProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventGrandPrizeItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PopulateSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventGrandPrizeItem_C::PopulateSlot(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PopulateSlot"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnGamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventGrandPrizeItem_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnGamepadConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.ExecuteUbergraph_WBP_EventGrandPrizeItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventGrandPrizeItem_C::ExecuteUbergraph_WBP_EventGrandPrizeItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.ExecuteUbergraph_WBP_EventGrandPrizeItem"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnBundleItemClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EventGrandPrizeItem_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventGrandPrizeItem_C::OnBundleItemClicked__DelegateSignature(class UWBP_EventGrandPrizeItem_C* Widget, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnBundleItemClicked__DelegateSignature"));

	struct
	{
		class UWBP_EventGrandPrizeItem_C* Widget;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.Widget = Widget;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
