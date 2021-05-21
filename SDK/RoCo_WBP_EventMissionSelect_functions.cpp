// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EventMissionSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_EventMissionSelect_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateActivateButtonAndPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventMissionSelect_C::UpdateActivateButtonAndPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateActivateButtonAndPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.TryActivateFocusedMission
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DidActivate                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EventMissionSelect_C::TryActivateFocusedMission(bool* DidActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.TryActivateFocusedMission");

	struct
	{
		bool                           DidActivate;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DidActivate != nullptr)
		*DidActivate = params.DidActivate;
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.PopulateMissions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventMissionSelect_C::PopulateMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.PopulateMissions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.RefreshScene
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventMissionSelect_C::RefreshScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.RefreshScene");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionSelect_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_EventMissionItem_C*> Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_EventMissionSelect_C::GetNavigationWidgets(TArray<class UWBP_EventMissionItem_C*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.GetNavigationWidgets");

	struct
	{
		TArray<class UWBP_EventMissionItem_C*> Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_EventMissionSelect_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventMissionSelect_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventMissionSelect_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventMissionSelect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnActivateButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionSelect_C::OnActivateButtonClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnActivateButtonClicked");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnMissionFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_EventMissionItem_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionSelect_C::OnMissionFocused(class UKSActivityInstance* ActivityInstance, class UWBP_EventMissionItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnMissionFocused");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		class UWBP_EventMissionItem_C* Widget;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.ExecuteUbergraph_WBP_EventMissionSelect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventMissionSelect_C::ExecuteUbergraph_WBP_EventMissionSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.ExecuteUbergraph_WBP_EventMissionSelect");

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
