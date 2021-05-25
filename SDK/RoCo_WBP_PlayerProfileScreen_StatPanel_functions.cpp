// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_StatPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_StatPanel_C::SetDisableState(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState");

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerProfileScreen_StatPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::RefreshStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_StatPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_StatPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLoaded                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_StatPanel_C::OnActivityInstanceChanged(bool IsLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged");

	struct
	{
		bool                           IsLoaded;
	} params;

	params.IsLoaded = IsLoaded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_StatPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel");

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
