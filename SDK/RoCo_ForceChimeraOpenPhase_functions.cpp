// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ForceChimeraOpenPhase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForceChimeraOpenPhase.ForceChimeraOpenPhase_C.HandlePhaseStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UForceChimeraOpenPhase_C::HandlePhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ForceChimeraOpenPhase.ForceChimeraOpenPhase_C.HandlePhaseStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ForceChimeraOpenPhase.ForceChimeraOpenPhase_C.PhaseTimerExpired
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForceChimeraOpenPhase_C::PhaseTimerExpired(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ForceChimeraOpenPhase.ForceChimeraOpenPhase_C.PhaseTimerExpired"));

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function ForceChimeraOpenPhase.ForceChimeraOpenPhase_C.ExecuteUbergraph_ForceChimeraOpenPhase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForceChimeraOpenPhase_C::ExecuteUbergraph_ForceChimeraOpenPhase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ForceChimeraOpenPhase.ForceChimeraOpenPhase_C.ExecuteUbergraph_ForceChimeraOpenPhase"));

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
