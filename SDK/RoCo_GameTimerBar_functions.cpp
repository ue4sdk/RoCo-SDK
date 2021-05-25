// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTimerBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameTimerBar.GameTimerBar_C.HandlePointBarType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETopbarPointsBarType           PointBarType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::HandlePointBarType(ETopbarPointsBarType PointBarType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandlePointBarType");

	struct
	{
		ETopbarPointsBarType           PointBarType;
	} params;

	params.PointBarType = PointBarType;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.SetTicketIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::SetTicketIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.SetTicketIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.ResetIntraScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::ResetIntraScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ResetIntraScore");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.SetIntraScoreIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::SetIntraScoreIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.SetIntraScoreIcons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.SetGameBarFromComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              ObjectiveIcon                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseProgressCircle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           UseIntraScoring                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTexture2D*              ScoreIcon                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETopbarPointsBarType           PointsBarType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseTicketSystem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTexture2D*              TicketIcon                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETopbarTicketDisplaySide       TicketDisplaySide              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::SetGameBarFromComponent(class UTexture2D* ObjectiveIcon, bool UseProgressCircle, bool UseIntraScoring, class UTexture2D* ScoreIcon, ETopbarPointsBarType PointsBarType, bool UseTicketSystem, class UTexture2D* TicketIcon, ETopbarTicketDisplaySide TicketDisplaySide)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.SetGameBarFromComponent");

	struct
	{
		class UTexture2D*              ObjectiveIcon;
		bool                           UseProgressCircle;
		bool                           UseIntraScoring;
		class UTexture2D*              ScoreIcon;
		ETopbarPointsBarType           PointsBarType;
		bool                           UseTicketSystem;
		class UTexture2D*              TicketIcon;
		ETopbarTicketDisplaySide       TicketDisplaySide;
	} params;

	params.ObjectiveIcon = ObjectiveIcon;
	params.UseProgressCircle = UseProgressCircle;
	params.UseIntraScoring = UseIntraScoring;
	params.ScoreIcon = ScoreIcon;
	params.PointsBarType = PointsBarType;
	params.UseTicketSystem = UseTicketSystem;
	params.TicketIcon = TicketIcon;
	params.TicketDisplaySide = TicketDisplaySide;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.HandleIntraGoalChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::HandleIntraGoalChanged(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleIntraGoalChanged");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.HandleIntraScoreChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::HandleIntraScoreChanged(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleIntraScoreChanged");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.SetupIntraScoring
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::SetupIntraScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.SetupIntraScoring");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.HandleTicketDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETopbarTicketDisplaySide       TicketDisplaySide              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::HandleTicketDisplay(ETopbarTicketDisplaySide TicketDisplaySide)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleTicketDisplay");

	struct
	{
		ETopbarTicketDisplaySide       TicketDisplaySide;
	} params;

	params.TicketDisplaySide = TicketDisplaySide;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnTeamObjectiveRoleChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnTeamObjectiveRoleChanged(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamObjectiveRoleChanged");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Set ObjectiveRole Icon for Team
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSTeamState*            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::Set_ObjectiveRole_Icon_for_Team(class UImage* Icon, class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Set ObjectiveRole Icon for Team");

	struct
	{
		class UImage*                  Icon;
		class AKSTeamState*            Team;
	} params;

	params.Icon = Icon;
	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.CheckTeamSides
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::CheckTeamSides()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.CheckTeamSides");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Bind Player State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::Bind_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Bind Player State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.ResetPlayerStates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::ResetPlayerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ResetPlayerStates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnTeamChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnTeamChanged(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamChanged");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.UpdateRoundNumberText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::UpdateRoundNumberText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.UpdateRoundNumberText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnTotalRoundsSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::OnTotalRoundsSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTotalRoundsSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnRoundsToWinSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::OnRoundsToWinSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnRoundsToWinSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.BindRoundEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::BindRoundEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.BindRoundEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnTeamScoreChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            KSTeamState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnTeamScoreChanged(class AKSTeamState* KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamScoreChanged");

	struct
	{
		class AKSTeamState*            KSTeamState;
	} params;

	params.KSTeamState = KSTeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.On Team Respawns Changed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            KSTeamState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::On_Team_Respawns_Changed(class AKSTeamState* KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.On Team Respawns Changed");

	struct
	{
		class AKSTeamState*            KSTeamState;
	} params;

	params.KSTeamState = KSTeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnMemberRemoved(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnMemberRemoved");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnMemberAdded(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnMemberAdded");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnTeamAdded
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            KSTeamState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnTeamAdded(class AKSTeamState* KSTeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnTeamAdded");

	struct
	{
		class AKSTeamState*            KSTeamState;
	} params;

	params.KSTeamState = KSTeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Bind Team Events
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::Bind_Team_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Bind Team Events");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.GetRoundInProgressText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UGameTimerBar_C::GetRoundInProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.GetRoundInProgressText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameTimerBar.GameTimerBar_C.SetAttackDefendIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::SetAttackDefendIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.SetAttackDefendIcons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.HandlePhaseChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::HandlePhaseChanged(const struct FName& NewPhase, const struct FName& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandlePhaseChanged");

	struct
	{
		struct FName                   NewPhase;
		struct FName                   PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.PlayBombCountdownSFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::PlayBombCountdownSFX(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.PlayBombCountdownSFX");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.ShouldPlayCountdownSFX
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldPlay                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBar_C::ShouldPlayCountdownSFX(bool* ShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ShouldPlayCountdownSFX");

	struct
	{
		bool                           ShouldPlay;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShouldPlay != nullptr)
		*ShouldPlay = params.ShouldPlay;
}


// Function GameTimerBar.GameTimerBar_C.PlayFinalCountdownSFX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current_Second                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::PlayFinalCountdownSFX(float Current_Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.PlayFinalCountdownSFX");

	struct
	{
		float                          Current_Second;
	} params;

	params.Current_Second = Current_Second;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Set Timer Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::Set_Timer_Text(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Set Timer Text");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Neutral Bomb State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UGameTimerBar_C::Handle_Neutral_Bomb_State_Changed(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Neutral Bomb State Changed");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameTimerBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Timer Second Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds_Remaining              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::Handle_Timer_Second_Tick(float Seconds_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Timer Second Tick");

	struct
	{
		float                          Seconds_Remaining;
	} params;

	params.Seconds_Remaining = Seconds_Remaining;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Round Info Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::Handle_Round_Info_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Round Info Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Computers Unlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::Handle_Computers_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Computers Unlocked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Round Start
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         Round_Init_State               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UGameTimerBar_C::Handle_Round_Start(const struct FRoundInitState& Round_Init_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Round Start");

	struct
	{
		struct FRoundInitState         Round_Init_State;
	} params;

	params.Round_Init_State = Round_Init_State;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Computer Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::Handle_Computer_Update(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Computer Update");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Round End
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UGameTimerBar_C::Handle_Round_End(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Round End");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBar_C::HandleKillCamEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleKillCamEnabled");

	struct
	{
		bool                           bIsEnabled;
	} params;

	params.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.HandleFadeAnimEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::HandleFadeAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.HandleFadeAnimEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnUIRelevantPlayerStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnUIRelevantPlayerStateChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnControlPointUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnControlPointUpdate(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnControlPointUpdate");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.OnControlPointScored
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::OnControlPointScored(class AKSTeamState* TeamState, class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.OnControlPointScored");

	struct
	{
		class AKSTeamState*            TeamState;
		class AKSControlPoint*         ControlPoint;
	} params;

	params.TeamState = TeamState;
	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Handle Attacking Team Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::Handle_Attacking_Team_Updated(class AKSTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Handle Attacking Team Updated");

	struct
	{
		class AKSTeamState*            NewTeam;
	} params;

	params.NewTeam = NewTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Deferred Game State Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::Deferred_Game_State_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Deferred Game State Open");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.Deferred Bind Computer Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::Deferred_Bind_Computer_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.Deferred Bind Computer Open");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.DeferredPlayerStateOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::DeferredPlayerStateOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.DeferredPlayerStateOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.UnbindControlPointDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::UnbindControlPointDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.UnbindControlPointDelegates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.ScorePeriodElapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::ScorePeriodElapsed(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ScorePeriodElapsed");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.StopTickCaptureProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::StopTickCaptureProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.StopTickCaptureProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.TickCaptureProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::TickCaptureProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.TickCaptureProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.DeferredBindControlPointOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::DeferredBindControlPointOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.DeferredBindControlPointOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.DeferredLocalTeamOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTimerBar_C::DeferredLocalTeamOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.DeferredLocalTeamOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBar.GameTimerBar_C.ExecuteUbergraph_GameTimerBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBar_C::ExecuteUbergraph_GameTimerBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBar.GameTimerBar_C.ExecuteUbergraph_GameTimerBar");

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
