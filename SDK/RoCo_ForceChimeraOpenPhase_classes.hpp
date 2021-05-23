#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ForceChimeraOpenPhase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForceChimeraOpenPhase.ForceChimeraOpenPhase_C
// 0x0008 (0x00E0 - 0x00D8)
class UForceChimeraOpenPhase_C : public UKSPhaseRuleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ForceChimeraOpenPhase.ForceChimeraOpenPhase_C"));
		return ptr;
	}


	void HandlePhaseStarted();
	void PhaseTimerExpired(const struct FName& PhaseName);
	void ExecuteUbergraph_ForceChimeraOpenPhase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
