#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplodePointOfInterestPhase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C
// 0x005B (0x0133 - 0x00D8)
class UExplodePointOfInterestPhase_C : public UKSPhaseRuleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              TimeToExplode;                                            // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BonusTimeOnExplode;                                       // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsInOvertime;                                            // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	int                                                NumExplodedObjectives;                                    // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumExplodedObjectivesToWin;                               // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TArray<TScriptInterface<class UKSPointOfInterest>> PointsOfInterest;                                         // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TScriptInterface<class UKSPointOfInterest>         ActivePointOfInterest;                                    // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              TimeToResetOnDropped;                                     // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bDisableInactivePOI;                                      // 0x011C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	int                                                NumAttackerTicketsToSubtractOnExplode;                    // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumDefenderTicketsToSubtractOnExplode;                    // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumDisarmedObjectives;                                    // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumDisarmedObjectivesToWin;                               // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKSTimerPriorityConfig                      GameTimerConfigArmed;                                     // 0x0130(0x0003) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplodePointOfInterestPhase.ExplodePointOfInterestPhase_C");
		return ptr;
	}


	void OnObjectiveSpawned(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveDropped(const TScriptInterface<class UKSObjective>& GameObjective);
	void Handle_Pending_Reset(const TScriptInterface<class UKSObjective>& Game_Objective);
	void OnObjectiveHeld(const TScriptInterface<class UKSObjective>& GameObjective);
	void Reenable_Points_Of_Interest();
	void OnObjectiveArming(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveArmed(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveExploded(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveDisarmed(const TScriptInterface<class UKSObjective>& GameObjective);
	void Handle_Pending_Explode(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnTeamEliminated(class AKSTeamState* TeamState);
	void DeclareTeamWinner(EExtractionTeamType Filter);
	void HandleOvertimeResult(const TScriptInterface<class UKSObjective>& GameObjective);
	void PhaseTimerExpired(const struct FName& PhaseName);
	void HandlePhaseStarted();
	void OnPhaseComplete(class AKSTeamState* Team);
	void ExecuteUbergraph_ExplodePointOfInterestPhase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
