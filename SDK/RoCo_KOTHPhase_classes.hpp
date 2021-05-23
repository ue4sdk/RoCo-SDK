#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KOTHPhase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KOTHPhase.KOTHPhase_C
// 0x00A9 (0x021C - 0x0173)
class UKOTHPhase_C : public UControlPhaseBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0173(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AKSTeamState*                                LeadingTeam;                                              // 0x0180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ScoreTimerHandle;                                         // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsOvertime;                                               // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	int                                                CurrentActiveContolPoint;                                 // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                CurrentPointTimer;                                        // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSTeamState*                                ScoringTeam;                                              // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PointScoringInterval;                                     // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PointActivityDuration;                                    // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              NextPointPreviewDuration;                                 // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                PreviewPointTimer;                                        // 0x01B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PreviewFirstPoint;                                        // 0x01C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PreviewNextPointWhileActive;                              // 0x01C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Score_Only_When_Captured;                                 // 0x01C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x1];                                       // 0x01C3(0x0001) MISSED OFFSET
	int                                                PointsToWin;                                              // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnActivatedNextControlPoint;                              // 0x01C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class AKSTeamState*>                        EliminatedTeams;                                          // 0x01D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class AKSTeamState*                                OvertimeLeadingTeam;                                      // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bRequirePointControlToWin;                                // 0x01F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEnteredCaptureState;                                    // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnApplyTimerForActive;                                    // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              OvertimeTime;                                             // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass KOTHPhase.KOTHPhase_C"));
		return ptr;
	}


	void ShouldEndPhase(bool* bShouldEnd);
	void On_Point_Uncaptured(class AKSControlPoint* ControlPoint);
	void On_Point_Uncontested(class AKSControlPoint* ControlPoint);
	void PreviewNextControlPoint();
	void ActivePointTimer();
	void ScoreTimerComplete();
	void SetLeadingTeam();
	void End_Phase();
	void Is_Team_Contesting_Point(class AKSTeamState* Team, class AKSControlPoint* ControlPoint, bool* bContesting);
	void GetActiveControlPoint(class AKSControlPoint** ControlPoint);
	void ResetRoundScore();
	void ApplyTimerForPreview();
	void ApplyTimerForActive();
	void ActivateNextControlPoint();
	void PrepareForNextControlPoint();
	void Deactivate_Control_Point(int Index);
	void GetIndexRelativeToCurrentHelper(int Delta, int* Index);
	void Activate_Control_Point(int Index, bool Unlock);
	void EnterCaptureState(class AKSControlPoint* ControlPoint);
	void OnAcquiredControlPointScore(class AKSControlPoint* ControlPoint);
	void HandlePhaseStarted();
	void On_Team_Eliminated(class AKSTeamState* TeamState);
	void PhaseTimerExpired(const struct FName& PhaseName);
	void Event_Ticket_End();
	void ExecuteUbergraph_KOTHPhase(int EntryPoint);
	void OnApplyTimerForActive__DelegateSignature(const struct FTimerHandle& CurrentPointTimer);
	void OnEnteredCaptureState__DelegateSignature(float Time_Until_Point_Moves);
	void OnActivatedNextControlPoint__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
