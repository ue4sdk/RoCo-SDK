// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VoteChoice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VoteChoice.WBP_VoteChoice_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteChoice_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VoteChoice_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.UpdateVoteFill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeToFill                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteChoice_C::UpdateVoteFill(float Delta_Time, float TimeToFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.UpdateVoteFill");

	struct
	{
		float                          Delta_Time;
		float                          TimeToFill;
	} params;

	params.Delta_Time = Delta_Time;
	params.TimeToFill = TimeToFill;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.ResetFill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VoteChoice_C::ResetFill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.ResetFill");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteChoice.WBP_VoteChoice_C.ExecuteUbergraph_WBP_VoteChoice
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteChoice_C::ExecuteUbergraph_WBP_VoteChoice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteChoice.WBP_VoteChoice_C.ExecuteUbergraph_WBP_VoteChoice");

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
