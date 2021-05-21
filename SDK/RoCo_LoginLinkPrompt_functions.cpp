// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoginLinkPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginLinkPrompt_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginLinkPrompt_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginLinkPrompt_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginLinkPrompt_C::BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginLinkPrompt_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.ExecuteUbergraph_LoginLinkPrompt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoginLinkPrompt_C::ExecuteUbergraph_LoginLinkPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.ExecuteUbergraph_LoginLinkPrompt");

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
