// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelectionPhaseRule_QuickTest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JobSelectionPhaseRule_QuickTest.JobSelectionPhaseRule_QuickTest_C.HandlePhaseStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UJobSelectionPhaseRule_QuickTest_C::HandlePhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule_QuickTest.JobSelectionPhaseRule_QuickTest_C.HandlePhaseStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionPhaseRule_QuickTest.JobSelectionPhaseRule_QuickTest_C.PhaseTimerExpired
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UJobSelectionPhaseRule_QuickTest_C::PhaseTimerExpired(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule_QuickTest.JobSelectionPhaseRule_QuickTest_C.PhaseTimerExpired");

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionPhaseRule_QuickTest.JobSelectionPhaseRule_QuickTest_C.ExecuteUbergraph_JobSelectionPhaseRule_QuickTest
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UJobSelectionPhaseRule_QuickTest_C::ExecuteUbergraph_JobSelectionPhaseRule_QuickTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionPhaseRule_QuickTest.JobSelectionPhaseRule_QuickTest_C.ExecuteUbergraph_JobSelectionPhaseRule_QuickTest");

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
