// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Header_Cosmetic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::BindContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::UpdateName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::UpdateAfterInfoChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateBanner
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::UpdateBanner()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateBanner"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAvatar
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::UpdateAvatar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAvatar"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::SetData(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Social_Header_Cosmetic_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ToggleDND
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::ToggleDND()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ToggleDND"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::HandleReadyNavigation(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation"));

	struct
	{
		TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::HandleMenuStart(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart"));

	struct
	{
		class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuHidden
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::HandleMenuHidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuHidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HideStatusMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::HideStatusMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HideStatusMenu"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::ExecuteUbergraph_WBP_Social_Header_Cosmetic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuHidden__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Header_Cosmetic_C::OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuHidden__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::OnMenuShown__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature"));

	struct
	{
		class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::OnNavigationReady__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature"));

	struct
	{
		TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
