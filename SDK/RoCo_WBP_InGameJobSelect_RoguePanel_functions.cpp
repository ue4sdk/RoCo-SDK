// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_RoguePanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.SetInitialViewState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_RoguePanel_C::SetInitialViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.SetInitialViewState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.SetPrimaryButtonDisabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_RoguePanel_C::SetPrimaryButtonDisabled(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.SetPrimaryButtonDisabled");

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.UpdateJobSelectionAvailability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          ContextPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_RoguePanel_C::UpdateJobSelectionAvailability(class AKSPlayerState* ContextPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.UpdateJobSelectionAvailability");

	struct
	{
		class AKSPlayerState*          ContextPlayer;
	} params;

	params.ContextPlayer = ContextPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.NotifyLockedIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_RoguePanel_C::NotifyLockedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.NotifyLockedIn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.NotifySelectionActivityState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESelectionActivityState        State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_RoguePanel_C::NotifySelectionActivityState(ESelectionActivityState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.NotifySelectionActivityState");

	struct
	{
		ESelectionActivityState        State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.UpdateJobItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* NewJobEntry                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_RoguePanel_C::UpdateJobItem(class UJobSelectionEntryDetails* NewJobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.UpdateJobItem");

	struct
	{
		class UJobSelectionEntryDetails* NewJobEntry;
	} params;

	params.NewJobEntry = NewJobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_RoguePanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.PlayBanAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_RoguePanel_C::PlayBanAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.PlayBanAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.Reset State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_RoguePanel_C::Reset_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.Reset State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_RoguePanel_C::CustomEvent(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.CustomEvent");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.BanAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_RoguePanel_C::BanAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.BanAnimComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.AssureVisibleForSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_RoguePanel_C::AssureVisibleForSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.AssureVisibleForSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_RoguePanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.ExecuteUbergraph_WBP_InGameJobSelect_RoguePanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_RoguePanel_C::ExecuteUbergraph_WBP_InGameJobSelect_RoguePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_RoguePanel.WBP_InGameJobSelect_RoguePanel_C.ExecuteUbergraph_WBP_InGameJobSelect_RoguePanel");

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
