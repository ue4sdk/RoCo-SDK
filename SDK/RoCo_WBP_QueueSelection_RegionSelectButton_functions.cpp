// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QueueSelection_RegionSelectButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> NewInputState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::HandleInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> NewInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> NewInputState;
	} params;

	params.NewInputState = NewInputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::SetupPromptImageHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::Update_Region()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::LoginState(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState");

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::EnableAsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::DisableAsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::UpdateCrossplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QueueSelection_RegionSelectButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::RegionSelectRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
