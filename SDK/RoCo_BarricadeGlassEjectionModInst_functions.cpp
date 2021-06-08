// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeGlassEjectionModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.CanActivateNow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EKSAbilityUsageFailureType     OutAbilityFailureType          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBarricadeGlassEjectionModInst_C::CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.CanActivateNow");

	struct
	{
		EKSAbilityUsageFailureType     OutAbilityFailureType;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutAbilityFailureType != nullptr)
		*OutAbilityFailureType = params.OutAbilityFailureType;

	return params.ReturnValue;
}


// Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.OnActivation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBarricadeGlassEjectionModInst_C::OnActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.OnActivation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.OnSetupActive
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsTimerActive                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBarricadeGlassEjectionModInst_C::OnSetupActive(bool bIsTimerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.OnSetupActive");

	struct
	{
		bool                           bIsTimerActive;
	} params;

	params.bIsTimerActive = bIsTimerActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.ExecuteUbergraph_BarricadeGlassEjectionModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBarricadeGlassEjectionModInst_C::ExecuteUbergraph_BarricadeGlassEjectionModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C.ExecuteUbergraph_BarricadeGlassEjectionModInst");

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
