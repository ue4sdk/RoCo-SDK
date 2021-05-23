// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Loadout.WBP_Loadout_C.OnPerkClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 PerkItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::OnPerkClicked(class UKSItem* PerkItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.OnPerkClicked"));

	struct
	{
		class UKSItem*                 PerkItem;
	} params;

	params.PerkItem = PerkItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.OnPerkSectionClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::OnPerkSectionClicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.OnPerkSectionClicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.OnLoadoutClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 LoadoutItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_LoadoutButton_C*    LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::OnLoadoutClicked(class UKSItem* LoadoutItem, class UWBP_LoadoutButton_C* LoadoutButton)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.OnLoadoutClicked"));

	struct
	{
		class UKSItem*                 LoadoutItem;
		class UWBP_LoadoutButton_C*    LoadoutButton;
	} params;

	params.LoadoutItem = LoadoutItem;
	params.LoadoutButton = LoadoutButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.SelectPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 PerkItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldUpdate                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Loadout_C::SelectPerk(class UKSItem* PerkItem, bool ShouldUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.SelectPerk"));

	struct
	{
		class UKSItem*                 PerkItem;
		bool                           ShouldUpdate;
	} params;

	params.PerkItem = PerkItem;
	params.ShouldUpdate = ShouldUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Loadout_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Loadout.WBP_Loadout_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Loadout_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.OnKeyDown"));

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


// Function WBP_Loadout.WBP_Loadout_C.HandleInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.HandleInputModeChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputMode;
	} params;

	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateStatsPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::PopulateStatsPanel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.PopulateStatsPanel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.SetCurrentIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::SetCurrentIndex(int SelectedTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.SetCurrentIndex"));

	struct
	{
		int                            SelectedTier;
	} params;

	params.SelectedTier = SelectedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.CreateWidgetArrays
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::CreateWidgetArrays()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.CreateWidgetArrays"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.SwapToItemDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 ItemSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldSwap                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Loadout_C::SwapToItemDisplay(class UKSItem* ItemSelected, bool ShouldSwap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.SwapToItemDisplay"));

	struct
	{
		class UKSItem*                 ItemSelected;
		bool                           ShouldSwap;
	} params;

	params.ItemSelected = ItemSelected;
	params.ShouldSwap = ShouldSwap;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.Swap to Perk Display
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldSwap                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Loadout_C::Swap_to_Perk_Display(bool ShouldSwap)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.Swap to Perk Display"));

	struct
	{
		bool                           ShouldSwap;
	} params;

	params.ShouldSwap = ShouldSwap;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.PopulatePerkButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::PopulatePerkButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.PopulatePerkButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateItemDetails
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::PopulateItemDetails(class UKSItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.PopulateItemDetails"));

	struct
	{
		class UKSItem*                 Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateRogueDetails
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::PopulateRogueDetails()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.PopulateRogueDetails"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateLoadout
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::PopulateLoadout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.PopulateLoadout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Loadout_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Loadout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Loadout_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Loadout_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Loadout_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Loadout.WBP_Loadout_C.ExecuteUbergraph_WBP_Loadout
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Loadout_C::ExecuteUbergraph_WBP_Loadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Loadout.WBP_Loadout_C.ExecuteUbergraph_WBP_Loadout"));

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
