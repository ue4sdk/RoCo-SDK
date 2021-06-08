// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AdrenalineShotWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdrenalineShotWeapon.AdrenalineShotWeapon_C.FireWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAdrenalineShotWeapon_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdrenalineShotWeapon.AdrenalineShotWeapon_C.FireWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdrenalineShotWeapon.AdrenalineShotWeapon_C.ExecuteUbergraph_AdrenalineShotWeapon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAdrenalineShotWeapon_C::ExecuteUbergraph_AdrenalineShotWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdrenalineShotWeapon.AdrenalineShotWeapon_C.ExecuteUbergraph_AdrenalineShotWeapon");

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
