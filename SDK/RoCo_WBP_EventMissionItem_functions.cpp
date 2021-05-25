// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EventMissionItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetIsSelectedVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventMissionItem_C::SetIsSelectedVisualState(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetIsSelectedVisualState");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.Populate Slot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionItem_C::Populate_Slot(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.Populate Slot");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.FormatMissionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   BaseText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   FormattedText                  (CPF_Parm, CPF_OutParm)

void UWBP_EventMissionItem_C::FormatMissionText(const struct FText& BaseText, struct FText* FormattedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.FormatMissionText");

	struct
	{
		struct FText                   BaseText;
		struct FText                   FormattedText;
	} params;

	params.BaseText = BaseText;

	UObject::ProcessEvent(fn, &params);

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetVisualState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EChallengeEntry_Card_State> CurrentState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsPremium                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventMissionItem_C::SetVisualState(TEnumAsByte<EChallengeEntry_Card_State> CurrentState, bool IsPremium, bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetVisualState");

	struct
	{
		TEnumAsByte<EChallengeEntry_Card_State> CurrentState;
		bool                           IsPremium;
		bool                           IsActive;
	} params;

	params.CurrentState = CurrentState;
	params.IsPremium = IsPremium;
	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventMissionItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventMissionItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventMissionItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventMissionItem_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventMissionItem_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_EventMissionItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.ExecuteUbergraph_WBP_EventMissionItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionItem_C::ExecuteUbergraph_WBP_EventMissionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.ExecuteUbergraph_WBP_EventMissionItem");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionItem.WBP_EventMissionItem_C.OnButtonFocused__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_EventMissionItem_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionItem_C::OnButtonFocused__DelegateSignature(class UKSActivityInstance* ActivityInstance, class UWBP_EventMissionItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionItem.WBP_EventMissionItem_C.OnButtonFocused__DelegateSignature");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		class UWBP_EventMissionItem_C* Widget;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
