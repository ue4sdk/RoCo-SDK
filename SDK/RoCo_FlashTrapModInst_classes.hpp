#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashTrapModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FlashTrapModInst.FlashTrapModInst_C
// 0x0009 (0x04F1 - 0x04E8)
class UFlashTrapModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               HasDetonator;                                             // 0x04F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FlashTrapModInst.FlashTrapModInst_C");
		return ptr;
	}


	bool CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType);
	void ReceiveBeginPlay();
	void OnNewGivenItem();
	void OnWeaponStateChanged(class AKSWeapon* Weapon, EWeaponStateNew OldState, EWeaponStateNew NewState);
	void BeginActivation();
	void OnGrenadeSpawned(class AKSProjectile_Grenade* Grenade);
	void OnGrenadeDestroyed(class AActor* DestroyedActor);
	void Init_RemoteThrow(class AKSWeapon_RemoteThrow* RemoteThrow);
	void Init_Detonator(class AKSWeapon_RemoteTrigger* Detonator);
	void On_Detonator_Spawned(class AKSWeapon_RemoteTrigger* Detonator);
	void On_Remote_Throw_Spawned(class AKSWeapon_RemoteThrow* RemoteThrow);
	void FiredOnAuthority();
	void On_Reclaimed(class AKSProjectile* Reclaimed);
	void OnAbilityReleased();
	void OnNewCharacter();
	void On_Character_Died(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter);
	void ExecuteUbergraph_FlashTrapModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
