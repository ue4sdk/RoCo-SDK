// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Weapon_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Projectile.Weapon_Projectile_C.FireWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeapon_Projectile_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Projectile.Weapon_Projectile_C.FireWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Weapon_Projectile.Weapon_Projectile_C.ExecuteUbergraph_Weapon_Projectile
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_Projectile_C::ExecuteUbergraph_Weapon_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Projectile.Weapon_Projectile_C.ExecuteUbergraph_Weapon_Projectile");

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
