// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoginTwoFactor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginTwoFactor_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginTwoFactor_C::Handle_Text_Committed(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginTwoFactor_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginTwoFactor_C::Handle_Text_Changed(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginTwoFactor_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.Submit Code
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginTwoFactor_C::Submit_Code()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Submit Code");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginTwoFactor_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginTwoFactor_C::Handle_CodeField_Gamepad_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoginTwoFactor_C::Handle_Login_Error(const struct FText& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error");

	struct
	{
		struct FText                   MessageText;
	} params;

	params.MessageText = MessageText;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginTwoFactor_C::ExecuteUbergraph_LoginTwoFactor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor");

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
