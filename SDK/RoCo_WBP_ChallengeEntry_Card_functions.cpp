// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeEntry_Card_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GetCurrentChallengeId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Card_C::GetCurrentChallengeId(int* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GetCurrentChallengeId");

	struct
	{
		int                            Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ChallengeEntry_Card_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetChallengeData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ChallengeActivityInstance      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Card_C::SetChallengeData(class UKSActivityInstance* ChallengeActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetChallengeData");

	struct
	{
		class UKSActivityInstance*     ChallengeActivityInstance;
	} params;

	params.ChallengeActivityInstance = ChallengeActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetVisualState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EChallengeEntry_Card_State> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Card_C::SetVisualState(TEnumAsByte<EChallengeEntry_Card_State> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetVisualState");

	struct
	{
		TEnumAsByte<EChallengeEntry_Card_State> State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChallengeEntry_Card_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Card_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Card_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.TryReroll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::TryReroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.TryReroll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Play Reroll Anim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Card_C::Play_Reroll_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Play Reroll Anim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.ExecuteUbergraph_WBP_ChallengeEntry_Card
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Card_C::ExecuteUbergraph_WBP_ChallengeEntry_Card(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.ExecuteUbergraph_WBP_ChallengeEntry_Card");

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
