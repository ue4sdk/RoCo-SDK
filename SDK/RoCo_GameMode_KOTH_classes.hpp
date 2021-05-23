#pragma once

// Rogue Company (0.59) SDK

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
// 0x0038 (0x0F20 - 0x0EE8)
class AGameMode_KOTH_C : public AKSGameMode_Modular
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EE8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKOTHPhase_C*                                KOTHPhase;                                                // 0x0EF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UForceChimeraOpenPhase_C*                    ForceChimeraOpenPhase;                                    // 0x0EF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UJobSelectionPhaseRule_QuickTest_C*          JobSelectionPhaseRule;                                    // 0x0F00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSPunishmentRuleComponent*                  KSPunishmentRule;                                         // 0x0F08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSShopRuleComponent*                        KSShopRule;                                               // 0x0F10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0F18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GameMode_KOTH.GameMode_KOTH_C"));
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
