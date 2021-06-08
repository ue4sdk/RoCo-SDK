// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ControlPhaseBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlPhaseBase.ControlPhaseBase_C.OnAcquiredControlPointScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::OnAcquiredControlPointScore(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.OnAcquiredControlPointScore");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.EnterCaptureState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::EnterCaptureState(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.EnterCaptureState");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.UnlockControlPoints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlPhaseBase_C::UnlockControlPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.UnlockControlPoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.SetupControlPoints
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlPhaseBase_C::SetupControlPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.SetupControlPoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.EnterSudden Death
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Controlling_Team               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::EnterSudden_Death(class AKSTeamState* Controlling_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.EnterSudden Death");

	struct
	{
		class AKSTeamState*            Controlling_Team;
	} params;

	params.Controlling_Team = Controlling_Team;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.TryToEnterSuddenDeath
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlPhaseBase_C::TryToEnterSuddenDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.TryToEnterSuddenDeath");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.BreakTie
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AKSTeamState*>    Tied_Teams                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class AKSTeamState*            Tie_Winner                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::BreakTie(TArray<class AKSTeamState*>* Tied_Teams, class AKSTeamState** Tie_Winner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.BreakTie");

	struct
	{
		TArray<class AKSTeamState*>    Tied_Teams;
		class AKSTeamState*            Tie_Winner;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Tied_Teams != nullptr)
		*Tied_Teams = params.Tied_Teams;
	if (Tie_Winner != nullptr)
		*Tie_Winner = params.Tie_Winner;
}


// Function ControlPhaseBase.ControlPhaseBase_C.CheckTied
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTied                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UControlPhaseBase_C::CheckTied(bool* IsTied)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.CheckTied");

	struct
	{
		bool                           IsTied;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsTied != nullptr)
		*IsTied = params.IsTied;
}


// Function ControlPhaseBase.ControlPhaseBase_C.On Point Score Period Elapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         Control_Point                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::On_Point_Score_Period_Elapsed(class AKSControlPoint* Control_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.On Point Score Period Elapsed");

	struct
	{
		class AKSControlPoint*         Control_Point;
	} params;

	params.Control_Point = Control_Point;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.On Point Captured
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         Control_Point                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::On_Point_Captured(class AKSControlPoint* Control_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.On Point Captured");

	struct
	{
		class AKSControlPoint*         Control_Point;
	} params;

	params.Control_Point = Control_Point;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.Cleanup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlPhaseBase_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.Cleanup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.PhaseTimerExpired
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::PhaseTimerExpired(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.PhaseTimerExpired");

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.HandlePhaseInterrupted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UControlPhaseBase_C::HandlePhaseInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.HandlePhaseInterrupted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.HandlePhaseStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UControlPhaseBase_C::HandlePhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.HandlePhaseStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.On Point Contested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::On_Point_Contested(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.On Point Contested");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.On Point Uncontested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::On_Point_Uncontested(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.On Point Uncontested");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.On Point Uncaptured
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::On_Point_Uncaptured(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.On Point Uncaptured");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ControlPhaseBase.ControlPhaseBase_C.ExecuteUbergraph_ControlPhaseBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UControlPhaseBase_C::ExecuteUbergraph_ControlPhaseBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlPhaseBase.ControlPhaseBase_C.ExecuteUbergraph_ControlPhaseBase");

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
