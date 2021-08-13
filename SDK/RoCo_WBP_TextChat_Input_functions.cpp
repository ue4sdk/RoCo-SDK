// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TextChat_Input_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_Input_C::SetPromptActionActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::UpdateGamepadFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::HandleInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Engaged                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_Input_C::SetEngaged(bool Engaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged");

	struct
	{
		bool                           Engaged;
	} params;

	params.Engaged = Engaged;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::UpdateHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_TextChat_Input_C::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_PlayerInfo*        PersonalChannelPlayer          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::SetCurrentChannel(EPUMG_ChatChannel Channel, class UPUMG_PlayerInfo* PersonalChannelPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel");

	struct
	{
		EPUMG_ChatChannel              Channel;
		class UPUMG_PlayerInfo*        PersonalChannelPlayer;
	} params;

	params.Channel = Channel;
	params.PersonalChannelPlayer = PersonalChannelPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_TextChat_Input_C::On_Input_KeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_Input_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::OnViewStateChanged(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   PreviousRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_TextChat_Input_C::BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::ExecuteUbergraph_WBP_TextChat_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::OnDownPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::OnUpPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::OnRightPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::OnLeftPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_TextChat_Input_C::OnCancelPressed__DelegateSignature(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_Input_C::OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
