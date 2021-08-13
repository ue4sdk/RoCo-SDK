// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RankedIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedTierTextByTier
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   RankedText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RankedIcon_C::SetRankedTierTextByTier(const struct FText& RankedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedTierTextByTier");

	struct
	{
		struct FText                   RankedText;
	} params;

	params.RankedText = RankedText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RankedIcon_C::SetRankedLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedLevel");

	struct
	{
		int                            Level;
	} params;

	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RankedIcon.WBP_RankedIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RankedIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RankedIcon.WBP_RankedIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RankedIcon.WBP_RankedIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RankedIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RankedIcon.WBP_RankedIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RankedIcon.WBP_RankedIcon_C.ExecuteUbergraph_WBP_RankedIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RankedIcon_C::ExecuteUbergraph_WBP_RankedIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RankedIcon.WBP_RankedIcon_C.ExecuteUbergraph_WBP_RankedIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RankedIcon.WBP_RankedIcon_C.OnRankTierSet__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RankedTiers>     RankTier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RankedIcon_C::OnRankTierSet__DelegateSignature(TEnumAsByte<E_RankedTiers> RankTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RankedIcon.WBP_RankedIcon_C.OnRankTierSet__DelegateSignature");

	struct
	{
		TEnumAsByte<E_RankedTiers>     RankTier;
	} params;

	params.RankTier = RankTier;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
