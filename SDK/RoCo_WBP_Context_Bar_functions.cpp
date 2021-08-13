// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Context_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UContextActionData*> ContextActions                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           AlwaysShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Context_Bar_C::RefreshContextButtons(bool AlwaysShow, TArray<class UContextActionData*>* ContextActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons");

	struct
	{
		TArray<class UContextActionData*> ContextActions;
		bool                           AlwaysShow;
	} params;

	params.AlwaysShow = AlwaysShow;

	UObject::ProcessEvent(fn, &params);

	if (ContextActions != nullptr)
		*ContextActions = params.ContextActions;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> CurrentInputState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Bar_C::HandleInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> CurrentInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> CurrentInputState;
	} params;

	params.CurrentInputState = CurrentInputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Context_Bar_C::CanCloseOnLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Bar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UContextActionData*> ContextActions                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Bar_C::UpdateContextActions(TArray<class UContextActionData*> ContextActions, const struct FName& CurrentRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions");

	struct
	{
		TArray<class UContextActionData*> ContextActions;
		struct FName                   CurrentRoute;
	} params;

	params.ContextActions = ContextActions;
	params.CurrentRoute = CurrentRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Context_Bar_C::ExecuteUbergraph_WBP_Context_Bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar");

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
