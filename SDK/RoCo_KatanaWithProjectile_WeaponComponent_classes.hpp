#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KatanaWithProjectile_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass KatanaWithProjectile_WeaponComponent.KatanaWithProjectile_WeaponComponent_C
// 0x0070 (0x15D0 - 0x1560)
class UKatanaWithProjectile_WeaponComponent_C : public UMasterMelee_WeaponComponent_C
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1560(0x0060) MISSED OFFSET
	bool                                               K2Node_Event_PlayNoChainFireMontage;                      // 0x15C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x15C1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass KatanaWithProjectile_WeaponComponent.KatanaWithProjectile_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
