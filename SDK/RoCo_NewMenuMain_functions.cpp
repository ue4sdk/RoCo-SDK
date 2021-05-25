// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewMenuMain_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewMenuMain.NewMenuMain_C.SetupGamepadCallout
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::SetupGamepadCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.SetupGamepadCallout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.HandleInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewMenuMain_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.StartHideAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.StartHideAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.HideMenuButtonFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::HideMenuButtonFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.HideMenuButtonFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewMenuMain_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewMenuMain_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewMenuMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.InitHideAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitHideAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.OpenStartMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::OpenStartMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.OpenStartMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewMenuMain_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewMenuMain_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewMenuMain_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.StartShowAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.StartShowAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNewMenuMain_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.ShowMenuButtonFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewMenuMain_C::ShowMenuButtonFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.ShowMenuButtonFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.HideMenuButtonAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewMenuMain_C::HideMenuButtonAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.HideMenuButtonAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.ShowMenuButtonAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewMenuMain_C::ShowMenuButtonAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.ShowMenuButtonAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function NewMenuMain.NewMenuMain_C.ExecuteUbergraph_NewMenuMain
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewMenuMain_C::ExecuteUbergraph_NewMenuMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMenuMain.NewMenuMain_C.ExecuteUbergraph_NewMenuMain");

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
