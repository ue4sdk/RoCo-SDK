// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewStartMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewStartMenu.NewStartMenu_C.Set Version Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::Set_Version_Text()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.Set Version Text"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UNewStartMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NewStartMenu.NewStartMenu_C.ShowMenuAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::ShowMenuAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.ShowMenuAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.ShowMenuFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::ShowMenuFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.ShowMenuFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.InitHideAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.InitHideAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.HideMenuFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::HideMenuFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.HideMenuFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.HideMenuAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::HideMenuAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.HideMenuAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.StartHideAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.StartHideAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewStartMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.BackToLastScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::BackToLastScreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.BackToLastScreen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.StartShowSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.StartHideSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNewStartMenu_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.InitializeTickAnimations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.StartShowAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.StartShowAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewStartMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.OnBackButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewStartMenu_C::OnBackButton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.OnBackButton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonContracts_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::BndEvt__ButtonContracts_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonContracts_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function NewStartMenu.NewStartMenu_C.ExecuteUbergraph_NewStartMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewStartMenu_C::ExecuteUbergraph_NewStartMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewStartMenu.NewStartMenu_C.ExecuteUbergraph_NewStartMenu"));

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
