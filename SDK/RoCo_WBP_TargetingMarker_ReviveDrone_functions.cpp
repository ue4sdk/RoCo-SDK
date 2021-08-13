// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TargetingMarker_ReviveDrone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.GetWorldPosition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UWBP_TargetingMarker_ReviveDrone_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.GetWorldPosition");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_TargetingMarker_ReviveDrone_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.UpdateInputState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> NewInputState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TargetingMarker_ReviveDrone_C::UpdateInputState(TEnumAsByte<EPGAME_INPUT_STATE> NewInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.UpdateInputState");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> NewInputState;
	} params;

	params.NewInputState = NewInputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Activated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TargetingMarker_ReviveDrone_C::Handle_Revive_Drone_Activated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Activated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.ApplyViewState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETargetMarkerViewState         ViewState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TargetingMarker_ReviveDrone_C::ApplyViewState(ETargetMarkerViewState ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.ApplyViewState");

	struct
	{
		ETargetMarkerViewState         ViewState;
	} params;

	params.ViewState = ViewState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.BindTargetModInst
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::BindTargetModInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.BindTargetModInst");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Show Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::Handle_Show_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Show Anim Finished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Hide Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::Handle_Hide_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Hide Anim Finished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Event Failure
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::Handle_Revive_Drone_Event_Failure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Event Failure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Event Cleanup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::Handle_Revive_Drone_Event_Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Event Cleanup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Event Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::Handle_Revive_Drone_Event_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.Handle Revive Drone Event Cancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.OnGamepadSelectedChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            NewSelectionIndex              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TargetingMarker_ReviveDrone_C::OnGamepadSelectedChanged(int NewSelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.OnGamepadSelectedChanged");

	struct
	{
		int                            NewSelectionIndex;
	} params;

	params.NewSelectionIndex = NewSelectionIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TargetingMarker_ReviveDrone_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.ExecuteUbergraph_WBP_TargetingMarker_ReviveDrone
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TargetingMarker_ReviveDrone_C::ExecuteUbergraph_WBP_TargetingMarker_ReviveDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TargetingMarker_ReviveDrone.WBP_TargetingMarker_ReviveDrone_C.ExecuteUbergraph_WBP_TargetingMarker_ReviveDrone");

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
