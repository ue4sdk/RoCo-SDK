// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedDroneMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MedDroneMenu.MedDroneMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMedDroneMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.OptionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Selected_Target                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenu_C::OptionSelected(class AKSPlayerState* Selected_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.OptionSelected");

	struct
	{
		class AKSPlayerState*          Selected_Target;
	} params;

	params.Selected_Target = Selected_Target;

	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMedDroneMenu_C::BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.Close
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Should_Cancel                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMedDroneMenu_C::Close(bool Should_Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.Close");

	struct
	{
		bool                           Should_Cancel;
	} params;

	params.Should_Cancel = Should_Cancel;

	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMedDroneMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.Handle Input State Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenu_C::Handle_Input_State_Change(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.Handle Input State Change");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenu.MedDroneMenu_C.ExecuteUbergraph_MedDroneMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenu_C::ExecuteUbergraph_MedDroneMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenu.MedDroneMenu_C.ExecuteUbergraph_MedDroneMenu");

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
