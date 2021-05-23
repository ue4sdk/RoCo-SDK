// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EventRewardsScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.HandleOnPageNavigated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventRewardsScreen_C::HandleOnPageNavigated(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.HandleOnPageNavigated"));

	struct
	{
		int                            Direction;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.Select Initial Item
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::Select_Initial_Item()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.Select Initial Item"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnRewardButtonClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_RewardListEntry_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    RewardSlotDetails              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventRewardsScreen_C::OnRewardButtonClicked(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnRewardButtonClicked"));

	struct
	{
		class UWBP_RewardListEntry_C*  Widget;
		struct FCosmeticSlotDetails    RewardSlotDetails;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.Widget = Widget;
	params.RewardSlotDetails = RewardSlotDetails;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_EventRewardsScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.PerformInitialSetup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::PerformInitialSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.PerformInitialSetup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventRewardsScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventRewardsScreen_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.FocusGroupNavigateRightFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventRewardsScreen_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.FocusGroupNavigateLeftFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidgetButtonListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnTriggerPageLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::OnTriggerPageLeft()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnTriggerPageLeft"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnTriggerPageRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EventRewardsScreen_C::OnTriggerPageRight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnTriggerPageRight"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.ExecuteUbergraph_WBP_EventRewardsScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventRewardsScreen_C::ExecuteUbergraph_WBP_EventRewardsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.ExecuteUbergraph_WBP_EventRewardsScreen"));

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
