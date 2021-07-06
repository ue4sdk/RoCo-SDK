#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ANotifyState_SetActiveWeaponVisiblity_BandAid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANotifyState_SetActiveWeaponVisiblity_BandAid.ANotifyState_SetActiveWeaponVisiblity_BandAid_C
// 0x0002 (0x0032 - 0x0030)
class UANotifyState_SetActiveWeaponVisiblity_BandAid_C : public UAnimNotifyState
{
public:
	bool                                               Target_Weapon_Visibilty;                                  // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Force_Return_Visibility__Turn_off_at_your_own_risk;       // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ANotifyState_SetActiveWeaponVisiblity_BandAid.ANotifyState_SetActiveWeaponVisiblity_BandAid_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
