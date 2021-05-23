// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ReviveLinkedAllyTargeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Set Tracked Ally
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::Set_Tracked_Ally(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Set Tracked Ally"));

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Current Target Is Tracked Ally
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ReviveLinkedAllyTargeter_C::Current_Target_Is_Tracked_Ally(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Current Target Is Tracked Ally"));

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Check For Valid Mod Inst
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            KSCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::Check_For_Valid_Mod_Inst(class AKSCharacter* KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Check For Valid Mod Inst"));

	struct
	{
		class AKSCharacter*            KSCharacter;
	} params;

	params.KSCharacter = KSCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.UpdateInputState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> NewInputState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::UpdateInputState(TEnumAsByte<EPGAME_INPUT_STATE> NewInputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.UpdateInputState"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> NewInputState;
	} params;

	params.NewInputState = NewInputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Show Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ReviveLinkedAllyTargeter_C::Handle_Show_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Show Anim Finished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Hide Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ReviveLinkedAllyTargeter_C::Handle_Hide_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Hide Anim Finished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Apply View State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETargetMarkerViewState         View_State                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::Apply_View_State(ETargetMarkerViewState View_State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Apply View State"));

	struct
	{
		ETargetMarkerViewState         View_State;
	} params;

	params.View_State = View_State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Mod Activated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ReviveLinkedAllyTargeter_C::Handle_Mod_Activated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Mod Activated"));

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Target Downed Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::Handle_Target_Downed_Changed(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Target Downed Changed"));

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Mod State Storage Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_ActivatedStateMachine* StateMachine                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::Handle_Mod_State_Storage_Changed(class UKSModInst_ActivatedStateMachine* StateMachine)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Handle Mod State Storage Changed"));

	struct
	{
		class UKSModInst_ActivatedStateMachine* StateMachine;
	} params;

	params.StateMachine = StateMachine;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ReviveLinkedAllyTargeter_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Bind Mod Inst
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_ReviveTarget* Associated_Mod_Inst            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::Bind_Mod_Inst(class UKSModInst_ReviveTarget* Associated_Mod_Inst)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.Bind Mod Inst"));

	struct
	{
		class UKSModInst_ReviveTarget* Associated_Mod_Inst;
	} params;

	params.Associated_Mod_Inst = Associated_Mod_Inst;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ReviveLinkedAllyTargeter_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ReviveLinkedAllyTargeter_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.ExecuteUbergraph_WBP_ReviveLinkedAllyTargeter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ReviveLinkedAllyTargeter_C::ExecuteUbergraph_WBP_ReviveLinkedAllyTargeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ReviveLinkedAllyTargeter.WBP_ReviveLinkedAllyTargeter_C.ExecuteUbergraph_WBP_ReviveLinkedAllyTargeter"));

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
