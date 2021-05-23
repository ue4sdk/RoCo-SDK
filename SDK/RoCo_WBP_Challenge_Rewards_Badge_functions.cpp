// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Challenge_Rewards_Badge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.SetCompletedState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsCompleted                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Rewards_Badge_C::SetCompletedState(bool IsCompleted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.SetCompletedState"));

	struct
	{
		bool                           IsCompleted;
	} params;

	params.IsCompleted = IsCompleted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Rewards_Badge_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.ExecuteUbergraph_WBP_Challenge_Rewards_Badge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Rewards_Badge_C::ExecuteUbergraph_WBP_Challenge_Rewards_Badge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.ExecuteUbergraph_WBP_Challenge_Rewards_Badge"));

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
