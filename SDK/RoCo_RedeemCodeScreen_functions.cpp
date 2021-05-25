// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RedeemCodeScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::UpdateSubmitButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URedeemCodeScreen_C::SetErrorMessage(const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage");

	struct
	{
		struct FText                   ErrorMessage;
	} params;

	params.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::OnSpamPreventTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Color_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             Color                          (CPF_Parm, CPF_OutParm)

void URedeemCodeScreen_C::GetPaletteColor(const struct FName& Color_Name, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor");

	struct
	{
		struct FName                   Color_Name;
		struct FSlateColor             Color;
	} params;

	params.Color_Name = Color_Name;

	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::ShowPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::EndPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URedeemCodeScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::ShowCodeRedeemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::ShowCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::HideCodeRedeemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::HideCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::SubmitCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::OnCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URedeemCodeScreen_C::OnRedeemCodeSubmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Error                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URedeemCodeScreen_C::OnRedeemCodeResult(bool Success, const struct FText& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult");

	struct
	{
		bool                           Success;
		struct FText                   Error;
	} params;

	params.Success = Success;
	params.Error = Error;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URedeemCodeScreen_C::OnCodeTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::OnCodeTextCommit(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URedeemCodeScreen_C::ExecuteUbergraph_RedeemCodeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen");

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
