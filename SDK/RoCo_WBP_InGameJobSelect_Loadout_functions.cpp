// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerkButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_InGameJobSelect_Loadout_Perk_C*> PerkButtons                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::GetLoadoutPerkButtons(TArray<class UWBP_InGameJobSelect_Loadout_Perk_C*>* PerkButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerkButtons");

	struct
	{
		TArray<class UWBP_InGameJobSelect_Loadout_Perk_C*> PerkButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PerkButtons != nullptr)
		*PerkButtons = params.PerkButtons;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSItem*>         Perks                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::GetLoadoutPerks(TArray<class UKSItem*>* Perks)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerks");

	struct
	{
		TArray<class UKSItem*>         Perks;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Perks != nullptr)
		*Perks = params.Perks;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetCurrentJobLoadoutSlotItemInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EJobLoadoutSlot                JobSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UKSItem*                 OutKSItem                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::GetCurrentJobLoadoutSlotItemInfo(EJobLoadoutSlot JobSlot, struct FString* DisplayName, bool* IsValid, class UKSItem** OutKSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetCurrentJobLoadoutSlotItemInfo");

	struct
	{
		EJobLoadoutSlot                JobSlot;
		struct FString                 DisplayName;
		bool                           IsValid;
		class UKSItem*                 OutKSItem;
	} params;

	params.JobSlot = JobSlot;

	UObject::ProcessEvent(fn, &params);

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutKSItem != nullptr)
		*OutKSItem = params.OutKSItem;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeLoadoutButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::InitializeLoadoutButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeLoadoutButtons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateLoadoutInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::PopulateLoadoutInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateLoadoutInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::PopulateJobInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobLoadout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::PopulateJobLoadout(class UJobSelectionEntryDetails* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobLoadout");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnLoaded_0479943548EBDC9F20CA8D8C126D74BE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::OnLoaded_0479943548EBDC9F20CA8D8C126D74BE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnLoaded_0479943548EBDC9F20CA8D8C126D74BE");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.LoadAndPopulateFirstPassive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>  Asset                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::LoadAndPopulateFirstPassive(TSoftObjectPtr<class UObject> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.LoadAndPopulateFirstPassive");

	struct
	{
		TSoftObjectPtr<class UObject>  Asset;
	} params;

	params.Asset = Asset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_Loadout_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_Loadout_C::ExecuteUbergraph_WBP_InGameJobSelect_Loadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnNavBack__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnNavBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnNavBack__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnJobLockInClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnJobLockInClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnJobLockInClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
