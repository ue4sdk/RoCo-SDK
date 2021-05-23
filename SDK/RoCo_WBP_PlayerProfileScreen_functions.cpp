// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTexture2D*              Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::GetPlatformIcon(bool* Success, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon"));

	struct
	{
		bool                           Success;
		class UTexture2D*              Icon;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_C::SetPlayerHint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_C::ClearPlayerHint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerProfileScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::AwardButtonClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::StatsButtonClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::CustomizeButtonClicked(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::HandleLoginStateChange(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange"));

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_C::ExecuteUbergraph_WBP_PlayerProfileScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen"));

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
