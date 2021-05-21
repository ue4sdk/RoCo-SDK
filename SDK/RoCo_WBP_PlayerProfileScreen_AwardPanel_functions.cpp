// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_AwardPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.SetDisableState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardPanel_C::SetDisableState(bool IsDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.SetDisableState");

	struct
	{
		bool                           IsDisable;
	} params;

	params.IsDisable = IsDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerProfileScreen_AwardPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.RefreshAwards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::RefreshAwards()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.RefreshAwards");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AwardPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel");

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
