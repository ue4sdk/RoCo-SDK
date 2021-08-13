// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDroneWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MedicDroneWeapon.MedicDroneWeapon_C.CanStartReloadNow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMedicDroneWeapon_C::CanStartReloadNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneWeapon.MedicDroneWeapon_C.CanStartReloadNow");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedicDroneWeapon.MedicDroneWeapon_C.GetDesiredSpawnLocationAndRotation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 OutLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                OutRotation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMedicDroneWeapon_C::GetDesiredSpawnLocationAndRotation(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneWeapon.MedicDroneWeapon_C.GetDesiredSpawnLocationAndRotation");

	struct
	{
		struct FVector                 OutLocation;
		struct FRotator                OutRotation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function MedicDroneWeapon.MedicDroneWeapon_C.AllowDodgeRollRightNow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMedicDroneWeapon_C::AllowDodgeRollRightNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneWeapon.MedicDroneWeapon_C.AllowDodgeRollRightNow");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
