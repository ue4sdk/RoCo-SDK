// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExtractionRewards_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExtractionRewards.ExtractionRewards_C.GetRewardXpPerMin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UExtractionRewards_C::GetRewardXpPerMin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExtractionRewards.ExtractionRewards_C.GetRewardXpPerMin"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExtractionRewards.ExtractionRewards_C.GetWinBonusMultiplier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UExtractionRewards_C::GetWinBonusMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExtractionRewards.ExtractionRewards_C.GetWinBonusMultiplier"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExtractionRewards.ExtractionRewards_C.GetStatsOrdering
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<EPlayerStatType>        StatsOrdering                  (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UExtractionRewards_C::GetStatsOrdering(TArray<EPlayerStatType>* StatsOrdering)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExtractionRewards.ExtractionRewards_C.GetStatsOrdering"));

	struct
	{
		TArray<EPlayerStatType>        StatsOrdering;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StatsOrdering != nullptr)
		*StatsOrdering = params.StatsOrdering;
}


// Function ExtractionRewards.ExtractionRewards_C.GetRewardsFromStat
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FPlayerMatchStatInfo    PlayerStatInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          OutExpRewardValue              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UExtractionRewards_C::GetRewardsFromStat(const struct FPlayerMatchStatInfo& PlayerStatInfo, float* OutExpRewardValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExtractionRewards.ExtractionRewards_C.GetRewardsFromStat"));

	struct
	{
		struct FPlayerMatchStatInfo    PlayerStatInfo;
		float                          OutExpRewardValue;
		bool                           ReturnValue;
	} params;

	params.PlayerStatInfo = PlayerStatInfo;

	UObject::ProcessEvent(fn, &params);

	if (OutExpRewardValue != nullptr)
		*OutExpRewardValue = params.OutExpRewardValue;

	return params.ReturnValue;
}


// Function ExtractionRewards.ExtractionRewards_C.GetBaseExpValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UExtractionRewards_C::GetBaseExpValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExtractionRewards.ExtractionRewards_C.GetBaseExpValue"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
