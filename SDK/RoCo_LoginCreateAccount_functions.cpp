// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoginCreateAccount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginCreateAccount_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginCreateAccount_C::Handle_Text_Committed(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginCreateAccount_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginCreateAccount_C::Handle_Text_Changed(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoginCreateAccount_C::Handle_Login_Error(const struct FText& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error"));

	struct
	{
		struct FText                   MessageText;
	} params;

	params.MessageText = MessageText;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::Submit_New_Account()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Checked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoginCreateAccount_C::Handle_Checkbox_Changed(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed"));

	struct
	{
		bool                           Checked;
	} params;

	params.Checked = Checked;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginCreateAccount_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Email()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Repeat_Password()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Password()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginCreateAccount_C::Gamepad_Select_Username()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginCreateAccount_C::ExecuteUbergraph_LoginCreateAccount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount"));

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
