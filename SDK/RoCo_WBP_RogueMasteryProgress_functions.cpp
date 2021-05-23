// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C.GetNextMasteryRewardTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FActivityTier>   ActivityTiers                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            CurrentProgressCount           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FActivityTier           NextRewardTier                 (CPF_Parm, CPF_OutParm)
// bool                           RewardFound                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMasteryProgress_C::GetNextMasteryRewardTier(int CurrentProgressCount, TArray<struct FActivityTier>* ActivityTiers, struct FActivityTier* NextRewardTier, bool* RewardFound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C.GetNextMasteryRewardTier"));

	struct
	{
		TArray<struct FActivityTier>   ActivityTiers;
		int                            CurrentProgressCount;
		struct FActivityTier           NextRewardTier;
		bool                           RewardFound;
	} params;

	params.CurrentProgressCount = CurrentProgressCount;

	UObject::ProcessEvent(fn, &params);

	if (ActivityTiers != nullptr)
		*ActivityTiers = params.ActivityTiers;
	if (NextRewardTier != nullptr)
		*NextRewardTier = params.NextRewardTier;
	if (RewardFound != nullptr)
		*RewardFound = params.RewardFound;
}


// Function WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C.SetMasteryLevelForJob
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryProgress_C::SetMasteryLevelForJob(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C.SetMasteryLevelForJob"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
