// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KOTHPhase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KOTHPhase.KOTHPhase_C.ShouldEndPhase
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldEnd                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKOTHPhase_C::ShouldEndPhase(bool* bShouldEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ShouldEndPhase");

	struct
	{
		bool                           bShouldEnd;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bShouldEnd != nullptr)
		*bShouldEnd = params.bShouldEnd;
}


// Function KOTHPhase.KOTHPhase_C.On Point Uncaptured
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::On_Point_Uncaptured(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.On Point Uncaptured");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.On Point Uncontested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::On_Point_Uncontested(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.On Point Uncontested");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.PreviewNextControlPoint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::PreviewNextControlPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.PreviewNextControlPoint");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.ActivePointTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::ActivePointTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ActivePointTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.ScoreTimerComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::ScoreTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ScoreTimerComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.SetLeadingTeam
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::SetLeadingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.SetLeadingTeam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.End Phase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::End_Phase()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.End Phase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.Is Team Contesting Point
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bContesting                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKOTHPhase_C::Is_Team_Contesting_Point(class AKSTeamState* Team, class AKSControlPoint* ControlPoint, bool* bContesting)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.Is Team Contesting Point");

	struct
	{
		class AKSTeamState*            Team;
		class AKSControlPoint*         ControlPoint;
		bool                           bContesting;
	} params;

	params.Team = Team;
	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);

	if (bContesting != nullptr)
		*bContesting = params.bContesting;
}


// Function KOTHPhase.KOTHPhase_C.GetActiveControlPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::GetActiveControlPoint(class AKSControlPoint** ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.GetActiveControlPoint");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ControlPoint != nullptr)
		*ControlPoint = params.ControlPoint;
}


// Function KOTHPhase.KOTHPhase_C.ResetRoundScore
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::ResetRoundScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ResetRoundScore");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.ApplyTimerForPreview
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::ApplyTimerForPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ApplyTimerForPreview");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.ApplyTimerForActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::ApplyTimerForActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ApplyTimerForActive");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.ActivateNextControlPoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::ActivateNextControlPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ActivateNextControlPoint");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.PrepareForNextControlPoint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::PrepareForNextControlPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.PrepareForNextControlPoint");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.Deactivate Control Point
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::Deactivate_Control_Point(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.Deactivate Control Point");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.GetIndexRelativeToCurrentHelper
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::GetIndexRelativeToCurrentHelper(int Delta, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.GetIndexRelativeToCurrentHelper");

	struct
	{
		int                            Delta;
		int                            Index;
	} params;

	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function KOTHPhase.KOTHPhase_C.Activate Control Point
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Unlock                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKOTHPhase_C::Activate_Control_Point(int Index, bool Unlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.Activate Control Point");

	struct
	{
		int                            Index;
		bool                           Unlock;
	} params;

	params.Index = Index;
	params.Unlock = Unlock;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.EnterCaptureState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::EnterCaptureState(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.EnterCaptureState");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.OnAcquiredControlPointScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::OnAcquiredControlPointScore(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.OnAcquiredControlPointScore");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.HandlePhaseStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKOTHPhase_C::HandlePhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.HandlePhaseStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.On Team Eliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::On_Team_Eliminated(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.On Team Eliminated");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.PhaseTimerExpired
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PhaseName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::PhaseTimerExpired(const struct FName& PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.PhaseTimerExpired");

	struct
	{
		struct FName                   PhaseName;
	} params;

	params.PhaseName = PhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.Event Ticket End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::Event_Ticket_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.Event Ticket End");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.ExecuteUbergraph_KOTHPhase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::ExecuteUbergraph_KOTHPhase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.ExecuteUbergraph_KOTHPhase");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.OnApplyTimerForActive__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTimerHandle            CurrentPointTimer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::OnApplyTimerForActive__DelegateSignature(const struct FTimerHandle& CurrentPointTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.OnApplyTimerForActive__DelegateSignature");

	struct
	{
		struct FTimerHandle            CurrentPointTimer;
	} params;

	params.CurrentPointTimer = CurrentPointTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.OnEnteredCaptureState__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time_Until_Point_Moves         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKOTHPhase_C::OnEnteredCaptureState__DelegateSignature(float Time_Until_Point_Moves)
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.OnEnteredCaptureState__DelegateSignature");

	struct
	{
		float                          Time_Until_Point_Moves;
	} params;

	params.Time_Until_Point_Moves = Time_Until_Point_Moves;

	UObject::ProcessEvent(fn, &params);
}


// Function KOTHPhase.KOTHPhase_C.OnActivatedNextControlPoint__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKOTHPhase_C::OnActivatedNextControlPoint__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KOTHPhase.KOTHPhase_C.OnActivatedNextControlPoint__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
