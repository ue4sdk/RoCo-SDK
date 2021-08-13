#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDrone_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C
// 0x0010 (0x1220 - 0x1210)
class UMedicDrone_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;           // 0x1210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass MedicDrone_WeaponComponent.MedicDrone_WeaponComponent_C");
		return ptr;
	}


	void OnDroneDestroy__DelegateSignature();
	void ReviveDroneAbilityStateChanged(EKSReviveDroneAbilityState bpp__ReviveDroneState__pf);
	void OnDroneDestroy();
	void FindAndBindModInstance(class AKSCharacter* bpp__KSCharacter__pf);
	void OnReviveDroneAbilityStateChanged__DelegateSignature(EKSReviveDroneAbilityState bpp__ReviveDroneAbilityState__pf);
	void OnModsUpdated__DelegateSignature(class AKSCharacter* bpp__Character__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
