// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScoreboardOverview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UScoreboardPlayerStats_Lobby_C*> Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UScoreboardOverview_C::GetAllPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays");

	struct
	{
		TArray<class UScoreboardPlayerStats_Lobby_C*> Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTeamStats              TeamStats                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScoreboardStats        ScoreboardStats                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UScoreboardTeamSection_Lobby_C* ScoreboardTeam                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardOverview_C::CreateTeamDisplay(const struct FTeamStats& TeamStats, const struct FScoreboardStats& ScoreboardStats, class UScoreboardTeamSection_Lobby_C** ScoreboardTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay");

	struct
	{
		struct FTeamStats              TeamStats;
		struct FScoreboardStats        ScoreboardStats;
		class UScoreboardTeamSection_Lobby_C* ScoreboardTeam;
	} params;

	params.TeamStats = TeamStats;
	params.ScoreboardStats = ScoreboardStats;

	UObject::ProcessEvent(fn, &params);

	if (ScoreboardTeam != nullptr)
		*ScoreboardTeam = params.ScoreboardTeam;
}


// Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreboardStats        ScoreboardStatStruct           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UScoreboardOverview_C::PopulateScoreboard(const struct FScoreboardStats& ScoreboardStatStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard");

	struct
	{
		struct FScoreboardStats        ScoreboardStatStruct;
	} params;

	params.ScoreboardStatStruct = ScoreboardStatStruct;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardOverview_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DidWin                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardOverview_C::SetMatchResult(bool DidWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult");

	struct
	{
		bool                           DidWin;
	} params;

	params.DidWin = DidWin;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardOverview_C::SetTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardOverview_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardOverview_C::HandleTeamPlayersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardOverview_C::ExecuteUbergraph_ScoreboardOverview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardOverview_C::OnTeamsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
