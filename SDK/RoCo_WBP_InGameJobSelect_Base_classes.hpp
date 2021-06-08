#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C
// 0x0056 (0x0556 - 0x0500)
class UWBP_InGameJobSelect_Base_C : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnResetJobEntries;                                        // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnJobSelected;                                            // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLockInJob;                                              // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnViewJobLoadout;                                         // 0x0530(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCancelJobSelection;                                     // 0x0540(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                GRID_WIDTH;                                               // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasLockedIn;                                              // 0x0554(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasBoundJobChange;                                        // 0x0555(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C");
		return ptr;
	}


	void OnTeamMemberAdded(class UKSPersistentPlayerData* NewMember);
	void OnSelectionActivityStatusChange(class UKSJobSelectionComponent* JobSelectionComponent);
	void TryBindJobEntryChange();
	void On_Job_Entry_Change(const struct FJobSelectionEntry& Entry);
	void UpdateJobLockInButton();
	void HandleTeamAdded(class AKSTeamState* Team);
	void ClearPrompt();
	void HandleScrollWidgetIntoView(class UKSWidget* Widget);
	void SetGamepadPrompts();
	void SetAttackDefendMessage();
	void HandlePhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void RestoreVisualState();
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void SetHoverMessage(class UJobSelectionEntryDetails* JobEntry);
	void CanSelect(class UJobSelectionEntryDetails* JobSelectionEntry, bool* CanSelect);
	void OnPlayerSelectionStateChanged(EPlayerSelectionState SelectionState);
	void OnTimerTick(float NewTruncatedSeconds);
	void OnJobEntrySelected(class UJobSelectionEntryDetails* JobEntry);
	void Update_Job_Entry(class UJobSelectionEntryDetails* UpdatedJobEntry, bool EnemyTeam);
	void ClearSelectedRogue();
	void SetJobEntries(TArray<class UJobSelectionEntryDetails*>* JobEntries);
	void OnCancelJobSelection__DelegateSignature(class UJobSelectionEntryDetails* JobEntry);
	void OnViewJobLoadout__DelegateSignature();
	void OnLockInJob__DelegateSignature(bool IsBan);
	void OnJobSelected__DelegateSignature(class UJobSelectionEntryDetails* JobEntry);
	void OnResetJobEntries__DelegateSignature(TArray<class UWBP_InGameJobSelect_JobEntry_C*>* JobEntryButtons);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
