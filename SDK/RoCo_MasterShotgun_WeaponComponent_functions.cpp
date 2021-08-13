// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterShotgun_WeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterShotgun_WeaponComponent.MasterShotgun_WeaponComponent_C.ExecuteUbergraph_MasterShotgun_WeaponComponent_1
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterShotgun_WeaponComponent_C::ExecuteUbergraph_MasterShotgun_WeaponComponent_1(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterShotgun_WeaponComponent.MasterShotgun_WeaponComponent_C.ExecuteUbergraph_MasterShotgun_WeaponComponent_1");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
