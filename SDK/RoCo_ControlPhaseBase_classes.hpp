#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ControlPhaseBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlPhaseBase.ControlPhaseBase_C
// 0x009B (0x0173 - 0x00D8)
class UControlPhaseBase_C : public UKSPhaseRuleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       CP_NotCaptured;                                           // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       CP_Locked;                                                // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       CP_Captured;                                              // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       CP_BeingCaptured;                                         // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       CP_Contested;                                             // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       OBJ_ObjInactive;                                          // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OverridePointSettingsWithGameModeSettings;                // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FKSControlPointSettings                     ControlPointSettings;                                     // 0x0118(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                NumActiveControlPoints;                                   // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	TArray<class AKSControlPoint*>                     ActiveControlPoints;                                      // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class AKSControlPoint*>                     TempControlPoints;                                        // 0x0160(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               ScoreUponCapture;                                         // 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SortObjectives;                                           // 0x0171(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ResetControlPointsOnCleanup;                              // 0x0172(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ControlPhaseBase.ControlPhaseBase_C"));
		return ptr;
	}


	void OnAcquiredControlPointScore(class AKSControlPoint* ControlPoint);
	void EnterCaptureState(class AKSControlPoint* ControlPoint);
	void UnlockControlPoints();
	void SetupControlPoints();
	void EnterSudden_Death(class AKSTeamState* Controlling_Team);
	void TryToEnterSuddenDeath();
	void BreakTie(TArray<class AKSTeamState*>* Tied_Teams, class AKSTeamState** Tie_Winner);
	void CheckTied(bool* IsTied);
	void On_Point_Score_Period_Elapsed(class AKSControlPoint* Control_Point);
	void On_Point_Captured(class AKSControlPoint* Control_Point);
	void Cleanup();
	void PhaseTimerExpired(const struct FName& PhaseName);
	void HandlePhaseInterrupted();
	void HandlePhaseStarted();
	void On_Point_Contested(class AKSControlPoint* ControlPoint);
	void On_Point_Uncontested(class AKSControlPoint* ControlPoint);
	void On_Point_Uncaptured(class AKSControlPoint* ControlPoint);
	void ExecuteUbergraph_ControlPhaseBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
