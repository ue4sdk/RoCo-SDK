#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameMode_ShootingRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameMode_ShootingRange.GameMode_ShootingRange_C
// 0x0050 (0x0FA8 - 0x0F58)
class AGameMode_ShootingRange_C : public AKSGameMode_Modular
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F58(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSDropRuleComponent*                        KSDropRule;                                               // 0x0F60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSLimitDeployablesRuleComponent*            KSLimitDeployablesRule;                                   // 0x0F68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSChargeRuleComponent*                      KSChargeRule;                                             // 0x0F70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UGiveEquipmentBehavior_C*                    GiveInfiniteAmmoRule;                                     // 0x0F78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSPhaseRuleComponent*                       KSPhaseRule;                                              // 0x0F80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UJobSelectionPhaseRule_C*                    JobSelectionPhaseRule;                                    // 0x0F88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UJobSelectionComponent_C*                    JobSelectionComponent;                                    // 0x0F90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSShopRuleComponent*                        KSShopRule;                                               // 0x0F98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0FA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GameMode_ShootingRange.GameMode_ShootingRange_C");
		return ptr;
	}


	void OnFailedToStart_84B9A9B447A025BD3B77C9A650E81305(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_84B9A9B447A025BD3B77C9A650E81305(class AKSTeamState* LeadingTeam);
	void OnFailedToStart_1E133B5145221FF92A741B9FED6D1880(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_1E133B5145221FF92A741B9FED6D1880(class AKSTeamState* LeadingTeam);
	void OnRoundPrepare();
	void OnRoundStart();
	void ExecuteUbergraph_GameMode_ShootingRange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
