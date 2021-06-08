#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RestartRegenOnReviveOtherModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RestartRegenOnReviveOtherModInst.RestartRegenOnReviveOtherModInst_C
// 0x0008 (0x01A0 - 0x0198)
class URestartRegenOnReviveOtherModInst_C : public UKSModInst_OnReviveOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RestartRegenOnReviveOtherModInst.RestartRegenOnReviveOtherModInst_C");
		return ptr;
	}


	void OnReviveOther(class AKSPlayerState* Reviver, class AKSPlayerState* Revivee);
	void ExecuteUbergraph_RestartRegenOnReviveOtherModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
