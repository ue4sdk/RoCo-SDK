// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Weapon_InstantFire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_InstantFire.Weapon_InstantFire_C.ApplyHit
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FHitResult>      Hits                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void AWeapon_InstantFire_C::ApplyHit(const struct FVector& Direction, TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_InstantFire.Weapon_InstantFire_C.ApplyHit");

	struct
	{
		struct FVector                 Direction;
		TArray<struct FHitResult>      Hits;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);

	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Weapon_InstantFire.Weapon_InstantFire_C.CalculateHits
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeapon_InstantFire_C::CalculateHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_InstantFire.Weapon_InstantFire_C.CalculateHits");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Weapon_InstantFire.Weapon_InstantFire_C.FireWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeapon_InstantFire_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_InstantFire.Weapon_InstantFire_C.FireWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Weapon_InstantFire.Weapon_InstantFire_C.ProcessHits
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAimData                ReceivedAim                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FHitResult>      Hits                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void AWeapon_InstantFire_C::ProcessHits(const struct FAimData& ReceivedAim, TArray<struct FHitResult> Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_InstantFire.Weapon_InstantFire_C.ProcessHits");

	struct
	{
		struct FAimData                ReceivedAim;
		TArray<struct FHitResult>      Hits;
	} params;

	params.ReceivedAim = ReceivedAim;
	params.Hits = Hits;

	UObject::ProcessEvent(fn, &params);
}


// Function Weapon_InstantFire.Weapon_InstantFire_C.ExecuteUbergraph_Weapon_InstantFire
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_InstantFire_C::ExecuteUbergraph_Weapon_InstantFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_InstantFire.Weapon_InstantFire_C.ExecuteUbergraph_Weapon_InstantFire");

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
