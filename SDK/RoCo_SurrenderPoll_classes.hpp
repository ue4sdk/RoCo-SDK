#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SurrenderPoll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SurrenderPoll.SurrenderPoll_C
// 0x000C (0x00EC - 0x00E0)
class USurrenderPoll_C : public UKSPollBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                WinningTeamNum;                                           // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SurrenderPoll.SurrenderPoll_C");
		return ptr;
	}


	bool CanPlayerProposeThisPoll(class AKSPlayerState* Player);
	void OnPollPassed(class AKSGameState* GameState, int TeamNum);
	void OnPollFailed(class AKSGameState* GameState, int TeamNum);
	void OnPollStarted(class AKSGameState* GameState, int TeamNum);
	void ExecuteUbergraph_SurrenderPoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
