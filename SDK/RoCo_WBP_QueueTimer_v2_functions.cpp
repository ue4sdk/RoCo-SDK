// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QueueTimer_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdateCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QueueTimer_v2_C::SetNeutralLabel(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel"));

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            LinearColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::GetColorFromPalette(const struct FName& RowName, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette"));

	struct
	{
		struct FName                   RowName;
		struct FLinearColor            LinearColor;
	} params;

	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdatePenaltyTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdateStatusLabel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::SetGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::UpdateQueueTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::CancelQueue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QueueTimer_v2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeSecs                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::OnUpdateQueueTime(float TimeSecs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime"));

	struct
	{
		float                          TimeSecs;
	} params;

	params.TimeSecs = TimeSecs;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EQueueTimerState               State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::OnUpdateQueueTimerState(EQueueTimerState State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState"));

	struct
	{
		EQueueTimerState               State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanControl                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QueueTimer_v2_C::OnControlQueuePermissionUpdate(bool CanControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate"));

	struct
	{
		bool                           CanControl;
	} params;

	params.CanControl = CanControl;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::ExecuteUbergraph_WBP_QueueTimer_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2"));

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
