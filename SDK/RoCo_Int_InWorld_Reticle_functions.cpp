// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Int_InWorld_Reticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnWeaponSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      bpp__WeaponComponent__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UInt_InWorld_Reticle_C::OnWeaponSet(class UKSWeaponComponent* bpp__WeaponComponent__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnWeaponSet"));

	struct
	{
		class UKSWeaponComponent*      bpp__WeaponComponent__pf;
	} params;

	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnPossession
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UInt_InWorld_Reticle_C::OnPossession(class APlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnPossession"));

	struct
	{
		class APlayerState*            bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
