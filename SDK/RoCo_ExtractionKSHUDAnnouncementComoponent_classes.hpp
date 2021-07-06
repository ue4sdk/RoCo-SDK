#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExtractionKSHUDAnnouncementComoponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C
// 0x0000 (0x0100 - 0x0100)
class UExtractionKSHUDAnnouncementComoponent_C : public UKSHUDRoundAnnouncementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExtractionKSHUDAnnouncementComoponent.ExtractionKSHUDAnnouncementComoponent_C");
		return ptr;
	}


	void OnObjectiveArming(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnObjectiveArmed(const TScriptInterface<class UKSObjective>& GameObjective);
	void OnRoundStart(const struct FRoundInitState& RoundInitState);
	void OnTeamSidesFlipped();
	void OnWinnerSet(int WinningTeamNumber);
	void OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult);
	void GetTeamsFlippedMessage(struct FText* OutMessage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
