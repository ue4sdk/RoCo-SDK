// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VerticalTabGroupEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_VerticalTabGroupEntry_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ClearSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::ClearSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ClearSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.SetViewState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EVerticalTabState> TabState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Force                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VerticalTabGroupEntry_C::SetViewState(TEnumAsByte<EVerticalTabState> TabState, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.SetViewState");

	struct
	{
		TEnumAsByte<EVerticalTabState> TabState;
		bool                           Force;
	} params;

	params.TabState = TabState;
	params.Force = Force;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VerticalTabGroupEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroupEntry_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroupEntry_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroupEntry_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ExecuteUbergraph_WBP_VerticalTabGroupEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroupEntry_C::ExecuteUbergraph_WBP_VerticalTabGroupEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ExecuteUbergraph_WBP_VerticalTabGroupEntry");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabGamepadSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroupEntry_C::OnTabGamepadSelected__DelegateSignature(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabGamepadSelected__DelegateSignature");

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroupEntry_C::OnTabSelected__DelegateSignature(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabSelected__DelegateSignature");

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
