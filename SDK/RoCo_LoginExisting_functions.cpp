// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoginExisting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginExisting.LoginExisting_C.SetCacheErrorMsg
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::SetCacheErrorMsg()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.SetCacheErrorMsg"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.UpdatePlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.UpdatePlayerName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ULoginExisting_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LoginExisting.LoginExisting_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ULoginExisting_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::SetPlatformSpecificInterface()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.HandleLoginError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMsg                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoginExisting_C::HandleLoginError(const struct FText& ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.HandleLoginError"));

	struct
	{
		struct FText                   ErrorMsg;
	} params;

	params.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginExisting_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginExisting_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginExisting_C::BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginExisting_C::BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.Handle Input State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.Handle Input State Changed"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.ConfirmClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::ConfirmClicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.ConfirmClicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginExisting_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoginExisting_C::BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoginExisting_C::BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoginExisting_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.OnProfileChangeRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::OnProfileChangeRequested()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.OnProfileChangeRequested"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.Gamepad Select Username
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::Gamepad_Select_Username()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.Gamepad Select Username"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.Gamepad Select Password
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginExisting_C::Gamepad_Select_Password()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.Gamepad Select Password"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginExisting_C::ExecuteUbergraph_LoginExisting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting"));

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
