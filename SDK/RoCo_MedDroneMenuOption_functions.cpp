// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedDroneMenuOption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UMedDroneMenuOption_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UMedDroneMenuOption_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.Target Player Check Validity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenuOption_C::Target_Player_Check_Validity(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.Target Player Check Validity");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.TargetSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::TargetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.TargetSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMedDroneMenuOption_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.ExecuteUbergraph_MedDroneMenuOption
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenuOption_C::ExecuteUbergraph_MedDroneMenuOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.ExecuteUbergraph_MedDroneMenuOption");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MedDroneMenuOption.MedDroneMenuOption_C.Selected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Selected_Target                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedDroneMenuOption_C::Selected__DelegateSignature(class AKSPlayerState* Selected_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedDroneMenuOption.MedDroneMenuOption_C.Selected__DelegateSignature");

	struct
	{
		class AKSPlayerState*          Selected_Target;
	} params;

	params.Selected_Target = Selected_Target;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
