#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NeutralBombKSHUDAnnouncementComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C
// 0x0088 (0x0170 - 0x00E8)
class UNeutralBombKSHUDAnnouncementComponent_C : public UKSHUDAnnouncementComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               LastPlayerAliveMsgShown;                                  // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<float>                                      ObjCountdownMilestones;                                   // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              Last_Triggered_Unlock_Announcement;                       // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LastStandMsgShown;                                        // 0x010C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	TArray<int>                                        TicketValTriggers;                                        // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               EnemyLastStandShown;                                      // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                AttackingTeamNum;                                         // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       RoundStartDefenseMsg;                                     // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FText                                       RoundStartAttackerMsg;                                    // 0x0140(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FText                                       ObjectiveSpawnMsg;                                        // 0x0158(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NeutralBombKSHUDAnnouncementComponent.NeutralBombKSHUDAnnouncementComponent_C");
		return ptr;
	}


	void OnObjectiveReset(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveDisarmed(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveHeld(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveDropped(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveArmed(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectivePickedup(const TScriptInterface<class UKSObjective>& Objective);
	void CheckForDemoPlant(bool* DemolitionPlanted);
	void SendTicketWarning(int TicketCount, int TeamNum);
	void SendLastStand(int TeamNum);
	void GetTeamsFlippedMessage(struct FText* OutMessage);
	void Try_To_Trigger_Current_Rounds_State();
	void Versus_Countdown_Update(class AKSPlayerState* Player);
	void Update_Round_Announcements();
	void Attacking_Team_Eliminated();
	void OnBombStateChanged(const struct FKSNeutralBombState& Bomb_State);
	void OnBombPlanted();
	void OnBombReset();
	void OnBombSpawned();
	void OnBombDropped();
	void OnBombPickedUp(class AKSPlayerState* BombHolderState, int BombHolderTeamNum);
	void OnBombDisarmed(int TeamNum);
	void OnBombArming();
	void OnBombDisarming();
	void Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results);
	void Round_Setup(const struct FRoundInitState& Round_Init_State);
	void Round_Start(const struct FRoundInitState& Round_Init_State);
	void TeamSidesFlipped();
	void On_Phase_Change();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void End_Match(int Winning_Team_Number);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnTicketCountChanged(class AKSTeamState* Team);
	void OnObjectiveSpawned(const TScriptInterface<class UKSObjective>& GameObjective);
	void ExecuteUbergraph_NeutralBombKSHUDAnnouncementComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
