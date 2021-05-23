// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionCardSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetRankedVisualDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RankedTiers>     RankTier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_C::SetRankedVisualDisplay(TEnumAsByte<E_RankedTiers> RankTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetRankedVisualDisplay"));

	struct
	{
		TEnumAsByte<E_RankedTiers>     RankTier;
	} params;

	params.RankTier = RankTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_C::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_C::AnimateIn(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn"));

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionCardSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnMercMasteryLevelUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FActivityTier           NewTier                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ProgressionCardSlot_C::OnMercMasteryLevelUp(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& NewTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnMercMasteryLevelUp"));

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		struct FActivityTier           NewTier;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnRankTierSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RankedTiers>     RankTier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_C::OnRankTierSet(TEnumAsByte<E_RankedTiers> RankTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnRankTierSet"));

	struct
	{
		TEnumAsByte<E_RankedTiers>     RankTier;
	} params;

	params.RankTier = RankTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimTimerComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_C::StartAnimTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimTimerComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_C::ExecuteUbergraph_WBP_ProgressionCardSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrencyEarned                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_C::StartAnimation__DelegateSignature(int CurrencyEarned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature"));

	struct
	{
		int                            CurrencyEarned;
	} params;

	params.CurrencyEarned = CurrencyEarned;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
