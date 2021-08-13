#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RechargeAbilitiesOnDownOtherModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RechargeAbilitiesOnDownOtherModInst.RechargeAbilitiesOnDownOtherModInst_C
// 0x0008 (0x01B0 - 0x01A8)
class URechargeAbilitiesOnDownOtherModInst_C : public UKSModInst_OnDownOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RechargeAbilitiesOnDownOtherModInst.RechargeAbilitiesOnDownOtherModInst_C");
		return ptr;
	}


	void OnDownOther(class AKSCharacter* Other);
	void ExecuteUbergraph_RechargeAbilitiesOnDownOtherModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
