// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeEntry_Daily_Truncated_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChallengeEntry_Daily_Truncated_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyLayoutType
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EChallengeEntryCardState       CardState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyLayoutType(EChallengeEntryCardState CardState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyLayoutType"));

	struct
	{
		EChallengeEntryCardState       CardState;
	} params;

	params.CardState = CardState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyChallengeDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DescText                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyChallengeDescription(const struct FText& DescText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyChallengeDescription"));

	struct
	{
		struct FText                   DescText;
	} params;

	params.DescText = DescText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyChallengeProgress
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ProgressTotal                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyChallengeProgress(int Progress, int ProgressTotal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyChallengeProgress"));

	struct
	{
		int                            Progress;
		int                            ProgressTotal;
	} params;

	params.Progress = Progress;
	params.ProgressTotal = ProgressTotal;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyRerollAvailable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanReroll                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyRerollAvailable(bool CanReroll)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyRerollAvailable"));

	struct
	{
		bool                           CanReroll;
	} params;

	params.CanReroll = CanReroll;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.DisplayRewardItems
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTierRewardItemData> RewardItems                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Daily_Truncated_C::DisplayRewardItems(TArray<struct FTierRewardItemData> RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.DisplayRewardItems"));

	struct
	{
		TArray<struct FTierRewardItemData> RewardItems;
	} params;

	params.RewardItems = RewardItems;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Daily_Truncated_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Daily_Truncated_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Daily_Truncated_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ExecuteUbergraph_WBP_ChallengeEntry_Daily_Truncated
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeEntry_Daily_Truncated_C::ExecuteUbergraph_WBP_ChallengeEntry_Daily_Truncated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ExecuteUbergraph_WBP_ChallengeEntry_Daily_Truncated"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.OnClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeEntry_Daily_Truncated_C::OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.OnClick__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
