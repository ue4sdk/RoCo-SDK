#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HealOtherOnReviveOtherModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HealOtherOnReviveOtherModInst.HealOtherOnReviveOtherModInst_C
// 0x0008 (0x01A8 - 0x01A0)
class UHealOtherOnReviveOtherModInst_C : public UKSModInst_OnReviveOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass HealOtherOnReviveOtherModInst.HealOtherOnReviveOtherModInst_C");
		return ptr;
	}


	void OnReviveOther(class AKSPlayerState* Reviver, class AKSPlayerState* Revivee);
	void ExecuteUbergraph_HealOtherOnReviveOtherModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
