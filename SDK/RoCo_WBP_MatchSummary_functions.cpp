// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_MatchSummary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerEntryStats       PlayerEntryStats               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_MatchSummary_C::PopulatePlayerStats(const struct FPlayerEntryStats& PlayerEntryStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats");

	struct
	{
		struct FPlayerEntryStats       PlayerEntryStats;
	} params;

	params.PlayerEntryStats = PlayerEntryStats;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerRewardsSummary   PlayerRewards                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FScoreboardStats        ScoreboardStats                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_MatchSummary_C::PopulateMatchSummary(const struct FPlayerRewardsSummary& PlayerRewards, const struct FScoreboardStats& ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary");

	struct
	{
		struct FPlayerRewardsSummary   PlayerRewards;
		struct FScoreboardStats        ScoreboardStats;
	} params;

	params.PlayerRewards = PlayerRewards;
	params.ScoreboardStats = ScoreboardStats;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPlayerMatchStatInfo> BestStats                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_MatchSummary_C::PopulateBestStats(TArray<struct FPlayerMatchStatInfo>* BestStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats");

	struct
	{
		TArray<struct FPlayerMatchStatInfo> BestStats;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (BestStats != nullptr)
		*BestStats = params.BestStats;
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchSummary_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchSummary_C::ExecuteUbergraph_WBP_MatchSummary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary");

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
