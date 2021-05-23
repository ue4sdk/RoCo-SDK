// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassAcquisitionScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnUpsellButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::HandleOnUpsellButton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnUpsellButton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BattlePassAcquisitionScreen_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_BattlePassAcquisitionScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BattlePassAcquisitionScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnRewardButtonClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_RewardListEntry_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    RewardSlotDetails              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::HandleOnRewardButtonClicked(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnRewardButtonClicked"));

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


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnPageNavigated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::HandleOnPageNavigated(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnPageNavigated"));

	struct
	{
		int                            Direction;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTransitionFinished
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::OnTransitionFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTransitionFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.DisplayUpsellState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::DisplayUpsellState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.DisplayUpsellState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.SetAcquisitionDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::SetAcquisitionDisplay(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.SetAcquisitionDisplay"));

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnAcceptPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::OnAcceptPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnAcceptPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidgetButtonListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTriggerPageLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::OnTriggerPageLeft()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTriggerPageLeft"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTriggerPageRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::OnTriggerPageRight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTriggerPageRight"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateRightFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateLeftFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.ExecuteUbergraph_WBP_BattlePassAcquisitionScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionScreen_C::ExecuteUbergraph_WBP_BattlePassAcquisitionScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.ExecuteUbergraph_WBP_BattlePassAcquisitionScreen"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.PlayPremiumTransition__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassAcquisitionScreen_C::PlayPremiumTransition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.PlayPremiumTransition__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
