// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionTally_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionTally.WBP_ProgressionTally_C.SetPlayerProgression
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ProgressionTally_C::SetPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionTally.WBP_ProgressionTally_C.SetPlayerProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally.WBP_ProgressionTally_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionTally_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionTally.WBP_ProgressionTally_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally.WBP_ProgressionTally_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressionTally_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionTally.WBP_ProgressionTally_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally.WBP_ProgressionTally_C.ExecuteUbergraph_WBP_ProgressionTally
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionTally_C::ExecuteUbergraph_WBP_ProgressionTally(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionTally.WBP_ProgressionTally_C.ExecuteUbergraph_WBP_ProgressionTally");

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
