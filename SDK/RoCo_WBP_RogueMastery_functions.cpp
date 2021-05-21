// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMastery_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMastery.WBP_RogueMastery_C.Display Reward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMasteryRewardData      RewardItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UWidget*                 SelectedWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMastery_C::Display_Reward(const struct FMasteryRewardData& RewardItem, class UWidget* SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.Display Reward");

	struct
	{
		struct FMasteryRewardData      RewardItem;
		class UWidget*                 SelectedWidget;
	} params;

	params.RewardItem = RewardItem;
	params.SelectedWidget = SelectedWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.SetRewardDisplayLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMastery_C::SetRewardDisplayLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.SetRewardDisplayLevel");

	struct
	{
		int                            Level;
	} params;

	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.DisplayPrestigeLevels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMastery_C::DisplayPrestigeLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.DisplayPrestigeLevels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.DisplayMasteryLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RogueMastery_C::DisplayMasteryLevel(const struct FActivityTier& ActivityTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.DisplayMasteryLevel");

	struct
	{
		struct FActivityTier           ActivityTier;
	} params;

	params.ActivityTier = ActivityTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMastery_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.SetContextBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueMastery_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.OnBack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMastery_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.OnBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMastery_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMastery_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMastery_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMastery_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueMastery_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMastery_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.FocusGroupNavigateLeftFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMastery_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.FocusGroupNavigateRightFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMastery.WBP_RogueMastery_C.ExecuteUbergraph_WBP_RogueMastery
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMastery_C::ExecuteUbergraph_WBP_RogueMastery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMastery.WBP_RogueMastery_C.ExecuteUbergraph_WBP_RogueMastery");

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
