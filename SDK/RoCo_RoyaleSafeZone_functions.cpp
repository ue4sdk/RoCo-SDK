// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RoyaleSafeZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RoyaleSafeZone.RoyaleSafeZone_C.OnZoneActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ARoyaleSafeZone_C::OnZoneActivated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RoyaleSafeZone.RoyaleSafeZone_C.OnZoneActivated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RoyaleSafeZone.RoyaleSafeZone_C.OnCircleUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          NewRadius                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NewLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARoyaleSafeZone_C::OnCircleUpdate(float NewRadius, const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RoyaleSafeZone.RoyaleSafeZone_C.OnCircleUpdate"));

	struct
	{
		float                          NewRadius;
		struct FVector                 NewLocation;
	} params;

	params.NewRadius = NewRadius;
	params.NewLocation = NewLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function RoyaleSafeZone.RoyaleSafeZone_C.ExecuteUbergraph_RoyaleSafeZone
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ARoyaleSafeZone_C::ExecuteUbergraph_RoyaleSafeZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RoyaleSafeZone.RoyaleSafeZone_C.ExecuteUbergraph_RoyaleSafeZone"));

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
