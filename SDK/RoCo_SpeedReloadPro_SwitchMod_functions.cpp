// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SpeedReloadPro_SwitchMod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpeedReloadPro_SwitchMod.SpeedReloadPro_SwitchMod_C.ReactsToAnimationEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool USpeedReloadPro_SwitchMod_C::ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeedReloadPro_SwitchMod.SpeedReloadPro_SwitchMod_C.ReactsToAnimationEvent");

	struct
	{
		struct FName                   AnimEventName;
		int                            Priority;
		bool                           ReturnValue;
	} params;

	params.AnimEventName = AnimEventName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function SpeedReloadPro_SwitchMod.SpeedReloadPro_SwitchMod_C.StopAnimationFromEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSCharacterAnimInst*    CharAnimInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool USpeedReloadPro_SwitchMod_C::StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpeedReloadPro_SwitchMod.SpeedReloadPro_SwitchMod_C.StopAnimationFromEvent");

	struct
	{
		struct FName                   AnimEventName;
		class UKSCharacterAnimInst*    CharAnimInstance;
		bool                           ReturnValue;
	} params;

	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
