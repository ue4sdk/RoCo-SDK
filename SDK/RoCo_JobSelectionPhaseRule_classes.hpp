#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelectionPhaseRule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass JobSelectionPhaseRule.JobSelectionPhaseRule_C
// 0x0010 (0x00E8 - 0x00D8)
class UJobSelectionPhaseRule_C : public UKSPhaseRuleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               ShouldSkipCinematicOverride;                              // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              WalkInCinematicTimeOut;                                   // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass JobSelectionPhaseRule.JobSelectionPhaseRule_C");
		return ptr;
	}


	void CinematicWillPlay(bool* PlayingCinematic);
	void HandlePhaseStarted();
	void PhaseTimerExpired(const struct FName& PhaseName);
	void CloseTimeoutGate();
	void OpenTimeoutGate();
	void ExecuteUbergraph_JobSelectionPhaseRule(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
