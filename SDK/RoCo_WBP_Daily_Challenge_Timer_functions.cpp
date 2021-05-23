// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Daily_Challenge_Timer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.GetCurrentSecondsRemaining
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Daily_Challenge_Timer_C::GetCurrentSecondsRemaining()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.GetCurrentSecondsRemaining"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Daily_Challenge_Timer_C::CheckForNewChallenge()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Daily_Challenge_Timer_C::UpdateContractTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Daily_Challenge_Timer_C::SetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Daily_Challenge_Timer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Daily_Challenge_Timer_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Daily_Challenge_Timer_C::ExecuteUbergraph_WBP_Daily_Challenge_Timer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer"));

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
