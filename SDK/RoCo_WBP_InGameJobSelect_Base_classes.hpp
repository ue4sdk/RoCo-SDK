#pragma once

// Rogue Company (0.6X) SDK

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
// 0x0068 (0x0590 - 0x0528)
class UWBP_InGameJobSelect_Base_C : public UKSJobSelectorWidget
{
public:
	struct FScriptMulticastDelegate                    OnResetJobEntries;                                        // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0528(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnJobSelected;                                            // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0538(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnLockInJob;                                              // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0548(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnViewJobLoadout;                                         // 0x0558(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0558(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnCancelJobSelection;                                     // 0x0568(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0568(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                GRID_WIDTH;                                               // 0x0578(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasLockedIn;                                              // 0x057C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasBoundJobChange;                                        // 0x057D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x2];                                       // 0x057E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChoiceGridRebuilt;                                      // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x057E(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Base.WBP_InGameJobSelect_Base_C");
		return ptr;
	}


	void Get_Job_Grid_Width(int* GRID_WIDTH);
	void Get_Job_Entry_Buttons(TArray<class UWidget*>* Buttons);
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
	void HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
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
	void OnChoiceGridRebuilt__DelegateSignature();
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
