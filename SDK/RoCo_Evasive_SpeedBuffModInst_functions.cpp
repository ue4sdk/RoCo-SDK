// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Evasive_SpeedBuffModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.GetDuration
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RemainingTime                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UsesDuration                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEvasive_SpeedBuffModInst_C::GetDuration(float* Duration, float* RemainingTime, bool* UsesDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.GetDuration");

	struct
	{
		float                          Duration;
		float                          RemainingTime;
		bool                           UsesDuration;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
	if (UsesDuration != nullptr)
		*UsesDuration = params.UsesDuration;
}


// Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvasive_SpeedBuffModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.OnModInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEvasive_SpeedBuffModInst_C::OnModInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.OnModInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.OnTimerEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEvasive_SpeedBuffModInst_C::OnTimerEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.OnTimerEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.ExecuteUbergraph_Evasive_SpeedBuffModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvasive_SpeedBuffModInst_C::ExecuteUbergraph_Evasive_SpeedBuffModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C.ExecuteUbergraph_Evasive_SpeedBuffModInst");

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
