// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CreateCustomGame_MapButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CreateCustomGame_MapButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MapId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FMapDetail              MapInfo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_CreateCustomGame_MapButton_C::SetMap(int MapId, const struct FMapDetail& MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap");

	struct
	{
		int                            MapId;
		struct FMapDetail              MapInfo;
	} params;

	params.MapId = MapId;
	params.MapInfo = MapInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_MapButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_MapButton_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_MapButton_C::ExecuteUbergraph_WBP_CreateCustomGame_MapButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MapId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_MapButton_C::OnMapSelected__DelegateSignature(int MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature");

	struct
	{
		int                            MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
