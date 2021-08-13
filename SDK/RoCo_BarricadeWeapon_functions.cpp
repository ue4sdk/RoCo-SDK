// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarricadeWeapon.BarricadeWeapon_C.GetDesiredBuildLocationAndRotation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 OutLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                OutRotation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABarricadeWeapon_C::GetDesiredBuildLocationAndRotation(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeWeapon.BarricadeWeapon_C.GetDesiredBuildLocationAndRotation");

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
