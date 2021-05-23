// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_MatchCardSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PopulateWithPlayerStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchCardSlot_C::PopulateWithPlayerStats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PopulateWithPlayerStats"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MatchCardSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.AnimateIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchCardSlot_C::AnimateIn(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.AnimateIn"));

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_MatchCardSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.ExecuteUbergraph_WBP_MatchCardSlot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchCardSlot_C::ExecuteUbergraph_WBP_MatchCardSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.ExecuteUbergraph_WBP_MatchCardSlot"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.StartAnimation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrencyEarned                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchCardSlot_C::StartAnimation__DelegateSignature(int CurrencyEarned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.StartAnimation__DelegateSignature"));

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
