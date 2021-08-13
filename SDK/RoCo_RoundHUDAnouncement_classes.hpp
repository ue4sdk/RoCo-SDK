#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RoundHUDAnouncement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RoundHUDAnouncement.RoundHUDAnouncement_C
// 0x0008 (0x00F0 - 0x00E8)
class URoundHUDAnouncement_C : public UKSHUDAnnouncementComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RoundHUDAnouncement.RoundHUDAnouncement_C");
		return ptr;
	}


	void TryTriggerRoundEvents();
	void BindRoundEvents();
	void GetTeamsFlippedMessage(struct FText* Message);
	void Round_Over(class AKSGameState* Game_State, const struct FRoundResult& Round_Results);
	void TeamSidesFlipped();
	void End_Match(int Winning_Team_Number);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RoundHUDAnouncement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
