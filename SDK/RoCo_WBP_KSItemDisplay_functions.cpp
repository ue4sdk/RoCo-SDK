// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KSItemDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnButtonHovered
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSItemDisplay_C::OnButtonHovered(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnButtonHovered");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHoverSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.PopulateSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSItemDisplay_C::PopulateSlot(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.PopulateSlot");

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.SetIsActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSItemDisplay_C::SetIsActiveState(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.SetIsActiveState");

	struct
	{
		bool                           bIsActive;
	} params;

	params.bIsActive = bIsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.ExecuteUbergraph_WBP_KSItemDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSItemDisplay_C::ExecuteUbergraph_WBP_KSItemDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.ExecuteUbergraph_WBP_KSItemDisplay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 PerkItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KSItemDisplay_C::OnClick__DelegateSignature(class UKSItem* PerkItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnClick__DelegateSignature");

	struct
	{
		class UKSItem*                 PerkItem;
	} params;

	params.PerkItem = PerkItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnUnhover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KSItemDisplay_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnUnhover__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KSItemDisplay_C::OnHover__DelegateSignature(class UKSItem* KSItem, bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHover__DelegateSignature");

	struct
	{
		class UKSItem*                 KSItem;
		bool                           IsGamepad;
	} params;

	params.KSItem = KSItem;
	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
