#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KOTHKSHUDAnnouncementComoponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C
// 0x0078 (0x0160 - 0x00E8)
class UKOTHKSHUDAnnouncementComoponent_C : public UKSHUDAnnouncementComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               LastPlayerAliveMsgShown;                                  // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<float>                                      ObjCountdownMilestones;                                   // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              Last_Triggered_Unlock_Announcement;                       // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastSimulatedPointTime;                                   // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<int, struct FObjectiveState>                  CachedObjectiveStates;                                    // 0x0110(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KOTHKSHUDAnnouncementComoponent.KOTHKSHUDAnnouncementComoponent_C");
		return ptr;
	}


	void GetTicketCountsToMessage(class AKSTeamState* ForTeam, TMap<int, struct FText>* NewParam);
	void OnTeamRevivesChanged(class AKSTeamState* Team);
	void OnTeamAdded(class AKSTeamState* AddedTeam);
	void BindTeamEvents();
	void GetTeamsFlippedMessage(struct FText* OutMessage);
	void Try_To_Trigger_Current_Rounds_State();
	void Update_Unlock_Announcements();
	void ObjectiveTaken(class AKSControlPoint* ControlPoint);
	void ObjectiveStartCapture(class AKSControlPoint* ControlPoint);
	void ObjectiveUnlocked();
	void OnObjectiveUpdate(class AKSObjectiveBase* Objective);
	void Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results);
	void Round_Setup(const struct FRoundInitState& Round_Init_State);
	void Round_Start(const struct FRoundInitState& Round_Init_State);
	void TeamSidesFlipped();
	void OnPhaseChanged(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void End_Match(int Winning_Team_Number);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_KOTHKSHUDAnnouncementComoponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
