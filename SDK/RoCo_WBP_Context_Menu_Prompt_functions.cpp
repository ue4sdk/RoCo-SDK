// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Context_Menu_Prompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateCycle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::EvaluateInputStateCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateCycle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateStandard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::EvaluateInputStateStandard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateStandard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateCycleButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::PopulateCycleButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateCycleButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateStandardButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::PopulateStandardButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateStandardButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.SetInputState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::SetInputState(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.SetInputState");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::Populate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Context_Menu_Prompt_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::ExecuteUbergraph_WBP_Context_Menu_Prompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::OnPromptClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
