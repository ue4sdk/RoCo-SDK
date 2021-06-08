#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameMode_KOTH_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameMode_KOTH.GameMode_KOTH_C
// 0x0040 (0x0F78 - 0x0F38)
class AGameMode_KOTH_C : public AKSGameMode_Modular
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F38(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSDropRuleComponent*                        KSDropRule;                                               // 0x0F40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKOTHPhase_C*                                KOTHPhase;                                                // 0x0F48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UForceChimeraOpenPhase_C*                    ForceChimeraOpenPhase;                                    // 0x0F50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UJobSelectionPhaseRule_QuickTest_C*          JobSelectionPhaseRule;                                    // 0x0F58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSPunishmentRuleComponent*                  KSPunishmentRule;                                         // 0x0F60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSShopRuleComponent*                        KSShopRule;                                               // 0x0F68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0F70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GameMode_KOTH.GameMode_KOTH_C");
		return ptr;
	}


	void OnFailedToStart_99A285D54E7ADDDCEB3CF6AB062823C8(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_99A285D54E7ADDDCEB3CF6AB062823C8(class AKSTeamState* LeadingTeam);
	void OnFailedToStart_6E14E65E47C7CD2AF678589E13F56177(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_6E14E65E47C7CD2AF678589E13F56177(class AKSTeamState* LeadingTeam);
	void OnFailedToStart_F6AE3C4949E72A5832F7A59F4ABF9336(class AKSTeamState* LeadingTeam);
	void OnPhaseCompleted_F6AE3C4949E72A5832F7A59F4ABF9336(class AKSTeamState* LeadingTeam);
	void OnRoundPrepare();
	void OnRoundStart();
	void ExecuteUbergraph_GameMode_KOTH(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
