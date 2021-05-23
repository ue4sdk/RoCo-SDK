#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WorldMessages_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WorldMessages.WorldMessages_C
// 0x0058 (0x0290 - 0x0238)
class UWorldMessages_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                Container;                                                // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<EMercCosmeticSlot>                          ValidRadialMenuItemsToShow;                               // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               Show_Instant_Kill_Downs;                                  // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	TArray<class UCombatLogElement_C*>                 MessagePool;                                              // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<struct FScreenLogData>                      QueuedScreenMessages;                                     // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UCombatLogElement_C*>                 ActiveMessages;                                           // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WorldMessages.WorldMessages_C"));
		return ptr;
	}


	void PlayCombatLogSFX(const struct FScreenLogData& ScreenLogData);
	void CreateFrontQueuedMessage();
	void GetPooledMessage(class UCombatLogElement_C** Message);
	void ReturnPooledMessage(class UCombatLogElement_C* Message);
	void SFXKillFeed_Down(class APlayerState* Victim, class APlayerState* Instigator);
	void SFXKillFeed_Elim(class APlayerState* Victim, class APlayerState* Instigator);
	void Construct();
	void DeathMessage(const struct FCombatEventInfo& EventInfo);
	void DownMessage(const struct FCombatEventInfo& EventInfo, int ExpBonus);
	void ResetMessages(const struct FRoundInitState& RoundInitState);
	void OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult);
	void OnKillCamEnabled(bool bEnabled);
	void OnKillCamViewedPawn(class APawn* Pawn);
	void HandleQueuedMessage();
	void RadialMenuItemMessage(const struct FRadialMenuItemEventInfo& EventInfo);
	void ExecuteUbergraph_WorldMessages(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
