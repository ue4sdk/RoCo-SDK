// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeView_DailyContracts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.GetDisplayingChallenges
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSActivityInstance*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash)

TArray<class UKSActivityInstance*> UWBP_ChallengeView_DailyContracts_C::GetDisplayingChallenges()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.GetDisplayingChallenges"));

	struct
	{
		TArray<class UKSActivityInstance*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.Get Daily Challenge Cards
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_ChallengeEntry_Card_C*> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_DailyContracts_C::Get_Daily_Challenge_Cards(TArray<class UWBP_ChallengeEntry_Card_C*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.Get Daily Challenge Cards"));

	struct
	{
		TArray<class UWBP_ChallengeEntry_Card_C*> Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeView_DailyContracts_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeChallengeDisplays
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ChallengeView_DailyContracts_C::InitializeChallengeDisplays()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeChallengeDisplays"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallenge
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           PlayFlourish                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChallengeView_DailyContracts_C::DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallenge"));

	struct
	{
		int                            Index;
		class UKSActivityInstance*     ActivityInstance;
		bool                           PlayFlourish;
	} params;

	params.Index = Index;
	params.ActivityInstance = ActivityInstance;
	params.PlayFlourish = PlayFlourish;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallengeTimeRemaining
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeRemainingSeconds           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_DailyContracts_C::DisplayChallengeTimeRemaining(int TimeRemainingSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallengeTimeRemaining"));

	struct
	{
		int                            TimeRemainingSeconds;
	} params;

	params.TimeRemainingSeconds = TimeRemainingSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.ExecuteUbergraph_WBP_ChallengeView_DailyContracts
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_DailyContracts_C::ExecuteUbergraph_WBP_ChallengeView_DailyContracts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.ExecuteUbergraph_WBP_ChallengeView_DailyContracts"));

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
