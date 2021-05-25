// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ListButton_Cosmetic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMasteryRewardData      RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_ListButton_Cosmetic_C::SetRewardItem(const struct FMasteryRewardData& RewardItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardItem");

	struct
	{
		struct FMasteryRewardData      RewardItem;
	} params;

	params.RewardItem = RewardItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ListButton_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ListButton_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ListButton_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ListButton_Cosmetic_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ListButton_Cosmetic_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetIsSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ListButton_Cosmetic_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetIsSelected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.ExecuteUbergraph_WBP_ListButton_Cosmetic
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ListButton_Cosmetic_C::ExecuteUbergraph_WBP_ListButton_Cosmetic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.ExecuteUbergraph_WBP_ListButton_Cosmetic");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.OnRewardSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMasteryRewardData      RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UWidget*                 WidgetObject                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ListButton_Cosmetic_C::OnRewardSelected__DelegateSignature(const struct FMasteryRewardData& RewardItem, class UWidget* WidgetObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.OnRewardSelected__DelegateSignature");

	struct
	{
		struct FMasteryRewardData      RewardItem;
		class UWidget*                 WidgetObject;
	} params;

	params.RewardItem = RewardItem;
	params.WidgetObject = WidgetObject;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
