// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelectionPhaseRule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.CinematicWillPlay
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           PlayingCinematic               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UJobSelectionPhaseRule_C::CinematicWillPlay(bool* PlayingCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.CinematicWillPlay");

	struct
	{
		bool                           PlayingCinematic;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayingCinematic != nullptr)
		*PlayingCinematic = params.PlayingCinematic;
}


// Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.HandlePhaseStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UJobSelectionPhaseRule_C::HandlePhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.HandlePhaseStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.PhaseTimerExpired
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UJobSelectionPhaseRule_C::PhaseTimerExpired(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.PhaseTimerExpired");

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.CloseTimeoutGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJobSelectionPhaseRule_C::CloseTimeoutGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.CloseTimeoutGate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.OpenTimeoutGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJobSelectionPhaseRule_C::OpenTimeoutGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.OpenTimeoutGate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.ExecuteUbergraph_JobSelectionPhaseRule
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UJobSelectionPhaseRule_C::ExecuteUbergraph_JobSelectionPhaseRule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule.JobSelectionPhaseRule_C.ExecuteUbergraph_JobSelectionPhaseRule");

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
