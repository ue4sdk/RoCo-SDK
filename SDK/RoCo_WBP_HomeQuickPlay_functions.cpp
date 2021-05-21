// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_HomeQuickPlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   OutDisplayText                 (CPF_Parm, CPF_OutParm)

void UWBP_HomeQuickPlay_C::GetDeserterStatusMessage(struct FText* OutDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage");

	struct
	{
		struct FText                   OutDisplayText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutDisplayText != nullptr)
		*OutDisplayText = params.OutDisplayText;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::Apply_Pending_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::UpdateQueueTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::UpdateStatusModeDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::UpdateDeserterCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::HandleQuickPlayStateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsEnabled                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HomeQuickPlay_C::TogglePlayBtnEnabled(bool InIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled");

	struct
	{
		bool                           InIsEnabled;
	} params;

	params.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsEnabled                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HomeQuickPlay_C::ToggleSupplementaryBtnEnabled(bool InIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled");

	struct
	{
		bool                           InIsEnabled;
	} params;

	params.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::ApplyKeyShortcutsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets");

	struct
	{
		TArray<class UPUMG_Widget*>    Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputMode;
	} params;

	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::SetCurrentGameModeTextDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::SetupGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceClickPlayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceClickSupplementaryButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceUnhoverSupplementaryBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::ForceHoverSupplementaryBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EQuickPlayQueueState           QueueState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::OnUpdateQuickPlayState(EQuickPlayQueueState QueueState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState");

	struct
	{
		EQuickPlayQueueState           QueueState;
	} params;

	params.QueueState = QueueState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeLeft                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::OnUpdatePenaltyTimeLeft(int TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft");

	struct
	{
		int                            TimeLeft;
	} params;

	params.TimeLeft = TimeLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        CurrentSelectedQueue           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_HomeQuickPlay_C::OnSelectedQueueUpdate(const struct FClientQueueInfo& CurrentSelectedQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate");

	struct
	{
		struct FClientQueueInfo        CurrentSelectedQueue;
	} params;

	params.CurrentSelectedQueue = CurrentSelectedQueue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus              CurrentMatchStatus             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::OnQueueStateUpdate(EPUMG_MatchStatus CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate");

	struct
	{
		EPUMG_MatchStatus              CurrentMatchStatus;
	} params;

	params.CurrentMatchStatus = CurrentMatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::OnTransitionAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::HandleTriggerStatusModeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::OnUpdateQueueTimeElapsed(float TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed");

	struct
	{
		float                          TimeElapsed;
	} params;

	params.TimeElapsed = TimeElapsed;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::Pending_Queue_Update_Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::HandleCustomQueueUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeQuickPlay_C::ExecuteUbergraph_WBP_HomeQuickPlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeQuickPlay_C::TriggerStatusModeDisplayUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
