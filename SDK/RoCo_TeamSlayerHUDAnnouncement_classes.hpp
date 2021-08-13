#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TeamSlayerHUDAnnouncement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C
// 0x0020 (0x0110 - 0x00F0)
class UTeamSlayerHUDAnnouncement_C : public URoundHUDAnouncement_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               WarningReached;                                           // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              TimeLimitWarning;                                         // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<int>                                        IntraScoreMilestones;                                     // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TeamSlayerHUDAnnouncement.TeamSlayerHUDAnnouncement_C");
		return ptr;
	}


	void HandleIntraScoreChanged(class AKSTeamState* Team);
	void UpdateTimeLimitMilestones();
	void Versus_Countdown_Update();
	void IsLastAlive(class AKSPlayerState* KSPlayerState, bool* IsLastAlive);
	void HandleTeamMemberEliminated(class AKSPlayerState* KSPlayerState);
	void Check_if_Player_Is_Next_to_Respawn(class AKSTeamState* KSTeamState);
	void HandleTeamStateReady(class AKSTeamState* TeamState);
	void HandleMatchPhaseChanged(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void ReceiveBeginPlay();
	void IncomingRespawnQueueChanged(class AKSTeamState* Team);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TeamSlayerHUDAnnouncement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
