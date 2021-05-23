// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeEntry_SeasonalMastery_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.SetDisplayedActivity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_SeasonalMastery_C::SetDisplayedActivity(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.SetDisplayedActivity"));

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.SetVisualState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsComplete                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChallengeEntry_SeasonalMastery_C::SetVisualState(bool IsComplete)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.SetVisualState"));

	struct
	{
		bool                           IsComplete;
	} params;

	params.IsComplete = IsComplete;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChallengeEntry_SeasonalMastery_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.RefreshFromMasteryActivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_SeasonalMastery_C::RefreshFromMasteryActivity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.RefreshFromMasteryActivity"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.ExecuteUbergraph_WBP_ChallengeEntry_SeasonalMastery
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_SeasonalMastery_C::ExecuteUbergraph_WBP_ChallengeEntry_SeasonalMastery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.ExecuteUbergraph_WBP_ChallengeEntry_SeasonalMastery"));

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
