#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameMode_Demolition_Modular_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameMode_Demolition_Modular.GameMode_Demolition_Modular_C
// 0x0064 (0x0FBC - 0x0F58)
class AGameMode_Demolition_Modular_C : public AKSGameMode_Modular
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F58(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSDropRuleComponent*                        KSDropRule;                                               // 0x0F60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UExplodePointOfInterestPhase_C*              ExplodePointOfInterestPhase;                              // 0x0F68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointOfInterestSelectionRule_C*             PointOfInterestSelectionRule;                             // 0x0F70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UJobSelectionPhaseRule_C*                    JobSelectionPhaseRule;                                    // 0x0F78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UJobSelectionComponent_C*                    JobSelectionComponent;                                    // 0x0F80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UGiveEquipmentBehavior_C*                    GiveBombRule;                                             // 0x0F88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UForceChimeraOpenPhase_C*                    ForceChimeraOpenPhase;                                    // 0x0F90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSPunishmentRuleComponent*                  KSPunishmentRule;                                         // 0x0F98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSShopRuleComponent*                        KSShopRule;                                               // 0x0FA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0FA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                AttackingTeamNum;                                         // 0x0FB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DefendingTeamNum;                                         // 0x0FB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ExplodePOIPhaseTime;                                      // 0x0FB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GameMode_Demolition_Modular.GameMode_Demolition_Modular_C");
		return ptr;
	}


	void Assign_Teams();
	void PickCharacterAsBomber();
	void OnFailedToStart_9C256A0149DADA633ADA3B90E1A537F5(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_9C256A0149DADA633ADA3B90E1A537F5(class AKSTeamState* LeadingTeam);
	void OnFailedToStart_27D30F2E4048E935D5A52CB6E2084495(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_27D30F2E4048E935D5A52CB6E2084495(class AKSTeamState* LeadingTeam);
	void OnFailedToStart_8F82241641EB2676FEE5A8AF8A1560EE(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_8F82241641EB2676FEE5A8AF8A1560EE(class AKSTeamState* LeadingTeam);
	void OnRoundPrepare();
	void OnRoundStart();
	void PawnLeavingGame(class APlayerController* PawnController);
	void ExecuteUbergraph_GameMode_Demolition_Modular(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
