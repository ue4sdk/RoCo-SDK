// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WelcomeToRankedPopup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.SetUpRankedDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WelcomeToRankedPopup_C::SetUpRankedDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.SetUpRankedDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_WelcomeToRankedPopup_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_WelcomeToRankedPopup_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WelcomeToRankedPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WelcomeToRankedPopup_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WelcomeToRankedPopup_C::BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WelcomeToRankedPopup_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.OnClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WelcomeToRankedPopup_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.OnClose"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WelcomeToRankedPopup_C::BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.ExecuteUbergraph_WBP_WelcomeToRankedPopup
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WelcomeToRankedPopup_C::ExecuteUbergraph_WBP_WelcomeToRankedPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.ExecuteUbergraph_WBP_WelcomeToRankedPopup"));

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
