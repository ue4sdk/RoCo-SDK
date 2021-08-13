#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DimaPassiveModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DimaPassiveModInst.DimaPassiveModInst_C
// 0x0008 (0x01C0 - 0x01B8)
class UDimaPassiveModInst_C : public UKSModInst_OnDamageOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DimaPassiveModInst.DimaPassiveModInst_C");
		return ptr;
	}


	void OnMatchingDamageDealt(class AActor* DamagedActor, float Damage, class AActor* DamageCauser);
	void ExecuteUbergraph_DimaPassiveModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
