// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_FireWeapon_TouchButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.OnTouchGesture
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           GestureEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_FireWeapon_TouchButton_C::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.OnTouchGesture");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           GestureEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.TriggerInputAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InInputEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FireWeapon_TouchButton_C::TriggerInputAction(TEnumAsByte<EInputEvent> InInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.TriggerInputAction");

	struct
	{
		TEnumAsByte<EInputEvent>       InInputEvent;
	} params;

	params.InInputEvent = InInputEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FireWeapon_TouchButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_FireWeapon_TouchButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_FireWeapon_TouchButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_FireWeapon_TouchButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.ExecuteUbergraph_WBP_FireWeapon_TouchButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FireWeapon_TouchButton_C::ExecuteUbergraph_WBP_FireWeapon_TouchButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.ExecuteUbergraph_WBP_FireWeapon_TouchButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.OnButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FireWeapon_TouchButton_C::OnButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FireWeapon_TouchButton.WBP_FireWeapon_TouchButton_C.OnButtonPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
