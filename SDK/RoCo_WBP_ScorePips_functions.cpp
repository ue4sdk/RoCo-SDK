// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ScorePips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Pips_Number                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScorePips_C::Set_Total_Pips(int Pips_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips");

	struct
	{
		int                            Pips_Number;
	} params;

	params.Pips_Number = Pips_Number;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Pips_Number                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScorePips_C::Set_Pips_Number(int Pips_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number");

	struct
	{
		int                            Pips_Number;
	} params;

	params.Pips_Number = Pips_Number;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ScorePips_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePips.WBP_ScorePips_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ScorePips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScorePips_C::ExecuteUbergraph_WBP_ScorePips(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips");

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
