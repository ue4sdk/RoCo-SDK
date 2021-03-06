#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReloadOnDodgeRollModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C
// 0x000C (0x01B4 - 0x01A8)
class UReloadOnDodgeRollModInst_C : public UKSModInst_OnDodgeRoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                Previous_ammo_in_clip;                                    // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C");
		return ptr;
	}


	void MagDropForDodgeReload(class UKSWeaponComponent* Master_Weapon_Ref);
	bool StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance);
	bool ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority);
	void OnDodgeRoll(float RollDuration);
	void RemotePlayerAudio();
	void Dodge_Reload_Mod_Notified();
	void ExecuteUbergraph_ReloadOnDodgeRollModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
