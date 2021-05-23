// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_AccountPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerProfileScreen_AccountPanel_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.RefreshPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AccountPanel_C::RefreshPlayer(class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.RefreshPlayer"));

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AccountPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AccountPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Update Player Identity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::Update_Player_Identity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Update Player Identity"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountPanel_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.UninitializeWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AccountPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel"));

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
