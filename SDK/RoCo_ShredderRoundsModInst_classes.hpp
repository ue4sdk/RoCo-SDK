#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ShredderRoundsModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShredderRoundsModInst.ShredderRoundsModInst_C
// 0x0058 (0x01F0 - 0x0198)
class UShredderRoundsModInst_C : public UKSModInst_DamageDealt
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TMap<EAmmoType, int>                               Ammo_Amount;                                              // 0x01A0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ShredderRoundsModInst.ShredderRoundsModInst_C");
		return ptr;
	}


	void ApplyModAmmo(int Multiplier);
	float ModifyDamageDealt(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class AActor* DamagedActor);
	void OnNewCharacter();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_ShredderRoundsModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
