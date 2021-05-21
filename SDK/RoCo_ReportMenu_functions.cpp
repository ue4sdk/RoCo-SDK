// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReportMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReportMenu.ReportMenu_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UReportMenu_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.GetNavigationWidgets");

	struct
	{
		TArray<class UPUMG_Widget*>    Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ReportMenu.ReportMenu_C.SelectReason
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EReportPlayerReason            ReportReason                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportMenu_C::SelectReason(EReportPlayerReason ReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.SelectReason");

	struct
	{
		EReportPlayerReason            ReportReason;
	} params;

	params.ReportReason = ReportReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.ReportPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EReportPlayerReason            ReportReason                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportMenu_C::ReportPlayer(EReportPlayerReason ReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.ReportPlayer");

	struct
	{
		EReportPlayerReason            ReportReason;
	} params;

	params.ReportReason = ReportReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.OnOpenReportScreen
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FReportPlayerParams     Report                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UReportMenu_C::OnOpenReportScreen(const struct FReportPlayerParams& Report)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnOpenReportScreen");

	struct
	{
		struct FReportPlayerParams     Report;
	} params;

	params.Report = Report;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReportMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReportMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportMenu_C::BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportMenu_C::BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportMenu_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportMenu_C::BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportMenu_C::BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportMenu_C::BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UReportMenu_C::BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReportMenu_C::ExecuteUbergraph_ReportMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReportMenu_C::OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int64_t                        PlayerId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReportMenu_C::OnPlayerReported__DelegateSignature(int64_t PlayerId, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature");

	struct
	{
		int64_t                        PlayerId;
		bool                           Success;
	} params;

	params.PlayerId = PlayerId;
	params.Success = Success;

	UObject::ProcessEvent(fn, &params);
}


// Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReportMenu_C::OnCloseTabScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
