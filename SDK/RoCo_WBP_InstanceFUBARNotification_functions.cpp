// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InstanceFUBARNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InstanceFUBARNotification_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.UpdateButtonCountdown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InstanceFUBARNotification_C::UpdateButtonCountdown(int SecondsRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.UpdateButtonCountdown");

	struct
	{
		int                            SecondsRemaining;
	} params;

	params.SecondsRemaining = SecondsRemaining;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.SetUpMessaging
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Header                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ShowIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InstanceFUBARNotification_C::SetUpMessaging(const struct FText& Header, const struct FText& Description, bool ShowIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.SetUpMessaging");

	struct
	{
		struct FText                   Header;
		struct FText                   Description;
		bool                           ShowIcon;
	} params;

	params.Header = Header;
	params.Description = Description;
	params.ShowIcon = ShowIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.DisplayFubar
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EFubarDisplayReason            Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InstanceFUBARNotification_C::DisplayFubar(EFubarDisplayReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.DisplayFubar");

	struct
	{
		EFubarDisplayReason            Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InstanceFUBARNotification_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.TickCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InstanceFUBARNotification_C::TickCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.TickCountdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InstanceFUBARNotification_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.Confirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InstanceFUBARNotification_C::Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.Confirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InstanceFUBARNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InstanceFUBARNotification_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.ExecuteUbergraph_WBP_InstanceFUBARNotification
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InstanceFUBARNotification_C::ExecuteUbergraph_WBP_InstanceFUBARNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InstanceFUBARNotification.WBP_InstanceFUBARNotification_C.ExecuteUbergraph_WBP_InstanceFUBARNotification");

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
